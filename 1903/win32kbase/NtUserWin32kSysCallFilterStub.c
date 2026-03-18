/*
 * XREFs of NtUserWin32kSysCallFilterStub @ 0x1C011EB90
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C00983C4 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     _TlgCreateSz @ 0x1C0112260 (_TlgCreateSz.c)
 *     ?GetProcessAppContainerSid@@YAPEAGXZ @ 0x1C0113060 (-GetProcessAppContainerSid@@YAPEAGXZ.c)
 *     ?GetProcessCommandLine@@YAPEAGXZ @ 0x1C0113188 (-GetProcessCommandLine@@YAPEAGXZ.c)
 *     ?_ShouldCaptureWerReport@@YAHK@Z @ 0x1C0113564 (-_ShouldCaptureWerReport@@YAHK@Z.c)
 *     EtwSyscallFilterMessage @ 0x1C0131FF0 (EtwSyscallFilterMessage.c)
 *     ExtractAggregateFieldTypes @ 0x1C01CA584 (ExtractAggregateFieldTypes.c)
 *     InsertEventEntryInLookUpTable @ 0x1C01CA738 (InsertEventEntryInLookUpTable.c)
 */

void __fastcall NtUserWin32kSysCallFilterStub(LPCSTR psz, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int16 *ProcessAppContainerSid; // rsi
  unsigned __int16 *ProcessCommandLine; // rdi
  __int64 Win32KFilterSet; // r15
  const WCHAR *v9; // r12
  const WCHAR *v10; // rax
  const char *v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 CurrentProcess; // rax
  const char *ProcessImageFileName; // rax
  int v16; // r10d
  char v17; // al
  int v18; // ecx
  int v19; // r8d
  int v20; // [rsp+30h] [rbp-D0h] BYREF
  LPCWSTR pwsz; // [rsp+38h] [rbp-C8h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v24[20]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+100h] [rbp+0h] BYREF
  void *v26; // [rsp+110h] [rbp+10h]
  int v27; // [rsp+118h] [rbp+18h]
  int v28; // [rsp+11Ch] [rbp+1Ch]
  __int64 *v29; // [rsp+120h] [rbp+20h]
  int v30; // [rsp+128h] [rbp+28h]
  int v31; // [rsp+12Ch] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+150h] [rbp+50h] BYREF
  int *v35; // [rsp+160h] [rbp+60h]
  int v36; // [rsp+168h] [rbp+68h]
  int v37; // [rsp+16Ch] [rbp+6Ch]

  memset(v24, 0, 0x98uLL);
  ProcessAppContainerSid = GetProcessAppContainerSid(v5, v4);
  ProcessCommandLine = GetProcessCommandLine();
  Win32KFilterSet = (unsigned int)PsGetWin32KFilterSet();
  v9 = &::pwsz;
  v10 = &::pwsz;
  v11 = (const char *)&unk_1C01EBCD8;
  if ( ProcessAppContainerSid )
    v10 = ProcessAppContainerSid;
  pwsz = v10;
  if ( ProcessCommandLine )
    v9 = ProcessCommandLine;
  if ( psz )
    v11 = psz;
  EtwSyscallFilterMessage(v11, v10, v9, Win32KFilterSet);
  CurrentProcess = PsGetCurrentProcess(v13, v12);
  ProcessImageFileName = (const char *)PsGetProcessImageFileName(CurrentProcess);
  DbgPrintEx(0x70u, 4u, "NtUserWin32kSysCallFilterStub: SyscallName='%s', Process='%s'\n", v11, ProcessImageFileName);
  if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() )
  {
    if ( !HIDWORD(qword_1C0214688[2 * (unsigned int)Win32KFilterSet]) && (unsigned int)_ShouldCaptureWerReport(a2) )
    {
      LODWORD(v24[0]) = -1073740791;
      LODWORD(v24[3]) = 3;
      v24[2] = a2;
      v24[4] = 41LL;
      v24[5] = a2;
      v24[6] = Win32KFilterSet;
      WerSubmitUserCrashReport(-2LL, v24, 0LL, 30LL, 3);
    }
    if ( dword_1C020F500 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020F500, 0x800000000000uLL) )
      {
        v31 = 0;
        v29 = &v23;
        v23 = 1LL;
        v30 = 8;
        TlgCreateSz(&pDesc, v11);
        TlgCreateWsz(&v33, pwsz);
        TlgCreateWsz(&v34, v9);
        v37 = 0;
        v35 = &v20;
        v20 = Win32KFilterSet;
        v36 = 4;
        *(_DWORD *)&EventDescriptor.Level = 5;
        EventDescriptor.Keyword = 0x800000000000LL;
        UserData.Ptr = (ULONGLONG)off_1C020F508;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        UserData.Size = *(unsigned __int16 *)off_1C020F508;
        v26 = &unk_1C01E3D62;
        UserData.Reserved = 2;
        v27 = 108;
        v28 = v16;
        LODWORD(pwsz) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        if ( (ETWENABLECALLBACK *)qword_1C020F528 == TlgAggregateInternalRegisteredProviderEtwCallback )
        {
          v17 = ExtractAggregateFieldTypes(&TraceLoggingMetadata, &UserData);
          if ( v17 )
            InsertEventEntryInLookUpTable(v18, (unsigned int)&EventDescriptor, v19, (unsigned int)&UserData, v17);
          else
            EtwWriteTransfer(qword_1C020F520, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
        }
      }
    }
  }
  if ( ProcessAppContainerSid )
    Win32FreePool((__int64)ProcessAppContainerSid);
  if ( ProcessCommandLine )
    Win32FreePool((__int64)ProcessCommandLine);
}

/*
 * XREFs of NtUserWin32kSysCallFilterStub @ 0x1C0085EF0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     EtwSyscallFilterMessage @ 0x1C0086060 (EtwSyscallFilterMessage.c)
 *     ?GetProcessAppContainerSid@@YAPEAGXZ @ 0x1C00861A4 (-GetProcessAppContainerSid@@YAPEAGXZ.c)
 *     ?GetProcessCommandLine@@YAPEAGXZ @ 0x1C00862C0 (-GetProcessCommandLine@@YAPEAGXZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     _TlgCreateSz @ 0x1C00EB690 (_TlgCreateSz.c)
 *     ?_ShouldCaptureWerReport@@YAHK@Z @ 0x1C00ECA4C (-_ShouldCaptureWerReport@@YAHK@Z.c)
 *     ExtractAggregateFieldTypes @ 0x1C0185A4C (ExtractAggregateFieldTypes.c)
 *     InsertEventEntryInLookUpTable @ 0x1C0185C00 (InsertEventEntryInLookUpTable.c)
 */

void __fastcall NtUserWin32kSysCallFilterStub(LPCSTR psz, unsigned int a2)
{
  __int64 v2; // r14
  unsigned __int16 *ProcessAppContainerSid; // rsi
  unsigned __int16 *ProcessCommandLine; // rdi
  __int64 Win32KFilterSet; // r15
  const WCHAR *v7; // r12
  const WCHAR *v8; // rax
  const char *v9; // r13
  __int64 v10; // rcx
  __int64 CurrentProcess; // rax
  const char *ProcessImageFileName; // rax
  int v13; // r10d
  char v14; // al
  int v15; // ecx
  int v16; // r8d
  LPCWSTR pwsz; // [rsp+30h] [rbp-D0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v20[20]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  void *v22; // [rsp+100h] [rbp+0h]
  int v23; // [rsp+108h] [rbp+8h]
  int v24; // [rsp+10Ch] [rbp+Ch]
  __int64 *v25; // [rsp+110h] [rbp+10h]
  int v26; // [rsp+118h] [rbp+18h]
  int v27; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+140h] [rbp+40h] BYREF
  LPCWSTR *p_pwsz; // [rsp+150h] [rbp+50h]
  int v32; // [rsp+158h] [rbp+58h]
  int v33; // [rsp+15Ch] [rbp+5Ch]

  v2 = a2;
  ProcessAppContainerSid = GetProcessAppContainerSid();
  ProcessCommandLine = GetProcessCommandLine();
  Win32KFilterSet = (unsigned int)PsGetWin32KFilterSet();
  v7 = &word_1C01944BC;
  v8 = &word_1C01944BC;
  v9 = (const char *)&unk_1C01A3F2C;
  if ( ProcessAppContainerSid )
    v8 = ProcessAppContainerSid;
  pwsz = v8;
  if ( ProcessCommandLine )
    v7 = ProcessCommandLine;
  if ( psz )
    v9 = psz;
  EtwSyscallFilterMessage(v9, v8, v7, Win32KFilterSet);
  CurrentProcess = PsGetCurrentProcess(v10);
  ProcessImageFileName = (const char *)PsGetProcessImageFileName(CurrentProcess);
  DbgPrintEx(0x70u, 4u, "NtUserWin32kSysCallFilterStub: SyscallName='%s', Process='%s'\n", v9, ProcessImageFileName);
  if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() )
  {
    if ( !HIDWORD(qword_1C01CCA58[2 * Win32KFilterSet]) && (unsigned int)_ShouldCaptureWerReport(v2) )
    {
      memset(v20, 0, 0x98uLL);
      LODWORD(v20[0]) = -1073740791;
      LODWORD(v20[3]) = 3;
      v20[2] = v2;
      v20[4] = 41LL;
      v20[5] = v2;
      v20[6] = Win32KFilterSet;
      WerSubmitUserCrashReport(-2LL, v20, 0LL, 30LL, 3);
    }
    if ( dword_1C01C75D8 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C75D8, 0x800000000000uLL) )
      {
        v27 = 0;
        v25 = &v19;
        v19 = 1LL;
        v26 = 8;
        TlgCreateSz(&pDesc, v9);
        TlgCreateWsz(&v29, pwsz);
        TlgCreateWsz(&v30, v7);
        v33 = 0;
        p_pwsz = &pwsz;
        LODWORD(pwsz) = Win32KFilterSet;
        v32 = 4;
        *(_DWORD *)&EventDescriptor.Level = 5;
        EventDescriptor.Keyword = 0x800000000000LL;
        UserData.Ptr = (ULONGLONG)off_1C01C75E0;
        *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1C019DCEC - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        UserData.Size = *(unsigned __int16 *)off_1C01C75E0;
        v22 = &unk_1C019DCF7;
        UserData.Reserved = 2;
        v23 = 108;
        v24 = v13;
        if ( (ETWENABLECALLBACK *)qword_1C01C7600 == TlgAggregateInternalRegisteredProviderEtwCallback )
        {
          v14 = ExtractAggregateFieldTypes(
                  ((unsigned int)&unk_1C019DCEC - (unsigned int)&TraceLoggingMetadata) | 0xB000000,
                  &UserData);
          if ( v14 )
            InsertEventEntryInLookUpTable(v15, (unsigned int)&EventDescriptor, v16, (unsigned int)&UserData, v14);
          else
            EtwWriteTransfer(qword_1C01C75F8, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
        }
      }
    }
  }
  if ( ProcessAppContainerSid )
    Win32FreePool((__int64)ProcessAppContainerSid);
  if ( ProcessCommandLine )
    Win32FreePool((__int64)ProcessCommandLine);
}

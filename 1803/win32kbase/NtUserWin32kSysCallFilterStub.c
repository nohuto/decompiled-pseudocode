/*
 * XREFs of NtUserWin32kSysCallFilterStub @ 0x1C00BB4A0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C004E080 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?GetProcessAppContainerSid@@YAPEAGXZ @ 0x1C00B2C4C (-GetProcessAppContainerSid@@YAPEAGXZ.c)
 *     ?GetProcessCommandLine@@YAPEAGXZ @ 0x1C00B2D4C (-GetProcessCommandLine@@YAPEAGXZ.c)
 *     ?_ShouldCaptureWerReport@@YAHK@Z @ 0x1C00B2FD0 (-_ShouldCaptureWerReport@@YAHK@Z.c)
 *     _TlgCreateSz @ 0x1C00BB800 (_TlgCreateSz.c)
 *     EtwSyscallFilterMessage @ 0x1C00DA070 (EtwSyscallFilterMessage.c)
 *     ExtractAggregateFieldTypes @ 0x1C0167A54 (ExtractAggregateFieldTypes.c)
 *     InsertEventEntryInLookUpTable @ 0x1C0167C1C (InsertEventEntryInLookUpTable.c)
 */

char __fastcall NtUserWin32kSysCallFilterStub(__int64 psz, unsigned int a2)
{
  unsigned __int16 *ProcessAppContainerSid; // rsi
  unsigned __int16 *ProcessCommandLine; // rdi
  __int64 Win32KFilterSet; // r15
  const WCHAR *v7; // r12
  const WCHAR *v8; // rax
  const char *v9; // r13
  __int64 v10; // rcx
  __int64 CurrentProcess; // rax
  const char *ProcessImageFileName; // rax
  ETWENABLECALLBACK *v13; // rax
  int v14; // r10d
  char v15; // al
  int v16; // ecx
  int v17; // r8d
  LPCWSTR pwsz; // [rsp+30h] [rbp-D0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v22[20]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  void *v24; // [rsp+100h] [rbp+0h]
  int v25; // [rsp+108h] [rbp+8h]
  int v26; // [rsp+10Ch] [rbp+Ch]
  __int64 *v27; // [rsp+110h] [rbp+10h]
  int v28; // [rsp+118h] [rbp+18h]
  int v29; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+140h] [rbp+40h] BYREF
  LPCWSTR *p_pwsz; // [rsp+150h] [rbp+50h]
  int v34; // [rsp+158h] [rbp+58h]
  int v35; // [rsp+15Ch] [rbp+5Ch]

  ProcessAppContainerSid = GetProcessAppContainerSid(psz);
  ProcessCommandLine = GetProcessCommandLine();
  Win32KFilterSet = (unsigned int)PsGetWin32KFilterSet();
  v7 = &::pwsz;
  v8 = &::pwsz;
  v9 = (const char *)&unk_1C0180445;
  if ( ProcessAppContainerSid )
    v8 = ProcessAppContainerSid;
  pwsz = v8;
  if ( ProcessCommandLine )
    v7 = ProcessCommandLine;
  if ( psz )
    v9 = (const char *)psz;
  EtwSyscallFilterMessage(v9, v8, v7, Win32KFilterSet);
  CurrentProcess = PsGetCurrentProcess(v10);
  ProcessImageFileName = (const char *)PsGetProcessImageFileName(CurrentProcess);
  DbgPrintEx(0x70u, 4u, "NtUserWin32kSysCallFilterStub: SyscallName='%s', Process='%s'\n", v9, ProcessImageFileName);
  LOBYTE(v13) = PsIsWin32KFilterAuditEnabled();
  if ( (_BYTE)v13 )
  {
    LOBYTE(v13) = 2 * Win32KFilterSet;
    if ( !HIDWORD(qword_1C01A5228[2 * (unsigned int)Win32KFilterSet]) )
    {
      LODWORD(v13) = _ShouldCaptureWerReport(a2);
      if ( (_DWORD)v13 )
      {
        memset(v22, 0, 0x98uLL);
        LODWORD(v22[0]) = -1073740791;
        LODWORD(v22[3]) = 3;
        v22[2] = a2;
        v22[4] = 41LL;
        v22[5] = a2;
        v22[6] = Win32KFilterSet;
        LOBYTE(v13) = WerSubmitUserCrashReport(-2LL, v22, 0LL, 30LL, 3);
      }
    }
    if ( dword_1C019A240 > 5u )
    {
      LOBYTE(v13) = TlgKeywordOn((TraceLoggingHProvider)&dword_1C019A240, 0x800000000000uLL);
      if ( (_BYTE)v13 )
      {
        v29 = 0;
        v27 = &v21;
        v21 = 1LL;
        v28 = 8;
        TlgCreateSz(&pDesc, v9);
        TlgCreateWsz(&v31, pwsz);
        TlgCreateWsz(&v32, v7);
        v35 = 0;
        p_pwsz = &pwsz;
        LODWORD(pwsz) = Win32KFilterSet;
        v34 = 4;
        *(_DWORD *)&EventDescriptor.Level = 5;
        EventDescriptor.Keyword = 0x800000000000LL;
        UserData.Ptr = (ULONGLONG)off_1C019A248;
        *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1C01781DB - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        UserData.Size = *(unsigned __int16 *)off_1C019A248;
        v24 = &unk_1C01781E6;
        v13 = TlgAggregateInternalRegisteredProviderEtwCallback;
        UserData.Reserved = 2;
        v25 = 108;
        v26 = v14;
        if ( (ETWENABLECALLBACK *)qword_1C019A268 == TlgAggregateInternalRegisteredProviderEtwCallback )
        {
          v15 = ExtractAggregateFieldTypes(
                  ((unsigned int)&unk_1C01781DB - (unsigned int)&TraceLoggingMetadata) | 0xB000000,
                  &UserData);
          if ( v15 )
          {
            LOBYTE(v17) = 7;
            LOBYTE(v13) = InsertEventEntryInLookUpTable(
                            v16,
                            (unsigned int)&EventDescriptor,
                            v17,
                            (unsigned int)&UserData,
                            v15);
          }
          else
          {
            LOBYTE(v13) = EtwWriteTransfer(qword_1C019A260, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
          }
        }
      }
    }
  }
  if ( ProcessAppContainerSid )
    LOBYTE(v13) = Win32FreePool((__int64)ProcessAppContainerSid);
  if ( ProcessCommandLine )
    LOBYTE(v13) = Win32FreePool((__int64)ProcessCommandLine);
  return (char)v13;
}

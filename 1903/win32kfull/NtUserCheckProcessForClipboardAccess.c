/*
 * XREFs of NtUserCheckProcessForClipboardAccess @ 0x1C000A7F0
 * Callers:
 *     <none>
 * Callees:
 *     LockProcessByClientId @ 0x1C001A788 (LockProcessByClientId.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     InsertEventEntryInLookUpTable @ 0x1C00B7ED4 (InsertEventEntryInLookUpTable.c)
 *     ExtractAggregateFieldTypes @ 0x1C00B81F4 (ExtractAggregateFieldTypes.c)
 *     _TlgCreateWsz @ 0x1C00B830C (_TlgCreateWsz.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C0127258 (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserCheckProcessForClipboardAccess(int a1, _DWORD *a2)
{
  __int64 v3; // rbx
  int v4; // edi
  __int64 ProcessWin32Process; // rax
  __int64 v6; // rsi
  __int64 i; // rbx
  unsigned __int64 v9; // rcx
  unsigned int v10; // eax
  char v11; // al
  int v12; // ecx
  int v13; // r8d
  int v14; // [rsp+30h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+38h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int v17; // [rsp+50h] [rbp-98h]
  __int64 v18; // [rsp+58h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-78h] BYREF
  void *v20; // [rsp+80h] [rbp-68h]
  int v21; // [rsp+88h] [rbp-60h]
  int v22; // [rsp+8Ch] [rbp-5Ch]
  __int64 *v23; // [rsp+90h] [rbp-58h]
  __int64 v24; // [rsp+98h] [rbp-50h]
  int *v25; // [rsp+A0h] [rbp-48h]
  __int64 v26; // [rsp+A8h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-38h] BYREF

  v3 = a1;
  v4 = 0;
  v14 = 0;
  EnterSharedCrit(0LL, 1LL);
  if ( (int)LockProcessByClientId(v3, &Object) >= 0
    && (ProcessWin32Process = PsGetProcessWin32Process(Object), (v6 = ProcessWin32Process) != 0) )
  {
    for ( i = *(_QWORD *)(ProcessWin32Process + 320); i; i = *(_QWORD *)(i + 656) )
    {
      v14 = InForegroundQueue((const struct tagTHREADINFO *)i, 1);
      if ( v14 )
        break;
    }
    if ( !v14 && !*(_DWORD *)(PsGetCurrentProcessWin32Process() + 876) )
    {
      v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v10 = *(_DWORD *)(v6 + 1076);
      if ( v10 <= (unsigned int)v9 )
        v14 = (unsigned int)v9 - v10 <= 0xFA;
      if ( dword_1C0321230 > 5u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0321230, 0x400000000000uLL) )
        {
          v18 = 1LL;
          v23 = &v18;
          v24 = 8LL;
          v25 = &v14;
          v26 = 4LL;
          TlgCreateWsz(&pDesc, (LPCWSTR)(v6 + 984));
          *(_DWORD *)&EventDescriptor.Id = 184549376;
          *(_DWORD *)&EventDescriptor.Level = 5;
          EventDescriptor.Keyword = 0x400000000000LL;
          UserData.Ptr = (ULONGLONG)off_1C0321238;
          UserData.Size = *(unsigned __int16 *)off_1C0321238;
          UserData.Reserved = 2;
          v20 = &unk_1C02E85FE;
          v21 = 66;
          v22 = 1;
          v17 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
          if ( (ETWENABLECALLBACK *)qword_1C0321258 == TlgAggregateInternalRegisteredProviderEtwCallback )
          {
            v11 = ExtractAggregateFieldTypes(&TraceLoggingMetadata, &UserData);
            if ( v11 )
            {
              LOBYTE(v13) = 5;
              InsertEventEntryInLookUpTable(v12, (unsigned int)&EventDescriptor, v13, (unsigned int)&UserData, v11);
            }
            else
            {
              EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
            }
          }
        }
      }
    }
    v4 = 1;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_DWORD *)MmUserProbeAddress;
    *a2 = v14;
    ObfDereferenceObject(Object);
  }
  else
  {
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}

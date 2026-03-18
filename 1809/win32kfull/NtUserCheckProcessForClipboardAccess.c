/*
 * XREFs of NtUserCheckProcessForClipboardAccess @ 0x1C0212200
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     LockProcessByClientId @ 0x1C00B2D44 (LockProcessByClientId.c)
 *     InForegroundQueue @ 0x1C00D7FE0 (InForegroundQueue.c)
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     InsertEventEntryInLookUpTable @ 0x1C00DA21C (InsertEventEntryInLookUpTable.c)
 *     ExtractAggregateFieldTypes @ 0x1C00DA534 (ExtractAggregateFieldTypes.c)
 *     _TlgCreateWsz @ 0x1C00DA854 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserCheckProcessForClipboardAccess(int a1, _DWORD *a2)
{
  void *v3; // rbx
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 ProcessWin32Process; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 i; // rbx
  unsigned __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned __int8 AggregateFieldTypes; // al
  __int64 v19; // rcx
  BOOL v21; // [rsp+30h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+38h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-98h] BYREF
  __int64 v24; // [rsp+50h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-78h] BYREF
  void *v26; // [rsp+70h] [rbp-68h]
  int v27; // [rsp+78h] [rbp-60h]
  int v28; // [rsp+7Ch] [rbp-5Ch]
  __int64 *v29; // [rsp+80h] [rbp-58h]
  __int64 v30; // [rsp+88h] [rbp-50h]
  BOOL *v31; // [rsp+90h] [rbp-48h]
  __int64 v32; // [rsp+98h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-38h] BYREF

  v3 = (void *)a1;
  v4 = 0;
  v21 = 0;
  EnterSharedCrit(0LL, 1LL);
  if ( (int)LockProcessByClientId(v3, (PEPROCESS *)&Object) >= 0
    && (ProcessWin32Process = PsGetProcessWin32Process(Object), (v14 = ProcessWin32Process) != 0) )
  {
    for ( i = *(_QWORD *)(ProcessWin32Process + 328); i; i = *(_QWORD *)(i + 664) )
    {
      v21 = InForegroundQueue((__int64 **)i, 1);
      if ( v21 )
        break;
    }
    if ( !v21 && !*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 884) )
    {
      v16 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v17 = *(_DWORD *)(v14 + 1084);
      if ( v17 <= (unsigned int)v16 )
        v21 = (unsigned int)v16 - v17 <= 0xFA;
      if ( dword_1C030C240 > 5u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C030C240, 0x400000000000uLL) )
        {
          v24 = 1LL;
          v29 = &v24;
          v30 = 8LL;
          v31 = &v21;
          v32 = 4LL;
          TlgCreateWsz(&pDesc, (LPCWSTR)(v14 + 992));
          *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1C02D59AB - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
          *(_DWORD *)&EventDescriptor.Level = 5;
          EventDescriptor.Keyword = 0x400000000000LL;
          UserData.Ptr = (ULONGLONG)off_1C030C248;
          UserData.Size = *(unsigned __int16 *)off_1C030C248;
          UserData.Reserved = 2;
          v26 = &unk_1C02D59B6;
          v27 = 66;
          v28 = 1;
          if ( (ETWENABLECALLBACK *)qword_1C030C268 == TlgAggregateInternalRegisteredProviderEtwCallback )
          {
            AggregateFieldTypes = ExtractAggregateFieldTypes(
                                    ((unsigned int)&unk_1C02D59AB - (unsigned int)&TraceLoggingMetadata) | 0xB000000,
                                    (__int64)&UserData);
            if ( AggregateFieldTypes )
              InsertEventEntryInLookUpTable(v19, &EventDescriptor, 5u, (__int64)&UserData, AggregateFieldTypes);
            else
              EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
          }
        }
      }
    }
    v4 = 1;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_DWORD *)MmUserProbeAddress;
    *a2 = v21;
    ObfDereferenceObject(Object);
  }
  else
  {
    UserSetLastError(87LL, v5, v6, v7);
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v4;
}

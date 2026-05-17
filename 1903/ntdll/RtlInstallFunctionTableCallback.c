/*
 * XREFs of RtlInstallFunctionTableCallback @ 0x1800650D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180016F74 @ 0x180016F74 (sub_180016F74.c)
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlProtectHeap @ 0x180048240 (RtlProtectHeap.c)
 *     RtlAvlInsertNodeEx @ 0x180065E70 (RtlAvlInsertNodeEx.c)
 *     sub_18007C0A8 @ 0x18007C0A8 (sub_18007C0A8.c)
 *     ZwQuerySystemTime @ 0x18009D220 (ZwQuerySystemTime.c)
 */

BOOLEAN __cdecl RtlInstallFunctionTableCallback(
        ULONG64 TableIdentifier,
        ULONG64 BaseAddress,
        ULONG Length,
        PGET_RUNTIME_FUNCTION_CALLBACK Callback,
        PVOID Context,
        PCWSTR OutOfProcessCallbackDll)
{
  __int64 v6; // rbp
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  int v12; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  __int64 v15; // rbx
  _QWORD *v16; // rdx
  __int64 v17; // r8
  _QWORD *v18; // rax
  __int64 *v19; // rax
  int v20; // r8d
  int v22; // ecx

  v6 = Length;
  if ( (TableIdentifier & 3) != 3 || (Length & 0x80000000) != 0 )
    return 0;
  v10 = 0LL;
  if ( OutOfProcessCallbackDll )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( OutOfProcessCallbackDll[v11] );
    v10 = 2 * v11 + 2;
  }
  if ( (int)sub_18007C0A8() < 0 )
    return 0;
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive(&qword_180165010);
    v12 = *(_DWORD *)qword_18017A288;
    if ( !*(_DWORD *)qword_18017A288 )
      RtlProtectHeap((_DWORD *)qword_18017A278, 0);
    if ( v12 == -1 )
      goto LABEL_41;
    *(_DWORD *)qword_18017A288 = v12 + 1;
    RtlReleaseSRWLockExclusive(&qword_180165010);
  }
  if ( !(unsigned int)LdrControlFlowGuardEnforced() )
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
LABEL_16:
    Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, v10 + 112);
    v15 = Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 16) = TableIdentifier;
      ZwQuerySystemTime(Heap + 24);
      *(_QWORD *)(v15 + 32) = BaseAddress;
      *(_QWORD *)(v15 + 40) = BaseAddress + v6;
      *(_QWORD *)(v15 + 64) = Context;
      *(_QWORD *)(v15 + 48) = BaseAddress;
      *(_QWORD *)(v15 + 56) = Callback;
      *(_DWORD *)(v15 + 80) = 2;
      *(_QWORD *)(v15 + 72) = 0LL;
      if ( OutOfProcessCallbackDll )
      {
        *(_QWORD *)(v15 + 72) = v15 + 112;
        sub_180016F74((_WORD *)(v15 + 112), v10, (__int64)OutOfProcessCallbackDll);
      }
      sub_180035F18(0);
      RtlAcquireSRWLockExclusive(&qword_180164350);
      v16 = (_QWORD *)qword_18017A2A8;
      LOBYTE(v17) = 0;
      if ( qword_18017A2A8 )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)(v15 + 32) < *(v16 - 7) )
          {
            v18 = (_QWORD *)*v16;
            if ( !*v16 )
            {
              LOBYTE(v17) = 0;
              break;
            }
          }
          else
          {
            v18 = (_QWORD *)v16[1];
            if ( !v18 )
            {
              LOBYTE(v17) = 1;
              break;
            }
          }
          v16 = v18;
        }
      }
      RtlAvlInsertNodeEx(&qword_18017A2A8, v16, v17, v15 + 88);
      v19 = (__int64 *)qword_18017A2B8;
      if ( *(__int64 **)qword_18017A2B8 != &qword_18017A2B0 )
        __fastfail(3u);
      *(_QWORD *)v15 = &qword_18017A2B0;
      *(_QWORD *)(v15 + 8) = v19;
      *v19 = v15;
      qword_18017A2B8 = v15;
      RtlReleaseSRWLockExclusive(&qword_180164350);
      sub_180035F18(1);
      if ( !(unsigned int)LdrControlFlowGuardEnforced() )
        return 1;
      RtlAcquireSRWLockExclusive(&qword_180165010);
      v20 = *(_DWORD *)qword_18017A288;
      if ( *(_DWORD *)qword_18017A288 )
      {
        *(_DWORD *)qword_18017A288 = v20 - 1;
        if ( v20 == 1 )
          RtlProtectHeap((_DWORD *)qword_18017A278, 1);
        RtlReleaseSRWLockExclusive(&qword_180165010);
        return 1;
      }
LABEL_41:
      RtlReleaseSRWLockExclusive(&qword_180165010);
      __fastfail(0xEu);
    }
    goto LABEL_36;
  }
  if ( v10 + 112 < 0xFF000 )
  {
    ProcessHeap = (void *)qword_18017A278;
    goto LABEL_16;
  }
LABEL_36:
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive(&qword_180165010);
    v22 = *(_DWORD *)qword_18017A288;
    if ( !*(_DWORD *)qword_18017A288 )
      goto LABEL_41;
    *(_DWORD *)qword_18017A288 = v22 - 1;
    if ( v22 == 1 )
      RtlProtectHeap((_DWORD *)qword_18017A278, 1);
    RtlReleaseSRWLockExclusive(&qword_180165010);
  }
  return 0;
}

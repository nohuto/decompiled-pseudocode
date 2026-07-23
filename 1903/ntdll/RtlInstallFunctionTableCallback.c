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
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  PVOID ProcessHeap; // rcx
  LARGE_INTEGER *Heap; // rax
  __int64 v17; // rbx
  _QWORD *v18; // rdx
  __int64 v19; // r8
  _QWORD *v20; // rax
  __int64 *v21; // rax
  int v22; // eax
  int v23; // r8d
  int v25; // eax
  int v26; // ecx

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
  LOBYTE(v12) = LdrControlFlowGuardEnforced();
  if ( v12 )
  {
    RtlAcquireSRWLockExclusive(&stru_180165010);
    v13 = *(_DWORD *)qword_18017A288;
    if ( !*(_DWORD *)qword_18017A288 )
      RtlProtectHeap(qword_18017A278, 0);
    if ( v13 == -1 )
      goto LABEL_41;
    *(_DWORD *)qword_18017A288 = v13 + 1;
    RtlReleaseSRWLockExclusive(&stru_180165010);
  }
  LOBYTE(v14) = LdrControlFlowGuardEnforced();
  if ( !v14 )
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
LABEL_16:
    Heap = (LARGE_INTEGER *)RtlAllocateHeap(ProcessHeap, 0, v10 + 112);
    v17 = (__int64)Heap;
    if ( Heap )
    {
      Heap[2].QuadPart = TableIdentifier;
      ZwQuerySystemTime(Heap + 3);
      *(_QWORD *)(v17 + 32) = BaseAddress;
      *(_QWORD *)(v17 + 40) = BaseAddress + v6;
      *(_QWORD *)(v17 + 64) = Context;
      *(_QWORD *)(v17 + 48) = BaseAddress;
      *(_QWORD *)(v17 + 56) = Callback;
      *(_DWORD *)(v17 + 80) = 2;
      *(_QWORD *)(v17 + 72) = 0LL;
      if ( OutOfProcessCallbackDll )
      {
        *(_QWORD *)(v17 + 72) = v17 + 112;
        sub_180016F74((_WORD *)(v17 + 112), v10, (__int64)OutOfProcessCallbackDll);
      }
      sub_180035F18(0);
      RtlAcquireSRWLockExclusive(&stru_180164350);
      v18 = (_QWORD *)qword_18017A2A8;
      LOBYTE(v19) = 0;
      if ( qword_18017A2A8 )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)(v17 + 32) < *(v18 - 7) )
          {
            v20 = (_QWORD *)*v18;
            if ( !*v18 )
            {
              LOBYTE(v19) = 0;
              break;
            }
          }
          else
          {
            v20 = (_QWORD *)v18[1];
            if ( !v20 )
            {
              LOBYTE(v19) = 1;
              break;
            }
          }
          v18 = v20;
        }
      }
      RtlAvlInsertNodeEx(&qword_18017A2A8, v18, v19, v17 + 88);
      v21 = (__int64 *)qword_18017A2B8;
      if ( *(__int64 **)qword_18017A2B8 != &qword_18017A2B0 )
        __fastfail(3u);
      *(_QWORD *)v17 = &qword_18017A2B0;
      *(_QWORD *)(v17 + 8) = v21;
      *v21 = v17;
      qword_18017A2B8 = v17;
      RtlReleaseSRWLockExclusive(&stru_180164350);
      sub_180035F18(1);
      LOBYTE(v22) = LdrControlFlowGuardEnforced();
      if ( !v22 )
        return 1;
      RtlAcquireSRWLockExclusive(&stru_180165010);
      v23 = *(_DWORD *)qword_18017A288;
      if ( *(_DWORD *)qword_18017A288 )
      {
        *(_DWORD *)qword_18017A288 = v23 - 1;
        if ( v23 == 1 )
          RtlProtectHeap(qword_18017A278, 1u);
        RtlReleaseSRWLockExclusive(&stru_180165010);
        return 1;
      }
LABEL_41:
      RtlReleaseSRWLockExclusive(&stru_180165010);
      __fastfail(0xEu);
    }
    goto LABEL_36;
  }
  if ( v10 + 112 < 0xFF000 )
  {
    ProcessHeap = qword_18017A278;
    goto LABEL_16;
  }
LABEL_36:
  LOBYTE(v25) = LdrControlFlowGuardEnforced();
  if ( v25 )
  {
    RtlAcquireSRWLockExclusive(&stru_180165010);
    v26 = *(_DWORD *)qword_18017A288;
    if ( !*(_DWORD *)qword_18017A288 )
      goto LABEL_41;
    *(_DWORD *)qword_18017A288 = v26 - 1;
    if ( v26 == 1 )
      RtlProtectHeap(qword_18017A278, 1u);
    RtlReleaseSRWLockExclusive(&stru_180165010);
  }
  return 0;
}

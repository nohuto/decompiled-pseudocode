/*
 * XREFs of RtlAddGrowableFunctionTable @ 0x180065EC0
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlAvlInsertNodeEx @ 0x1800660C0 (RtlAvlInsertNodeEx.c)
 *     LdrEnsureMrdataHeapExists @ 0x18007C748 (LdrEnsureMrdataHeapExists.c)
 *     NtSetInformationProcess @ 0x18009D210 (NtSetInformationProcess.c)
 *     ZwQuerySystemTime @ 0x18009D9D0 (ZwQuerySystemTime.c)
 *     RtlpFreeReadOnlyHeap @ 0x180104520 (RtlpFreeReadOnlyHeap.c)
 *     RtlpProtectInvertedFunctionTable @ 0x180104560 (RtlpProtectInvertedFunctionTable.c)
 *     RtlpProtectReadOnlyHeap @ 0x18010456C (RtlpProtectReadOnlyHeap.c)
 */

__int64 __fastcall RtlAddGrowableFunctionTable(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 result; // rax
  char v10; // bl
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  __int64 v13; // rdi
  int v14; // esi
  _QWORD *v15; // rdx
  __int64 v16; // r8
  _QWORD *v17; // rax
  __int64 v18; // r8
  _QWORD *v19; // rdx
  _QWORD *v20; // rax
  __int64 *v21; // rax
  __int64 v22; // [rsp+20h] [rbp-28h] BYREF
  char v23; // [rsp+28h] [rbp-20h]

  if ( a3 > a4 || a5 >= a6 )
    __fastfail(5u);
  result = LdrEnsureMrdataHeapExists();
  v10 = 0;
  if ( (int)result < 0 )
    return result;
  RtlpProtectReadOnlyHeap(0LL);
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
    ProcessHeap = (void *)LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 136LL);
  v13 = Heap;
  if ( !Heap )
  {
    v14 = -1073741670;
    goto LABEL_11;
  }
  *(_QWORD *)(Heap + 16) = a2;
  *(_DWORD *)(Heap + 84) = a3;
  ZwQuerySystemTime(Heap + 24);
  *(_QWORD *)(v13 + 40) = a6;
  *(_QWORD *)(v13 + 32) = a5;
  *(_QWORD *)(v13 + 48) = a5;
  *(_DWORD *)(v13 + 80) = 3;
  v22 = v13;
  v23 = 0;
  v14 = NtSetInformationProcess(-1LL, 53LL, &v22, 16LL);
  if ( v14 < 0 )
  {
    RtlpFreeReadOnlyHeap(v13);
    goto LABEL_11;
  }
  RtlpProtectInvertedFunctionTable(0LL);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  v15 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
  LOBYTE(v16) = 0;
  if ( RtlpDynamicFunctionTableTreeMin )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v13 + 32) < *(v15 - 7) )
      {
        v17 = (_QWORD *)*v15;
        if ( !*v15 )
        {
          LOBYTE(v16) = 0;
          break;
        }
      }
      else
      {
        v17 = (_QWORD *)v15[1];
        if ( !v17 )
        {
          LOBYTE(v16) = 1;
          break;
        }
      }
      v15 = v17;
    }
  }
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMin, v15, v16, v13 + 88);
  v19 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
  if ( !RtlpDynamicFunctionTableTreeMax )
    goto LABEL_24;
  while ( *(_QWORD *)(v13 + 40) < *(v19 - 10) )
  {
    v20 = (_QWORD *)*v19;
    if ( !*v19 )
      goto LABEL_24;
LABEL_27:
    v19 = v20;
  }
  v20 = (_QWORD *)v19[1];
  if ( v20 )
    goto LABEL_27;
  v10 = 1;
LABEL_24:
  LOBYTE(v18) = v10;
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMax, v19, v18, v13 + 112);
  v21 = (__int64 *)qword_18017A2C0;
  if ( *(__int64 **)qword_18017A2C0 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v13 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v13 + 8) = v21;
  *v21 = v13;
  qword_18017A2C0 = v13;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  RtlpProtectInvertedFunctionTable(1LL);
  *a1 = v13;
LABEL_11:
  RtlpProtectReadOnlyHeap(1LL);
  return (unsigned int)v14;
}

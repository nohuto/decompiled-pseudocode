/*
 * XREFs of RtlpFreeHandleForAtom @ 0x1406C77CC
 * Callers:
 *     RtlpFreeAllAtom @ 0x14011F084 (RtlpFreeAllAtom.c)
 *     RtlEmptyAtomTable @ 0x1408D17F0 (RtlEmptyAtomTable.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExMapHandleToPointer @ 0x14060F3C0 (ExMapHandleToPointer.c)
 *     ExDestroyHandle @ 0x14060F860 (ExDestroyHandle.c)
 */

void __fastcall RtlpFreeHandleForAtom(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v4; // rax
  __int64 v5; // [rsp+30h] [rbp+8h]

  v5 = 4 * (unsigned int)*(unsigned __int16 *)(a2 + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = ExMapHandleToPointer(*(unsigned int **)(a1 + 16), v5);
  if ( v4 )
    ExDestroyHandle(*(_QWORD *)(a1 + 16), v5, v4);
  KeLeaveCriticalRegion();
}

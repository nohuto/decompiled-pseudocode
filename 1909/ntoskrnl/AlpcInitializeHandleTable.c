/*
 * XREFs of AlpcInitializeHandleTable @ 0x14065CED0
 * Callers:
 *     AlpcpCreateClientPort @ 0x14065CA48 (AlpcpCreateClientPort.c)
 *     AlpcpCreateConnectionPort @ 0x1406D9188 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1400CA44C (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall AlpcInitializeHandleTable(__int64 a1)
{
  PVOID v2; // rax

  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  v2 = ExAllocateFromNPagedLookasideList(&stru_140503400);
  *(_QWORD *)a1 = v2;
  if ( !v2 )
    return 3221225626LL;
  *(_QWORD *)(a1 + 16) = 16LL;
  memset(v2, 0, 0x80uLL);
  return 0LL;
}

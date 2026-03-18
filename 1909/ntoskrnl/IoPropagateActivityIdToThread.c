/*
 * XREFs of IoPropagateActivityIdToThread @ 0x14011A7A0
 * Callers:
 *     <none>
 * Callees:
 *     IoGetActivityIdIrp @ 0x140101120 (IoGetActivityIdIrp.c)
 *     IopIrpHasExtensionType @ 0x14011A80C (IopIrpHasExtensionType.c)
 */

__int64 __fastcall IoPropagateActivityIdToThread(__int64 a1, _OWORD *a2, _QWORD *a3)
{
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  PVOID SparePtr; // rax

  if ( !(unsigned __int8)IopIrpHasExtensionType(a1, 0LL) )
    return 3221226021LL;
  IoGetActivityIdIrp(v5, a2);
  CurrentThread = KeGetCurrentThread();
  SparePtr = CurrentThread[1].WaitBlock[0].SparePtr;
  CurrentThread[1].WaitBlock[0].SparePtr = a2;
  *a3 = SparePtr;
  return 0LL;
}

/*
 * XREFs of CmpIsHiveLoadingOnOtherThread @ 0x140654A20
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1406545D0 (CmpCreateKeyControlBlock.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsHiveLoadingOnOtherThread(__int64 a1)
{
  return (*(_DWORD *)(a1 + 160) & 0x20) != 0 && *(struct _KTHREAD **)(a1 + 4208) != KeGetCurrentThread();
}

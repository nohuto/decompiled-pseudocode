/*
 * XREFs of ?DxgkpProcessStatusChangeWork@@YAXPEAX@Z @ 0x1C011E1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessStatusChange@DXGPROCESS@@IEAAXXZ @ 0x1C011E214 (-ProcessStatusChange@DXGPROCESS@@IEAAXXZ.c)
 */

void __fastcall DxgkpProcessStatusChangeWork(volatile signed __int32 *a1)
{
  DXGPROCESS::ProcessStatusChange((DXGPROCESS *)a1);
  _InterlockedDecrement(a1 + 78);
}

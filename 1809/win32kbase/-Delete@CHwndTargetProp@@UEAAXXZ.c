/*
 * XREFs of ?Delete@CHwndTargetProp@@UEAAXXZ @ 0x1C00479F0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ?ClearSystemVisual@CHwndTargetProp@@QEAAHH@Z @ 0x1C0047A30 (-ClearSystemVisual@CHwndTargetProp@@QEAAHH@Z.c)
 */

void __fastcall CHwndTargetProp::Delete(CHwndTargetProp *this)
{
  CHwndTargetProp::ClearSystemVisual(this, 1);
  CHwndTargetProp::ClearSystemVisual(this, 0);
  Win32FreePool((__int64)this);
}

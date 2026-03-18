/*
 * XREFs of _lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_ @ 0x1C027EEF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0009898 (--3@YAXPEAX@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BE40 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C0257BA0 (DxgkRedrawCursorForPostCompositon.c)
 */

void __fastcall lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_(DXGADAPTER **this)
{
  DxgkRedrawCursorForPostCompositon(*this, *((unsigned int *)this + 4));
  DXGADAPTER_REFERENCE::Assign(this, 0LL);
  operator delete(this);
}

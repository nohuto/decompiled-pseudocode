/*
 * XREFs of _lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_ @ 0x1C02492C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C0222DF4 (DxgkRedrawCursorForPostCompositon.c)
 */

void __fastcall lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_(void *a1)
{
  DxgkRedrawCursorForPostCompositon(*(DXGADAPTER **)a1, *((_DWORD *)a1 + 4));
  if ( *(_QWORD *)a1 )
    DXGADAPTER::ReleaseReference(*(DXGADAPTER **)a1);
  *(_QWORD *)a1 = 0LL;
  operator delete(a1);
}

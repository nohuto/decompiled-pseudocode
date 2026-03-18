/*
 * XREFs of ?DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C02004E8
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C015F448 (DpiFdoStartAdapter.c)
 *     DpiAddDevice @ 0x1C01617D0 (DpiAddDevice.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C02386DC (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0009668 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 */

void __fastcall DxgFreeDiagnosticInfoArgs(struct _DXGKARG_COLLECTDIAGNOSTICINFO *a1)
{
  void *v2; // rcx

  if ( a1 )
  {
    v2 = (void *)*((_QWORD *)a1 + 28);
    if ( v2 )
      operator delete[](v2);
    operator delete(a1);
  }
}

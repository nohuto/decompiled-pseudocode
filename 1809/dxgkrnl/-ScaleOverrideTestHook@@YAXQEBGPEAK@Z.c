/*
 * XREFs of ?ScaleOverrideTestHook@@YAXQEBGPEAK@Z @ 0x1C0002994
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00B98C8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     ?ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z @ 0x1C00029B8 (-ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z.c)
 */

void __fastcall ScaleOverrideTestHook(DpiInternal *a1, const unsigned __int16 *a2, unsigned int *a3)
{
  if ( g_OSTestSigningEnabled )
    DpiInternal::ScaleOverrideTestHookCore(a1, a2, a3);
  else
    *(_DWORD *)a2 = 0;
}

/*
 * XREFs of ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C0001E54
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CBA38 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C0154990 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C022E994 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 */

MANAGEDPRIMARIESTRACKER *__fastcall MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
        MANAGEDPRIMARIESTRACKER *this,
        struct ADAPTER_DISPLAY *a2,
        struct DXGPROCESS *a3)
{
  int v3; // eax

  *((_DWORD *)this + 4) &= 0xFFFFFFFC;
  v3 = 0;
  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = a3;
  if ( a2 )
    v3 = *((_DWORD *)a2 + 20);
  *((_DWORD *)this + 4) = 4 * v3;
  memset((char *)this + 24, 0, 0x190uLL);
  return this;
}

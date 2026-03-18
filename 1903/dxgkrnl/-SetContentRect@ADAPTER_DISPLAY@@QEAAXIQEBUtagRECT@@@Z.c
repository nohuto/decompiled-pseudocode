/*
 * XREFs of ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C00018A0
 * Callers:
 *     ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1C00C9FA0 (-DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00CD110 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01253E8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z @ 0x1C00E8B2C (-DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::SetContentRect(ADAPTER_DISPLAY *this, unsigned int a2, const struct tagRECT *const a3)
{
  *(struct tagRECT *)(3968LL * a2 + *((_QWORD *)this + 14) + 628) = *a3;
  if ( *((_DWORD *)this + 32) && a3->right > a3->left )
  {
    if ( a3->left || a3->top )
    {
      if ( a2 == *((_DWORD *)this + 30) )
        *((_DWORD *)this + 32) = 2;
    }
    else
    {
      *((_DWORD *)this + 32) = 1;
      if ( a2 != *((_DWORD *)this + 30) )
      {
        *((_DWORD *)this + 30) = a2;
        if ( DmmGetMostImportantClientVidPnPathTargetsFromSource(
               *((void *const *)this + 2),
               a2,
               (unsigned int *const)this + 31) < 0 )
          *((_DWORD *)this + 32) = 3;
      }
    }
  }
}

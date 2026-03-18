/*
 * XREFs of ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C026B064
 * Callers:
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C026B1B0 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C7220 (DxgkWriteDiagEntry.c)
 *     ?DpiBrightnessSetBacklightOptimizationHelper@@YAJPEAU_DEVICE_OBJECT@@W4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C026C880 (-DpiBrightnessSetBacklightOptimizationHelper@@YAJPEAU_DEVICE_OBJECT@@W4DXGK_BACKLIGHT_OPTIMIZATI.c)
 */

__int64 __fastcall DpiBrightnessAISetBacklightOptLevel(struct _DEVICE_OBJECT *a1)
{
  _WORD *DeviceExtension; // rdi
  char *v2; // rdx
  enum DXGK_BACKLIGHT_OPTIMIZATION_LEVEL v3; // esi
  bool v5; // zf
  unsigned int v6; // ebx
  _QWORD v7[10]; // [rsp+20h] [rbp-60h] BYREF

  DeviceExtension = a1->DeviceExtension;
  v2 = 0LL;
  v3 = DxgkBacklightOptimizationDynamic;
  if ( DeviceExtension[2321] == 2 )
    v2 = (char *)(DeviceExtension + 2320);
  if ( !v2 )
    return 3221225659LL;
  if ( *((_QWORD *)v2 + 9) )
  {
    if ( *((_BYTE *)DeviceExtension + 4280) )
    {
      v3 = DxgkBacklightOptimizationDisable;
    }
    else if ( *((_BYTE *)DeviceExtension + 4264) )
    {
      v3 = DxgkBacklightOptimizationDimmed;
    }
    else if ( *((_BYTE *)DeviceExtension + 4304) )
    {
      if ( *((_BYTE *)DeviceExtension + 4328) && *(_DWORD *)(*((_QWORD *)DeviceExtension + 5) + 28LL) >= 0x7006u )
        v3 = DxgkBacklightOptimizationEDR;
    }
    else
    {
      v3 = DxgkBacklightOptimizationDesktop;
    }
    v5 = *((_BYTE *)DeviceExtension + 4352) == 0;
    *((_DWORD *)DeviceExtension + 1089) = v3;
    if ( v5 )
    {
      v6 = DpiBrightnessSetBacklightOptimizationHelper(a1, v3);
      memset(v7, 0, 0x48uLL);
      v7[8] = *((_QWORD *)DeviceExtension + 325);
      v7[0] = 0x480000001ELL;
      memset(&v7[1], 0, 36);
      LODWORD(v7[6]) = 66;
      HIDWORD(v7[6]) = v3;
      v7[7] = v6;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v7);
    }
  }
  return 0LL;
}

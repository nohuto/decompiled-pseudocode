/*
 * XREFs of ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C02A6B7C
 * Callers:
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C02A6CD0 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D50EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?DpiBrightnessSetBacklightOptimizationHelper@@YAJPEAU_DEVICE_OBJECT@@W4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C02A82A0 (-DpiBrightnessSetBacklightOptimizationHelper@@YAJPEAU_DEVICE_OBJECT@@W4DXGK_BACKLIGHT_OPTIMIZATI.c)
 */

__int64 __fastcall DpiBrightnessAISetBacklightOptLevel(struct _DEVICE_OBJECT *a1)
{
  _WORD *DeviceExtension; // rdi
  char *v2; // rdx
  enum DXGK_BACKLIGHT_OPTIMIZATION_LEVEL v3; // esi
  bool v5; // zf
  unsigned int v6; // ebx
  __int64 v7; // r8
  _QWORD v8[10]; // [rsp+20h] [rbp-60h] BYREF

  DeviceExtension = a1->DeviceExtension;
  v2 = 0LL;
  v3 = DxgkBacklightOptimizationDynamic;
  if ( DeviceExtension[2377] == 2 )
    v2 = (char *)(DeviceExtension + 2376);
  if ( !v2 )
    return 3221225659LL;
  if ( *((_QWORD *)v2 + 9) )
  {
    if ( *((_BYTE *)DeviceExtension + 4392) )
    {
      v3 = DxgkBacklightOptimizationDisable;
    }
    else if ( *((_BYTE *)DeviceExtension + 4376) )
    {
      v3 = DxgkBacklightOptimizationDimmed;
    }
    else if ( *((_BYTE *)DeviceExtension + 4416) )
    {
      if ( *((_BYTE *)DeviceExtension + 4440) && *(_DWORD *)(*((_QWORD *)DeviceExtension + 5) + 28LL) >= 0x7006u )
        v3 = DxgkBacklightOptimizationEDR;
    }
    else
    {
      v3 = DxgkBacklightOptimizationDesktop;
    }
    v5 = *((_BYTE *)DeviceExtension + 4464) == 0;
    *((_DWORD *)DeviceExtension + 1117) = v3;
    if ( v5 )
    {
      v6 = DpiBrightnessSetBacklightOptimizationHelper(a1, v3);
      memset(v8, 0, 0x48uLL);
      v8[8] = *((_QWORD *)DeviceExtension + 334);
      v8[0] = 0x480000001ELL;
      memset(&v8[1], 0, 36);
      LODWORD(v8[6]) = 66;
      HIDWORD(v8[6]) = v3;
      v8[7] = v6;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v8, 0x200000000LL, v7);
    }
  }
  return 0LL;
}

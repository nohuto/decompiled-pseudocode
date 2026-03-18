/*
 * XREFs of ?PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@QEAU_devicemodeW@@@Z @ 0x1C00D6F30
 * Callers:
 *     DxgkConvertDisplayConfigToDevMode @ 0x1C00B5CB0 (DxgkConvertDisplayConfigToDevMode.c)
 *     ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1C00D6D98 (-PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000F638 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C00E3C90 (ConvertDMMScalingToGdiScaling.c)
 */

__int64 __fastcall VIDPN_MGR::PopulatePublicGdiDisplayModeInfo(
        __int64 a1,
        DWORD a2,
        DWORD a3,
        DWORD a4,
        enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING a5,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a6,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a7,
        struct _devicemodeW *const a8)
{
  DWORD v11; // ebp
  int v12; // r10d
  __int64 v13; // rcx
  DWORD v14; // eax
  int v15; // r10d
  DWORD v16; // eax
  __int64 v17; // rcx
  __int64 v19; // rax
  int v20; // r10d
  int v21; // r10d
  int v22; // r10d
  __int64 v23; // rax
  __int64 v24; // rax

  v11 = a1;
  if ( !a8 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v19);
  }
  a8->dmBitsPerPel = v11;
  *(_QWORD *)a8->dmDeviceName = 0x4400440043LL;
  *(_DWORD *)&a8->dmSpecVersion = 67175425;
  *(_DWORD *)&a8->dmSize = 1573084;
  v12 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(a6);
  v13 = (unsigned int)(v12 - 1);
  if ( (v13 & 0xFFFFFFFD) != 0 )
  {
    v14 = a3;
  }
  else
  {
    v14 = a2;
    a2 = a3;
  }
  a8->dmPelsHeight = a2;
  a8->dmPelsWidth = v14;
  v15 = v12 - 1;
  if ( !v15 )
    goto LABEL_6;
  v20 = v15 - 1;
  if ( v20 )
  {
    v21 = v20 - 1;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        if ( v22 != 251 )
        {
          v23 = WdLogNewEntry5_WdError(v13);
          *(_QWORD *)(v23 + 24) = a6;
          WdLogEvent5_WdError(v23);
        }
LABEL_6:
        v16 = 0;
        goto LABEL_7;
      }
      v16 = 3;
    }
    else
    {
      v16 = 2;
    }
  }
  else
  {
    v16 = 1;
  }
LABEL_7:
  a8->dmDisplayOrientation = v16;
  ConvertDMMScalingToGdiScaling((unsigned int)a7, &a8->dmDisplayFixedOutput);
  a8->dmDisplayFrequency = a4;
  if ( a5 == D3DDDI_VSSLO_PROGRESSIVE )
  {
    a8->dmDisplayFlags = 0;
LABEL_9:
    a8->dmFields = 544997504;
    return 0LL;
  }
  if ( (unsigned int)(a5 - 2) <= 1 )
  {
    a8->dmDisplayFlags |= 2u;
    goto LABEL_9;
  }
  v24 = WdLogNewEntry5_WdError(v17);
  *(_QWORD *)(v24 + 24) = a5;
  WdLogEvent5_WdError(v24);
  return 3223192402LL;
}

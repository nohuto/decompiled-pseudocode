/*
 * XREFs of ?PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@QEAU_devicemodeW@@@Z @ 0x1C00D1BA0
 * Callers:
 *     ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1C00D1A08 (-PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z.c)
 *     DxgkConvertDisplayConfigToDevMode @ 0x1C012ECE0 (DxgkConvertDisplayConfigToDevMode.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0003CE0 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C00D1C88 (ConvertDMMScalingToGdiScaling.c)
 */

__int64 __fastcall VIDPN_MGR::PopulatePublicGdiDisplayModeInfo(
        __int64 a1,
        __int64 a2,
        DWORD a3,
        DWORD a4,
        enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING a5,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a6,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a7,
        struct _devicemodeW *const a8)
{
  DWORD v10; // edi
  DWORD v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // r10d
  __int64 v15; // rcx
  DWORD v16; // eax
  int v17; // r10d
  DWORD v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rax
  int v24; // r10d
  int v25; // r10d
  int v26; // r10d
  __int64 v27; // rax
  __int64 v28; // rax

  v10 = a2;
  v11 = a1;
  if ( !a8 )
  {
    v23 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v23);
  }
  a8->dmBitsPerPel = v11;
  *(_QWORD *)a8->dmDeviceName = 0x4400440043LL;
  *(_DWORD *)&a8->dmSpecVersion = 67175425;
  *(_DWORD *)&a8->dmSize = 1573084;
  v14 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(a6);
  v15 = (unsigned int)(v14 - 1);
  if ( (v15 & 0xFFFFFFFD) != 0 )
  {
    v16 = a3;
  }
  else
  {
    v16 = v10;
    v10 = a3;
  }
  a8->dmPelsHeight = v10;
  a8->dmPelsWidth = v16;
  v17 = v14 - 1;
  if ( !v17 )
    goto LABEL_6;
  v24 = v17 - 1;
  if ( v24 )
  {
    v25 = v24 - 1;
    if ( v25 )
    {
      v26 = v25 - 1;
      if ( v26 )
      {
        if ( v26 != 251 )
        {
          v27 = WdLogNewEntry5_WdError(v15, v12, v13);
          *(_QWORD *)(v27 + 24) = a6;
          WdLogEvent5_WdError(v27);
        }
LABEL_6:
        v18 = 0;
        goto LABEL_7;
      }
      v18 = 3;
    }
    else
    {
      v18 = 2;
    }
  }
  else
  {
    v18 = 1;
  }
LABEL_7:
  a8->dmDisplayOrientation = v18;
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
  v28 = WdLogNewEntry5_WdError(v20, v19, v21);
  *(_QWORD *)(v28 + 24) = a5;
  WdLogEvent5_WdError(v28);
  return 3223192402LL;
}

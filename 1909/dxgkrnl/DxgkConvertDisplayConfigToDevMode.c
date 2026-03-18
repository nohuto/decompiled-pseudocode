/*
 * XREFs of DxgkConvertDisplayConfigToDevMode @ 0x1C014A2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C0003AF0 (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00DB95C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@QEAU_devicemodeW@@@Z @ 0x1C0127D8C (-PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W.c)
 *     DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1C014A480 (DxgkConvertDisplayConfigCScalingToDdiScaling.c)
 */

__int64 __fastcall DxgkConvertDisplayConfigToDevMode(
        struct _D3DDDI_RATIONAL *a1,
        struct _devicemodeW *a2,
        const GUID *a3)
{
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // esi
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING Denominator; // r12d
  unsigned int BitsPerPixel; // eax
  __int64 v12; // rdx
  DWORD v13; // r8d
  DWORD v14; // r9d
  __int64 v15; // rcx
  const GUID *v16; // r8
  int v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h]
  char v20; // [rsp+50h] [rbp-10h]
  struct _D3DDDI_RATIONAL v21; // [rsp+90h] [rbp+30h] BYREF

  v18 = -1;
  v19 = 0LL;
  v5 = D3DKMDT_VPPR_IDENTITY;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v20 = 1;
    v18 = 2178;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2178);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v18, 2178LL);
  if ( (a1->Numerator & 0x30387LL) == 0x30387 )
  {
    Denominator = a1[9].Denominator;
    if ( *(_QWORD *)&a1[6] != 0xFFFFFFFEFFFFFFFEuLL )
    {
      v21 = a1[6];
      DmmMapVSyncFromRationalToInteger(&v21, (unsigned int)Denominator, 0LL);
    }
    v9 = DxgkConvertDisplayConfigCScalingToDdiScaling(a1[14].Numerator, &a1[2], &v21);
    if ( v9 >= 0 )
    {
      if ( a1[13].Numerator != 1 )
      {
        switch ( a1[13].Numerator )
        {
          case 2u:
            v5 = D3DKMDT_VPPR_ROTATE90;
            break;
          case 3u:
            v5 = D3DKMDT_VPPR_ROTATE180;
            break;
          case 4u:
            v5 = D3DKMDT_VPPR_ROTATE270;
            break;
        }
      }
      BitsPerPixel = GetBitsPerPixel(a1[12].Numerator);
      v9 = VIDPN_MGR::PopulatePublicGdiDisplayModeInfo(
             BitsPerPixel,
             v12,
             v13,
             v14,
             Denominator,
             v5,
             (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING)v21.Numerator,
             a2);
      if ( v9 >= 0 )
      {
        a2->dmFields |= 0x20u;
        a2->dmPosition.x = a1[14].Denominator;
        a2->dmPosition.y = a1[15].Numerator;
      }
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdAssertion(197511LL, v6);
    *(_QWORD *)(v7 + 24) = 1683LL;
    WdLogEvent5_WdAssertion(v7);
    v9 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18, v8);
  if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v15, &EventProfilerExit, v16, v18);
  return (unsigned int)v9;
}

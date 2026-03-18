/*
 * XREFs of DxgkConvertDisplayConfigToDevMode @ 0x1C00B5CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C0006578 (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1C00B5E00 (DxgkConvertDisplayConfigCScalingToDdiScaling.c)
 *     ?PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@QEAU_devicemodeW@@@Z @ 0x1C00D6F30 (-PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00E3D10 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DxgkConvertDisplayConfigToDevMode(_DWORD *a1, struct _devicemodeW *a2, const GUID *a3)
{
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v5; // edi
  UINT v6; // eax
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v7; // r12d
  int v8; // esi
  unsigned int BitsPerPixel; // eax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // rcx
  const GUID *v14; // r8
  __int64 v16; // rax
  int v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+48h] [rbp-18h]
  char v19; // [rsp+50h] [rbp-10h]
  struct _D3DDDI_RATIONAL v20; // [rsp+90h] [rbp+30h] BYREF

  v17 = -1;
  v18 = 0LL;
  v5 = D3DKMDT_VPPR_IDENTITY;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v19 = 1;
    v17 = 2178;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2178);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v17, 2178);
  if ( (*a1 & 0x30387LL) == 0x30387 )
  {
    v6 = a1[12];
    v7 = a1[19];
    if ( *((_QWORD *)a1 + 6) != 0xFFFFFFFEFFFFFFFEuLL )
    {
      v20.Denominator = 0;
      v20.Numerator = v6;
      v20.Denominator = a1[13];
      DmmMapVSyncFromRationalToInteger(&v20, v7, 0LL);
    }
    v8 = DxgkConvertDisplayConfigCScalingToDdiScaling((unsigned int)a1[28], a1 + 4, &v20);
    if ( v8 >= 0 )
    {
      if ( a1[26] != 1 )
      {
        switch ( a1[26] )
        {
          case 2:
            v5 = D3DKMDT_VPPR_ROTATE90;
            break;
          case 3:
            v5 = D3DKMDT_VPPR_ROTATE180;
            break;
          case 4:
            v5 = D3DKMDT_VPPR_ROTATE270;
            break;
        }
      }
      BitsPerPixel = GetBitsPerPixel(a1[24]);
      v8 = VIDPN_MGR::PopulatePublicGdiDisplayModeInfo(
             BitsPerPixel,
             v10,
             v11,
             v12,
             v7,
             v5,
             (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING)v20.Numerator,
             a2);
      if ( v8 >= 0 )
      {
        a2->dmFields |= 0x20u;
        a2->dmPosition.x = a1[29];
        a2->dmPosition.y = a1[30];
      }
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdAssertion(197511LL);
    *(_QWORD *)(v16 + 24) = 1667LL;
    WdLogEvent5_WdAssertion(v16);
    v8 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v13, &EventProfilerExit, v14, v17);
  return (unsigned int)v8;
}

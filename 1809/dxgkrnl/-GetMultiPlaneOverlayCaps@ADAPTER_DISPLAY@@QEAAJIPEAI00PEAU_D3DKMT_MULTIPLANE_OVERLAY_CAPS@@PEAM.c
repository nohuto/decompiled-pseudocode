/*
 * XREFs of ?GetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJIPEAI00PEAU_D3DKMT_MULTIPLANE_OVERLAY_CAPS@@PEAM2@Z @ 0x1C012E8D0
 * Callers:
 *     ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C012E100 (-DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     DxgkGetMultiPlaneOverlayCaps @ 0x1C012E4F0 (DxgkGetMultiPlaneOverlayCaps.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000FAAC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00106CC (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C012E988 (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?DdiGetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETMULTIPLANEOVERLAYCAPS@@@Z @ 0x1C01CB7AC (-DdiGetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETMULTIPLANEOVERLAYCAPS@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetMultiPlaneOverlayCaps(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS *a6,
        float *a7,
        float *a8)
{
  __int64 v11; // rdi
  __int64 v12; // r14
  ADAPTER_RENDER *v13; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  int MultiPlaneOverlayCaps; // eax
  float MaxStretchFactor; // xmm0_4
  float MaxShrinkFactor; // xmm1_4
  __int64 v20; // rcx
  _QWORD *v21; // rax
  int v22; // [rsp+20h] [rbp-58h]
  _DXGKARG_GETMULTIPLANEOVERLAYCAPS v23; // [rsp+40h] [rbp-38h] BYREF

  v11 = a2;
  if ( a2 >= *((_DWORD *)this + 20) )
  {
    v15 = WdLogNewEntry5_WdError(a8);
    *(_QWORD *)(v15 + 24) = v11;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  else
  {
    *a3 = 1;
    *a4 = 0;
    *a5 = 0;
    LODWORD(v12) = 0;
    a6->Value = 0;
    *a7 = 1.0;
    *a8 = 1.0;
    v13 = *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 2528LL);
    if ( v13 )
    {
      if ( ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v13) )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2528LL) + 16LL);
        if ( *(_QWORD *)(v16 + 1128) )
        {
          if ( *(_BYTE *)(v16 + 2466) && ADAPTER_DISPLAY::IsVidPnSourceActive(this, v11) )
          {
            memset(&v23.MaxPlanes, 0, 24);
            v23.VidPnSourceId = v11;
            MultiPlaneOverlayCaps = ADAPTER_DISPLAY::DdiGetMultiPlaneOverlayCaps(this, &v23);
            v12 = MultiPlaneOverlayCaps;
            if ( MultiPlaneOverlayCaps < 0 )
            {
              wil_details_FeaturePropertyCache_ReportUsageToService(
                (__int64)&Feature_Bugcheck_GetMpoCaps__private_propertyCache,
                17968478LL,
                (const struct FEATURE_LOGGED_TRAITS *)&unk_1C006595C,
                0,
                v22);
              v21 = (_QWORD *)WdLogNewEntry5_WdError(v20);
              v21[3] = v12;
              v21[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 248LL);
              v21[5] = v11;
              WdLogEvent5_WdError(v21);
            }
            else
            {
              if ( v23.MaxPlanes )
              {
                MaxStretchFactor = v23.MaxStretchFactor;
                MaxShrinkFactor = v23.MaxShrinkFactor;
                *a3 = v23.MaxPlanes;
                *a4 = v23.MaxRGBPlanes;
                *a5 = v23.MaxYUVPlanes;
                *a7 = MaxStretchFactor;
                *a8 = MaxShrinkFactor;
                a6->Value ^= (*(_WORD *)&v23.OverlayCaps.0 ^ (unsigned __int16)a6->Value) & 0x7FF;
              }
              else
              {
                *a3 = 1;
                *a4 = 0;
                *a5 = 0;
                a6->Value = 0;
                *a7 = 1.0;
                *a8 = 1.0;
              }
              a6->Value |= 0x800u;
            }
          }
        }
      }
    }
    return (unsigned int)v12;
  }
}

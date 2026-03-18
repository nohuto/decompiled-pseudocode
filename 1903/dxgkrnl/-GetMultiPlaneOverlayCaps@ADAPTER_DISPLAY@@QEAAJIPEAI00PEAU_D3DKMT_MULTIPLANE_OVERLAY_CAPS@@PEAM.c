/*
 * XREFs of ?GetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJIPEAI00PEAU_D3DKMT_MULTIPLANE_OVERLAY_CAPS@@PEAM2@Z @ 0x1C013EA84
 * Callers:
 *     ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C013E28C (-DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     DxgkGetMultiPlaneOverlayCaps @ 0x1C013E6C0 (DxgkGetMultiPlaneOverlayCaps.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0003B14 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C013EB3C (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?DdiGetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETMULTIPLANEOVERLAYCAPS@@@Z @ 0x1C01F9FD8 (-DdiGetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETMULTIPLANEOVERLAYCAPS@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetMultiPlaneOverlayCaps(
        ADAPTER_DISPLAY *this,
        __int64 a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS *a6,
        float *a7,
        float *a8)
{
  __int64 v11; // rsi
  __int64 v12; // r14
  ADAPTER_RENDER *v13; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  int MultiPlaneOverlayCaps; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  UINT Value; // ecx
  float MaxStretchFactor; // xmm0_4
  float MaxShrinkFactor; // xmm1_4
  _QWORD *v23; // rax
  _DXGKARG_GETMULTIPLANEOVERLAYCAPS v24; // [rsp+30h] [rbp-38h] BYREF

  v11 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 20) )
  {
    v15 = WdLogNewEntry5_WdError(a8, a2, a3);
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
    v13 = *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 2560LL);
    if ( v13 )
    {
      if ( ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v13) )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2560LL) + 16LL);
        if ( *(_QWORD *)(v16 + 1112) )
        {
          if ( *(_BYTE *)(v16 + 2498) && ADAPTER_DISPLAY::IsVidPnSourceActive(this, v11) )
          {
            v24.VidPnSourceId = v11;
            memset(&v24.MaxPlanes, 0, 24);
            MultiPlaneOverlayCaps = ADAPTER_DISPLAY::DdiGetMultiPlaneOverlayCaps(this, &v24);
            v12 = MultiPlaneOverlayCaps;
            if ( MultiPlaneOverlayCaps < 0 )
            {
              v23 = (_QWORD *)WdLogNewEntry5_WdError(0LL, v18, v19);
              v23[3] = v12;
              v23[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 248LL);
              v23[5] = v11;
              WdLogEvent5_WdError(v23);
            }
            else
            {
              if ( v24.MaxPlanes )
              {
                MaxStretchFactor = v24.MaxStretchFactor;
                MaxShrinkFactor = v24.MaxShrinkFactor;
                *a3 = v24.MaxPlanes;
                *a4 = v24.MaxRGBPlanes;
                *a5 = v24.MaxYUVPlanes;
                *a7 = MaxStretchFactor;
                *a8 = MaxShrinkFactor;
                Value = a6->Value ^ (*(_WORD *)&v24.OverlayCaps.0 ^ (unsigned __int16)a6->Value) & 0x7FF;
              }
              else
              {
                *a3 = 1;
                *a4 = 0;
                *a5 = 0;
                a6->Value = 0;
                *a7 = 1.0;
                *a8 = 1.0;
                Value = a6->Value;
              }
              a6->Value = Value | 0x800;
            }
          }
        }
      }
    }
    return (unsigned int)v12;
  }
}

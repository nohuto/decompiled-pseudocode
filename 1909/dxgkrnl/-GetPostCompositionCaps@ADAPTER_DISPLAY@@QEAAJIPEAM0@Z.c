/*
 * XREFs of ?GetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJIPEAM0@Z @ 0x1C01421F0
 * Callers:
 *     ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0141E3C (-DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     DxgkGetPostCompositionCaps @ 0x1C0141EF0 (DxgkGetPostCompositionCaps.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0003C14 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C01426EC (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?DdiGetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETPOSTCOMPOSITIONCAPS@@@Z @ 0x1C01FA93C (-DdiGetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETPOSTCOMPOSITIONCAPS@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetPostCompositionCaps(ADAPTER_DISPLAY *this, __int64 a2, float *a3, float *a4)
{
  __int64 v7; // rsi
  __int64 v8; // rdi
  ADAPTER_RENDER *v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  int PostCompositionCaps; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  float MaxShrinkFactor; // xmm1_4
  _QWORD *v18; // rax
  _DXGKARG_GETPOSTCOMPOSITIONCAPS v19; // [rsp+20h] [rbp-48h] BYREF

  v7 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 20) )
  {
    v11 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v11 + 24) = v7;
    *(_QWORD *)(v11 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    return 3221225485LL;
  }
  else
  {
    LODWORD(v8) = 0;
    *a3 = 1.0;
    *a4 = 1.0;
    v9 = *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 2560LL);
    if ( v9 )
    {
      if ( ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v9) )
      {
        v12 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2560LL) + 16LL);
        if ( *(_QWORD *)(v12 + 1120) )
        {
          if ( *(_BYTE *)(v12 + 2498) && ADAPTER_DISPLAY::IsVidPnSourceActive(this, v7) )
          {
            *(_QWORD *)&v19.MaxStretchFactor = 0LL;
            v19.VidPnSourceId = v7;
            PostCompositionCaps = ADAPTER_DISPLAY::DdiGetPostCompositionCaps(this, &v19);
            v8 = PostCompositionCaps;
            if ( PostCompositionCaps < 0 )
            {
              v18 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14, v16);
              v18[3] = v8;
              v18[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 248LL);
              v18[5] = v7;
              WdLogEvent5_WdError(v18);
            }
            else
            {
              MaxShrinkFactor = v19.MaxShrinkFactor;
              *a3 = v19.MaxStretchFactor;
              *a4 = MaxShrinkFactor;
            }
          }
        }
      }
    }
    return (unsigned int)v8;
  }
}

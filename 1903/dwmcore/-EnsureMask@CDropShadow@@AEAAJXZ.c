/*
 * XREFs of ?EnsureMask@CDropShadow@@AEAAJXZ @ 0x1801CA144
 * Callers:
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x1801CA294 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 * Callees:
 *     ??2CAnimationTrigger@@SAPEAX_K@Z @ 0x180022990 (--2CAnimationTrigger@@SAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCSpriteVisualContent@@@Z @ 0x18003030C (-SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCSpriteVisualContent@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z @ 0x18015BB94 (--0-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z.c)
 */

__int64 __fastcall CDropShadow::EnsureMask(CDropShadow *this)
{
  _DWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  struct CSpriteVisualContent *v5; // rbx
  unsigned int v6; // edi
  unsigned int v7; // r9d
  int v8; // eax
  unsigned int v10; // [rsp+20h] [rbp-38h]
  struct CSpriteVisualContent *v11; // [rsp+30h] [rbp-28h] BYREF
  __int128 v12; // [rsp+38h] [rbp-20h] BYREF

  if ( *((_QWORD *)this + 18) )
    return 0;
  v2 = CAnimationTrigger::operator new();
  if ( v2 )
  {
    v3 = *((_QWORD *)this + 2);
    v2[2] = 0;
    *((_QWORD *)v2 + 2) = v3;
    *((_QWORD *)v2 + 3) = 0LL;
    *((_QWORD *)v2 + 5) = 0LL;
    v2[8] = 0;
    *((_QWORD *)v2 + 8) = 0LL;
    *((_BYTE *)v2 + 72) = 0;
    *(_QWORD *)v2 = &CColorBrush::`vftable'{for `CContent'};
    *((_QWORD *)v2 + 7) = &CLinearGradientBrush::`vftable'{for `IVisualListenerInfoProvider'};
  }
  wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
    &v11,
    (__int64)v2);
  v5 = v11;
  if ( v11 )
  {
    v12 = _xmm;
    v8 = (*(__int64 (__fastcall **)(struct CSpriteVisualContent *, _QWORD, __int64, __int128 *))(*(_QWORD *)v11 + 88LL))(
           v11,
           0LL,
           70LL,
           &v12);
    v6 = v8;
    if ( v8 < 0 )
    {
      v10 = 586;
    }
    else
    {
      v8 = CDropShadow::ShadowIntermediates::SetMask((CDropShadow *)((char *)this + 136), this, v5);
      v6 = v8;
      if ( v8 >= 0 )
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v11);
        return 0;
      }
      v10 = 588;
    }
    v7 = v8;
    goto LABEL_6;
  }
  v6 = -2147024882;
  v7 = -2147024882;
  v10 = 579;
LABEL_6:
  MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v7, v10, 0LL);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v11);
  return v6;
}

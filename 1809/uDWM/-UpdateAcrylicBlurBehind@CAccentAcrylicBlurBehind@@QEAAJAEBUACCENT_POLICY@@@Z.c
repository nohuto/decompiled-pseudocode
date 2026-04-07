/*
 * XREFs of ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@@Z @ 0x180044834
 * Callers:
 *     ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x180044790 (-_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ.c)
 * Callees:
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180027090 (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003852C (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJK@Z @ 0x1800449A8 (-EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJK@Z.c)
 *     ?ValidateDevice@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180044BD4 (-ValidateDevice@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAccentAcrylicBlurBehind::UpdateAcrylicBlurBehind(
        CAccentAcrylicBlurBehind *this,
        const struct ACCENT_POLICY *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // esi
  int v9; // ebp
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  __int64 v18; // [rsp+60h] [rbp+18h] BYREF
  int v19; // [rsp+68h] [rbp+20h] BYREF
  int v20; // [rsp+6Ch] [rbp+24h]

  v18 = 0LL;
  v4 = CAccentAcrylicBlurBehind::ValidateDevice(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x700u);
  }
  else
  {
    v6 = CAccentAcrylicBlurBehind::EnsureAcrylicBrushForAccent(this, *((_DWORD *)a2 + 2));
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x703u);
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 41) + 56LL))(
             *((_QWORD *)this + 41),
             *((_QWORD *)this + 39));
      v5 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x706u);
      }
      else
      {
        v8 = 0;
        v9 = 0;
        if ( *((_DWORD *)this + 90) - *((_DWORD *)this + 88) >= 0 )
          v8 = *((_DWORD *)this + 90) - *((_DWORD *)this + 88);
        if ( *((_DWORD *)this + 91) - *((_DWORD *)this + 89) >= 0 )
          v9 = *((_DWORD *)this + 91) - *((_DWORD *)this + 89);
        v10 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
                (_QWORD *)this + 41,
                (__int64)&v18);
        v5 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x70Cu);
        }
        else
        {
          v11 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v18 + 288LL))(
                  v18,
                  _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v8), (__m128)COERCE_UNSIGNED_INT((float)v9)).m128_u64[0]);
          v5 = v11;
          if ( v11 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x70Du);
          }
          else
          {
            v12 = *((_QWORD *)this + 35);
            v19 = v8;
            v20 = v9;
            v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 96LL))(v12, &v19);
            v5 = v13;
            if ( v13 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x70Fu);
            }
            else
            {
              v14 = *(_QWORD *)this;
              v19 = v8;
              v20 = v9;
              v15 = (*(__int64 (__fastcall **)(CAccentAcrylicBlurBehind *, int *))(v14 + 96))(this, &v19);
              v5 = v15;
              if ( v15 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x710u);
              }
              else
              {
                v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 24LL))(*((_QWORD *)this + 36));
                v5 = v16;
                if ( v16 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x712u);
              }
            }
          }
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v18);
  return v5;
}

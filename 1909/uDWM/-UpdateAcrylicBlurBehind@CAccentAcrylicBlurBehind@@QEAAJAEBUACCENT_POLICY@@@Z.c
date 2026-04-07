/*
 * XREFs of ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@@Z @ 0x18004250C
 * Callers:
 *     ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x18004039C (-_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ.c)
 * Callees:
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000B00C (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     ?EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJK@Z @ 0x180042704 (-EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJK@Z.c)
 *     ?ValidateDevice@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180042930 (-ValidateDevice@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004F5C0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18008B220 (--1-$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
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
  int v17; // eax
  unsigned int v19; // [rsp+20h] [rbp-28h]
  void *v20; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v22; // [rsp+60h] [rbp+18h] BYREF
  int v23; // [rsp+68h] [rbp+20h] BYREF
  int v24; // [rsp+6Ch] [rbp+24h]

  v22 = 0LL;
  v4 = CAccentAcrylicBlurBehind::ValidateDevice(this);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = CAccentAcrylicBlurBehind::EnsureAcrylicBrushForAccent(this, *((_DWORD *)a2 + 2));
    v5 = v6;
    if ( v6 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 41) + 56LL))(
             *((_QWORD *)this + 41),
             *((_QWORD *)this + 39));
      v5 = v7;
      if ( v7 >= 0 )
      {
        v8 = 0;
        v9 = 0;
        if ( *((_DWORD *)this + 90) - *((_DWORD *)this + 88) >= 0 )
          v8 = *((_DWORD *)this + 90) - *((_DWORD *)this + 88);
        if ( *((_DWORD *)this + 91) - *((_DWORD *)this + 89) >= 0 )
          v9 = *((_DWORD *)this + 91) - *((_DWORD *)this + 89);
        v10 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
                (_QWORD *)this + 41,
                (__int64)&v22);
        v5 = v10;
        if ( v10 >= 0 )
        {
          v11 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v22 + 288LL))(
                  v22,
                  _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v8), (__m128)COERCE_UNSIGNED_INT((float)v9)).m128_u64[0]);
          v5 = v11;
          if ( v11 >= 0 )
          {
            v12 = *((_QWORD *)this + 35);
            v23 = v8;
            v24 = v9;
            v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 96LL))(v12, &v23);
            v5 = v13;
            if ( v13 >= 0 )
            {
              v14 = *(_QWORD *)this;
              v23 = v8;
              v24 = v9;
              v15 = (*(__int64 (__fastcall **)(CAccentAcrylicBlurBehind *, int *))(v14 + 96))(this, &v23);
              v5 = v15;
              if ( v15 >= 0 )
              {
                v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 24LL))(*((_QWORD *)this + 36));
                v5 = v16;
                if ( v16 >= 0 )
                {
                  v17 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 32LL))(*((_QWORD *)this + 36));
                  if ( v17 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x70E,
                      (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
                      (const char *)(unsigned int)v17,
                      v19);
                }
                else
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x709u, v20);
                }
              }
              else
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x707u, v20);
              }
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x706u, v20);
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x704u, v20);
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x703u, v20);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x6FDu, v20);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x6FAu, v20);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x6F7u, v20);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Composition::IVisual>::~ComPtr<Windows::UI::Composition::IVisual>(&v22);
  return v5;
}

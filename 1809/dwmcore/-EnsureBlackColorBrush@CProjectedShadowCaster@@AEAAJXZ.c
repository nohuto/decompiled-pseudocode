/*
 * XREFs of ?EnsureBlackColorBrush@CProjectedShadowCaster@@AEAAJXZ @ 0x1801AD028
 * Callers:
 *     ?GetEffectiveMaskBrush@CProjectedShadowCaster@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x1801AD988 (-GetEffectiveMaskBrush@CProjectedShadowCaster@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 * Callees:
 *     ??2CColorBrush@@SAPEAX_K@Z @ 0x180074330 (--2CColorBrush@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z @ 0x18019DC38 (--4-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z.c)
 */

__int64 __fastcall CProjectedShadowCaster::EnsureBlackColorBrush(CProjectedShadowCaster *this)
{
  unsigned int v1; // ebx
  __int64 *v2; // rdi
  _DWORD *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+38h] [rbp-20h]
  float v12; // [rsp+3Ch] [rbp-1Ch]

  v1 = 0;
  v2 = (__int64 *)((char *)this + 136);
  if ( !*((_QWORD *)this + 17) )
  {
    v4 = CColorBrush::operator new();
    if ( v4 )
    {
      v5 = *((_QWORD *)this + 2);
      v4[2] = 0;
      *((_QWORD *)v4 + 2) = v5;
      *((_QWORD *)v4 + 3) = 0LL;
      *((_QWORD *)v4 + 5) = 0LL;
      v4[8] = 0;
      *((_QWORD *)v4 + 8) = 0LL;
      *(_QWORD *)v4 = &CColorBrush::`vftable'{for `CContent'};
      *((_QWORD *)v4 + 7) = &CLinearGradientBrush::`vftable'{for `IVisualListenerInfoProvider'};
    }
    else
    {
      v4 = 0LL;
    }
    Microsoft::WRL::ComPtr<CConditionalExpression>::operator=(v2, (__int64)v4);
    v6 = *v2;
    if ( *v2 )
    {
      v11 = 0;
      v10 = 0LL;
      v12 = FLOAT_1_0;
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, 0LL, 70LL, &v10);
      v1 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x2C8u);
    }
    else
    {
      v1 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2147024882, 0x2C0u);
    }
  }
  return v1;
}

/*
 * XREFs of ?EnsureWhiteColorBrush@CProjectedShadow@@AEAAJXZ @ 0x1801C8A78
 * Callers:
 *     ?GenerateMaskApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801C9DD4 (-GenerateMaskApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??2CColorBrush@@SAPEAX_K@Z @ 0x180074330 (--2CColorBrush@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z @ 0x18019DC38 (--4-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z.c)
 */

__int64 __fastcall CProjectedShadow::EnsureWhiteColorBrush(CProjectedShadow *this)
{
  unsigned int v1; // ebx
  _DWORD *v3; // rdx
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rcx
  _QWORD v8[2]; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  if ( !CProjectedShadow::s_cpWhiteColorBrush )
  {
    v3 = CColorBrush::operator new();
    if ( v3 )
    {
      v4 = *((_QWORD *)this + 2);
      v3[2] = 0;
      *((_QWORD *)v3 + 2) = v4;
      *((_QWORD *)v3 + 3) = 0LL;
      *((_QWORD *)v3 + 5) = 0LL;
      v3[8] = 0;
      *((_QWORD *)v3 + 8) = 0LL;
      *(_QWORD *)v3 = &CColorBrush::`vftable'{for `CContent'};
      *((_QWORD *)v3 + 7) = &CLinearGradientBrush::`vftable'{for `IVisualListenerInfoProvider'};
    }
    else
    {
      v3 = 0LL;
    }
    Microsoft::WRL::ComPtr<CConditionalExpression>::operator=(&CProjectedShadow::s_cpWhiteColorBrush, (__int64)v3);
    if ( CProjectedShadow::s_cpWhiteColorBrush )
    {
      v8[0] = 0x3F8000003F800000LL;
      v8[1] = 0x3F8000003F800000LL;
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD *))(*(_QWORD *)CProjectedShadow::s_cpWhiteColorBrush
                                                                         + 88LL))(
             CProjectedShadow::s_cpWhiteColorBrush,
             0LL,
             70LL,
             v8);
      v1 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x61Eu);
    }
    else
    {
      v1 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2147024882, 0x617u);
    }
  }
  return v1;
}

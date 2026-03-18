/*
 * XREFs of ?SetAnimatableProperty@CProjectedShadowApproxBlurEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBXPEA_NPEAI@Z @ 0x18022BF60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CProjectedShadowApproxBlurEffect::SetAnimatableProperty(
        __int64 a1,
        int a2,
        __int64 a3,
        _DWORD *a4,
        _BYTE *a5,
        _DWORD *a6)
{
  unsigned int v6; // ebx

  v6 = 0;
  *a5 = 0;
  *a6 = 0;
  if ( a2 )
  {
    if ( a2 != 1 )
    {
      v6 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x55u);
      return v6;
    }
    *(_DWORD *)(a1 + 84) = *a4;
  }
  else
  {
    *(_OWORD *)(a1 + 68) = *(_OWORD *)a4;
  }
  ++*(_DWORD *)(a1 + 88);
  return v6;
}

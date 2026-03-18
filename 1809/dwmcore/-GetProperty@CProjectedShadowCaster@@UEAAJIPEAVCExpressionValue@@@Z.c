/*
 * XREFs of ?GetProperty@CProjectedShadowCaster@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801ADA20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CProjectedShadowCaster::GetProperty(
        CProjectedShadowCaster *this,
        int a2,
        struct CExpressionValue *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !a2 || a2 == 4 )
  {
    *((_DWORD *)a3 + 18) = 18;
    *(_DWORD *)a3 = 0;
    *((_BYTE *)a3 + 76) = 1;
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x44u);
  }
  return v3;
}

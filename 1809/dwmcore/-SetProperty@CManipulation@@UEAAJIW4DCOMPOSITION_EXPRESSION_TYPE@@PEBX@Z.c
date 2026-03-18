/*
 * XREFs of ?SetProperty@CManipulation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801A6300
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CManipulation::SetProperty(__int64 a1, int a2, int a3)
{
  unsigned int v3; // ebx

  if ( a3 == 17 && a2 == 9 )
  {
    return 0;
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x23Du);
  }
  return v3;
}

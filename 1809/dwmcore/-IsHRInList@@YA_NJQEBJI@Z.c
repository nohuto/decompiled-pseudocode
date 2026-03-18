/*
 * XREFs of ?IsHRInList@@YA_NJQEBJI@Z @ 0x1801E8A7C
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsHRInList(int a1, const int *const a2, unsigned int a3)
{
  unsigned int v3; // eax

  v3 = 0;
  if ( !a3 )
    return 0;
  while ( a1 != *a2 )
  {
    ++v3;
    ++a2;
    if ( v3 >= a3 )
      return 0;
  }
  return 1;
}

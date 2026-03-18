/*
 * XREFs of ?IsOOM@@YA_NJ@Z @ 0x140001730
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x140001690 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1400051F8 (ModuleFailFastForHRESULT.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXIJKI@Z @ 0x140006094 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXIJKI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsOOM(int a1)
{
  int v1; // r8d
  _DWORD *i; // rdx

  v1 = 0;
  for ( i = &unk_140007EC0; *i != a1; ++i )
  {
    if ( (unsigned int)++v1 >= 9 )
      return 0;
  }
  return 1;
}

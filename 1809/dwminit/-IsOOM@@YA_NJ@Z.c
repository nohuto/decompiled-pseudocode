/*
 * XREFs of ?IsOOM@@YA_NJ@Z @ 0x180003944
 * Callers:
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXIJKI@Z @ 0x180003770 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXIJKI@Z.c)
 *     ?MilFailFastForHR@@YAXJPEBX@Z @ 0x180003800 (-MilFailFastForHR@@YAXJPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800038A8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsOOM(int a1)
{
  char result; // al
  _DWORD *v2; // rdx
  unsigned int v3; // r8d

  result = 0;
  v2 = &unk_180008000;
  v3 = 0;
  while ( *v2 != a1 )
  {
    ++v3;
    ++v2;
    if ( v3 >= 9 )
      return result;
  }
  return 1;
}

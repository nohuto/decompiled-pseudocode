/*
 * XREFs of ?IsOOM@@YA_NJ@Z @ 0x1800B13B8
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXIJKI@Z @ 0x1800B13E0 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXIJKI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsOOM(int a1)
{
  char result; // al
  _DWORD *v2; // rdx
  unsigned int v3; // r8d

  result = 0;
  v2 = &unk_1800BF3A0;
  v3 = 0;
  while ( *v2 != a1 )
  {
    ++v3;
    ++v2;
    if ( v3 >= 0xA )
      return result;
  }
  return 1;
}

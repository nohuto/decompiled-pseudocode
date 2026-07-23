/*
 * XREFs of PpmDeepestHardwareIdleState @ 0x14018B9A8
 * Callers:
 *     PpmInstallNewIdleStates @ 0x14018B470 (PpmInstallNewIdleStates.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall PpmDeepestHardwareIdleState(__int64 a1)
{
  unsigned __int8 result; // al
  unsigned int v2; // edx
  unsigned __int8 *v3; // r8
  __int64 v4; // r9
  unsigned __int8 v5; // cl

  result = 1;
  if ( a1 )
  {
    v2 = *(_DWORD *)(a1 + 32);
    if ( v2 )
    {
      v3 = (unsigned __int8 *)(a1 + 1056);
      v4 = v2;
      do
      {
        v5 = result;
        result = *v3;
        v3 += 248;
        if ( result <= v5 )
          result = v5;
        --v4;
      }
      while ( v4 );
    }
  }
  return result;
}

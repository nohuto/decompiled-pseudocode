/*
 * XREFs of PspRegisterResource @ 0x14018F9B4
 * Callers:
 *     PsInitializeQuotaSystem @ 0x1409D8580 (PsInitializeQuotaSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspRegisterResource(int a1, char a2, int a3)
{
  __int64 result; // rax

  PspResourceFlags[8 * a1] = a2;
  dword_14054294C[2 * a1] = a3;
  if ( (a2 & 2) != 0 )
  {
    result = PspDefaultResourceLimits[a1] & 0xFFFFFF80 | 0x64;
    PspDefaultResourceLimits[a1] = result;
  }
  else
  {
    PspDefaultResourceLimits[a1] = -1;
  }
  return result;
}

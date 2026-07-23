/*
 * XREFs of IoIsValidIrpStatus @ 0x140927C30
 * Callers:
 *     ViGenericIsValidIrpStatus @ 0x140927D90 (ViGenericIsValidIrpStatus.c)
 * Callees:
 *     <none>
 */

char __fastcall IoIsValidIrpStatus(unsigned int a1)
{
  unsigned int v1; // r8d
  int v2; // edx
  unsigned int v3; // ecx
  char result; // al
  unsigned int v5; // ecx

  v1 = (unsigned __int16)a1;
  if ( (a1 & 0x20000000) != 0 )
    return 1;
  v2 = a1 & 0xFFF0000;
  if ( (a1 & 0xFFF0000) >= 0xED0000 )
    return v2 == 9961472;
  v3 = a1 >> 30;
  result = 0;
  if ( !v3 )
    return v1 < 0x250;
  v5 = v3 - 1;
  if ( !v5 )
    return v1 < 0x400;
  if ( v5 != 1 || v2 == 458752 || v1 < 0x400 )
    return 1;
  return result;
}

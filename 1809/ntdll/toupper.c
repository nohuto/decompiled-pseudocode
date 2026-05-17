/*
 * XREFs of toupper @ 0x180095920
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpcaseUnicodeToMultiByteN @ 0x18006AC90 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlAnsiCharToUnicodeChar @ 0x18006C080 (RtlAnsiCharToUnicodeChar.c)
 */

int __cdecl toupper(int C)
{
  int result; // eax
  char *v2; // [rsp+30h] [rbp-10h] BYREF
  int v3; // [rsp+50h] [rbp+10h] BYREF
  unsigned __int8 v4; // [rsp+58h] [rbp+18h] BYREF
  unsigned __int8 v5; // [rsp+59h] [rbp+19h]
  __int16 v6; // [rsp+60h] [rbp+20h] BYREF
  int v7; // [rsp+68h] [rbp+28h] BYREF

  v3 = C;
  v2 = (char *)&v3;
  v6 = RtlAnsiCharToUnicodeChar(&v2);
  if ( (int)RtlUpcaseUnicodeToMultiByteN((int)&v4, 2, (int)&v7, (int)&v6, 2u) < 0 )
    return v3;
  result = v4;
  if ( v7 != 1 )
    return v5 | (v4 << 8);
  return result;
}

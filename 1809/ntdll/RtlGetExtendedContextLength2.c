/*
 * XREFs of RtlGetExtendedContextLength2 @ 0x180003420
 * Callers:
 *     RtlGetExtendedContextLength @ 0x1800033D0 (RtlGetExtendedContextLength.c)
 *     RtlUnwind @ 0x180003640 (RtlUnwind.c)
 * Callees:
 *     RtlpGetLegacyContextLength @ 0x1800035F0 (RtlpGetLegacyContextLength.c)
 *     RtlpValidateContextFlags @ 0x180008730 (RtlpValidateContextFlags.c)
 *     RtlpGetEntireXStateAreaLength @ 0x1800087A4 (RtlpGetEntireXStateAreaLength.c)
 */

__int64 __fastcall RtlGetExtendedContextLength2(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  unsigned int v4; // r11d
  __int64 v5; // r10
  int v6; // ebx
  int v7; // ecx
  int EntireXStateAreaLength; // eax
  int v9; // r11d
  int v10; // [rsp+20h] [rbp-18h] BYREF
  _BYTE v11[20]; // [rsp+24h] [rbp-14h] BYREF
  int v12; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0;
  v12 = 0;
  result = RtlpValidateContextFlags(a1, v11);
  if ( (int)result >= 0 )
  {
    RtlpGetLegacyContextLength(v4, &v12, &v10);
    v6 = v10;
    v7 = v12 + 24;
    if ( (v11[0] & 2) != 0 )
    {
      if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
        v5 &= MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8] | 0x8000000000000000uLL;
      EntireXStateAreaLength = RtlpGetEntireXStateAreaLength(v5);
      v7 = EntireXStateAreaLength + v9 - v6 - 448;
    }
    *a2 = v7 + v6 - 1;
    return 0LL;
  }
  return result;
}

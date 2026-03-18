/*
 * XREFs of RtlGetExtendedContextLength2 @ 0x140017148
 * Callers:
 *     RtlGetExtendedContextLength @ 0x140017050 (RtlGetExtendedContextLength.c)
 *     RtlDispatchException @ 0x1400177D0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x140019C30 (RtlUnwindEx.c)
 *     RtlUnwind @ 0x14013B070 (RtlUnwind.c)
 *     RtlRaiseException @ 0x14030BA70 (RtlRaiseException.c)
 * Callees:
 *     RtlpGetLegacyContextLength @ 0x1400171E8 (RtlpGetLegacyContextLength.c)
 *     RtlpValidateContextFlags @ 0x140017380 (RtlpValidateContextFlags.c)
 *     RtlpGetEntireXStateAreaLength @ 0x140135ACC (RtlpGetEntireXStateAreaLength.c)
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
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
        v5 &= MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708] | 0x8000000000000000uLL;
      EntireXStateAreaLength = RtlpGetEntireXStateAreaLength(v5);
      v7 = EntireXStateAreaLength + v9 - v6 - 448;
    }
    *a2 = v7 + v6 - 1;
    return 0LL;
  }
  return result;
}

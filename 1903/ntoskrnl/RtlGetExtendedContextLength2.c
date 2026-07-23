/*
 * XREFs of RtlGetExtendedContextLength2 @ 0x140016D58
 * Callers:
 *     RtlGetExtendedContextLength @ 0x140016C60 (RtlGetExtendedContextLength.c)
 *     RtlDispatchException @ 0x1400173E0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x140019840 (RtlUnwindEx.c)
 *     RtlUnwind @ 0x14013AC20 (RtlUnwind.c)
 *     RtlRaiseException @ 0x14030BFC0 (RtlRaiseException.c)
 * Callees:
 *     RtlpGetLegacyContextLength @ 0x140016DF8 (RtlpGetLegacyContextLength.c)
 *     RtlpValidateContextFlags @ 0x140016F90 (RtlpValidateContextFlags.c)
 *     RtlpGetEntireXStateAreaLength @ 0x1401351CC (RtlpGetEntireXStateAreaLength.c)
 */

NTSTATUS __cdecl RtlGetExtendedContextLength2(
        ULONG ContextFlags,
        PULONG ContextLength,
        ULONG64 EnabledExtendedFeatures)
{
  NTSTATUS result; // eax
  unsigned int v5; // r11d
  __int64 v6; // r10
  int v7; // ebx
  int v8; // ecx
  int EntireXStateAreaLength; // eax
  int v10; // r11d
  int v11; // [rsp+20h] [rbp-18h] BYREF
  _BYTE v12[20]; // [rsp+24h] [rbp-14h] BYREF
  int v13; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0;
  v13 = 0;
  result = RtlpValidateContextFlags(ContextFlags, v12);
  if ( result >= 0 )
  {
    RtlpGetLegacyContextLength(v5, &v13, &v11);
    v7 = v11;
    v8 = v13 + 24;
    if ( (v12[0] & 2) != 0 )
    {
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
        v6 &= MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708] | 0x8000000000000000uLL;
      EntireXStateAreaLength = RtlpGetEntireXStateAreaLength(v6);
      v8 = EntireXStateAreaLength + v10 - v7 - 448;
    }
    *ContextLength = v8 + v7 - 1;
    return 0;
  }
  return result;
}

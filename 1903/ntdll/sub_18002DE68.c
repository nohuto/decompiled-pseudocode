/*
 * XREFs of sub_18002DE68 @ 0x18002DE68
 * Callers:
 *     sub_18002D8FC @ 0x18002D8FC (sub_18002D8FC.c)
 *     sub_18002DEC8 @ 0x18002DEC8 (sub_18002DEC8.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 */

char __fastcall sub_18002DE68(__int64 a1)
{
  char v1; // bl
  __int64 v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rcx

  v1 = 0;
  v2 = 2147353476LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1) )
    v3 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
  else
    v3 = 2147353476LL;
  v4 = 2147353477LL;
  if ( *(_BYTE *)v3 )
  {
    v3 = (unsigned int)RtlGetCurrentServiceSessionId(v3)
       ? (__int64)NtCurrentPeb()->HotpatchInformation + 555
       : 2147353477LL;
    if ( (*(_BYTE *)v3 & 0x40) != 0 )
      return 1;
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v3) )
    v2 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
  if ( *(_BYTE *)v2 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v5) )
      v4 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
    if ( (*(_BYTE *)v4 & 0x20) != 0 )
      return 1;
  }
  return v1;
}

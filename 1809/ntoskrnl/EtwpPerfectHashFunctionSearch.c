/*
 * XREFs of EtwpPerfectHashFunctionSearch @ 0x140314BA4
 * Callers:
 *     EtwpApplyEventIdPayloadFilter @ 0x1403141D0 (EtwpApplyEventIdPayloadFilter.c)
 *     EtwpApplyStackWalkIdFilter @ 0x1403147A4 (EtwpApplyStackWalkIdFilter.c)
 * Callees:
 *     <none>
 */

char __fastcall EtwpPerfectHashFunctionSearch(__int16 a1, __int64 a2)
{
  __int64 i; // r8
  unsigned __int8 v3; // al

  for ( i = (unsigned __int16)(*(_WORD *)(a2 + 2) & __ROR2__(a1, *(_BYTE *)(a2 + 1))); ; i = v3 )
  {
    if ( a1 == *(_WORD *)(a2 + 4 * i + 8) )
      return 1;
    v3 = *(_BYTE *)(a2 + 4 * i + 6);
    if ( v3 == 0xFF )
      break;
  }
  return 0;
}

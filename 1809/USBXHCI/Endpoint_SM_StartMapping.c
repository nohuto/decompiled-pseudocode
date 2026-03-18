/*
 * XREFs of Endpoint_SM_StartMapping @ 0x1C0017ECC
 * Callers:
 *     ESM_StartingMapping @ 0x1C0040DE0 (ESM_StartingMapping.c)
 * Callees:
 *     TR_StartMapping @ 0x1C002512C (TR_StartMapping.c)
 */

char __fastcall Endpoint_SM_StartMapping(__int64 a1)
{
  char result; // al
  __int64 v3; // rdi
  unsigned int v4; // esi

  _InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
  if ( !*(_BYTE *)(a1 + 37) )
    return TR_StartMapping(*(_QWORD *)(a1 + 88));
  *(_DWORD *)(*(_QWORD *)(a1 + 136) + 24LL) = 0;
  result = *(_BYTE *)(a1 + 37);
  if ( !result )
    return TR_StartMapping(*(_QWORD *)(a1 + 88));
  v3 = *(_QWORD *)(a1 + 136);
  v4 = 1;
  for ( *(_DWORD *)(v3 + 20) = 0; v4 <= *(_DWORD *)(v3 + 8); ++v4 )
    result = TR_StartMapping(*(_QWORD *)(104LL * (v4 - 1) + *(_QWORD *)(a1 + 136) + 48));
  return result;
}

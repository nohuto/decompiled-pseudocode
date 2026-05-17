/*
 * XREFs of AlpcGetCompletionListMessageAttributes @ 0x1800E1EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcGetCompletionListMessageAttributes(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( !*(_DWORD *)(a1 + 36) )
    return 0LL;
  if ( (((_BYTE)a2 + (unsigned __int8)*(_WORD *)(a2 + 2)) & 7) != 0 )
    v2 = 8 - (((_BYTE)a2 + (unsigned __int8)*(_WORD *)(a2 + 2)) & 7);
  return a2 + *(unsigned __int16 *)(a2 + 2) + v2;
}

/*
 * XREFs of ndisSetSSHandlers @ 0x1C011C3A8
 * Callers:
 *     NdisSetOptionalHandlers @ 0x1C002DCB0 (NdisSetOptionalHandlers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisSetSSHandlers(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  __int64 v3; // rax

  if ( *(_BYTE *)a1 != 2 )
    return 3221225659LL;
  v2 = *(_BYTE *)(a1 + 24);
  if ( v2 <= 6u && (v2 != 6 || *(_BYTE *)(a1 + 25) < 0x1Eu) )
    return 3221225659LL;
  if ( *(_BYTE *)(a2 + 1) != 1 )
    return 3221225485LL;
  if ( *(_WORD *)(a2 + 2) < 0x18u )
    return 3221225485LL;
  if ( *(_DWORD *)(a2 + 4) )
    return 3221225485LL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( !v3 || !*(_QWORD *)(a2 + 16) )
    return 3221225485LL;
  *(_QWORD *)(a1 + 840) = v3;
  *(_QWORD *)(a1 + 848) = *(_QWORD *)(a2 + 16);
  return 0LL;
}

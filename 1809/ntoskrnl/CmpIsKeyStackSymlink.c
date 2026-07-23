/*
 * XREFs of CmpIsKeyStackSymlink @ 0x140645740
 * Callers:
 *     CmQueryLayeredKey @ 0x14026C108 (CmQueryLayeredKey.c)
 *     CmSetValueKey @ 0x1405CCE28 (CmSetValueKey.c)
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsKeyStackSymlink(__int64 a1)
{
  __int16 v1; // ax
  __int64 v2; // rdx

  v1 = *(_WORD *)(a1 + 2);
  if ( v1 < 0 )
    return 0;
  while ( 1 )
  {
    v2 = v1 >= 2 ? *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * v1 - 16) : *(_QWORD *)(a1 + 8LL * v1 + 8);
    if ( *(_DWORD *)(v2 + 32) != -1 )
      break;
    if ( --v1 < 0 )
      return 0;
  }
  return (*(_DWORD *)(v2 + 176) & 0x100000) != 0;
}

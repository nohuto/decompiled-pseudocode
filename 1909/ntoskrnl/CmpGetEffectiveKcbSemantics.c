/*
 * XREFs of CmpGetEffectiveKcbSemantics @ 0x1405FE4E0
 * Callers:
 *     CmQueryValueKey @ 0x1405FE220 (CmQueryValueKey.c)
 *     CmDeleteValueKey @ 0x14063CCDC (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1406409F0 (CmpSetKeySecurity.c)
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetEffectiveKcbSemantics(__int64 a1)
{
  if ( *(_WORD *)(a1 + 66) )
    return *(unsigned __int8 *)(a1 + 65);
  else
    return 0LL;
}

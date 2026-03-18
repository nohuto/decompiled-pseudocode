/*
 * XREFs of CmpGetEffectiveKcbSemantics @ 0x1405FD450
 * Callers:
 *     CmQueryValueKey @ 0x1405FD190 (CmQueryValueKey.c)
 *     CmDeleteValueKey @ 0x140639C4C (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x14063D6B0 (CmpSetKeySecurity.c)
 *     CmRenameKey @ 0x14082855C (CmRenameKey.c)
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

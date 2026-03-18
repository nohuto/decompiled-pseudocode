/*
 * XREFs of KsepDbGetSdbString @ 0x140882C54
 * Callers:
 *     KsepDbGetDriverShims @ 0x14070A930 (KsepDbGetDriverShims.c)
 *     KsepDbGetShimInfo @ 0x140882C88 (KsepDbGetShimInfo.c)
 * Callees:
 *     KsepStringDuplicate @ 0x140739310 (KsepStringDuplicate.c)
 *     SdbGetStringTagPtr @ 0x14074C878 (SdbGetStringTagPtr.c)
 */

__int64 __fastcall KsepDbGetSdbString(__int64 a1, __int64 a2, __int64 a3)
{
  _WORD *StringTagPtr; // rax

  StringTagPtr = (_WORD *)SdbGetStringTagPtr(a1, a2);
  if ( StringTagPtr )
    return KsepStringDuplicate(a3, StringTagPtr);
  else
    return 3221225485LL;
}

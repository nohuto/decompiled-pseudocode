/*
 * XREFs of sub_18007C640 @ 0x18007C640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LOGICAL __fastcall sub_18007C640(__int64 a1, __int64 a2)
{
  LOGICAL result; // eax

  _m_prefetchw((const void *)(a2 + 24));
  result = _InterlockedOr((volatile signed __int32 *)(a2 + 24), 2u);
  if ( (result & 1) == 0 )
    return sub_18002EFD0(a2);
  return result;
}

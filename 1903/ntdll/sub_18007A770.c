/*
 * XREFs of sub_18007A770 @ 0x18007A770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18007A770(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  _m_prefetchw((const void *)(a2 + 48));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a2 + 48), 2u);
  if ( (result & 1) == 0 )
    return sub_18003020C(a2);
  return result;
}

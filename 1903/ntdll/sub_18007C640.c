/*
 * XREFs of sub_18007C640 @ 0x18007C640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18007C640(__int64 a1, volatile signed __int32 *a2)
{
  __int64 result; // rax

  _m_prefetchw((const void *)(a2 + 6));
  result = (unsigned int)_InterlockedOr(a2 + 6, 2u);
  if ( (result & 1) == 0 )
    return sub_18002EFD0(a2);
  return result;
}

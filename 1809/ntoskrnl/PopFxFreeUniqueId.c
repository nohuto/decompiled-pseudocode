/*
 * XREFs of PopFxFreeUniqueId @ 0x1406F01DC
 * Callers:
 *     PoFxAbandonDevice @ 0x1406EE2A8 (PoFxAbandonDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxFreeUniqueId(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)(a1 + 288);
  if ( *(void **)(a1 + 48) != v2 && v2 && (*(_DWORD *)(a1 + 296) & 0x2000) == 0 )
    ExFreePoolWithTag(v2, 0x4D584650u);
  result = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  return result;
}

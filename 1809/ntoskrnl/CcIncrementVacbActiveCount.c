/*
 * XREFs of CcIncrementVacbActiveCount @ 0x14002198C
 * Callers:
 *     CcGetVirtualAddressIfMapped @ 0x14002037C (CcGetVirtualAddressIfMapped.c)
 *     CcGetVacbMiss @ 0x1400216E0 (CcGetVacbMiss.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall CcIncrementVacbActiveCount(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
  if ( !(_WORD)result )
    KeBugCheckEx(0x34u, 0x9BCuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  return result;
}

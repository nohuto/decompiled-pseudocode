/*
 * XREFs of HviCopyMemory @ 0x1402FC8F4
 * Callers:
 *     CcMapAndCopyInToCache @ 0x1400321D0 (CcMapAndCopyInToCache.c)
 *     CcCopyBytesToUserBuffer @ 0x1400B1860 (CcCopyBytesToUserBuffer.c)
 * Callees:
 *     HvipApertureVmfuncSwitchEptp @ 0x1401C7140 (HvipApertureVmfuncSwitchEptp.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     HvipApertureDetectParameters @ 0x1402FC9F4 (HvipApertureDetectParameters.c)
 *     HvipApertureDirectHypercall @ 0x1402FCAFC (HvipApertureDirectHypercall.c)
 */

__int64 __fastcall HviCopyMemory(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rbx
  unsigned int v7; // edi
  __int64 result; // rax

  if ( a3 )
  {
    v6 = 0LL;
    do
    {
      v7 = a3 - v6;
      if ( a3 - (unsigned int)v6 > 0x100000 )
        v7 = 0x100000;
      if ( !byte_1404E258D )
        HvipApertureDetectParameters();
      _disable();
      if ( !byte_1404062FD )
      {
        if ( byte_1404E258E )
          HvipApertureVmfuncSwitchEptp();
        else
          HvipApertureDirectHypercall(6LL, 1LL);
      }
      result = (__int64)memmove((void *)(v6 + a1), (const void *)(v6 + a2), v7);
      if ( !byte_1404062FD )
      {
        if ( byte_1404E258E )
          result = HvipApertureVmfuncSwitchEptp();
        else
          result = HvipApertureDirectHypercall(6LL, 0LL);
      }
      _mm_lfence();
      _enable();
      v6 = (unsigned int)(v6 + 0x100000);
    }
    while ( (unsigned int)v6 < a3 );
  }
  return result;
}

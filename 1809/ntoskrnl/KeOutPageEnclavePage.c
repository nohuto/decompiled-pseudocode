/*
 * XREFs of KeOutPageEnclavePage @ 0x14028FD84
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1402BD3C4 (MiDecommitHardwareEnclavePages.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiEncls @ 0x1401BCE00 (KiEncls.c)
 *     KiEnclsStatus @ 0x14028FEA8 (KiEnclsStatus.c)
 */

__int64 __fastcall KeOutPageEnclavePage(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v4; // [rsp+A0h] [rbp+0h] BYREF

  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  *(_QWORD *)((unsigned __int64)&v4 & 0xFFFFFFFFFFFFFF80uLL) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v4 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v4 & 0xFFFFFFFFFFFFFF80uLL) + 8) = a2;
  *(_QWORD *)(((unsigned __int64)&v4 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = ((unsigned __int64)&v4 & 0xFFFFFFFFFFFFFF80uLL)
                                                                      + 128;
  v2 = KiEncls(0xBu);
  return KiEnclsStatus(v2);
}

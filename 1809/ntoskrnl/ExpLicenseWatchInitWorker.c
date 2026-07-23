/*
 * XREFs of ExpLicenseWatchInitWorker @ 0x1409D6E88
 * Callers:
 *     ExpWatchProductTypeInitialization @ 0x1409D6738 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 ExpLicenseWatchInitWorker()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  __int64 (__fastcall *v2)(__int64); // r11
  char v3; // r9
  unsigned __int64 v4; // r8
  __int64 result; // rax

  _mm_lfence();
  v0 = KiProcessorBlock[0];
  v1 = *(_QWORD *)(KiProcessorBlock[0] + 120);
  *(_QWORD *)(KiProcessorBlock[0] + 120) = 0LL;
  v2 = *(__int64 (__fastcall **)(__int64))(v0 + 112);
  *(_QWORD *)(v0 + 112) = 0LL;
  v3 = (InitSafeBootMode != 0) | (MEMORY[0xFFFFF780000002D4] >> 1);
  v4 = __rdtsc() >> 3;
  result = 100 * ((unsigned int)v4 / 0x64);
  if ( (unsigned int)v4 % 0x64 > 3 )
    v3 = (MEMORY[0xFFFFF780000002D4] >> 1) | 1;
  if ( !v3 )
  {
    result = v2(v1);
    if ( (_DWORD)result != 1 )
      KeBugCheckEx(0x9Au, 0x42424242uLL, 0xC000026AuLL, 0LL, 0LL);
  }
  return result;
}

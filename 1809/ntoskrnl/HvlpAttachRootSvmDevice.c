/*
 * XREFs of HvlpAttachRootSvmDevice @ 0x140276404
 * Callers:
 *     HvlSvmAttachPasidSpace @ 0x140275A40 (HvlSvmAttachPasidSpace.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     HvlpHandleInsufficientMemory @ 0x1401B395C (HvlpHandleInsufficientMemory.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1401B3D74 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvcallpExtendedFastHypercall @ 0x1401C73F0 (HvcallpExtendedFastHypercall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     HvlpHvToNtStatus @ 0x140279770 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlpAttachRootSvmDevice(unsigned int a1, int a2)
{
  __int64 v3; // rbx
  __int16 v4; // ax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD v9[6]; // [rsp+30h] [rbp-40h] BYREF

  v3 = a1;
  memset(v9, 0, 0x28uLL);
  v9[0] = -1LL;
  LODWORD(v9[2]) |= 7u;
  v9[1] = (unsigned int)v3 | 0x4000000000000000LL;
  v9[3] = v3;
  LODWORD(v9[4]) = a2;
  while ( 1 )
  {
    v4 = HvcallpExtendedFastHypercall(65666LL, (__int64)v9, 40LL);
    if ( !HvlpHvStatusIsInsufficientMemory(v4) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v6, v5, v7) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v6);
}

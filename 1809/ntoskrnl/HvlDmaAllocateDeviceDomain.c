/*
 * XREFs of HvlDmaAllocateDeviceDomain @ 0x1402733A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     HvlpHandleInsufficientMemory @ 0x1401B395C (HvlpHandleInsufficientMemory.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1401B3D74 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvcallpExtendedFastHypercall @ 0x1401C73F0 (HvcallpExtendedFastHypercall.c)
 *     HvlpHvToNtStatus @ 0x140279770 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlDmaAllocateDeviceDomain(__int64 a1)
{
  __int16 v1; // ax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  _QWORD v6[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v7; // [rsp+40h] [rbp-20h]

  v6[0] = -1LL;
  v6[1] = 0LL;
  v7 = 0LL;
  LODWORD(v7) = *(_BYTE *)(a1 + 4) != 0;
  HIDWORD(v7) = *(_DWORD *)a1;
  while ( 1 )
  {
    v1 = HvcallpExtendedFastHypercall(65713LL, (__int64)v6, 24LL);
    if ( !HvlpHvStatusIsInsufficientMemory(v1) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v3, v2, v4) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v3);
}

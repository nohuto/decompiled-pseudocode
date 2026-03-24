/*
 * XREFs of HvlDmaAttachDeviceDomain @ 0x140273260
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     HvlpHandleInsufficientMemory @ 0x1401B3ABC (HvlpHandleInsufficientMemory.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1401B3ED4 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvcallpExtendedFastHypercall @ 0x1401C7290 (HvcallpExtendedFastHypercall.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     HvlpHvToNtStatus @ 0x140279580 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlDmaAttachDeviceDomain(__int64 a1, __int64 a2)
{
  __int16 v5; // ax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD v9[4]; // [rsp+30h] [rbp-30h] BYREF

  memset(v9, 0, sizeof(v9));
  v9[0] = -1LL;
  if ( *(_BYTE *)(a2 + 4) )
    LODWORD(v9[2]) = v9[2] & 0xFFFFFFF0 | 1;
  else
    LODWORD(v9[2]) &= 0xFFFFFFF0;
  HIDWORD(v9[2]) = *(_DWORD *)a2;
  if ( *(_DWORD *)a1 == 1 )
  {
    v9[3] = v9[3] & 0x3FFFFFFFFFFFFFFFLL | 0x4000000000000000LL;
    LOWORD(v9[3]) = *(_WORD *)(a1 + 12);
    WORD1(v9[3]) = *(_WORD *)(a1 + 8);
    goto LABEL_10;
  }
  if ( *(_DWORD *)a1 != 4 )
    return 3221225659LL;
  if ( *(_QWORD *)(a1 + 8) > 0x3FFFFFFFFFFFFFFFuLL )
    return 3221225485LL;
  v9[3] = *(_QWORD *)(a1 + 8);
LABEL_10:
  while ( 1 )
  {
    v5 = HvcallpExtendedFastHypercall(65714LL, (__int64)v9, 32LL);
    if ( !HvlpHvStatusIsInsufficientMemory(v5) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v7, v6, v8) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v7);
}

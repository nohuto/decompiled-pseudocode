/*
 * XREFs of HvlDmaAllocateDeviceDomain @ 0x140286ED0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     HvlpHandleInsufficientMemory @ 0x1401BE9A0 (HvlpHandleInsufficientMemory.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1401BEAA0 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvcallpExtendedFastHypercall @ 0x1401CE3E0 (HvcallpExtendedFastHypercall.c)
 *     HvlpHvToNtStatus @ 0x14028D628 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlDmaAllocateDeviceDomain(int *a1)
{
  __int16 v1; // ax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  _QWORD v6[2]; // [rsp+30h] [rbp-38h] BYREF
  BOOL v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+44h] [rbp-24h]

  v6[1] = 0LL;
  v6[0] = -1LL;
  v7 = *((_BYTE *)a1 + 4) != 0;
  v8 = *a1;
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

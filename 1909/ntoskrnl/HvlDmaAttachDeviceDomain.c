/*
 * XREFs of HvlDmaAttachDeviceDomain @ 0x140286F70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     HvlpHandleInsufficientMemory @ 0x1401BE9A0 (HvlpHandleInsufficientMemory.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1401BEAA0 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvcallpExtendedFastHypercall @ 0x1401CE3E0 (HvcallpExtendedFastHypercall.c)
 *     HvlpHvToNtStatus @ 0x14028D628 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlDmaAttachDeviceDomain(__int64 a1, int *a2)
{
  __int16 v3; // ax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD v7[2]; // [rsp+30h] [rbp-30h] BYREF
  BOOL v8; // [rsp+40h] [rbp-20h]
  int v9; // [rsp+44h] [rbp-1Ch]
  __int64 v10; // [rsp+48h] [rbp-18h]

  v7[1] = 0LL;
  v7[0] = -1LL;
  v8 = *((_BYTE *)a2 + 4) != 0;
  v9 = *a2;
  if ( *(_DWORD *)a1 == 1 )
  {
    v10 = 0x4000000000000000LL;
    LOWORD(v10) = *(_WORD *)(a1 + 12);
    WORD1(v10) = *(_WORD *)(a1 + 8);
    goto LABEL_7;
  }
  if ( *(_DWORD *)a1 != 4 )
    return 3221225659LL;
  if ( *(_QWORD *)(a1 + 8) > 0x3FFFFFFFFFFFFFFFuLL )
    return 3221225485LL;
  v10 = *(_QWORD *)(a1 + 8);
LABEL_7:
  while ( 1 )
  {
    v3 = HvcallpExtendedFastHypercall(65714LL, (__int64)v7, 32LL);
    if ( !HvlpHvStatusIsInsufficientMemory(v3) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v5, v4, v6) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v5);
}

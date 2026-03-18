/*
 * XREFs of VslInitializeSecureKernelCfg @ 0x14028F878
 * Callers:
 *     MiInitializeKernelCfg @ 0x140A22EF8 (MiInitializeKernelCfg.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     qsort @ 0x1401A11F0 (qsort.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

NTSTATUS __fastcall VslInitializeSecureKernelCfg(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // r9
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  _QWORD v8[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v8, 0, 0x68uLL);
  v4 = 0LL;
  v8[1] = a1;
  v8[2] = a2;
  v5 = &v8[4];
  do
  {
    v6 = *(int *)&MiTrimPassToAge[v4 + 8];
    v4 += 4LL;
    v6 *= 2LL;
    *(v5 - 1) = qword_140467240[v6];
    *v5 = qword_140467248[v6];
    v5 += 2;
  }
  while ( v4 < 8 );
  qsort(&v8[3], 2uLL, 0x10uLL, MiKvaRangeSort);
  return VslpEnterIumSecureMode(2, 214LL, 0LL, (__int64)v8);
}

/*
 * XREFs of VslInitializeSecureKernelCfg @ 0x14027B6F8
 * Callers:
 *     MiInitSystem @ 0x1409BD5A8 (MiInitSystem.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     qsort @ 0x140196420 (qsort.c)
 */

NTSTATUS __fastcall VslInitializeSecureKernelCfg(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r9
  char *v3; // rdx
  __int64 v4; // rcx
  _BYTE v6[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v7; // [rsp+28h] [rbp-80h]
  __int64 v8; // [rsp+30h] [rbp-78h]
  _BYTE Base[8]; // [rsp+38h] [rbp-70h] BYREF
  char v10; // [rsp+40h] [rbp-68h] BYREF

  v2 = 0LL;
  v8 = a2;
  v7 = a1;
  v3 = &v10;
  do
  {
    v4 = *(int *)&MiTrimPassToAge[v2 + 8];
    v2 += 4LL;
    v4 *= 2LL;
    *((_QWORD *)v3 - 1) = qword_14043CB10[v4];
    *(_QWORD *)v3 = qword_14043CB18[v4];
    v3 += 16;
  }
  while ( v2 < 8 );
  qsort(Base, 2uLL, 0x10uLL, MiKvaRangeSort);
  return VslpEnterIumSecureMode(2u, 214LL, 0, (__int64)v6);
}

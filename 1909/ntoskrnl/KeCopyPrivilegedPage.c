/*
 * XREFs of KeCopyPrivilegedPage @ 0x1402A441C
 * Callers:
 *     MiCopyPage @ 0x14002C9C0 (MiCopyPage.c)
 *     MiFillPerSessionProtos @ 0x1408987B4 (MiFillPerSessionProtos.c)
 *     MiTradeBootImagePage @ 0x1409EF854 (MiTradeBootImagePage.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

NTSTATUS __fastcall KeCopyPrivilegedPage(__int64 a1, __int128 *a2, __int64 a3, __int128 *a4, __int64 a5, char a6)
{
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  _OWORD v13[7]; // [rsp+20h] [rbp-A8h] BYREF

  memset(v13, 0, 0x68uLL);
  v10 = *a4;
  *((_QWORD *)&v13[3] + 1) = a5;
  v11 = *a2;
  *((_QWORD *)&v13[0] + 1) = a3;
  LOBYTE(v13[4]) = a6 & 1;
  v13[1] = v10;
  *(_QWORD *)&v13[2] = a1;
  *(_OWORD *)((char *)&v13[2] + 8) = v11;
  return VslpEnterIumSecureMode(2, 244LL, 0LL, (__int64)v13);
}

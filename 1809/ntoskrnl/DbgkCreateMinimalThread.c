/*
 * XREFs of DbgkCreateMinimalThread @ 0x1408125AC
 * Callers:
 *     PspUserThreadStartup @ 0x1405F7E40 (PspUserThreadStartup.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     DbgkpSendApiMessage @ 0x140811DB4 (DbgkpSendApiMessage.c)
 */

__int64 __fastcall DbgkCreateMinimalThread(__int64 a1)
{
  _KPROCESS *v1; // rdi
  __int64 result; // rax
  _QWORD v4[34]; // [rsp+20h] [rbp-128h] BYREF

  v1 = *(_KPROCESS **)(a1 + 184);
  if ( v1[1].ActiveProcessors.Bitmap[6] )
  {
    memset(v4, 0, 0x40uLL);
    v4[7] = *(_QWORD *)(a1 + 1680);
    LODWORD(v4[5]) = 1;
    v4[0] = 0x800400018LL;
    return DbgkpSendApiMessage(v1, 1, (__int64)v4);
  }
  return result;
}

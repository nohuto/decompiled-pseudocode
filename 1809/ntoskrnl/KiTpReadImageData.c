/*
 * XREFs of KiTpReadImageData @ 0x140846F5C
 * Callers:
 *     KiTpSetupCompletion @ 0x140846FEC (KiTpSetupCompletion.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 __fastcall KiTpReadImageData(_KPROCESS *a1, const void *a2, void *a3, unsigned int a4)
{
  size_t v4; // r14
  _BYTE v9[48]; // [rsp+30h] [rbp-68h] BYREF

  v4 = a4;
  if ( a1 )
    KiStackAttachProcess(a1, 0LL, (__int64)v9);
  memmove(a3, a2, v4);
  if ( a1 )
    KiUnstackDetachProcess((__int64)v9, 0LL);
  return 0LL;
}

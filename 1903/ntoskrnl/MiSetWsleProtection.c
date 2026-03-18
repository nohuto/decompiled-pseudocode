/*
 * XREFs of MiSetWsleProtection @ 0x1401424B4
 * Callers:
 *     MiConvertPrivateToProto @ 0x1401416D0 (MiConvertPrivateToProto.c)
 *     MiBuildForkPte @ 0x1402E1E60 (MiBuildForkPte.c)
 * Callees:
 *     MiGetWsleContents @ 0x14008DDD0 (MiGetWsleContents.c)
 *     MiWriteWsle @ 0x1400F6984 (MiWriteWsle.c)
 */

__int64 __fastcall MiSetWsleProtection(__int64 a1, unsigned __int64 a2)
{
  char WsleContents; // al
  char v3; // r9
  __int64 v4; // r8
  __int64 v5; // rcx
  unsigned __int64 v6; // r10

  WsleContents = MiGetWsleContents(a1, a2);
  LOBYTE(v4) = (16 * (v3 & 7)) | WsleContents & 0x8F;
  return MiWriteWsle(v5, v6, v4);
}

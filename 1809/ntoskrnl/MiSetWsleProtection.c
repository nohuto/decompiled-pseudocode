/*
 * XREFs of MiSetWsleProtection @ 0x1400DB164
 * Callers:
 *     MiConvertPrivateToProto @ 0x140082EB0 (MiConvertPrivateToProto.c)
 *     MiBuildForkPte @ 0x1402C7BF0 (MiBuildForkPte.c)
 * Callees:
 *     MiGetWsleContents @ 0x140085F40 (MiGetWsleContents.c)
 *     MiWriteWsle @ 0x1400DB198 (MiWriteWsle.c)
 */

__int64 __fastcall MiSetWsleProtection(__int64 a1, unsigned __int64 a2)
{
  char WsleContents; // al
  char v3; // r9
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // r10

  WsleContents = MiGetWsleContents(a1, a2);
  LOBYTE(v4) = (16 * (v3 & 7)) | WsleContents & 0x8F;
  return MiWriteWsle(v5, v6, v4);
}

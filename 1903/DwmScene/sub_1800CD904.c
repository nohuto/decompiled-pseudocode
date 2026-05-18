/*
 * XREFs of sub_1800CD904 @ 0x1800CD904
 * Callers:
 *     sub_18001F6E4 @ 0x18001F6E4 (sub_18001F6E4.c)
 * Callees:
 *     sub_180063DA8 @ 0x180063DA8 (sub_180063DA8.c)
 */

_QWORD *__fastcall sub_1800CD904(_QWORD *a1)
{
  sub_180063DA8((__int64)a1);
  *a1 = &Spectre::Engine::DeviceShaderPipeline::`vftable';
  a1[12] = 0LL;
  a1[13] = 0LL;
  a1[14] = 0LL;
  a1[15] = 0LL;
  a1[16] = 0LL;
  a1[17] = 0LL;
  a1[18] = 0LL;
  a1[19] = 0LL;
  a1[20] = 0LL;
  a1[21] = 0LL;
  return a1;
}

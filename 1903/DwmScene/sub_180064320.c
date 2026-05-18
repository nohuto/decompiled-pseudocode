/*
 * XREFs of sub_180064320 @ 0x180064320
 * Callers:
 *     sub_180064C9C @ 0x180064C9C (sub_180064C9C.c)
 *     sub_180075B3C @ 0x180075B3C (sub_180075B3C.c)
 *     sub_18007625C @ 0x18007625C (sub_18007625C.c)
 *     sub_18007632C @ 0x18007632C (sub_18007632C.c)
 *     sub_1800955C0 @ 0x1800955C0 (sub_1800955C0.c)
 *     sub_1800965E0 @ 0x1800965E0 (sub_1800965E0.c)
 *     sub_18009D810 @ 0x18009D810 (sub_18009D810.c)
 *     sub_18009DF60 @ 0x18009DF60 (sub_18009DF60.c)
 *     sub_18009F5B0 @ 0x18009F5B0 (sub_18009F5B0.c)
 *     sub_1800CC090 @ 0x1800CC090 (sub_1800CC090.c)
 *     sub_1800D0348 @ 0x1800D0348 (sub_1800D0348.c)
 *     sub_1800D1CB0 @ 0x1800D1CB0 (sub_1800D1CB0.c)
 *     sub_1800D23C0 @ 0x1800D23C0 (sub_1800D23C0.c)
 *     sub_1800D27B0 @ 0x1800D27B0 (sub_1800D27B0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180064320(__int64 a1, int a2)
{
  return (a2 & *(_DWORD *)(a1 + 40)) != 0;
}

/*
 * XREFs of sub_180092D20 @ 0x180092D20
 * Callers:
 *     _snprintf @ 0x18008D660 (_snprintf.c)
 *     _snwprintf @ 0x18008D710 (_snwprintf.c)
 *     swprintf @ 0x18008DD50 (swprintf.c)
 *     sub_18008DE80 @ 0x18008DE80 (sub_18008DE80.c)
 *     sub_18008DF54 @ 0x18008DF54 (sub_18008DF54.c)
 *     sub_18008E01C @ 0x18008E01C (sub_18008E01C.c)
 *     sub_18008E0EC @ 0x18008E0EC (sub_18008E0EC.c)
 *     sprintf @ 0x180090DA0 (sprintf.c)
 *     sub_180093580 @ 0x180093580 (sub_180093580.c)
 *     sub_180098E98 @ 0x180098E98 (sub_180098E98.c)
 *     sub_180098F94 @ 0x180098F94 (sub_180098F94.c)
 *     sub_180099E2C @ 0x180099E2C (sub_180099E2C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180092D20(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 24) |= 0x20u;
  return 0xFFFFFFFFLL;
}

/*
 * XREFs of EvtIntReportAuthzEventAndSourceAsync @ 0x18010DEC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005287C @ 0x18005287C (sub_18005287C.c)
 */

_BOOL8 __fastcall EvtIntReportAuthzEventAndSourceAsync(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        USHORT a4,
        char a5,
        unsigned __int8 *a6,
        unsigned __int16 a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  return sub_18005287C(a1, 1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}

/*
 * XREFs of __tailMerge_gdi32_dll @ 0x18008D8E2
 * Callers:
 *     __imp_load_GetStockObject @ 0x18008D8D6 (__imp_load_GetStockObject.c)
 *     __imp_load_CreateCompatibleBitmap @ 0x18008D961 (__imp_load_CreateCompatibleBitmap.c)
 *     __imp_load_DeleteObject @ 0x18008D973 (__imp_load_DeleteObject.c)
 *     __imp_load_CombineRgn @ 0x18008D985 (__imp_load_CombineRgn.c)
 *     __imp_load_CreateRectRgnIndirect @ 0x18008D997 (__imp_load_CreateRectRgnIndirect.c)
 *     __imp_load_GetObjectW @ 0x18008D9A9 (__imp_load_GetObjectW.c)
 *     __imp_load_CreateDIBSection @ 0x18008D9BB (__imp_load_CreateDIBSection.c)
 *     __imp_load_CreateCompatibleDC @ 0x18008D9CD (__imp_load_CreateCompatibleDC.c)
 *     __imp_load_SelectObject @ 0x18008D9DF (__imp_load_SelectObject.c)
 *     __imp_load_DeleteDC @ 0x18008D9F1 (__imp_load_DeleteDC.c)
 *     __imp_load_GetDIBits @ 0x18008DA03 (__imp_load_GetDIBits.c)
 *     __imp_load_SetDIBits @ 0x18008DA15 (__imp_load_SetDIBits.c)
 *     __imp_load_StretchDIBits @ 0x18008DA27 (__imp_load_StretchDIBits.c)
 *     __imp_load_GdiAlphaBlend @ 0x18008DA39 (__imp_load_GdiAlphaBlend.c)
 *     __imp_load_SetBkColor @ 0x18008DA4B (__imp_load_SetBkColor.c)
 *     __imp_load_BitBlt @ 0x18008DA5D (__imp_load_BitBlt.c)
 *     __imp_load_GetDeviceCaps @ 0x18008DA6F (__imp_load_GetDeviceCaps.c)
 *     __imp_load_SetStretchBltMode @ 0x18008E71F (__imp_load_SetStretchBltMode.c)
 *     __imp_load_SetBkMode @ 0x18008E731 (__imp_load_SetBkMode.c)
 *     __imp_load_StretchBlt @ 0x18008E743 (__imp_load_StretchBlt.c)
 *     __imp_load_CreateSolidBrush @ 0x18008E755 (__imp_load_CreateSolidBrush.c)
 *     __imp_load_GetCurrentObject @ 0x18008E767 (__imp_load_GetCurrentObject.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180085E40 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_gdi32_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_GDI32_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}

/*
 * XREFs of __tailMerge_gdi32_dll @ 0x180087F1C
 * Callers:
 *     __imp_load_GetStockObject @ 0x180087F10 (__imp_load_GetStockObject.c)
 *     __imp_load_CombineRgn @ 0x180087F9B (__imp_load_CombineRgn.c)
 *     __imp_load_DeleteObject @ 0x180087FAD (__imp_load_DeleteObject.c)
 *     __imp_load_CreateRectRgnIndirect @ 0x180087FBF (__imp_load_CreateRectRgnIndirect.c)
 *     __imp_load_CreateCompatibleBitmap @ 0x180087FD1 (__imp_load_CreateCompatibleBitmap.c)
 *     __imp_load_GetObjectW @ 0x180087FE3 (__imp_load_GetObjectW.c)
 *     __imp_load_CreateDIBSection @ 0x180087FF5 (__imp_load_CreateDIBSection.c)
 *     __imp_load_CreateCompatibleDC @ 0x180088007 (__imp_load_CreateCompatibleDC.c)
 *     __imp_load_SelectObject @ 0x180088019 (__imp_load_SelectObject.c)
 *     __imp_load_DeleteDC @ 0x18008802B (__imp_load_DeleteDC.c)
 *     __imp_load_GetDIBits @ 0x18008803D (__imp_load_GetDIBits.c)
 *     __imp_load_SetDIBits @ 0x18008804F (__imp_load_SetDIBits.c)
 *     __imp_load_StretchDIBits @ 0x180088061 (__imp_load_StretchDIBits.c)
 *     __imp_load_GdiAlphaBlend @ 0x180088073 (__imp_load_GdiAlphaBlend.c)
 *     __imp_load_SetBkColor @ 0x180088085 (__imp_load_SetBkColor.c)
 *     __imp_load_BitBlt @ 0x180088097 (__imp_load_BitBlt.c)
 *     __imp_load_GetDeviceCaps @ 0x1800880A9 (__imp_load_GetDeviceCaps.c)
 *     __imp_load_SetStretchBltMode @ 0x180088BC7 (__imp_load_SetStretchBltMode.c)
 *     __imp_load_SetBkMode @ 0x180088BD9 (__imp_load_SetBkMode.c)
 *     __imp_load_StretchBlt @ 0x180088BEB (__imp_load_StretchBlt.c)
 *     __imp_load_CreateSolidBrush @ 0x180088BFD (__imp_load_CreateSolidBrush.c)
 *     __imp_load_GetCurrentObject @ 0x180088C0F (__imp_load_GetCurrentObject.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180080A00 (__delayLoadHelper2.c)
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

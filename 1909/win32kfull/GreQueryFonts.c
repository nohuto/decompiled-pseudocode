/*
 * XREFs of GreQueryFonts @ 0x1C00F9CEC
 * Callers:
 *     NtGdiQueryFonts @ 0x1C00F9BB0 (NtGdiQueryFonts.c)
 * Callees:
 *     ?QueryFonts@PUBLIC_PFTOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z @ 0x1C00F9D1C (-QueryFonts@PUBLIC_PFTOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall GreQueryFonts(struct _UNIVERSAL_FONT_ID *a1, unsigned int a2, union _LARGE_INTEGER *a3)
{
  struct _FONTHASH **v4; // [rsp+48h] [rbp+20h] BYREF

  v4 = gpPFTPublic;
  return PUBLIC_PFTOBJ::QueryFonts((PUBLIC_PFTOBJ *)&v4, a1, a2, a3);
}

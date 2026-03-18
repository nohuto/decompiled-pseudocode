/*
 * XREFs of ?vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ @ 0x1C02B43C0
 * Callers:
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C0131E28 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?CleanUpPFF@@YAXPEAVPFF@@@Z @ 0x1C02B38C0 (-CleanUpPFF@@YAXPEAVPFF@@@Z.c)
 * Callees:
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C007B208 (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C007B268 (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 */

void __fastcall PFFOBJ::vPFFC_DeleteAndCleanup(PFFOBJ *this)
{
  _BYTE v1[40]; // [rsp+20h] [rbp-28h] BYREF

  memset(v1, 0, 24);
  PFFOBJ::vPFFC_Delete(this, (struct PFFCLEANUP *)v1);
  vCleanupFontFile((struct PFFCLEANUP *)v1);
}

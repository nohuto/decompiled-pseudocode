/*
 * XREFs of ?CleanUpPFF@@YAXPEAVPFF@@@Z @ 0x1C02893E0
 * Callers:
 *     <none>
 * Callees:
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C0081004 (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C00C5438 (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 */

void __fastcall CleanUpPFF(struct PFF *a1)
{
  struct PFF *v1; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v2[40]; // [rsp+30h] [rbp-28h] BYREF

  v1 = a1;
  PFFOBJ::vPFFC_Delete((PFFOBJ *)&v1, (struct PFFCLEANUP *)v2);
  vCleanupFontFile((struct PFFCLEANUP *)v2);
}

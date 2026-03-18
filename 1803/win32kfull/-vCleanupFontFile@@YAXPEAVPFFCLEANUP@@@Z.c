/*
 * XREFs of ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C00C5438
 * Callers:
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C0081170 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00877F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C00C6D84 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C00C8994 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C00C8B3C (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     ?CleanUpPFF@@YAXPEAVPFF@@@Z @ 0x1C02893E0 (-CleanUpPFF@@YAXPEAVPFF@@@Z.c)
 * Callees:
 *     ?UnloadFontFile@PDEVOBJ@@QEAAH_K@Z @ 0x1C00CE1F8 (-UnloadFontFile@PDEVOBJ@@QEAAH_K@Z.c)
 */

void __fastcall vCleanupFontFile(struct PFFCLEANUP *a1)
{
  unsigned __int64 v1; // rdx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 1);
  v2 = *(_QWORD *)a1;
  if ( v1 )
  {
    if ( !*((_QWORD *)a1 + 2) )
      PDEVOBJ::UnloadFontFile((PDEVOBJ *)&v2, v1);
  }
}

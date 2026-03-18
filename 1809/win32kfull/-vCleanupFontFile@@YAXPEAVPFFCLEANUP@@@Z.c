/*
 * XREFs of ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C00CBC24
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C0086DC0 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C00CB410 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C00CB9F8 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C0126420 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?CleanUpPFF@@YAXPEAVPFF@@@Z @ 0x1C029CFF0 (-CleanUpPFF@@YAXPEAVPFF@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vCleanupFontFile(struct PFFCLEANUP *a1)
{
  if ( *((_QWORD *)a1 + 1) )
  {
    if ( !*((_QWORD *)a1 + 2) )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)a1 + 3056LL))(*((_QWORD *)a1 + 1));
  }
}

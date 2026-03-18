/*
 * XREFs of ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C029D850
 * Callers:
 *     ?bFilteredOut@PFEOBJ@@QEAAHPEAU_EFFILTER_INFO@@@Z @ 0x1C00244E8 (-bFilteredOut@PFEOBJ@@QEAAHPEAU_EFFILTER_INFO@@@Z.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0027330 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C0028020 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C00CB410 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C012618C (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 *     ?bAddPvtData@PFFOBJ@@QEAAHK@Z @ 0x1C029D168 (-bAddPvtData@PFFOBJ@@QEAAHK@Z.c)
 * Callees:
 *     <none>
 */

struct tagPvtData *__fastcall PFFOBJ::pPvtDataMatch(PFFOBJ *this)
{
  __int64 i; // rbx

  for ( i = *(_QWORD *)(*(_QWORD *)this + 144LL);
        i
     && ((*(_DWORD *)(i + 8) & 4) == 0 || *(_DWORD *)(i + 12) != (unsigned int)PsGetCurrentThreadId())
     && *(_DWORD *)(i + 12) != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC);
        i = *(_QWORD *)(i + 16) )
  {
    ;
  }
  return (struct tagPvtData *)i;
}

/*
 * XREFs of ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C013F7CC
 * Callers:
 *     prfntDeactivateEudcRFONTs @ 0x1C008E608 (prfntDeactivateEudcRFONTs.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0096348 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     prfntKillList @ 0x1C011FB00 (prfntKillList.c)
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C013F184 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::cInactive(PDEVOBJ *this)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x800000) != 0 )
    return *(unsigned int *)(*(_QWORD *)(v1 + 3520) + 1536LL);
  else
    return *(unsigned int *)(v1 + 1536);
}

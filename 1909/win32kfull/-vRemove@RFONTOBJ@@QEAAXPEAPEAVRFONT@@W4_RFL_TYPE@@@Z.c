/*
 * XREFs of ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C00965B8
 * Callers:
 *     prfntDeactivateEudcRFONTs @ 0x1C008E608 (prfntDeactivateEudcRFONTs.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0096348 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00B1A70 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C00B8770 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     prfntKillList @ 0x1C011FB00 (prfntKillList.c)
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C013F184 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C02A18F0 (vRemoveAllInactiveRFONTs.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RFONTOBJ::vRemove(__int64 a1, unsigned __int64 *a2, int a3)
{
  __int64 *v4; // r8
  __int64 v5; // r11
  unsigned __int64 v6; // r9
  __int64 v7; // r10
  unsigned __int64 v8; // rcx
  __int128 v9; // rax

  if ( a3 )
  {
    if ( a3 != 1 )
      return v9;
    v4 = (__int64 *)(*(_QWORD *)a1 + 664LL);
    v5 = *v4;
    v6 = *(_QWORD *)(*(_QWORD *)a1 + 672LL);
    v7 = (*v4 + 664) & -(__int64)(*v4 != 0);
    v8 = v6 + 664;
  }
  else
  {
    v4 = (__int64 *)(*(_QWORD *)a1 + 488LL);
    v5 = *v4;
    v6 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
    v7 = (*v4 + 488) & -(__int64)(*v4 != 0);
    v8 = v6 + 488;
  }
  v9 = -(__int128)v6;
  *((_QWORD *)&v9 + 1) &= v8;
  if ( v5 )
  {
    *(_QWORD *)(v7 + 8) = v6;
    if ( *((_QWORD *)&v9 + 1) )
    {
      *(_QWORD *)&v9 = *v4;
      **((_QWORD **)&v9 + 1) = *v4;
    }
  }
  else
  {
    *a2 = v6;
    if ( *((_QWORD *)&v9 + 1) )
      **((_QWORD **)&v9 + 1) = 0LL;
  }
  return v9;
}

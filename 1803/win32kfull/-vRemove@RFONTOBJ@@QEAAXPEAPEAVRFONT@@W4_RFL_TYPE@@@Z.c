/*
 * XREFs of ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0088CB4
 * Callers:
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C0003478 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C0086C60 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00877F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0088DC8 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     prfntKillList @ 0x1C00C5374 (prfntKillList.c)
 *     prfntDeactivateEudcRFONTs @ 0x1C00C86B4 (prfntDeactivateEudcRFONTs.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C0278678 (vRemoveAllInactiveRFONTs.c)
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
    v4 = (__int64 *)(*(_QWORD *)a1 + 648LL);
    v5 = *v4;
    v6 = *(_QWORD *)(*(_QWORD *)a1 + 656LL);
    v7 = (*v4 + 648) & -(__int64)(*v4 != 0);
    v8 = v6 + 648;
  }
  else
  {
    v4 = (__int64 *)(*(_QWORD *)a1 + 480LL);
    v5 = *v4;
    v6 = *(_QWORD *)(*(_QWORD *)a1 + 488LL);
    v7 = (*v4 + 480) & -(__int64)(*v4 != 0);
    v8 = v6 + 480;
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

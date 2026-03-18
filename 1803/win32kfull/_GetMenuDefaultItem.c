/*
 * XREFs of _GetMenuDefaultItem @ 0x1C022B9A8
 * Callers:
 *     xxxMNDoubleClick @ 0x1C01E6710 (xxxMNDoubleClick.c)
 *     ?SetupFakeMDIAppStuff@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C01FBC8C (-SetupFakeMDIAppStuff@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     _GetMenuDefaultItem @ 0x1C022B9A8 (_GetMenuDefaultItem.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     _GetMenuDefaultItem @ 0x1C022B9A8 (_GetMenuDefaultItem.c)
 */

__int64 __fastcall GetMenuDefaultItem(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rdx
  signed int v5; // edi
  _QWORD *v6; // rsi
  int v7; // ebp
  int v8; // ecx
  __int64 v9; // rcx
  unsigned int MenuDefaultItem; // ebx
  _QWORD v12[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h]

  SmartObjStackRefBase<tagMENU>::Init(v12, 0LL);
  v13 = 0LL;
  v5 = 0;
  v6 = *(_QWORD **)(a1 + 88);
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL);
  if ( v7 <= 0 )
  {
LABEL_15:
    MenuDefaultItem = -1;
  }
  else
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(*v6 + 4LL);
      if ( (v8 & 0x1000) != 0 && ((v8 & 3) == 0 || (a3 & 1) != 0) )
        break;
      ++v5;
      v6 += 12;
      if ( v5 >= v7 )
        goto LABEL_11;
    }
    if ( (a3 & 2) != 0 )
    {
      v4 = v6[2];
      if ( v4 )
      {
        v13 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v12, v4);
        v9 = v13;
        if ( !v13 )
          v9 = *(_QWORD *)v12[0];
        MenuDefaultItem = GetMenuDefaultItem(v9, a2, a3);
        if ( MenuDefaultItem != -1 )
          goto LABEL_16;
      }
    }
LABEL_11:
    if ( v5 >= v7 )
      goto LABEL_15;
    if ( a2 )
      MenuDefaultItem = v5;
    else
      MenuDefaultItem = *(_DWORD *)(*v6 + 8LL);
  }
LABEL_16:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v12, v4);
  return MenuDefaultItem;
}

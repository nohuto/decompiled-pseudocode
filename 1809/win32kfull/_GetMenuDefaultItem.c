/*
 * XREFs of _GetMenuDefaultItem @ 0x1C0241924
 * Callers:
 *     xxxMNDoubleClick @ 0x1C020C670 (xxxMNDoubleClick.c)
 *     ?SetupFakeMDIAppStuff@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C022470C (-SetupFakeMDIAppStuff@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     _GetMenuDefaultItem @ 0x1C0241924 (_GetMenuDefaultItem.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     _GetMenuDefaultItem @ 0x1C0241924 (_GetMenuDefaultItem.c)
 */

__int64 __fastcall GetMenuDefaultItem(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rdx
  signed int v7; // edi
  _QWORD *v8; // rsi
  int v9; // ebp
  int v10; // ecx
  __int64 v11; // rcx
  unsigned int MenuDefaultItem; // ebx
  _QWORD v14[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+30h] [rbp-28h]

  SmartObjStackRefBase<tagMENU>::Init(v14, 0LL);
  v15 = 0LL;
  v7 = 0;
  v8 = *(_QWORD **)(a1 + 88);
  v9 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL);
  if ( v9 <= 0 )
  {
LABEL_15:
    MenuDefaultItem = -1;
  }
  else
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(*v8 + 4LL);
      if ( (v10 & 0x1000) != 0 && ((v10 & 3) == 0 || (a3 & 1) != 0) )
        break;
      ++v7;
      v8 += 12;
      if ( v7 >= v9 )
        goto LABEL_11;
    }
    if ( (a3 & 2) != 0 )
    {
      v6 = v8[2];
      if ( v6 )
      {
        v15 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v14, v6);
        v11 = v15;
        if ( !v15 )
          v11 = *(_QWORD *)v14[0];
        MenuDefaultItem = GetMenuDefaultItem(v11, a2, a3);
        if ( MenuDefaultItem != -1 )
          goto LABEL_16;
      }
    }
LABEL_11:
    if ( v7 >= v9 )
      goto LABEL_15;
    if ( a2 )
      MenuDefaultItem = v7;
    else
      MenuDefaultItem = *(_DWORD *)(*v8 + 8LL);
  }
LABEL_16:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v14, v6);
  return MenuDefaultItem;
}

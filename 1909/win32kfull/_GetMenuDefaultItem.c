/*
 * XREFs of _GetMenuDefaultItem @ 0x1C0259FC4
 * Callers:
 *     xxxMNDoubleClick @ 0x1C0223C50 (xxxMNDoubleClick.c)
 *     ?SetupFakeMDIAppStuff@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C023C57C (-SetupFakeMDIAppStuff@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     _GetMenuDefaultItem @ 0x1C0259FC4 (_GetMenuDefaultItem.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     _GetMenuDefaultItem @ 0x1C0259FC4 (_GetMenuDefaultItem.c)
 */

__int64 __fastcall GetMenuDefaultItem(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  signed int v8; // edi
  _QWORD *v9; // rsi
  int v10; // ebp
  int v11; // ecx
  __int64 v12; // rcx
  unsigned int MenuDefaultItem; // ebx
  _QWORD v15[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-28h]

  SmartObjStackRefBase<tagMENU>::Init(v15, 0LL);
  v16 = 0LL;
  v8 = 0;
  v9 = *(_QWORD **)(a1 + 88);
  v10 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL);
  if ( v10 <= 0 )
  {
LABEL_15:
    MenuDefaultItem = -1;
  }
  else
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(*v9 + 4LL);
      if ( (v11 & 0x1000) != 0 && ((v11 & 3) == 0 || (a3 & 1) != 0) )
        break;
      ++v8;
      v9 += 12;
      if ( v8 >= v10 )
        goto LABEL_11;
    }
    if ( (a3 & 2) != 0 )
    {
      v6 = v9[2];
      if ( v6 )
      {
        v16 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v15, v6);
        v12 = v16;
        if ( !v16 )
          v12 = *(_QWORD *)v15[0];
        MenuDefaultItem = GetMenuDefaultItem(v12, a2, a3);
        if ( MenuDefaultItem != -1 )
          goto LABEL_16;
      }
    }
LABEL_11:
    if ( v8 >= v10 )
      goto LABEL_15;
    if ( a2 )
      MenuDefaultItem = v8;
    else
      MenuDefaultItem = *(_DWORD *)(*v9 + 8LL);
  }
LABEL_16:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v15, v6, v7);
  return MenuDefaultItem;
}

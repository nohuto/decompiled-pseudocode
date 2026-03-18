/*
 * XREFs of _GetMenuDefaultItem @ 0x1C025A704
 * Callers:
 *     xxxMNDoubleClick @ 0x1C0224190 (xxxMNDoubleClick.c)
 *     ?SetupFakeMDIAppStuff@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C023CB9C (-SetupFakeMDIAppStuff@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     _GetMenuDefaultItem @ 0x1C025A704 (_GetMenuDefaultItem.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     _GetMenuDefaultItem @ 0x1C025A704 (_GetMenuDefaultItem.c)
 */

__int64 __fastcall GetMenuDefaultItem(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  signed int v9; // edi
  _QWORD *v10; // rsi
  int v11; // ebp
  int v12; // ecx
  __int64 v13; // rcx
  unsigned int MenuDefaultItem; // ebx
  _QWORD v16[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+30h] [rbp-28h]

  SmartObjStackRefBase<tagMENU>::Init(v16, 0LL);
  v17 = 0LL;
  v9 = 0;
  v10 = *(_QWORD **)(a1 + 88);
  v11 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL);
  if ( v11 <= 0 )
  {
LABEL_15:
    MenuDefaultItem = -1;
  }
  else
  {
    while ( 1 )
    {
      v12 = *(_DWORD *)(*v10 + 4LL);
      if ( (v12 & 0x1000) != 0 && ((v12 & 3) == 0 || (a3 & 1) != 0) )
        break;
      ++v9;
      v10 += 12;
      if ( v9 >= v11 )
        goto LABEL_11;
    }
    if ( (a3 & 2) != 0 )
    {
      v6 = v10[2];
      if ( v6 )
      {
        v17 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v16, v6);
        v13 = v17;
        if ( !v17 )
          v13 = *(_QWORD *)v16[0];
        MenuDefaultItem = GetMenuDefaultItem(v13, a2, a3);
        if ( MenuDefaultItem != -1 )
          goto LABEL_16;
      }
    }
LABEL_11:
    if ( v9 >= v11 )
      goto LABEL_15;
    if ( a2 )
      MenuDefaultItem = v9;
    else
      MenuDefaultItem = *(_DWORD *)(*v10 + 8LL);
  }
LABEL_16:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v16, v6, v7, v8);
  return MenuDefaultItem;
}

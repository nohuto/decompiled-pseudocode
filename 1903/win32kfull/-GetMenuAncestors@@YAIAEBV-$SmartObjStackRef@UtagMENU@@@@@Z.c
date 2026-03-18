/*
 * XREFs of ?GetMenuAncestors@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0129020
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C002256C (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     ?GetMenuAncestors@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0129020 (-GetMenuAncestors@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?GetMenuAncestors@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0129020 (-GetMenuAncestors@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 */

__int64 __fastcall GetMenuAncestors(__int64 a1)
{
  unsigned int v1; // edi
  _QWORD *v2; // rsi
  unsigned int MenuAncestors; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  v2 = *(_QWORD **)(**(_QWORD **)a1 + 104LL);
  while ( v2 )
  {
    SmartObjStackRefBase<tagMENU>::Init(v8, v2[1]);
    v8[2] = 0LL;
    MenuAncestors = GetMenuAncestors(v8);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v8, v5, v6, v7);
    v2 = (_QWORD *)*v2;
    if ( MenuAncestors > v1 )
      v1 = MenuAncestors;
  }
  return v1 + 1;
}

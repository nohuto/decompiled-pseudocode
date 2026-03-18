/*
 * XREFs of ?ItemContainingSubMenu@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_K@Z @ 0x1C024D7F4
 * Callers:
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C0159810 (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     ?ItemContainingSubMenu@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_K@Z @ 0x1C024D7F4 (-ItemContainingSubMenu@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_K@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?ItemContainingSubMenu@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_K@Z @ 0x1C024D7F4 (-ItemContainingSubMenu@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_K@Z.c)
 */

__int64 __fastcall ItemContainingSubMenu(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // edi
  _QWORD *i; // rsi
  __int64 v7; // rdx
  bool v8; // bl
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(**(_QWORD **)a1 + 40LL);
  v4 = *(_DWORD *)(v3 + 44) - 1;
  if ( !*(_DWORD *)(v3 + 44) )
    return v4 | (unsigned int)v3;
  for ( i = (_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 88LL) + 96LL * (int)v4); (v4 & 0x80000000) == 0; --v4 )
  {
    v7 = i[2];
    if ( v7 )
    {
      if ( v7 == a2 )
        return v4;
      SmartObjStackRefBase<tagMENU>::Init(v12, v7);
      v12[2] = 0LL;
      v8 = (unsigned int)ItemContainingSubMenu(v12) != -1;
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v12, v9, v10, v11);
      if ( v8 )
        return v4;
    }
    else if ( *(_DWORD *)(*i + 8LL) == a2 )
    {
      return v4;
    }
    i -= 12;
  }
  return v4;
}

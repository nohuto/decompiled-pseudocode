/*
 * XREFs of ?GetMenuDepth@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C00F4680
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C002133C (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     ?GetMenuDepth@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C00F4680 (-GetMenuDepth@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?GetMenuDepth@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C00F4680 (-GetMenuDepth@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 */

__int64 __fastcall GetMenuDepth(__int64 a1, int a2)
{
  unsigned int v2; // esi
  int v3; // ebp
  int v4; // ebx
  __int64 *v5; // rdi
  unsigned int MenuDepth; // ebp
  __int64 v8; // rdx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v3 = a2;
  if ( !a2 )
    return 25LL;
  v4 = *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 40LL) + 44LL);
  if ( v4 )
  {
    v5 = (__int64 *)(*(_QWORD *)(**(_QWORD **)a1 + 88LL) + 16LL);
    do
    {
      --v4;
      if ( *v5 )
      {
        SmartObjStackRefBase<tagMENU>::Init(v9, *v5);
        v9[2] = 0LL;
        MenuDepth = GetMenuDepth(v9, (unsigned int)(v3 - 1));
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v9, v8);
        if ( MenuDepth > v2 )
        {
          if ( MenuDepth >= 0x19 )
            return 25LL;
          v2 = MenuDepth;
        }
        v3 = a2;
      }
      v5 += 12;
    }
    while ( v4 );
  }
  return v2 + 1;
}

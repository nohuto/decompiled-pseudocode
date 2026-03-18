/*
 * XREFs of ?GetMenuDepth@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C01157EC
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C002256C (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     ?GetMenuDepth@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C01157EC (-GetMenuDepth@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?GetMenuDepth@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C01157EC (-GetMenuDepth@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 */

__int64 __fastcall GetMenuDepth(__int64 a1, int a2)
{
  unsigned int v2; // esi
  int v4; // edi
  __int64 *v5; // rbx
  unsigned int MenuDepth; // ebp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
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
        SmartObjStackRefBase<tagMENU>::Init(v11, *v5);
        v11[2] = 0LL;
        MenuDepth = GetMenuDepth(v11, (unsigned int)(a2 - 1));
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v11, v8, v9, v10);
        if ( MenuDepth > v2 )
        {
          if ( MenuDepth >= 0x19 )
            return 25LL;
          v2 = MenuDepth;
        }
      }
      v5 += 12;
    }
    while ( v4 );
  }
  return v2 + 1;
}

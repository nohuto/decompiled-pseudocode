/*
 * XREFs of _GetSubMenu @ 0x1C012E4C0
 * Callers:
 *     xxxGetSystemMenu @ 0x1C00FB780 (xxxGetSystemMenu.c)
 *     xxxGetSysMenu @ 0x1C0128BFC (xxxGetSysMenu.c)
 *     xxxSetSysMenu @ 0x1C012C660 (xxxSetSysMenu.c)
 *     xxxMNKeyDown @ 0x1C0224370 (xxxMNKeyDown.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C02411AC (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall GetSubMenu(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rbx
  _QWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h]
  _QWORD v10[4]; // [rsp+38h] [rbp-20h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v8, 0LL);
  v9 = 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v10, a1);
  v10[2] = 0LL;
  v2 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v10[0] + 40LL) + 44LL);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v10, *(_QWORD *)v10[0], v3);
  if ( v2 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL);
    if ( v4 )
    {
      v9 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v8, v4);
    }
  }
  v6 = v9;
  if ( !v9 )
    v6 = *(_QWORD *)v8[0];
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v8, v4, v5);
  return v6;
}

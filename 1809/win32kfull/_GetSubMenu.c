/*
 * XREFs of _GetSubMenu @ 0x1C00A6A3C
 * Callers:
 *     xxxGetSysMenu @ 0x1C00A60E8 (xxxGetSysMenu.c)
 *     xxxGetSystemMenu @ 0x1C00A625C (xxxGetSystemMenu.c)
 *     xxxSetSysMenu @ 0x1C00A6430 (xxxSetSysMenu.c)
 *     xxxMNKeyDown @ 0x1C020CD34 (xxxMNKeyDown.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C0228D28 (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall GetSubMenu(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rbx
  _QWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+30h] [rbp-28h]
  _QWORD v8[4]; // [rsp+38h] [rbp-20h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v6, 0LL);
  v7 = 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v8, a1);
  v8[2] = 0LL;
  v2 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v8[0] + 40LL) + 44LL);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v8, *(_QWORD *)v8[0]);
  if ( v2 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL);
    if ( v3 )
    {
      v7 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v6);
    }
  }
  v4 = v7;
  if ( !v7 )
    v4 = *(_QWORD *)v6[0];
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v6, v3);
  return v4;
}

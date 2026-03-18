/*
 * XREFs of ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C015A7C0
 * Callers:
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1C015A730 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 *     xxxHiliteMenuItem @ 0x1C024D170 (xxxHiliteMenuItem.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNLookUpItem @ 0x1C004A90C (MNLookUpItem.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z @ 0x1C01021C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z.c)
 *     ?ItemContainingSubMenu@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_K@Z @ 0x1C024D0B4 (-ItemContainingSubMenu@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_K@Z.c)
 */

__int64 __fastcall UT_FindTopLevelMenuIndex(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  _QWORD *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // ebx
  _QWORD v11[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v12; // [rsp+30h] [rbp-10h]
  __int64 v13; // [rsp+50h] [rbp+10h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v11, 0LL);
  v12 = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  v13 = *(_QWORD *)v11[0];
  if ( !v4 )
    v4 = **(_QWORD **)a1;
  v5 = MNLookUpItem(v4, a2, 0LL, &v13);
  v12 = 0LL;
  v6 = v5;
  SmartObjStackRefBase<tagMENU>::operator=(v11, v13);
  if ( !v6 || v6[2] )
  {
    v9 = -1;
  }
  else
  {
    SmartObjStackRef<tagMENU>::operator==((__int64)v11, a1);
    v9 = ItemContainingSubMenu(a1);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v11, v7, v8);
  return v9;
}

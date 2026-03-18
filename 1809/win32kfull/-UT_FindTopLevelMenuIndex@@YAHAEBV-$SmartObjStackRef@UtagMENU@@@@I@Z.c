/*
 * XREFs of ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C01529CC
 * Callers:
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1C015293C (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 *     xxxHiliteMenuItem @ 0x1C0234C70 (xxxHiliteMenuItem.c)
 * Callees:
 *     MNLookUpItem @ 0x1C0021208 (MNLookUpItem.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z @ 0x1C011DEC4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z.c)
 *     ?ItemContainingSubMenu@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_K@Z @ 0x1C0234BB4 (-ItemContainingSubMenu@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_K@Z.c)
 */

__int64 __fastcall UT_FindTopLevelMenuIndex(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  _QWORD *v6; // rsi
  __int64 v7; // rdx
  unsigned int v8; // ebx
  _QWORD v10[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v11; // [rsp+30h] [rbp-10h]
  __int64 v12; // [rsp+50h] [rbp+10h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v10, 0LL);
  v11 = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  v12 = *(_QWORD *)v10[0];
  if ( !v4 )
    v4 = **(_QWORD **)a1;
  v5 = MNLookUpItem(v4, a2, 0, &v12);
  v11 = 0LL;
  v6 = v5;
  SmartObjStackRefBase<tagMENU>::operator=(v10, v12);
  if ( !v6 || v6[2] )
  {
    v8 = -1;
  }
  else
  {
    SmartObjStackRef<tagMENU>::operator==((__int64)v10, a1);
    v8 = ItemContainingSubMenu(a1);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v10, v7);
  return v8;
}

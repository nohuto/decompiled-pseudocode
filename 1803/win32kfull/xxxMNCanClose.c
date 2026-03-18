/*
 * XREFs of xxxMNCanClose @ 0x1C00C3104
 * Callers:
 *     xxxDCETrackCaptionButton @ 0x1C000B108 (xxxDCETrackCaptionButton.c)
 *     xxxDrawCaptionBar @ 0x1C00C2CE4 (xxxDrawCaptionBar.c)
 *     xxxCalcCaptionButton @ 0x1C0202828 (xxxCalcCaptionButton.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C0026274 (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x1C0026290 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     MNLookUpItem @ 0x1C0039D7C (MNLookUpItem.c)
 *     xxxGetSysMenuPtr @ 0x1C0039F88 (xxxGetSysMenuPtr.c)
 */

__int64 __fastcall xxxMNCanClose(_QWORD *a1)
{
  char v2; // di
  __int64 v3; // rdx
  __int64 SysMenuPtr; // rax
  unsigned int v5; // ebx
  bool v6; // si
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD v13[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v14; // [rsp+30h] [rbp-20h]
  _QWORD v15[3]; // [rsp+38h] [rbp-18h] BYREF

  v2 = 0;
  SmartObjStackRefBase<tagMENU>::Init(v13, 0LL);
  v14 = 0LL;
  v3 = *(_QWORD *)(a1[14] + 8LL);
  if ( (*(_BYTE *)(v3 + 9) & 2) != 0 )
    goto LABEL_7;
  SysMenuPtr = xxxGetSysMenuPtr(a1, v3);
  v14 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v13, SysMenuPtr);
  v5 = 1;
  v6 = 1;
  if ( SmartObjStackRef<tagMENU>::operator bool((__int64)v13) )
  {
    v8 = SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>((__int64)v15, (__int64)v13);
    v14 = *(_QWORD *)(v8 + 16);
    SmartObjStackRefBase<tagMENU>::operator=(v13, **(_QWORD **)v8);
    v2 = 1;
    if ( SmartObjStackRef<tagMENU>::operator bool((__int64)v13) )
      v6 = 0;
  }
  if ( (v2 & 1) != 0 )
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v15, v3);
  if ( v6 )
    goto LABEL_7;
  v9 = v14;
  if ( !v14 )
    v9 = *(_QWORD *)v13[0];
  v10 = MNLookUpItem(v9, 61536LL, 0, 0LL);
  if ( !v10 )
  {
    v11 = v14;
    if ( !v14 )
      v11 = *(_QWORD *)v13[0];
    v10 = MNLookUpItem(v11, 32864LL, 0, 0LL);
    if ( !v10 )
    {
      v12 = v14;
      if ( !v14 )
        v12 = *(_QWORD *)v13[0];
      v10 = MNLookUpItem(v12, 49264LL, 0, 0LL);
      if ( !v10 )
        goto LABEL_7;
    }
  }
  if ( (*(_DWORD *)(*v10 + 4LL) & 3) != 0 )
LABEL_7:
    v5 = 0;
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v13, v3);
  return v5;
}

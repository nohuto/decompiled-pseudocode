/*
 * XREFs of ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00289DC
 * Callers:
 *     xxxInsertMenuItem @ 0x1C00608B0 (xxxInsertMenuItem.c)
 *     xxxSetMenuItemInfo @ 0x1C012C204 (xxxSetMenuItemInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     _DestroyMenu @ 0x1C0028870 (_DestroyMenu.c)
 *     MNIsUAHMenu @ 0x1C0028E30 (MNIsUAHMenu.c)
 *     ??4?$SharedPointerFieldlpstr@G@tagITEM@@QEAAPEAGPEAG@Z @ 0x1C0028E58 (--4-$SharedPointerFieldlpstr@G@tagITEM@@QEAAPEAGPEAG@Z.c)
 *     ?UnlockSubMenu@@YAPEAUtagMENU@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0028F20 (-UnlockSubMenu@@YAPEAUtagMENU@@AEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?FreeItemString@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0028F60 (-FreeItemString@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     DesktopAlloc @ 0x1C0029280 (DesktopAlloc.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C00AAA18 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?GetMenuDepth@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C00EFF2C (-GetMenuDepth@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C00F56E8 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 *     ?RemoveParentMenu@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0100FB4 (-RemoveParentMenu@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z @ 0x1C01021C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z.c)
 *     ?GetMenuAncestors@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C01040D0 (-GetMenuAncestors@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C012DCDC (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1C01651E4 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 */

__int64 __fastcall SetLPITEMInfoNoRedraw(_QWORD **a1, __int64 *a2, __int64 a3, unsigned __int16 *a4, _DWORD *a5)
{
  int v9; // r13d
  int v10; // r12d
  _QWORD *v11; // rcx
  __int64 v12; // r8
  unsigned __int16 *v13; // r9
  int v14; // eax
  int v15; // r12d
  void *v16; // rax
  void *v17; // r12
  int v18; // r14d
  int v19; // eax
  __int64 v20; // rcx
  __int64 v22; // rcx
  __int64 *v23; // r14
  int v24; // r12d
  __int64 v25; // rdx
  int MenuDepth; // ebx
  _QWORD *v27; // rdx
  _QWORD *v28; // rax
  __int64 v29; // rcx
  __int128 v30; // [rsp+30h] [rbp-78h]
  __int128 v31; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v32[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v33; // [rsp+60h] [rbp-48h]
  _BYTE v34[24]; // [rsp+68h] [rbp-40h] BYREF

  v9 = 0;
  v10 = 0;
  *a5 = 0;
  v11 = a1[2];
  if ( !v11 )
    v11 = (_QWORD *)**a1;
  if ( (unsigned int)MNIsUAHMenu(v11) )
    *(_DWORD *)(*a2 + 104) = -1;
  v14 = *(_DWORD *)(v12 + 4);
  if ( (v14 & 0x100) != 0 )
  {
    *(_DWORD *)*a2 &= 0xFFFC949B;
    *(_DWORD *)*a2 |= *(_DWORD *)(v12 + 8);
    v15 = *(_DWORD *)(v12 + 8);
    if ( (v15 & 0x800) != 0 )
    {
      *(_DWORD *)(*a2 + 4) |= 3u;
      v15 = *(_DWORD *)(v12 + 8);
    }
    v9 = 1;
    v10 = v15 & 0x100;
    v14 = *(_DWORD *)(v12 + 4);
  }
  if ( (v14 & 0x40) != 0 )
  {
    if ( *((_QWORD *)v13 + 1) )
    {
      v16 = (void *)DesktopAlloc(*(_QWORD *)(**a1 + 24LL), (unsigned int)*v13 + 2, 8LL);
      v17 = v16;
      if ( !v16 )
        return 0LL;
      memmove(v16, *((const void **)a4 + 1), *a4);
      v18 = *a4 >> 1;
    }
    else
    {
      v18 = 0;
      v17 = 0LL;
    }
    FreeItemString(a1, a2);
    *(_DWORD *)(*a2 + 48) = v18;
    tagITEM::SharedPointerFieldlpstr<unsigned short>::operator=(a2 + 3, v17);
    ++a2[11];
    v9 = 1;
    v10 = 1;
  }
  if ( (*(_DWORD *)(a3 + 4) & 0x80u) != 0 )
  {
    *(_QWORD *)(*a2 + 96) = 0LL;
    *(_QWORD *)(*a2 + 96) = *(_QWORD *)(a3 + 72);
    v9 = 1;
    v10 = 1;
    *(_DWORD *)(*a2 + 104) = -1;
    v22 = *a2;
    if ( (unsigned __int64)(*(_QWORD *)(*a2 + 96) - 1LL) <= 0xA )
      *(_DWORD *)(v22 + 4) |= 0x20000000u;
    else
      *(_DWORD *)(v22 + 4) &= ~0x20000000u;
  }
  v19 = *(_DWORD *)(a3 + 4);
  if ( (v19 & 2) != 0 )
  {
    *(_DWORD *)(*a2 + 8) = *(_DWORD *)(a3 + 16);
    v19 = *(_DWORD *)(a3 + 4);
  }
  if ( (v19 & 0x20) != 0 )
  {
    *(_QWORD *)(*a2 + 56) = *(_QWORD *)(a3 + 48);
    v19 = *(_DWORD *)(a3 + 4);
  }
  if ( (v19 & 1) != 0 )
  {
    *(_DWORD *)(*a2 + 4) &= 0xFFFFFFF4;
    *(_DWORD *)(*a2 + 4) |= *(_DWORD *)(a3 + 12);
    if ( (*(_DWORD *)*a2 & 0x800) != 0 )
      *(_DWORD *)(*a2 + 4) |= 3u;
    if ( (*(_DWORD *)(a3 + 12) & 0x1000) != 0 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 40LL) & 0x400) != 0 )
      {
        UserSetLastError(87LL, 1024LL, v12, (__int64)v13);
        return 0LL;
      }
      *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 40LL) |= 0x400u;
    }
    v9 = 1;
    v10 = 1;
    v19 = *(_DWORD *)(a3 + 4);
  }
  if ( (v19 & 8) != 0 )
  {
    *(_QWORD *)(*a2 + 24) = *(_QWORD *)(a3 + 32);
    *(_QWORD *)(*a2 + 32) = *(_QWORD *)(a3 + 40);
    v10 = 1;
    v19 = *(_DWORD *)(a3 + 4);
  }
  if ( (v19 & 4) == 0 )
    goto LABEL_27;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v32, 0LL);
  if ( *(_QWORD *)(a3 + 24) )
  {
    ValidateHmenu();
    v33 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v32);
  }
  v23 = a2 + 2;
  if ( a2[2] != *(_QWORD *)v32[0] )
  {
    if ( *v23 )
    {
      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v34);
      RemoveParentMenu(a1, a2);
      DestroyMenu(*v23);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v34);
    }
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v32) )
    {
      UnlockSubMenu(a1, a2);
LABEL_51:
      v10 = 1;
      goto LABEL_52;
    }
    v24 = 0;
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v32, a1) )
    {
      InternalCreateMenu(0);
      v33 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v32);
      if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v32) )
      {
LABEL_57:
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v32);
        return 0LL;
      }
      v24 = 1;
    }
    v25 = v33;
    if ( v33 || (v25 = *(_QWORD *)v32[0]) != 0 )
      *(_QWORD *)(*a2 + 16) = *(_QWORD *)(v25 + 48);
    else
      *(_QWORD *)(*a2 + 16) = 0LL;
    *(_QWORD *)&v30 = a2 + 2;
    *((_QWORD *)&v30 + 1) = v25;
    v31 = v30;
    HMAssignmentLock(&v31);
    *(_DWORD *)(*(_QWORD *)(*v23 + 40) + 40LL) |= 1u;
    MenuDepth = GetMenuDepth(v32, 25LL);
    if ( (unsigned int)GetMenuAncestors(a1) + MenuDepth < 0x19 )
    {
      v27 = (_QWORD *)Win32AllocPool(16LL, 1953066325LL);
      if ( v27 )
      {
        v28 = a1[2];
        if ( !v28 )
          v28 = (_QWORD *)**a1;
        v27[1] = v28;
        *v27 = *(_QWORD *)(*(_QWORD *)v32[0] + 104LL);
        *(_QWORD *)(*(_QWORD *)v32[0] + 104LL) = v27;
        goto LABEL_51;
      }
    }
    *(_DWORD *)(*(_QWORD *)(*v23 + 40) + 40LL) &= ~1u;
    *(_QWORD *)(*a2 + 16) = 0LL;
    HMAssignmentUnlock(a2 + 2);
    if ( v24 )
    {
      v29 = v33;
      if ( !v33 )
        v29 = *(_QWORD *)v32[0];
      DestroyMenu(v29);
    }
    goto LABEL_57;
  }
LABEL_52:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v32);
LABEL_27:
  v20 = *a2;
  if ( (*(_DWORD *)*a2 & 0x900) == 0 && !a2[3] && !*(_QWORD *)(v20 + 96) )
  {
    *(_DWORD *)v20 = 2048;
    *(_DWORD *)(*a2 + 4) |= 3u;
  }
  if ( v9 )
  {
    *(_DWORD *)(*a2 + 80) = 0;
    *(_DWORD *)(*a2 + 84) = 0x7FFFFFFF;
    *(_DWORD *)(*a2 + 88) = 0;
    *(_DWORD *)(**a1 + 64LL) = 0;
    *(_DWORD *)(**a1 + 68LL) = 0;
    if ( v10 )
      *a5 = 1;
  }
  return 1LL;
}

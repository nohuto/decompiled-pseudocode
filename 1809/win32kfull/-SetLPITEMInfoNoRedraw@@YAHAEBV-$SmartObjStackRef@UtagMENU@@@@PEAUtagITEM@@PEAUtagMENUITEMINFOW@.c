/*
 * XREFs of ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C006AA5C
 * Callers:
 *     xxxInsertMenuItem @ 0x1C0069348 (xxxInsertMenuItem.c)
 *     xxxSetMenuItemInfo @ 0x1C00A5F5C (xxxSetMenuItemInfo.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0067628 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     MNIsUAHMenu @ 0x1C006AEB0 (MNIsUAHMenu.c)
 *     ?UnlockSubMenu@@YAPEAUtagMENU@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C006B530 (-UnlockSubMenu@@YAPEAUtagMENU@@AEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?FreeItemString@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C006B570 (-FreeItemString@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ??4?$SharedPointerFieldlpstr@G@tagITEM@@QEAAPEAGPEAG@Z @ 0x1C006B5BC (--4-$SharedPointerFieldlpstr@G@tagITEM@@QEAAPEAGPEAG@Z.c)
 *     DesktopAlloc @ 0x1C006B5F0 (DesktopAlloc.c)
 *     _DestroyMenu @ 0x1C006C6D0 (_DestroyMenu.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C00A8568 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C00AC318 (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?GetMenuDepth@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C010CEDC (-GetMenuDepth@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     ?RemoveParentMenu@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C011D0A8 (-RemoveParentMenu@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z @ 0x1C011DEC4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z.c)
 *     ?GetMenuAncestors@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C012074C (-GetMenuAncestors@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1C015CB48 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

__int64 __fastcall SetLPITEMInfoNoRedraw(_QWORD **a1, _QWORD *a2, __int64 a3, unsigned __int16 *a4, _DWORD *a5)
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
  int v18; // r15d
  int v19; // eax
  __int64 v20; // rcx
  int v22; // ecx
  unsigned int v23; // ecx
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // r15
  int v27; // r12d
  __int64 v28; // rax
  __int64 v29; // rdx
  int MenuDepth; // ebx
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  _QWORD v35[2]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v36[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v37; // [rsp+50h] [rbp-48h]
  _QWORD v38[3]; // [rsp+58h] [rbp-40h] BYREF

  v9 = 0;
  v10 = 0;
  *a5 = 0;
  v11 = a1[2];
  if ( !v11 )
    v11 = (_QWORD *)**a1;
  if ( (unsigned int)MNIsUAHMenu(v11) )
    *(_DWORD *)(*a2 + 104LL) = -1;
  v14 = *(_DWORD *)(v12 + 4);
  if ( (v14 & 0x100) != 0 )
  {
    *(_DWORD *)*a2 &= 0xFFFC949B;
    *(_DWORD *)*a2 |= *(_DWORD *)(v12 + 8);
    v15 = *(_DWORD *)(v12 + 8);
    if ( (v15 & 0x800) != 0 )
    {
      *(_DWORD *)(*a2 + 4LL) |= 3u;
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
    *(_DWORD *)(*a2 + 48LL) = v18;
    tagITEM::SharedPointerFieldlpstr<unsigned short>::operator=(a2 + 3, v17);
    ++a2[11];
    v9 = 1;
    v10 = 1;
  }
  if ( (*(_DWORD *)(a3 + 4) & 0x80u) != 0 )
  {
    *(_QWORD *)(*a2 + 96LL) = 0LL;
    *(_QWORD *)(*a2 + 96LL) = *(_QWORD *)(a3 + 72);
    v9 = 1;
    v10 = 1;
    *(_DWORD *)(*a2 + 104LL) = -1;
    v22 = *(_DWORD *)(*a2 + 4LL);
    if ( (unsigned __int64)(*(_QWORD *)(*a2 + 96LL) - 1LL) > 0xA )
      v23 = v22 & 0xDFFFFFFF;
    else
      v23 = v22 | 0x20000000;
    *(_DWORD *)(*a2 + 4LL) = v23;
  }
  v19 = *(_DWORD *)(a3 + 4);
  if ( (v19 & 2) != 0 )
  {
    *(_DWORD *)(*a2 + 8LL) = *(_DWORD *)(a3 + 16);
    v19 = *(_DWORD *)(a3 + 4);
  }
  if ( (v19 & 0x20) != 0 )
  {
    *(_QWORD *)(*a2 + 56LL) = *(_QWORD *)(a3 + 48);
    v19 = *(_DWORD *)(a3 + 4);
  }
  if ( (v19 & 1) != 0 )
  {
    *(_DWORD *)(*a2 + 4LL) &= 0xFFFFFFF4;
    *(_DWORD *)(*a2 + 4LL) |= *(_DWORD *)(a3 + 12);
    if ( (*(_DWORD *)*a2 & 0x800) != 0 )
      *(_DWORD *)(*a2 + 4LL) |= 3u;
    if ( (*(_DWORD *)(a3 + 12) & 0x1000) != 0 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 40LL) & 0x400) != 0 )
      {
        UserSetLastError(87LL);
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
    *(_QWORD *)(*a2 + 24LL) = *(_QWORD *)(a3 + 32);
    *(_QWORD *)(*a2 + 32LL) = *(_QWORD *)(a3 + 40);
    v10 = 1;
    v19 = *(_DWORD *)(a3 + 4);
  }
  if ( (v19 & 4) == 0 )
    goto LABEL_27;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v36, 0LL);
  v25 = *(_QWORD *)(a3 + 24);
  if ( v25 )
  {
    ValidateHmenu(v25);
    v37 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v36);
  }
  v26 = a2 + 2;
  if ( a2[2] != *(_QWORD *)v36[0] )
  {
    if ( *v26 )
    {
      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v38, (__int64)v24);
      RemoveParentMenu(a1, a2);
      DestroyMenu(*v26);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v38, v33);
    }
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v36) )
    {
      UnlockSubMenu(a1, a2);
LABEL_53:
      v10 = 1;
      goto LABEL_54;
    }
    v27 = 0;
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v36, a1) )
    {
      InternalCreateMenu(0);
      v37 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v36);
      if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v36) )
      {
LABEL_59:
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v36, v32);
        return 0LL;
      }
      v27 = 1;
    }
    v28 = v37;
    if ( !v37 )
      v28 = *(_QWORD *)v36[0];
    if ( v28 )
      v29 = *(_QWORD *)(v28 + 48);
    else
      v29 = 0LL;
    *(_QWORD *)(*a2 + 16LL) = v29;
    v35[0] = a2 + 2;
    v35[1] = v28;
    HMAssignmentLock(v35);
    *(_DWORD *)(*(_QWORD *)(*v26 + 40LL) + 40LL) |= 1u;
    MenuDepth = GetMenuDepth(v36, 25LL);
    if ( (unsigned int)GetMenuAncestors(a1) + MenuDepth < 0x19 )
    {
      v24 = (_QWORD *)Win32AllocPool(16LL, 1953066325LL);
      if ( v24 )
      {
        v31 = a1[2];
        if ( !v31 )
          v31 = (_QWORD *)**a1;
        v24[1] = v31;
        *v24 = *(_QWORD *)(*(_QWORD *)v36[0] + 104LL);
        *(_QWORD *)(*(_QWORD *)v36[0] + 104LL) = v24;
        goto LABEL_53;
      }
    }
    *(_DWORD *)(*(_QWORD *)(*v26 + 40LL) + 40LL) &= ~1u;
    *(_QWORD *)(*a2 + 16LL) = 0LL;
    HMAssignmentUnlock(a2 + 2);
    if ( v27 )
    {
      v34 = v37;
      if ( !v37 )
        v34 = *(_QWORD *)v36[0];
      DestroyMenu(v34);
    }
    goto LABEL_59;
  }
LABEL_54:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v36, (__int64)v24);
LABEL_27:
  v20 = *a2;
  if ( (*(_DWORD *)*a2 & 0x900) == 0 && !a2[3] && !*(_QWORD *)(v20 + 96) )
  {
    *(_DWORD *)v20 = 2048;
    *(_DWORD *)(*a2 + 4LL) |= 3u;
  }
  if ( v9 )
  {
    *(_DWORD *)(*a2 + 80LL) = 0;
    *(_DWORD *)(*a2 + 84LL) = 0x7FFFFFFF;
    *(_DWORD *)(*a2 + 88LL) = 0;
    *(_DWORD *)(**a1 + 64LL) = 0;
    *(_DWORD *)(**a1 + 68LL) = 0;
    if ( v10 )
      *a5 = 1;
  }
  return 1LL;
}

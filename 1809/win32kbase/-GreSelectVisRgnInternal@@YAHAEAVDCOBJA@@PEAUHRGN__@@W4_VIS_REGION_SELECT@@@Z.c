/*
 * XREFs of ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0028F5C
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0027DBC (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSelectVisRgnShared @ 0x1C0029E90 (GreSelectVisRgnShared.c)
 * Callees:
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C001D5A4 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     GreSetRegionOwner @ 0x1C001E100 (GreSetRegionOwner.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C001F7F0 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C001F830 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C001FAB0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     GreGetObjectOwner @ 0x1C0020BF0 (GreGetObjectOwner.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C0020F60 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0023D60 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C00240D0 (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJ@@QEAA@K@Z @ 0x1C00253D0 (--0RGNMEMOBJ@@QEAA@K@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0029BC4 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0034194 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00A9FE0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     DC::AcquireDcVisRgnExclusive @ 0x1C00AC264 (DC--AcquireDcVisRgnExclusive.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00AC29C (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00F68F0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C00FAD84 (-vReleaseVis@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreSelectVisRgnInternal(DC **a1, HRGN a2, int a3)
{
  REGION *v3; // rbx
  unsigned int v7; // esi
  int v8; // r13d
  unsigned int *v9; // r14
  struct DC *v10; // r12
  bool v11; // zf
  REGION *v13[2]; // [rsp+20h] [rbp-59h] BYREF
  __int64 v14; // [rsp+30h] [rbp-49h] BYREF
  char v15; // [rsp+38h] [rbp-41h]
  __int64 v16; // [rsp+40h] [rbp-39h] BYREF
  char v17; // [rsp+48h] [rbp-31h]
  struct _RECTL v18; // [rsp+50h] [rbp-29h] BYREF
  struct REGION *v19[14]; // [rsp+60h] [rbp-19h] BYREF
  struct OBJECT *v20; // [rsp+E0h] [rbp+67h] BYREF
  HSEMAPHORE v21; // [rsp+F8h] [rbp+7Fh] BYREF

  v3 = 0LL;
  if ( *a1 )
  {
    v21 = ghsemVisRgnPublish;
    EngAcquireSemaphore(ghsemVisRgnPublish);
    v7 = 1;
    DC::vReleaseRao(*a1);
    v8 = 1;
    if ( !a2 )
    {
      DC::vReleaseVis(*a1);
      DC::bSetDefaultRegion(*a1);
      goto LABEL_35;
    }
    GreSetRegionOwner((__int64)a2, 0);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v19, a2, 0, 0);
    v9 = (unsigned int *)v19[0];
    if ( !v19[0] )
    {
      v3 = prgnDefault;
      goto LABEL_27;
    }
    v10 = *a1;
    if ( (unsigned int)GreGetObjectOwner(*(_QWORD *)*a1, 1) != -2147483630 )
    {
      if ( !GrepValidateVisRgn(v10, (struct REGION *)v9, (struct ERECTL *)&v18) )
        RGNOBJ::vSet((RGNOBJ *)v19, &v18);
      v9 = (unsigned int *)v19[0];
    }
    switch ( a3 )
    {
      case 1:
        v3 = (REGION *)v9;
        if ( !(unsigned int)RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)v19) )
        {
          v7 = 0;
          goto LABEL_27;
        }
        v19[0] = 0LL;
        break;
      case 2:
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v13, v9[20]);
        v3 = v13[0];
        if ( v13[0] )
          RGNOBJ::vCopy((RGNOBJ *)v13, (struct RGNOBJ *)v19);
        else
          v3 = prgnDefault;
        RGNMEMOBJ::~RGNMEMOBJ(v13);
        break;
      case 4:
        DC::AcquireDcVisRgnExclusive(*a1, &v14);
        v3 = (REGION *)*((_QWORD *)*a1 + 143);
        if ( !v3 )
          v3 = prgnDefault;
        if ( v3 == prgnDefault )
        {
          v7 = 0;
        }
        else
        {
          v20 = v3;
          RGNOBJAPI::bSwap(v19, &v20);
          v3 = v20;
          v8 = 0;
        }
        if ( v15 )
          CPushLock::ReleaseLock((CPushLock *)(v14 + 1112));
LABEL_27:
        if ( !v7 && a3 == 1 )
        {
LABEL_33:
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v19);
LABEL_35:
          SEMOBJ::vUnlock((SEMOBJ *)&v21);
          return v7;
        }
LABEL_29:
        if ( !v8 )
          goto LABEL_31;
        break;
      default:
        goto LABEL_29;
    }
    DC::vReleaseVis(*a1);
LABEL_31:
    DC::AcquireDcVisRgnExclusive(*a1, &v16);
    *((_QWORD *)*a1 + 143) = v3;
    v11 = v17 == 0;
    *((_DWORD *)v3 + 7) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
    if ( !v11 )
      CPushLock::ReleaseLock((CPushLock *)(v16 + 1112));
    goto LABEL_33;
  }
  return 0;
}

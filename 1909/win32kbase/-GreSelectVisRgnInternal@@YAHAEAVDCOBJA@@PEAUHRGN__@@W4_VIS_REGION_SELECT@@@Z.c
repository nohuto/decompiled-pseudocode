/*
 * XREFs of ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0017DEC
 * Callers:
 *     GreSelectVisRgn @ 0x1C0017C00 (GreSelectVisRgn.c)
 *     GreSelectVisRgnShared @ 0x1C00B0010 (GreSelectVisRgnShared.c)
 * Callees:
 *     GreSetRegionOwner @ 0x1C00161A0 (GreSetRegionOwner.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0016F90 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0016FF0 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@K@Z @ 0x1C0017150 (--0RGNMEMOBJ@@QEAA@K@Z.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0018AE0 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C001A124 (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C001B2B0 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C001B5E0 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     GreGetObjectOwner @ 0x1C00220F0 (GreGetObjectOwner.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0027430 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C0027830 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0029F78 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C002A944 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     EngAcquireSemaphore @ 0x1C002BB10 (EngAcquireSemaphore.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C008B790 (--1RGNMEMOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSelectVisRgnInternal(DC **a1, HRGN a2, int a3)
{
  struct REGION *v3; // rbx
  unsigned int v7; // r14d
  unsigned int *v8; // r15
  struct DC *v9; // r12
  int v10; // edi
  int v11; // edi
  _QWORD v13[2]; // [rsp+20h] [rbp-30h] BYREF
  struct REGION *v14[4]; // [rsp+30h] [rbp-20h] BYREF
  struct OBJECT *v15; // [rsp+80h] [rbp+30h] BYREF
  HSEMAPHORE v16; // [rsp+98h] [rbp+48h] BYREF

  v3 = 0LL;
  if ( *a1 )
  {
    v16 = ghsemVisRgnPublish;
    EngAcquireSemaphore(ghsemVisRgnPublish);
    v7 = 1;
    DC::vReleaseRao(*a1);
    if ( !a2 )
    {
      DC::vReleaseVis(*a1);
      DC::bSetDefaultRegion(*a1);
      goto LABEL_27;
    }
    GreSetRegionOwner((__int64)a2, 0);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v14, a2, 0);
    v8 = (unsigned int *)v14[0];
    if ( v14[0] )
    {
      v9 = *a1;
      if ( (unsigned int)GreGetObjectOwner(*(_QWORD *)*a1, 1LL) != -2147483630 )
        GrepValidateVisRgn(v9, (struct REGION *)v8);
      v10 = a3 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == 2 )
          {
            v3 = (struct REGION *)*((_QWORD *)*a1 + 140);
            if ( !v3 )
              v3 = prgnDefault;
            if ( v3 != prgnDefault )
            {
              v15 = v3;
              RGNOBJAPI::bSwap(v14, &v15);
              v3 = v15;
LABEL_24:
              *((_QWORD *)*a1 + 140) = v3;
              *((_DWORD *)v3 + 7) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
              goto LABEL_25;
            }
            v7 = 0;
          }
        }
        else
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v13, v8[20]);
          v3 = (struct REGION *)v13[0];
          if ( v13[0] )
            RGNOBJ::vCopy((RGNOBJ *)v13, (struct RGNOBJ *)v14);
          else
            v3 = prgnDefault;
          RGNMEMOBJ::~RGNMEMOBJ((RGNMEMOBJ *)v13);
        }
      }
      else
      {
        v3 = (struct REGION *)v8;
        if ( !(unsigned int)RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)v14) )
        {
          v7 = 0;
LABEL_25:
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v14);
LABEL_27:
          SEMOBJ::vUnlock((SEMOBJ *)&v16);
          return v7;
        }
        v14[0] = 0LL;
      }
    }
    else
    {
      v3 = prgnDefault;
    }
    DC::vReleaseVis(*a1);
    goto LABEL_24;
  }
  return 0;
}

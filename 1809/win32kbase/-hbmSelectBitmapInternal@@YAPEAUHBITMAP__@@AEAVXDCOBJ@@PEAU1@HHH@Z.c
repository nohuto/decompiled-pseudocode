/*
 * XREFs of ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00AB4F0
 * Callers:
 *     hbmSelectBitmap @ 0x1C0073B90 (hbmSelectBitmap.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C001381C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     bIsCompatible @ 0x1C001BCA0 (bIsCompatible.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C001D520 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C001F994 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C0021520 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     INC_SHARE_REF_CNT @ 0x1C00215E0 (INC_SHARE_REF_CNT.c)
 *     HmgShareLockCheck @ 0x1C0021790 (HmgShareLockCheck.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0022720 (DEC_SHARE_REF_CNT.c)
 *     HmgPentryFromPobj @ 0x1C00229F0 (HmgPentryFromPobj.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0023B70 (--1SURFREF@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029C14 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029C48 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0029C90 (GreReleaseHmgrSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0029CE0 (GreReleaseSemaphoreInternal.c)
 *     GreAcquireSemaphoreSharedInternal @ 0x1C0029D10 (GreAcquireSemaphoreSharedInternal.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0029E00 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0034194 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0034260 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C004407C (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0044A78 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0066A70 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x1C00769A0 (-dwSetLayout@DC@@QEAAKJK@Z.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00A9FA8 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     bIsSurfaceAllowedInDC @ 0x1C00AD0A8 (bIsSurfaceAllowedInDC.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00F68F0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C00FEFEC (--0SURFREF@@QEAA@XZ.c)
 */

HBITMAP __fastcall hbmSelectBitmapInternal(DC **a1, HBITMAP a2, int a3, int a4, int a5)
{
  unsigned int v7; // ebx
  DYNAMICMODECHANGESHARELOCK *v8; // rcx
  struct _ERESOURCE *v9; // rdi
  int v10; // ebx
  __int64 v11; // r8
  int v12; // edx
  __int64 v13; // rcx
  int v14; // r8d
  DC *v15; // r14
  SURFACE *v16; // rsi
  DC *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // r12d
  DC *v22; // r10
  SURFACE *v23; // r14
  HSURF v24; // r13
  DC *v25; // rcx
  int v26; // eax
  int v27; // eax
  BOOL v28; // r8d
  unsigned int v29; // ecx
  int v30; // edx
  bool v31; // al
  unsigned int v32; // edx
  int v33; // eax
  unsigned int *v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  DC *v39; // rsi
  _BYTE v41[4]; // [rsp+38h] [rbp-61h] BYREF
  unsigned int v42; // [rsp+3Ch] [rbp-5Dh]
  unsigned int v43; // [rsp+40h] [rbp-59h]
  HBITMAP v44; // [rsp+48h] [rbp-51h]
  HSURF v45; // [rsp+50h] [rbp-49h] BYREF
  __int64 v46; // [rsp+58h] [rbp-41h]
  struct _BASEOBJECT *v47; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v48[32]; // [rsp+68h] [rbp-31h] BYREF
  SURFACE *v49; // [rsp+88h] [rbp-11h]
  _BYTE v50[88]; // [rsp+90h] [rbp-9h] BYREF

  v44 = 0LL;
  v45 = 0LL;
  v7 = (unsigned int)a2;
  SURFREF::SURFREF((SURFREF *)v48);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v41);
  v49 = (SURFACE *)HmgShareLockCheck(v7, 5);
  if ( v49 )
  {
    v9 = ghsemGreLock;
    v10 = 1;
    if ( a4 == 1 )
    {
      GreAcquireSemaphoreSharedInternal((__int64)ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreShared((__int64)L"hsem", (__int64)v9, v11);
    }
    else
    {
      EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
    }
    GreAcquireHmgrSemaphore(v13, v12, v14);
    v15 = *a1;
    v16 = v49;
    v17 = *a1;
    v46 = *((_QWORD *)*a1 + 6);
    v21 = *(_DWORD *)(HmgPentryFromPobj(v17) + 8) & 0xFFFFFFFE;
    if ( *((_DWORD *)v15 + 8) != 1 )
      goto LABEL_73;
    v19 = 512LL;
    if ( *((_DWORD *)v16 + 42)
      && ((*(_DWORD *)v16 & 0x800000) == 0 || (*((_WORD *)v16 + 51) & 0x200) == 0)
      && *((_QWORD *)v16 + 20) != *(_QWORD *)v15 )
    {
      goto LABEL_73;
    }
    if ( !(unsigned int)bIsCompatible(&v47, *((_QWORD *)v16 + 16), (__int64)v16, v46, 1)
      || !(unsigned int)bIsSurfaceAllowedInDC(v16, *((_QWORD *)*a1 + 6))
      || v21 && (*((_DWORD *)v16 + 28) & 0x800) != 0
      || !a5 && !v21 )
    {
      goto LABEL_73;
    }
    v23 = (SURFACE *)*((_QWORD *)v22 + 62);
    v19 = 0x4000000LL;
    if ( !v23 )
      v23 = SURFACE::pdibDefault;
    if ( ((*((_DWORD *)v23 + 28) & 0x4000000) == 0
       || (*((_DWORD *)v16 + 28) & 0x4000000) == 0
       || (*((_DWORD *)v23 + 29) & 0x200) != 0)
      && !a4
      && !a3 )
    {
      goto LABEL_73;
    }
    v43 = *(_DWORD *)(*((_QWORD *)v22 + 122) + 108LL);
    v42 = v43 & 7;
    if ( (v43 & 7) != 0 )
      DC::dwSetLayout(v22, -1, 0);
    v19 = (__int64)v47;
    if ( *((struct _BASEOBJECT **)v16 + 16) != v47 )
    {
      *((_DWORD *)v16 + 28) |= 0x8000000u;
      *((_QWORD *)v16 + 16) = v19;
      if ( v19 )
        INC_SHARE_REF_CNT((struct _BASEOBJECT *)v19);
    }
    if ( (*((_DWORD *)v23 + 28) & 0x1000000) != 0 )
      v24 = *(HSURF *)v23;
    else
      v24 = v45;
    v44 = (HBITMAP)*((_QWORD *)v23 + 4);
    if ( a2 != v44 )
    {
      v25 = *a1;
      if ( v16 == SURFACE::pdibDefault )
      {
        DC::pSurface(v25, 0LL);
      }
      else
      {
        DC::pSurface(v25, v16);
        if ( (*(_DWORD *)v16 & 0x800000) != 0 && (*((_WORD *)v16 + 51) & 0x200) != 0
          || !*((_WORD *)v16 + 50) && *((_DWORD *)v16 + 54) )
        {
          *((_DWORD *)*a1 + 9) |= 0x10000u;
        }
        else
        {
          *((_DWORD *)*a1 + 9) &= ~0x10000u;
        }
      }
      *((_QWORD *)*a1 + 64) = *((_QWORD *)v16 + 7);
      *(_DWORD *)(*((_QWORD *)*a1 + 122) + 152LL) |= 0xFu;
      if ( v23 != SURFACE::pdibDefault )
      {
        if ( (*((_DWORD *)v23 + 28) & 0x10) != 0 && (int)IsvMirrorIncludeNotifySupported() >= 0 )
          vMirrorIncludeNotifyWrap(a1, v23, 0LL);
        SURFACE::vDec_cRef(v23);
        if ( !*((_DWORD *)v23 + 42) )
        {
          if ( v24 )
            v24 = *(HSURF *)v23;
          v26 = *((_DWORD *)v23 + 28);
          if ( (v26 & 0x8000000) != 0 )
          {
            v45 = (HSURF)*((_QWORD *)v23 + 16);
            *((_QWORD *)v23 + 16) = 0LL;
            XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v45);
            v26 = *((_DWORD *)v23 + 28);
          }
          *((_DWORD *)v23 + 28) = v26 & 0xF7FFFFFF;
        }
      }
      if ( (int)IsvMirrorIncludeNotifySupported() >= 0 )
        vMirrorIncludeNotifyWrap(a1, v16, 1LL);
      v27 = *((_DWORD *)v16 + 28);
      v28 = (v27 & 0x4000) != 0 || (v27 & 0x800010) != 0 && (*(_DWORD *)(v46 + 40) & 1) != 0;
      v29 = *((_DWORD *)*a1 + 9) | 0x200;
      if ( !v28 )
        v29 = *((_DWORD *)*a1 + 9) & 0xFFFFFDFF;
      *((_DWORD *)*a1 + 9) = v29;
      v30 = *((_DWORD *)*a1 + 9);
      v31 = (v30 & *((_DWORD *)v16 + 28) & 0x200) != 0;
      v32 = v30 | 0x8000;
      if ( !v31 )
        v32 = *((_DWORD *)*a1 + 9) & 0xFFFF7FFF;
      *((_DWORD *)*a1 + 9) = v32;
      if ( v16 != SURFACE::pdibDefault )
      {
        INC_SHARE_REF_CNT(v16);
        ++*((_DWORD *)v16 + 42);
        if ( (*(_DWORD *)v16 & 0x800000) == 0 || (*((_WORD *)v16 + 51) & 0x200) == 0 )
        {
          *((_QWORD *)v16 + 20) = *(_QWORD *)*a1;
          *((_QWORD *)v16 + 6) = *((_QWORD *)*a1 + 6);
        }
      }
      v33 = SURFACE::bDIBSection(v16);
      *v34 = *v34 & 0xFFFFFFFE | (v33 != 0);
      if ( (unsigned int)SURFACE::bDIBSection(v16) )
        *(_QWORD *)(v35 + 24) = *((_QWORD *)v16 + 25);
      else
        *(_QWORD *)(v35 + 24) = 0LL;
      DEC_SHARE_REF_CNT(v49);
      v49 = 0LL;
      GreReleaseHmgrSemaphore(v37, v36, v38);
      v10 = 0;
      DC::bSetDefaultRegion(*a1);
      v39 = *a1;
      CPushLock::AcquireLockShared((DC *)((char *)*a1 + 1112));
      DC::vUpdate_VisRect(*a1, *((struct REGION **)*a1 + 143));
      CPushLock::ReleaseLock((DC *)((char *)v39 + 1112));
      if ( v24 )
      {
        SURFREF::SURFREF((SURFREF *)v50, v24);
        SURFREF::bDeleteSurface((__int64)v50, 0);
        v44 = (HBITMAP)gahStockObjects[21];
        SURFREF::~SURFREF((SURFREF *)v50);
      }
    }
    if ( v42 )
      DC::dwSetLayout(*a1, -1, v43);
    if ( v10 )
LABEL_73:
      GreReleaseHmgrSemaphore(v19, v18, v20);
    EtwTraceGreLockReleaseSemaphore((__int64)L"hsem", (__int64)v9, v20);
    GreReleaseSemaphoreInternal(v9);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v8);
  SURFREF::~SURFREF((SURFREF *)v48);
  return v44;
}

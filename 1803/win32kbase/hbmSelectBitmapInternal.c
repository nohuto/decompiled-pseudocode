/*
 * XREFs of hbmSelectBitmapInternal @ 0x1C0076C90
 * Callers:
 *     hbmSelectBitmap @ 0x1C00638E0 (hbmSelectBitmap.c)
 * Callees:
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C001CE84 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ?bSessionMappedDIBSection@SURFACE@@QEAAHXZ @ 0x1C001CEA4 (-bSessionMappedDIBSection@SURFACE@@QEAAHXZ.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C001DB74 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     UserIsWindowGdiScaled @ 0x1C0022280 (UserIsWindowGdiScaled.c)
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x1C0025670 (-dwSetLayout@DC@@QEAAKJK@Z.c)
 *     ?vClearDpiScaling@DC@@QEAAXXZ @ 0x1C00269E0 (-vClearDpiScaling@DC@@QEAAXXZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C0026A30 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C0026E40 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C00271A0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0029280 (DEC_SHARE_REF_CNT.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002A7E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002AAF0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     HmgShareLockCheck @ 0x1C002CA80 (HmgShareLockCheck.c)
 *     INC_SHARE_REF_CNT @ 0x1C002CD30 (INC_SHARE_REF_CNT.c)
 *     GreGetObjectOwner @ 0x1C002EE00 (GreGetObjectOwner.c)
 *     ??1SEMOBJEXORSHARED@@QEAA@XZ @ 0x1C0033524 (--1SEMOBJEXORSHARED@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0033554 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0033588 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00335D0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireSemaphoreSharedInternal @ 0x1C0033630 (GreAcquireSemaphoreSharedInternal.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0033650 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     bIsCompatible @ 0x1C003E1F0 (bIsCompatible.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C003E480 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003F968 (--1EPALOBJ@@QEAA@XZ.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C005BCF0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     GreGetScaledLogPixels @ 0x1C0072EA0 (GreGetScaledLogPixels.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C0075F4C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     bIsSurfaceAllowedInDC @ 0x1C0078140 (bIsSurfaceAllowedInDC.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C00C05C0 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C00C0610 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 */

void *__fastcall hbmSelectBitmapInternal(HDC a1, void *a2, int a3, int a4, int a5)
{
  unsigned int v6; // r14d
  void *v9; // rdi
  DYNAMICMODECHANGESHARELOCK *v10; // rcx
  struct OBJECT *v11; // rbx
  int v12; // edi
  int v13; // esi
  int v14; // r8d
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  DC *v18; // rdi
  __int64 v19; // rdx
  struct _BASEOBJECT *v20; // rcx
  int v21; // r8d
  int ObjectOwner; // r14d
  DC *v23; // rdi
  SURFACE *v24; // r14
  __int64 v25; // r15
  void *v26; // rcx
  __m128 v27; // xmm0
  int v28; // eax
  unsigned __int64 v29; // rdx
  void *v30; // rcx
  __m128 v31; // xmm0
  int v32; // eax
  int v33; // eax
  BOOL v34; // ecx
  int v35; // eax
  unsigned int v36; // eax
  int v37; // ecx
  unsigned int v38; // ecx
  int v39; // eax
  __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rdx
  int v44; // ecx
  int v45; // r8d
  unsigned __int16 v47; // [rsp+30h] [rbp-50h] BYREF
  DC *v48[2]; // [rsp+38h] [rbp-48h] BYREF
  struct OBJECT *v49; // [rsp+48h] [rbp-38h] BYREF
  unsigned int v50; // [rsp+50h] [rbp-30h]
  unsigned int v51; // [rsp+54h] [rbp-2Ch]
  void *v52; // [rsp+58h] [rbp-28h]
  struct OBJECT *v53; // [rsp+60h] [rbp-20h] BYREF
  __int64 v54; // [rsp+68h] [rbp-18h] BYREF
  struct _BASEOBJECT *v55; // [rsp+70h] [rbp-10h] BYREF
  PERESOURCE v56; // [rsp+78h] [rbp-8h] BYREF

  v52 = 0LL;
  v6 = (unsigned int)a1;
  v54 = 0LL;
  v53 = 0LL;
  v48[0] = 0LL;
  v48[1] = 0LL;
  v9 = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v48, a1);
  if ( !v48[0] )
    goto LABEL_94;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v47);
  v53 = (struct OBJECT *)HmgShareLockCheck((unsigned int)a2, 5);
  v11 = v53;
  if ( v53 )
  {
    v12 = (int)ghsemGreLock;
    v13 = 1;
    v56 = ghsemGreLock;
    if ( a4 == 1 )
    {
      GreAcquireSemaphoreSharedInternal((__int64)ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreShared((__int64)L"hsem", v12, v14);
    }
    else
    {
      EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
    }
    GreAcquireHmgrSemaphore(v16, v15, v17);
    v18 = v48[0];
    v49 = (struct OBJECT *)*((_QWORD *)v48[0] + 6);
    ObjectOwner = GreGetObjectOwner(v6, 1);
    if ( *((_DWORD *)v18 + 8) != 1
      || *((_DWORD *)v11 + 42)
      && ((*(_DWORD *)v11 & 0x800000) == 0 || (*((_WORD *)v11 + 51) & 0x200) == 0)
      && *((_QWORD *)v11 + 20) != *(_QWORD *)v18 )
    {
      goto LABEL_90;
    }
    if ( !(unsigned int)bIsCompatible(&v55, *((_QWORD *)v11 + 16), (__int64)v11, (__int64)v49, 1) )
      goto LABEL_90;
    v23 = v48[0];
    if ( !(unsigned int)bIsSurfaceAllowedInDC(v11, *((_QWORD *)v48[0] + 6))
      || ObjectOwner && (*((_DWORD *)v11 + 28) & 0x800) != 0 )
    {
      goto LABEL_90;
    }
    if ( !a5 && !ObjectOwner )
      goto LABEL_90;
    v24 = (SURFACE *)*((_QWORD *)v23 + 63);
    LODWORD(v20) = 0x4000000;
    if ( !v24 )
      v24 = SURFACE::pdibDefault;
    if ( ((*((_DWORD *)v24 + 28) & 0x4000000) == 0
       || (*((_DWORD *)v11 + 28) & 0x4000000) == 0
       || (*((_DWORD *)v24 + 29) & 0x200) != 0)
      && !a4
      && !a3 )
    {
LABEL_90:
      GreReleaseHmgrSemaphore((int)v20, v19, v21);
LABEL_91:
      SEMOBJEXORSHARED::~SEMOBJEXORSHARED(&v56);
      v9 = v52;
      goto LABEL_92;
    }
    v51 = *(_DWORD *)(*((_QWORD *)v23 + 10) + 312LL);
    v50 = v51 & 7;
    if ( (v51 & 7) != 0 )
    {
      DC::dwSetLayout(v23, -1, 0);
      v23 = v48[0];
    }
    v20 = v55;
    if ( *((struct _BASEOBJECT **)v11 + 16) != v55 )
    {
      *((_DWORD *)v11 + 28) |= 0x8000000u;
      *((_QWORD *)v11 + 16) = v20;
      if ( v20 )
        INC_SHARE_REF_CNT(v20);
      v23 = v48[0];
    }
    if ( (*((_DWORD *)v24 + 28) & 0x1000000) != 0 )
      v25 = *(_QWORD *)v24;
    else
      v25 = v54;
    v52 = (void *)*((_QWORD *)v24 + 4);
    if ( a2 == v52 )
    {
LABEL_87:
      if ( v50 )
        DC::dwSetLayout(v23, -1, v51);
      if ( !v13 )
        goto LABEL_91;
      goto LABEL_90;
    }
    if ( v11 == SURFACE::pdibDefault )
    {
      v26 = (void *)*((_QWORD *)v23 + 59);
      *((_QWORD *)v23 + 63) = 0LL;
      if ( v26 && (unsigned int)UserIsWindowGdiScaled(v26, &v47) && v47 != 96 )
      {
        v27 = (__m128)COERCE_UNSIGNED_INT((float)GreGetScaledLogPixels(v47));
        v27.m128_f32[0] = v27.m128_f32[0] / 96.0;
        DC::vSetDpiScaling(v23, _mm_unpacklo_ps(v27, v27).m128_u64[0]);
      }
      else
      {
        v28 = *((_DWORD *)v23 + 132);
        if ( (v28 & 1) != 0 )
        {
          *((_DWORD *)v23 + 9) |= 0x10u;
          *(_QWORD *)((char *)v23 + 532) = 0LL;
          *((_DWORD *)v23 + 132) = v28 & 0xFFFFFFF8 | 4;
          *(_QWORD *)((char *)v23 + 540) = 0LL;
          DC::vUpdateCachedDPIScaleValue(v23);
        }
      }
      goto LABEL_54;
    }
    *((_QWORD *)v23 + 63) = v11;
    if ( (unsigned int)DC::bDpiScaledSurface(v23) )
    {
      v29 = *(_QWORD *)((char *)v11 + 660);
    }
    else
    {
      v30 = (void *)*((_QWORD *)v23 + 59);
      if ( !v30 || !(unsigned int)UserIsWindowGdiScaled(v30, &v47) || v47 == 96 )
      {
        DC::vClearDpiScaling(v23);
LABEL_49:
        if ( (*(_DWORD *)v11 & 0x800000) != 0 && (*((_WORD *)v11 + 51) & 0x200) != 0
          || (unsigned int)SURFACE::bSessionMappedDIBSection(v11) )
        {
          *((_DWORD *)v48[0] + 9) |= 0x10000u;
        }
        else
        {
          *((_DWORD *)v48[0] + 9) &= ~0x10000u;
        }
LABEL_54:
        *((_QWORD *)v48[0] + 65) = *((_QWORD *)v11 + 7);
        *(_DWORD *)(*((_QWORD *)v48[0] + 10) + 8LL) |= 0xFu;
        if ( v24 != SURFACE::pdibDefault )
        {
          if ( (*((_DWORD *)v24 + 28) & 0x10) != 0 && (int)IsvMirrorIncludeNotifySupported() >= 0 )
            vMirrorIncludeNotifyWrap(v48, v24, 0LL);
          SURFACE::vDec_cRef(v24);
          if ( !*((_DWORD *)v24 + 42) )
          {
            if ( v25 )
              v25 = *(_QWORD *)v24;
            v32 = *((_DWORD *)v24 + 28);
            if ( (v32 & 0x8000000) != 0 )
            {
              v54 = *((_QWORD *)v24 + 16);
              *((_QWORD *)v24 + 16) = 0LL;
              XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v54);
              v32 = *((_DWORD *)v24 + 28);
            }
            *((_DWORD *)v24 + 28) = v32 & 0xF7FFFFFF;
          }
        }
        if ( (int)IsvMirrorIncludeNotifySupported() >= 0 )
          vMirrorIncludeNotifyWrap(v48, v11, 1LL);
        v33 = *((_DWORD *)v11 + 28);
        v34 = (v33 & 0x4000) != 0 || (v33 & 0x800010) != 0 && (*((_DWORD *)v49 + 10) & 1) != 0;
        v35 = *((_DWORD *)v48[0] + 9);
        if ( v34 )
          v36 = v35 | 0x200;
        else
          v36 = v35 & 0xFFFFFDFF;
        *((_DWORD *)v48[0] + 9) = v36;
        v37 = *((_DWORD *)v48[0] + 9);
        if ( (v37 & *((_DWORD *)v11 + 28) & 0x200) != 0 )
          v38 = v37 | 0x8000;
        else
          v38 = v37 & 0xFFFF7FFF;
        *((_DWORD *)v48[0] + 9) = v38;
        if ( v11 != SURFACE::pdibDefault )
        {
          INC_SHARE_REF_CNT(v11);
          ++*((_DWORD *)v11 + 42);
          if ( (*(_DWORD *)v11 & 0x800000) == 0 || (*((_WORD *)v11 + 51) & 0x200) == 0 )
          {
            *((_QWORD *)v11 + 20) = *(_QWORD *)v48[0];
            *((_QWORD *)v11 + 6) = *((_QWORD *)v48[0] + 6);
          }
        }
        v39 = SURFACE::bDIBSection(v11);
        *(_DWORD *)(v40 + 12) = *(_DWORD *)(v40 + 12) & 0xFFFFFFFE | (v39 != 0);
        v41 = SURFACE::bDIBSection(v11);
        v42 = *((_QWORD *)v48[0] + 10);
        if ( v41 )
          *(_QWORD *)(v42 + 128) = *((_QWORD *)v11 + 25);
        else
          *(_QWORD *)(v42 + 128) = 0LL;
        DEC_SHARE_REF_CNT(v11);
        v53 = 0LL;
        GreReleaseHmgrSemaphore(v44, v43, v45);
        v13 = 0;
        DC::bSetDefaultRegion(v48[0]);
        DC::vUpdate_VisRect(v48[0], *((struct REGION **)v48[0] + 191));
        if ( v25 )
        {
          v49 = (struct OBJECT *)HmgShareLockCheck(v25, 5);
          SURFREF::bDeleteSurface((__int64 *)&v49, 0);
          v52 = gahStockObjects[21];
          EPALOBJ::~EPALOBJ(&v49);
        }
        v23 = v48[0];
        goto LABEL_87;
      }
      v31 = (__m128)COERCE_UNSIGNED_INT((float)GreGetScaledLogPixels(v47));
      v31.m128_f32[0] = v31.m128_f32[0] / 96.0;
      v29 = _mm_unpacklo_ps(v31, v31).m128_u64[0];
    }
    DC::vSetDpiScaling(v23, v29);
    goto LABEL_49;
  }
LABEL_92:
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v10);
  if ( v48[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v48);
LABEL_94:
  EPALOBJ::~EPALOBJ(&v53);
  return v9;
}

/*
 * XREFs of hbmSelectBitmapInternal @ 0x1C00BB910
 * Callers:
 *     hbmSelectBitmap @ 0x1C0085340 (hbmSelectBitmap.c)
 * Callees:
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C00163A4 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00186C0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C001AAB8 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C001AD40 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C001B7A0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C001D060 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     HmgShareLockCheck @ 0x1C001D840 (HmgShareLockCheck.c)
 *     DEC_SHARE_REF_CNT @ 0x1C001DF00 (DEC_SHARE_REF_CNT.c)
 *     INC_SHARE_REF_CNT @ 0x1C00208A0 (INC_SHARE_REF_CNT.c)
 *     GreGetObjectOwner @ 0x1C00220F0 (GreGetObjectOwner.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C0027830 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0028358 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029FC8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029FFC (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreAcquireSemaphoreSharedInternal @ 0x1C002A050 (GreAcquireSemaphoreSharedInternal.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002A070 (GreReleaseHmgrSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C002A0C0 (GreReleaseSemaphoreInternal.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002BAC0 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C002BB10 (EngAcquireSemaphore.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C003FD3C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C006BB50 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     bIsCompatible @ 0x1C006C700 (bIsCompatible.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070850 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0075F30 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x1C0087AB0 (-dwSetLayout@DC@@QEAAKJK@Z.c)
 *     bIsSurfaceAllowedInDC @ 0x1C00BD2C4 (bIsSurfaceAllowedInDC.c)
 */

void *__fastcall hbmSelectBitmapInternal(HDC a1, void *a2, int a3, int a4, int a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // r15d
  void *v9; // rdi
  DYNAMICMODECHANGESHARELOCK *v10; // rcx
  struct OBJECT *v11; // rbx
  struct _ERESOURCE *v12; // rsi
  int v13; // edi
  __int64 v14; // r8
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  DC *v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int ObjectOwner; // r15d
  DC *v23; // r9
  SURFACE *v24; // r14
  unsigned int v25; // r13d
  struct OBJECT *v26; // r12
  int v27; // eax
  struct OBJECT *v28; // rax
  int v29; // eax
  BOOL v30; // r8d
  unsigned int v31; // ecx
  int v32; // edx
  bool v33; // al
  unsigned int v34; // edx
  int v35; // eax
  unsigned int *v36; // rdx
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  struct OBJECT *v42; // rbx
  char v44[4]; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v45; // [rsp+34h] [rbp-3Ch]
  void *v46; // [rsp+38h] [rbp-38h]
  struct OBJECT *v47; // [rsp+40h] [rbp-30h] BYREF
  __int64 v48; // [rsp+48h] [rbp-28h]
  struct _BASEOBJECT *v49; // [rsp+50h] [rbp-20h] BYREF
  struct OBJECT *v50; // [rsp+58h] [rbp-18h] BYREF
  DC *v51[2]; // [rsp+60h] [rbp-10h] BYREF

  v5 = (unsigned int)a2;
  v46 = 0LL;
  v6 = (unsigned int)a1;
  v50 = 0LL;
  v47 = 0LL;
  v51[0] = 0LL;
  v51[1] = 0LL;
  v9 = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v51, a1);
  if ( v51[0] )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v44);
    v47 = (struct OBJECT *)HmgShareLockCheck(v5, 5);
    v11 = v47;
    if ( v47 )
    {
      v12 = ghsemGreLock;
      v13 = 1;
      if ( a4 == 1 )
      {
        GreAcquireSemaphoreSharedInternal((__int64)ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared((__int64)L"hsem", (__int64)v12, v14);
      }
      else
      {
        EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
      }
      GreAcquireHmgrSemaphore(v16, v15, v17);
      v18 = v51[0];
      v48 = *((_QWORD *)v51[0] + 6);
      ObjectOwner = GreGetObjectOwner(v6, 1);
      if ( *((_DWORD *)v18 + 8) != 1 )
        goto LABEL_78;
      v20 = 0LL;
      if ( *((_DWORD *)v11 + 42)
        && ((*(_DWORD *)v11 & 0x800000) == 0 || (*((_WORD *)v11 + 51) & 0x200) == 0)
        && *((_QWORD *)v11 + 20) != *(_QWORD *)v18 )
      {
        goto LABEL_78;
      }
      if ( !(unsigned int)bIsCompatible(&v49, *((_QWORD *)v11 + 16), (__int64)v11, v48, 1)
        || !(unsigned int)bIsSurfaceAllowedInDC(v11, *((_QWORD *)v51[0] + 6))
        || ObjectOwner && (*((_DWORD *)v11 + 28) & 0x800) != 0
        || !a5 && !ObjectOwner )
      {
        goto LABEL_78;
      }
      v24 = (SURFACE *)*((_QWORD *)v23 + 62);
      v20 = 0x4000000LL;
      if ( !v24 )
        v24 = SURFACE::pdibDefault;
      if ( ((*((_DWORD *)v24 + 28) & 0x4000000) == 0
         || (*((_DWORD *)v11 + 28) & 0x4000000) == 0
         || (*((_DWORD *)v24 + 29) & 0x200) != 0)
        && !a4
        && !a3 )
      {
        goto LABEL_78;
      }
      v45 = *(_DWORD *)(*((_QWORD *)v23 + 122) + 108LL);
      v25 = v45 & 7;
      if ( (v45 & 7) != 0 )
      {
        DC::dwSetLayout(v23, -1, 0);
        v23 = v51[0];
      }
      v20 = (__int64)v49;
      if ( *((struct _BASEOBJECT **)v11 + 16) != v49 )
      {
        *((_DWORD *)v11 + 28) |= 0x8000000u;
        *((_QWORD *)v11 + 16) = v20;
        if ( v20 )
          INC_SHARE_REF_CNT((struct _BASEOBJECT *)v20);
        v23 = v51[0];
      }
      if ( (*((_DWORD *)v24 + 28) & 0x1000000) != 0 )
        v26 = *(struct OBJECT **)v24;
      else
        v26 = v50;
      v46 = (void *)*((_QWORD *)v24 + 4);
      if ( a2 != v46 )
      {
        if ( v11 == SURFACE::pdibDefault )
        {
          DC::pSurface(v23, 0LL);
        }
        else
        {
          DC::pSurface(v23, v11);
          if ( (*(_DWORD *)v11 & 0x800000) != 0 && (*((_WORD *)v11 + 51) & 0x200) != 0
            || !*((_WORD *)v11 + 50) && *((_DWORD *)v11 + 54) )
          {
            *((_DWORD *)v51[0] + 9) |= 0x10000u;
          }
          else
          {
            *((_DWORD *)v51[0] + 9) &= ~0x10000u;
          }
        }
        *((_QWORD *)v51[0] + 64) = *((_QWORD *)v11 + 7);
        *(_DWORD *)(*((_QWORD *)v51[0] + 122) + 152LL) |= 0xFu;
        if ( v24 != SURFACE::pdibDefault )
        {
          if ( (*((_DWORD *)v24 + 28) & 0x10) != 0 && (int)IsvMirrorIncludeNotifySupported() >= 0 )
            vMirrorIncludeNotifyWrap(v51, v24, 0LL);
          SURFACE::vDec_cRef(v24);
          if ( !*((_DWORD *)v24 + 42) )
          {
            if ( v26 )
              v26 = *(struct OBJECT **)v24;
            v27 = *((_DWORD *)v24 + 28);
            if ( (v27 & 0x8000000) != 0 )
            {
              v28 = (struct OBJECT *)*((_QWORD *)v24 + 16);
              *((_QWORD *)v24 + 16) = 0LL;
              v50 = v28;
              XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v50);
              v27 = *((_DWORD *)v24 + 28);
            }
            *((_DWORD *)v24 + 28) = v27 & 0xF7FFFFFF;
          }
        }
        if ( (int)IsvMirrorIncludeNotifySupported() >= 0 )
          vMirrorIncludeNotifyWrap(v51, v11, 1LL);
        v29 = *((_DWORD *)v11 + 28);
        v30 = (v29 & 0x4000) != 0 || (v29 & 0x800010) != 0 && (*(_DWORD *)(v48 + 40) & 1) != 0;
        v31 = *((_DWORD *)v51[0] + 9) | 0x200;
        if ( !v30 )
          v31 = *((_DWORD *)v51[0] + 9) & 0xFFFFFDFF;
        *((_DWORD *)v51[0] + 9) = v31;
        v32 = *((_DWORD *)v51[0] + 9);
        v33 = (v32 & *((_DWORD *)v11 + 28) & 0x200) != 0;
        v34 = v32 | 0x8000;
        if ( !v33 )
          v34 = *((_DWORD *)v51[0] + 9) & 0xFFFF7FFF;
        *((_DWORD *)v51[0] + 9) = v34;
        if ( v11 != SURFACE::pdibDefault )
        {
          INC_SHARE_REF_CNT(v11);
          ++*((_DWORD *)v11 + 42);
          if ( (*(_DWORD *)v11 & 0x800000) == 0 || (*((_WORD *)v11 + 51) & 0x200) == 0 )
          {
            *((_QWORD *)v11 + 20) = *(_QWORD *)v51[0];
            *((_QWORD *)v11 + 6) = *((_QWORD *)v51[0] + 6);
          }
        }
        v35 = SURFACE::bDIBSection(v11);
        *v36 = *v36 & 0xFFFFFFFE | (v35 != 0);
        v37 = SURFACE::bDIBSection(v11);
        v38 = *((_QWORD *)v51[0] + 122);
        if ( v37 )
          *(_QWORD *)(v38 + 24) = *((_QWORD *)v11 + 25);
        else
          *(_QWORD *)(v38 + 24) = 0LL;
        DEC_SHARE_REF_CNT(v11);
        v47 = 0LL;
        GreReleaseHmgrSemaphore(v40, v39, v41);
        v13 = 0;
        DC::bSetDefaultRegion(v51[0]);
        DC::vUpdate_VisRect(v51[0], *((struct REGION **)v51[0] + 140));
        if ( v26 )
        {
          v42 = (struct OBJECT *)HmgShareLockCheck((unsigned int)v26, 5);
          if ( (unsigned int)SURFACE::bDeleteSurface((__int64)v42, 0, 0) )
            v42 = 0LL;
          v50 = v42;
          v46 = gahStockObjects[21];
          EPALOBJ::~EPALOBJ(&v50);
        }
        v23 = v51[0];
      }
      if ( v25 )
        DC::dwSetLayout(v23, -1, v45);
      if ( v13 )
LABEL_78:
        GreReleaseHmgrSemaphore(v20, v19, v21);
      EtwTraceGreLockReleaseSemaphore((__int64)L"hsem", (__int64)v12, v21);
      GreReleaseSemaphoreInternal(v12);
      v9 = v46;
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v10);
    if ( v51[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v51);
  }
  EPALOBJ::~EPALOBJ(&v47);
  return v9;
}

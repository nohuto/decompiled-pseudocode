/*
 * XREFs of hbmSelectBitmap @ 0x1C001A230
 * Callers:
 *     GreSelectBitmap @ 0x1C0017870 (GreSelectBitmap.c)
 *     GreRestoreDC @ 0x1C0018550 (GreRestoreDC.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C001D6E0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     CleanupGDI @ 0x1C00B6D00 (CleanupGDI.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0011624 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreAcquireSemaphoreSharedInternal @ 0x1C0011660 (GreAcquireSemaphoreSharedInternal.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00145B0 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0014600 (EngAcquireSemaphore.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00151C0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0016FD0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0017D40 (--1SURFREF@@QEAA@XZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0018270 (GreReleaseHmgrSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C00182C0 (GreReleaseSemaphoreInternal.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0019670 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00196B0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     HmgShareLockCheck @ 0x1C001C500 (HmgShareLockCheck.c)
 *     DEC_SHARE_REF_CNT @ 0x1C001CBC0 (DEC_SHARE_REF_CNT.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001CFF0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001D5B0 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C001EBB0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C001ECE0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C001ED54 (--1HANDLELOCK@@QEAA@XZ.c)
 *     INC_SHARE_REF_CNT @ 0x1C001F550 (INC_SHARE_REF_CNT.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C001FD50 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C002CF00 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x1C003C130 (-dwSetLayout@DC@@QEAAKJK@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C003DDAC (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0077760 (EtwTraceGreLockReleaseSemaphore.c)
 *     GreGetObjectOwner @ 0x1C007A080 (GreGetObjectOwner.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C007A110 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     bIsCompatible @ 0x1C00811A0 (bIsCompatible.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00AD4C0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C00BCE08 (IsThreadCrossSessionAttached.c)
 *     ?SaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C00BDAB4 (-SaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C00BDB10 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0122994 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

void *__fastcall hbmSelectBitmap(__int64 a1, void *a2, int a3, int a4)
{
  DC *v4; // rdi
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v9; // rsi
  GdiHandleManager *v10; // rbx
  int v11; // r12d
  unsigned int v12; // eax
  struct _ENTRY *v13; // rax
  struct _ENTRY *v14; // rcx
  unsigned int v15; // edx
  char v16; // al
  struct OBJECT *EntryObject; // rax
  struct _KTHREAD *CurrentThread; // rbx
  __int16 v19; // ax
  int v20; // ebx
  __int64 v21; // rdx
  DYNAMICMODECHANGESHARELOCK *v22; // rcx
  struct OBJECT *v23; // rbx
  struct _ERESOURCE *v24; // rdi
  int v25; // edx
  int v26; // ecx
  int v27; // r8d
  DC *v28; // rsi
  __int64 v29; // rdx
  DC *v30; // rcx
  __int64 v31; // r8
  int ObjectOwner; // r14d
  SURFACE *v33; // rsi
  unsigned int v34; // r15d
  struct _BASEOBJECT *v35; // rax
  int v36; // eax
  int v37; // eax
  BOOL v38; // r8d
  int v39; // eax
  int v40; // ecx
  unsigned int v41; // eax
  int v42; // ecx
  unsigned int v43; // ecx
  int v44; // eax
  unsigned int *v45; // rdx
  int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // r8
  struct OBJECT *v53; // rbx
  DC *v55; // [rsp+38h] [rbp-39h] BYREF
  __int64 v56; // [rsp+40h] [rbp-31h]
  __int64 v57; // [rsp+48h] [rbp-29h]
  struct OBJECT *v58; // [rsp+50h] [rbp-21h] BYREF
  void *v59; // [rsp+58h] [rbp-19h]
  struct _ENTRY *v60; // [rsp+60h] [rbp-11h] BYREF
  int v61; // [rsp+68h] [rbp-9h]
  int v62; // [rsp+6Ch] [rbp-5h]
  int v63; // [rsp+78h] [rbp+7h] BYREF
  struct _BASEOBJECT *v64; // [rsp+80h] [rbp+Fh] BYREF
  struct _SLIST_ENTRY *v65; // [rsp+88h] [rbp+17h] BYREF
  struct OBJECT *v66; // [rsp+90h] [rbp+1Fh] BYREF
  __int64 v67; // [rsp+D8h] [rbp+67h] BYREF
  void *v68; // [rsp+E0h] [rbp+6Fh]

  v68 = a2;
  v4 = 0LL;
  v59 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v56 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached()
    && (CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v63)) != 0
    && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v9 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  }
  else
  {
    v9 = 0LL;
  }
  v10 = gpHandleManager;
  v11 = 1;
  v61 = 1;
  v12 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000);
  v13 = GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v10 + 2), v12, 0);
  v60 = v13;
  v14 = v13;
  if ( !v13 )
  {
    v61 = 0;
    KeLeaveCriticalRegion();
    goto LABEL_25;
  }
  _m_prefetchw((char *)v13 + 8);
  v62 = *((_DWORD *)v13 + 2);
  v15 = v62 & 0xFFFFFFFE;
  if ( (v62 & 0xFFFFFFFE) != (v63 & 0xFFFFFFFC) && v15 && (!v9 || v15 != *(_DWORD *)(v9 + 8)) )
    goto LABEL_16;
  v16 = *((_BYTE *)v13 + 15);
  if ( (v16 & 0x20) != 0 )
    goto LABEL_16;
  if ( (v16 & 0x40) == 0 )
    goto LABEL_18;
  EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v14 & 0xFFFFFF);
  if ( !*((_WORD *)EntryObject + 6) || *((struct _KTHREAD **)EntryObject + 2) != KeGetCurrentThread() )
  {
LABEL_16:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v60);
    if ( !v61 )
      goto LABEL_25;
  }
  v14 = v60;
LABEL_18:
  if ( *((_BYTE *)v14 + 14) == 1 && *((_WORD *)v14 + 6) == WORD1(a1) )
  {
    CurrentThread = KeGetCurrentThread();
    v4 = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v60 & 0xFFFFFF);
    v19 = *((_WORD *)v4 + 6);
    if ( !v19 || *((struct _KTHREAD **)v4 + 2) == CurrentThread )
    {
      *((_QWORD *)v4 + 2) = CurrentThread;
      *((_WORD *)v4 + 6) = v19 + 1;
    }
    else
    {
      v4 = 0LL;
    }
  }
  HANDLELOCK::vUnlock((HANDLELOCK *)&v60);
LABEL_25:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v60);
  v55 = v4;
  if ( v4 )
  {
    if ( HIDWORD(v56) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)v4 + 6) + 40LL) & 0x8000) == 0 )
      {
LABEL_30:
        _InterlockedDecrement((volatile signed __int32 *)v4 + 3);
        v55 = 0LL;
        goto LABEL_117;
      }
      v20 = *((_DWORD *)v4 + 524);
      if ( v20 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v4 = v55;
        goto LABEL_30;
      }
    }
    if ( !(unsigned int)XDCOBJ::SaveAttributes((XDCOBJ *)&v55) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v55 + 3);
      v55 = 0LL;
      goto LABEL_117;
    }
    if ( (*((_DWORD *)v55 + 130) & 4) != 0 )
      DC::vMarkTransformDirty(v55);
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  if ( v55 )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v67);
    LOBYTE(v21) = 5;
    v58 = (struct OBJECT *)HmgShareLockCheck(v68, v21);
    v23 = v58;
    if ( v58 )
    {
      v24 = (struct _ERESOURCE *)ghsemGreLock;
      if ( a4 == 1 )
      {
        GreAcquireSemaphoreSharedInternal((__int64)ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"hsem", v24);
      }
      else
      {
        EngAcquireSemaphore(ghsemGreLock);
      }
      GreAcquireHmgrSemaphore(v26, v25, v27);
      v28 = v55;
      v67 = *((_QWORD *)v55 + 6);
      ObjectOwner = GreGetObjectOwner(a1, 1LL);
      if ( *((_DWORD *)v28 + 8) != 1
        || *((_DWORD *)v23 + 42)
        && ((*(_DWORD *)v23 & 0x800000) == 0 || (*((_WORD *)v23 + 51) & 0x200) == 0)
        && *((_QWORD *)v23 + 20) != *(_QWORD *)v28
        || !(unsigned int)bIsCompatible((unsigned int)&v64, *((_QWORD *)v23 + 16), (_DWORD)v23, v67, 1)
        || ObjectOwner && (*((_DWORD *)v23 + 28) & 0x800) != 0 )
      {
        goto LABEL_114;
      }
      v30 = v55;
      v33 = (SURFACE *)*((_QWORD *)v55 + 62);
      if ( !v33 )
        v33 = SURFACE::pdibDefault;
      if ( ((*((_DWORD *)v33 + 28) & 0x4000000) == 0
         || (*((_DWORD *)v23 + 28) & 0x4000000) == 0
         || (*((_DWORD *)v33 + 29) & 0x200) != 0)
        && !a4
        && !a3 )
      {
        goto LABEL_114;
      }
      v34 = *(_DWORD *)(*((_QWORD *)v55 + 122) + 108LL);
      if ( (v34 & 7) != 0 )
      {
        DC::dwSetLayout(v55, -1, 0);
        v30 = v55;
      }
      v35 = v64;
      if ( *((struct _BASEOBJECT **)v23 + 16) != v64 )
      {
        *((_DWORD *)v23 + 28) |= 0x8000000u;
        *((_QWORD *)v23 + 16) = v35;
        if ( v35 )
          INC_SHARE_REF_CNT(v35);
        v30 = v55;
      }
      if ( (*((_DWORD *)v33 + 28) & 0x1000000) != 0 )
        v57 = *(_QWORD *)v33;
      v59 = (void *)*((_QWORD *)v33 + 4);
      if ( v68 != v59 )
      {
        if ( v23 == SURFACE::pdibDefault )
        {
          DC::pSurface(v30, 0LL);
        }
        else
        {
          DC::pSurface(v30, v23);
          if ( (*(_DWORD *)v23 & 0x800000) != 0 && (*((_WORD *)v23 + 51) & 0x200) != 0
            || !*((_WORD *)v23 + 50) && *((_DWORD *)v23 + 54) )
          {
            *((_DWORD *)v55 + 9) |= 0x10000u;
          }
          else
          {
            *((_DWORD *)v55 + 9) &= ~0x10000u;
          }
        }
        *((_QWORD *)v55 + 64) = *((_QWORD *)v23 + 7);
        *(_DWORD *)(*((_QWORD *)v55 + 122) + 152LL) |= 0xFu;
        if ( v33 != SURFACE::pdibDefault )
        {
          if ( (*((_DWORD *)v33 + 28) & 0x10) != 0 && (int)IsvMirrorIncludeNotifySupported() >= 0 )
            vMirrorIncludeNotifyWrap(&v55, v33, 0LL);
          SURFACE::vDec_cRef(v33);
          if ( !*((_DWORD *)v33 + 42) )
          {
            if ( v57 )
              v57 = *(_QWORD *)v33;
            v36 = *((_DWORD *)v33 + 28);
            if ( (v36 & 0x8000000) != 0 )
            {
              v65 = (struct _SLIST_ENTRY *)*((_QWORD *)v33 + 16);
              *((_QWORD *)v33 + 16) = 0LL;
              XEPALOBJ::vUnrefPalette(&v65);
              v36 = *((_DWORD *)v33 + 28);
            }
            *((_DWORD *)v33 + 28) = v36 & 0xF7FFFFFF;
          }
        }
        if ( (int)IsvMirrorIncludeNotifySupported() >= 0 )
          vMirrorIncludeNotifyWrap(&v55, v23, 1LL);
        v37 = *((_DWORD *)v23 + 28);
        v38 = (v37 & 0x4000) != 0 || (v37 & 0x800010) != 0 && (*(_DWORD *)(v67 + 40) & 1) != 0;
        v39 = *((_DWORD *)v55 + 9);
        v40 = v39 | 0x200;
        v41 = v39 & 0xFFFFFDFF;
        if ( !v38 )
          v40 = v41;
        *((_DWORD *)v55 + 9) = v40;
        v42 = *((_DWORD *)v55 + 9);
        if ( (v42 & 0x200) == 0 || (*((_DWORD *)v23 + 28) & 0x200) == 0 )
          v11 = 0;
        v43 = v42 | 0x8000;
        if ( !v11 )
          v43 = *((_DWORD *)v55 + 9) & 0xFFFF7FFF;
        *((_DWORD *)v55 + 9) = v43;
        if ( v23 != SURFACE::pdibDefault )
        {
          INC_SHARE_REF_CNT(v23);
          ++*((_DWORD *)v23 + 42);
          if ( (*(_DWORD *)v23 & 0x800000) == 0 || (*((_WORD *)v23 + 51) & 0x200) == 0 )
          {
            *((_QWORD *)v23 + 20) = *(_QWORD *)v55;
            *((_QWORD *)v23 + 6) = *((_QWORD *)v55 + 6);
          }
        }
        v44 = SURFACE::bDIBSection(v23);
        *v45 = *v45 & 0xFFFFFFFE | (v44 != 0);
        v46 = SURFACE::bDIBSection(v23);
        v47 = *((_QWORD *)v55 + 122);
        if ( v46 )
          *(_QWORD *)(v47 + 24) = *((_QWORD *)v23 + 25);
        else
          *(_QWORD *)(v47 + 24) = 0LL;
        DEC_SHARE_REF_CNT(v23);
        v58 = 0LL;
        GreReleaseHmgrSemaphore(v49, v48, v50);
        v11 = 0;
        DC::bSetDefaultRegion(v55, v51, v52);
        DC::vUpdate_VisRect(v55, *((struct REGION **)v55 + 140));
        if ( v57 )
        {
          LOBYTE(v29) = 5;
          v53 = (struct OBJECT *)HmgShareLockCheck(v57, v29);
          if ( (unsigned int)SURFACE::bDeleteSurface(v53, 0LL, 0LL) )
            v53 = 0LL;
          v66 = v53;
          v59 = gahStockObjects[21];
          SURFREF::~SURFREF(&v66);
        }
        v30 = v55;
      }
      if ( (v34 & 7) != 0 )
        DC::dwSetLayout(v30, -1, v34);
      if ( v11 )
LABEL_114:
        GreReleaseHmgrSemaphore((__int64)v30, v29, v31);
      EtwTraceGreLockReleaseSemaphore(L"hsem", v24);
      GreReleaseSemaphoreInternal(v24);
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v22);
  }
LABEL_117:
  if ( v55 )
    XDCOBJ::vUnlockFast((XDCOBJ *)&v55);
  SURFREF::~SURFREF(&v58);
  return v59;
}

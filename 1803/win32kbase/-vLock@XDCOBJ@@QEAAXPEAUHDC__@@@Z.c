/*
 * XREFs of ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002A7E0
 * Callers:
 *     GreGetClipBox @ 0x1C00197D0 (GreGetClipBox.c)
 *     GreIntersectClipRect @ 0x1C0019B10 (GreIntersectClipRect.c)
 *     ReleaseCacheDC @ 0x1C002C3A0 (ReleaseCacheDC.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002D39C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C002F158 (-vCleanupDCs@@YAXK@Z.c)
 *     GreCreateCompatibleDC @ 0x1C002F610 (GreCreateCompatibleDC.c)
 *     bDeleteDCInternalEx @ 0x1C0030D10 (bDeleteDCInternalEx.c)
 *     GreSelectPalette @ 0x1C003F790 (GreSelectPalette.c)
 *     NtGdiDdDDIOpenAdapterFromHdc @ 0x1C0048150 (NtGdiDdDDIOpenAdapterFromHdc.c)
 *     GreGetDCPoint @ 0x1C0061630 (GreGetDCPoint.c)
 *     GreSelectBrushInternal @ 0x1C0075E50 (GreSelectBrushInternal.c)
 *     GreSelectPenInternal @ 0x1C0075ED0 (GreSelectPenInternal.c)
 *     hbmSelectBitmapInternal @ 0x1C0076C90 (hbmSelectBitmapInternal.c)
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C00D6CC0 (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C00D7190 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     NtGdiGetGammaRampCapability @ 0x1C00D73F0 (NtGdiGetGammaRampCapability.c)
 * Callees:
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002AA20 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C002AD50 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C002B0E0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002BEC0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002C040 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0075BD4 (IsThreadCrossSessionAttached.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C00BFB9C (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

void __fastcall XDCOBJ::vLock(XDCOBJ *this, HDC a2)
{
  struct OBJECT *v3; // rdi
  unsigned int v4; // r14d
  int v5; // r15d
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v7; // rbp
  GdiHandleManager *v8; // rbx
  unsigned int v9; // eax
  struct _ENTRY *v10; // rax
  struct _ENTRY *v11; // rcx
  int v12; // edx
  unsigned int v13; // edx
  struct OBJECT *EntryObject; // rax
  struct _KTHREAD *CurrentThread; // rbx
  __int16 v16; // ax
  int v17; // ebx
  int v18; // eax
  __int64 v19; // rcx
  struct _ENTRY *v20; // [rsp+20h] [rbp-38h] BYREF
  int v21; // [rsp+28h] [rbp-30h]
  int v22; // [rsp+2Ch] [rbp-2Ch]
  int v23; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = (unsigned int)a2;
  v5 = *((_DWORD *)this + 3);
  if ( !(unsigned int)IsThreadCrossSessionAttached()
    && (CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v23)) != 0
    && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v7 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  }
  else
  {
    v7 = 0LL;
  }
  v8 = gpHandleManager;
  v21 = 1;
  v9 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)v4 | (v4 >> 8) & 0xFF0000);
  v10 = GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v8 + 2), v9, 0);
  v20 = v10;
  v11 = v10;
  if ( !v10 )
  {
    v21 = 0;
    KeLeaveCriticalRegion();
    goto LABEL_28;
  }
  _m_prefetchw((char *)v10 + 8);
  v12 = *((_DWORD *)v10 + 2);
  v22 = v12;
  if ( !v5 )
  {
    v13 = v12 & 0xFFFFFFFE;
    if ( v13 != (v23 & 0xFFFFFFFC) && v13 && (!v7 || v13 != *(_DWORD *)(v7 + 8)) )
      goto LABEL_17;
    if ( (*((_BYTE *)v10 + 15) & 0x20) != 0 )
      goto LABEL_17;
  }
  if ( (*((_BYTE *)v10 + 15) & 0x40) == 0 )
    goto LABEL_19;
  EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v10 & 0xFFFFFF);
  if ( !*((_WORD *)EntryObject + 6) || *((struct _KTHREAD **)EntryObject + 2) != KeGetCurrentThread() )
  {
LABEL_17:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v20);
    if ( !v21 )
      goto LABEL_28;
  }
  v11 = v20;
LABEL_19:
  if ( *((_BYTE *)v11 + 14) == 1 && *((_WORD *)v11 + 6) == HIWORD(v4) && (!v5 || (*((_BYTE *)v11 + 15) & 0x20) != 0) )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v20 & 0xFFFFFF);
    v16 = *((_WORD *)v3 + 6);
    if ( !v16 || *((struct _KTHREAD **)v3 + 2) == CurrentThread )
    {
      *((_QWORD *)v3 + 2) = CurrentThread;
      *((_WORD *)v3 + 6) = v16 + 1;
    }
    else
    {
      v3 = 0LL;
    }
  }
  HANDLELOCK::vUnlock((HANDLELOCK *)&v20);
LABEL_28:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v20);
  *(_QWORD *)this = v3;
  if ( v3 )
  {
    if ( !*((_DWORD *)this + 3)
      || (*(_DWORD *)(*((_QWORD *)v3 + 6) + 40LL) & 0x8000) != 0
      && (v17 = *((_DWORD *)v3 + 626), v17 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)) )
    {
      v18 = XDCOBJ::bSaveAttributes(this);
      v19 = *(_QWORD *)this;
      if ( v18 )
      {
        if ( (*(_DWORD *)(v19 + 528) & 4) != 0 )
          DC::vMarkTransformDirty((DC *)v19);
      }
      else
      {
        _InterlockedDecrement((volatile signed __int32 *)(v19 + 12));
        *(_QWORD *)this = 0LL;
      }
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
      *(_QWORD *)this = 0LL;
    }
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
}

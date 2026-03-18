/*
 * XREFs of ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C001C0F0
 * Callers:
 *     GreCreateCompatibleDC @ 0x1C0018460 (GreCreateCompatibleDC.c)
 *     GreRestoreDC @ 0x1C0018550 (GreRestoreDC.c)
 *     ReleaseCacheDC @ 0x1C001ED70 (ReleaseCacheDC.c)
 *     GreIntersectClipRect @ 0x1C002AC90 (GreIntersectClipRect.c)
 *     GreGetClipBox @ 0x1C003AC40 (GreGetClipBox.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C003B540 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003C27C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreGetDCPoint @ 0x1C003DB70 (GreGetDCPoint.c)
 *     GreSelectPalette @ 0x1C007AAB0 (GreSelectPalette.c)
 *     GreSelectBrush @ 0x1C009E300 (GreSelectBrush.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00AE2E0 (-vCleanupDCs@@YAXK@Z.c)
 *     GreSelectPen @ 0x1C0122F20 (GreSelectPen.c)
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C012EEDC (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C012F380 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     NtGdiGetGammaRampCapability @ 0x1C012F550 (NtGdiGetGammaRampCapability.c)
 * Callees:
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x1C0019DB0 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C001D470 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C001EC40 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C001ECE0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0122994 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

void __fastcall XDCOBJ::vLock(XDCOBJ *this, HDC a2)
{
  int v2; // ebp
  __int16 v3; // esi^2
  int v5; // r15d
  struct OBJECT *EntryObject; // rbx
  _DWORD *v7; // r14
  struct _KTHREAD *CurrentThread; // rsi
  GdiHandleManager *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  unsigned int v12; // edx
  unsigned int v13; // r9d
  __int64 v14; // rcx
  __int16 v15; // ax
  GdiHandleManager *v16; // rsi
  unsigned int v17; // eax
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  unsigned int v20; // r10d
  __int64 v21; // rcx
  __int64 v22; // r9
  _DWORD *v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // r10
  unsigned int v26; // edx
  unsigned int v27; // r8d
  __int64 v28; // rcx
  __int64 v29; // r10
  DC *v30; // rbx
  GdiHandleManager *v31; // r14
  unsigned int v32; // eax
  __int64 v33; // rbp
  unsigned int v34; // r9d
  unsigned int v35; // edx
  __int64 v36; // rcx
  __int64 v37; // r10
  __int64 v38; // rsi
  unsigned int v39; // eax
  unsigned int v40; // r9d
  unsigned __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  DC *v44; // rdx
  struct _DC_ATTR *v45; // rdx
  __int64 v46; // rcx
  int v47; // ebx
  __int64 v48; // [rsp+30h] [rbp-38h] BYREF
  int v49; // [rsp+38h] [rbp-30h]

  v2 = *((_DWORD *)this + 3);
  v3 = WORD1(a2);
  v48 = 0LL;
  v5 = 1;
  v49 = 0;
  EntryObject = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v48, (unsigned __int16)a2 | ((unsigned int)a2 >> 8) & 0xFF0000, 1, v2, 0);
  if ( v49 )
  {
    v7 = (_DWORD *)v48;
    if ( *(_BYTE *)(v48 + 14) == 1 && *(_WORD *)(v48 + 12) == v3 && (!v2 || (*(_BYTE *)(v48 + 15) & 0x20) != 0) )
    {
      CurrentThread = KeGetCurrentThread();
      v7 = (_DWORD *)v48;
      v9 = gpHandleManager;
      v10 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v48 & 0xFFFFFF);
      v11 = *((_QWORD *)v9 + 2);
      v12 = v10;
      v13 = *(_DWORD *)(v11 + 2056);
      if ( v10 >= v13 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16) )
      {
        EntryObject = 0LL;
      }
      else
      {
        v14 = ((v10 - v13) >> 16) + 1;
        if ( v10 < v13 )
          v14 = 0LL;
        if ( (_DWORD)v14 )
          v12 = ((1 - (_DWORD)v14) << 16) - v13 + v10;
        EntryObject = GdiHandleEntryTable::GetEntryObject(*(GdiHandleEntryTable **)(v11 + 8 * v14 + 8), v12);
      }
      v15 = *((_WORD *)EntryObject + 6);
      if ( !v15 || *((struct _KTHREAD **)EntryObject + 2) == CurrentThread )
      {
        *((_QWORD *)EntryObject + 2) = CurrentThread;
        *((_WORD *)EntryObject + 6) = v15 + 1;
      }
      else
      {
        EntryObject = 0LL;
      }
    }
    v16 = gpHandleManager;
    v17 = GdiHandleManager::DecodeIndex(gpHandleManager, *v7 & 0xFFFFFF);
    v18 = *((_QWORD *)v16 + 2);
    v19 = v17;
    v20 = *(_DWORD *)(v18 + 2056);
    if ( v17 >= v20 + ((*(unsigned __int16 *)(v18 + 2) + 0xFFFF) << 16) )
      goto LABEL_62;
    v21 = ((v17 - v20) >> 16) + 1;
    if ( v17 < v20 )
      v21 = 0LL;
    v22 = *(_QWORD *)(v18 + 8 * v21 + 8);
    if ( (_DWORD)v21 )
      v19 = ((1 - (_DWORD)v21) << 16) - v20 + v17;
    if ( (unsigned int)v19 >= *(_DWORD *)(v22 + 20) )
LABEL_62:
      v23 = 0LL;
    else
      v23 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v22 + 24) + 8 * (v19 >> 8)) + 16LL * (unsigned __int8)v19 + 8);
    v24 = GdiHandleManager::DecodeIndex(v16, (unsigned __int16)*v23 | (*v23 >> 8) & 0xFF0000);
    v25 = *((_QWORD *)v16 + 2);
    v26 = v24;
    v27 = *(_DWORD *)(v25 + 2056);
    if ( v24 < v27 + ((*(unsigned __int16 *)(v25 + 2) + 0xFFFF) << 16) )
    {
      v28 = ((v24 - v27) >> 16) + 1;
      if ( v24 < v27 )
        v28 = 0LL;
      v29 = *(_QWORD *)(v25 + 8 * v28 + 8);
      if ( (_DWORD)v28 )
        v26 = ((1 - (_DWORD)v28) << 16) - v27 + v24;
      *(_DWORD *)(*(_QWORD *)v29 + 24LL * v26 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v29 + 24) + 8 * ((unsigned __int64)v26 >> 8)) + 16LL * (unsigned __int8)v26,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
  *(_QWORD *)this = EntryObject;
  if ( EntryObject )
  {
    if ( !*((_DWORD *)this + 3)
      || (*(_DWORD *)(*((_QWORD *)EntryObject + 6) + 40LL) & 0x8000) != 0
      && (v47 = *((_DWORD *)EntryObject + 524), v47 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)) )
    {
      v30 = *(DC **)this;
      if ( (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) == 0 )
      {
        if ( *((_DWORD *)this + 3) )
          goto LABEL_50;
        v31 = gpHandleManager;
        v32 = GdiHandleManager::DecodeIndex(
                gpHandleManager,
                (unsigned __int16)*(_DWORD *)v30 | (*(_DWORD *)v30 >> 8) & 0xFF0000);
        v33 = *((_QWORD *)v31 + 2);
        v34 = v32;
        v35 = *(_DWORD *)(v33 + 2056);
        if ( v32 >= v35 + ((*(unsigned __int16 *)(v33 + 2) + 0xFFFF) << 16) )
        {
          v38 = 0LL;
        }
        else
        {
          v36 = ((v32 - v35) >> 16) + 1;
          if ( v32 < v35 )
            v36 = 0LL;
          v37 = *(_QWORD *)(v33 + 8 * v36 + 8);
          if ( (_DWORD)v36 )
            v32 += ((1 - (_DWORD)v36) << 16) - v35;
          v38 = 0LL;
          if ( v32 < *(_DWORD *)(v37 + 20)
            && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v37 + 24) + 8 * ((unsigned __int64)v32 >> 8))
                         + 16LL * (unsigned __int8)v32
                         + 8) )
          {
            v38 = *(_QWORD *)v37 + 24LL * v32;
          }
        }
        v39 = GdiHandleManager::DecodeIndex(v31, v34);
        v40 = *(_DWORD *)(v33 + 2056);
        v41 = v39;
        if ( v39 >= v40 + ((*(unsigned __int16 *)(v33 + 2) + 0xFFFF) << 16) )
          goto LABEL_67;
        v42 = ((v39 - v40) >> 16) + 1;
        if ( v39 < v40 )
          v42 = 0LL;
        v43 = *(_QWORD *)(v33 + 8 * v42 + 8);
        if ( (_DWORD)v42 )
          v41 = ((1 - (_DWORD)v42) << 16) - v40 + v39;
        if ( (unsigned int)v41 >= *(_DWORD *)(v43 + 20) )
LABEL_67:
          v44 = 0LL;
        else
          v44 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v43 + 24) + 8 * (v41 >> 8)) + 16LL * (unsigned __int8)v41 + 8);
        if ( v44 == v30
          && v38
          && (v45 = *(struct _DC_ATTR **)(v38 + 16)) != 0LL
          && !(unsigned int)DC::SaveAttributes(v30, v45) )
        {
          v5 = 0;
        }
        else
        {
LABEL_50:
          *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
          *((_DWORD *)this + 2) = 1;
        }
      }
      v46 = *(_QWORD *)this;
      if ( v5 )
      {
        if ( (*(_DWORD *)(v46 + 520) & 4) != 0 )
          DC::vMarkTransformDirty((DC *)v46);
      }
      else
      {
        _InterlockedDecrement((volatile signed __int32 *)(v46 + 12));
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

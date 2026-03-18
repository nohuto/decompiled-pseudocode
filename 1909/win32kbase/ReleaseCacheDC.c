/*
 * XREFs of ReleaseCacheDC @ 0x1C00200C0
 * Callers:
 *     NtUserReleaseDC @ 0x1C002A9F0 (NtUserReleaseDC.c)
 *     _ReleaseDC @ 0x1C003A440 (_ReleaseDC.c)
 *     xxxEnumDisplayMonitors @ 0x1C004C7E0 (xxxEnumDisplayMonitors.c)
 *     UserReleaseDC @ 0x1C0089370 (UserReleaseDC.c)
 * Callees:
 *     DestroyCacheDC @ 0x1C000FFD0 (DestroyCacheDC.c)
 *     GreSetDCOwnerEx @ 0x1C001AF00 (GreSetDCOwnerEx.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C001B2B0 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C001D060 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C001E190 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001F380 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001F810 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C001FEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0020020 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C00200A0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0020EC0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     GreUnlockVisRgn @ 0x1C002A8A0 (GreUnlockVisRgn.c)
 *     IsThreadCrossSessionAttached @ 0x1C00B9DA8 (IsThreadCrossSessionAttached.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C00BBF58 (--1DCOBJA@@QEAA@XZ.c)
 *     McTemplateK0pqz @ 0x1C012FEB8 (McTemplateK0pqz.c)
 *     McTemplateK0pz @ 0x1C012FF70 (McTemplateK0pz.c)
 */

__int64 __fastcall ReleaseCacheDC(__int64 a1, int a2, __int64 a3)
{
  PERESOURCE v5; // rcx
  struct _ERESOURCE *v6; // rbx
  struct _ERESOURCE *v7; // rbx
  __int64 *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rdx
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  struct OBJECT *v16; // rsi
  HDC v17; // rdi
  int v18; // eax
  int v19; // edi
  __int64 v20; // rbp
  GdiHandleManager *v21; // rdi
  unsigned int v22; // eax
  struct _ENTRY *v23; // rax
  struct _ENTRY *v24; // rcx
  char v25; // al
  struct OBJECT *EntryObject; // rax
  DC *v27[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v28[2]; // [rsp+40h] [rbp-48h] BYREF
  struct _ENTRY *v29; // [rsp+50h] [rbp-38h] BYREF
  int v30; // [rsp+58h] [rbp-30h]
  int v31; // [rsp+5Ch] [rbp-2Ch]
  char v32; // [rsp+A0h] [rbp+18h] BYREF

  v5 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared();
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(v5, &LockAcquireShared, a3, ghsemDynamicModeChange, L"ghsemDynamicModeChange");
  v6 = ghsemGreLock;
  if ( ghsemGreLock )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v6);
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz((_DWORD)v5, a2, a3, (_DWORD)ghsemGreLock, 2, (__int64)L"ghsemGreLock");
  v7 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v7);
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz((_DWORD)v5, a2, a3, (_DWORD)ghsemDCVisRgn, 3, (__int64)L"ghsemDCVisRgn");
  v8 = (__int64 *)(gpDispInfo + 24);
  v9 = *(_QWORD *)(gpDispInfo + 24);
  if ( !v9 )
  {
LABEL_19:
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
    UserSetLastError(1425LL);
    return 2LL;
  }
  while ( 1 )
  {
    v10 = *(_QWORD *)(v9 + 8);
    if ( v10 == a1 )
      break;
    v8 = (__int64 *)v9;
    v9 = *(_QWORD *)v9;
    if ( !v9 )
      goto LABEL_19;
  }
  v12 = *(_DWORD *)(v9 + 64);
  if ( v12 < 0 )
  {
    v13 = DestroyCacheDC(v8, v10);
    v14 = *(_QWORD *)(gpDispInfo + 40);
    if ( v13 )
    {
      GreUnlockVisRgn(v14);
      return 1LL;
    }
    goto LABEL_25;
  }
  if ( (v12 & 0x401800) != 0x1000 )
  {
    v14 = *(_QWORD *)(gpDispInfo + 40);
LABEL_25:
    GreUnlockVisRgn(v14);
    return 2LL;
  }
  if ( (v12 & 0x4000) != 0
    && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 32) + 40LL) + 27LL) & 2) != 0
    && (int)IsFlushWEFCOMPOSITEDDCEBoundsSupported() >= 0 )
  {
    FlushWEFCOMPOSITEDDCEBounds(v9);
  }
  v15 = *(_DWORD *)(v9 + 64);
  if ( (v15 & 2) == 0 )
    goto LABEL_62;
  v16 = 0LL;
  if ( (int)IsGreHintDCWndSupported() >= 0 )
    GreHintDCWnd(a1, 0LL, 0LL, 0LL, 0);
  v17 = *(HDC *)(v9 + 8);
  v27[0] = 0LL;
  v27[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v27, v17);
  if ( !v27[0]
    || !(unsigned int)XDCOBJ::bCleanDC(v27, 0)
    || (v18 = GreSetDCOwnerEx((unsigned int)v17, 0x80000012, 0, 0), v19 = 1, !v18) )
  {
    v19 = 0;
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v27);
  if ( !v19 )
  {
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
    return 2LL;
  }
  *(_DWORD *)(v9 + 64) &= ~0x1000u;
  v20 = *(_QWORD *)(v9 + 8);
  *(_QWORD *)(v9 + 72) = 0LL;
  *(_QWORD *)(v9 + 80) = 0LL;
  v28[1] = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached() )
    PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v32);
  v21 = gpHandleManager;
  v30 = 1;
  v22 = GdiHandleManager::DecodeIndex(
          (GdiHandleEntryDirectory **)gpHandleManager,
          (unsigned __int16)v20 | ((unsigned int)v20 >> 8) & 0xFF0000);
  v23 = GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v21 + 2), v22, 0);
  v29 = v23;
  v24 = v23;
  if ( v23 )
  {
    _m_prefetchw((char *)v23 + 8);
    v31 = *((_DWORD *)v23 + 2);
    v25 = *((_BYTE *)v23 + 15);
    if ( (v25 & 0x20) != 0 )
      goto LABEL_46;
    if ( (v25 & 0x40) == 0 )
      goto LABEL_48;
    EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v24 & 0xFFFFFF);
    if ( !*((_WORD *)EntryObject + 6) || *((struct _KTHREAD **)EntryObject + 2) != KeGetCurrentThread() )
    {
LABEL_46:
      HANDLELOCK::vUnlock((HANDLELOCK *)&v29);
      if ( !v30 )
        goto LABEL_52;
    }
    v24 = v29;
LABEL_48:
    if ( *((_BYTE *)v24 + 14) == 1 && *((_WORD *)v24 + 6) == WORD1(v20) )
    {
      v16 = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v24 & 0xFFFFFF);
      ++*((_DWORD *)v16 + 2);
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v29);
    goto LABEL_52;
  }
  v30 = 0;
  KeLeaveCriticalRegion();
LABEL_52:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v29);
  v28[0] = v16;
  if ( v16 )
  {
    *((_DWORD *)v16 + 9) &= ~0x100000u;
    GrepValidateVisRgn(v16, *((struct REGION **)v16 + 140));
  }
  DCOBJA::~DCOBJA((DCOBJA *)v28);
  if ( (*(_DWORD *)(v9 + 64) & 0x4000) != 0 && (int)IsGreSelectRedirectionBitmapSupported() >= 0 )
    GreSelectRedirectionBitmap(*(_QWORD *)(v9 + 8), 0LL);
  if ( ++gnDCECount > 32 && (unsigned int)DestroyCacheDC(v8, *(_QWORD *)(v9 + 8)) )
  {
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
    return 1LL;
  }
  v15 = *(_DWORD *)(v9 + 64);
LABEL_62:
  if ( (v15 & 0xC0) != 0 && ((v15 & 2) != 0 || a2) && (int)IsDeleteHrgnClipSupported() >= 0 )
    DeleteHrgnClip(v9);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
  return 0LL;
}

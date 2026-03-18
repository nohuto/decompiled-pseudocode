/*
 * XREFs of ReleaseCacheDC @ 0x1C002C3A0
 * Callers:
 *     NtUserReleaseDC @ 0x1C0030160 (NtUserReleaseDC.c)
 *     _ReleaseDC @ 0x1C00453F0 (_ReleaseDC.c)
 *     xxxEnumDisplayMonitors @ 0x1C0057430 (xxxEnumDisplayMonitors.c)
 *     UserReleaseDC @ 0x1C0064A80 (UserReleaseDC.c)
 * Callees:
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C0024D98 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0029780 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002A7E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C002AD50 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C002B0E0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002BEC0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002C040 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C002D3D0 (--1DCOBJ@@QEAA@XZ.c)
 *     GreSetDCOwnerEx @ 0x1C002E880 (GreSetDCOwnerEx.c)
 *     GreUnlockVisRgn @ 0x1C0033460 (GreUnlockVisRgn.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     DestroyCacheDC @ 0x1C0062BA0 (DestroyCacheDC.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C0073C68 (--1DCOBJA@@QEAA@XZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C0075BD4 (IsThreadCrossSessionAttached.c)
 *     McTemplateK0pqz @ 0x1C00DA608 (McTemplateK0pqz.c)
 *     McTemplateK0pz @ 0x1C00DA6C0 (McTemplateK0pz.c)
 */

__int64 __fastcall ReleaseCacheDC(__int64 a1, int a2, int a3)
{
  int v5; // ecx
  struct _ERESOURCE *v6; // rdi
  struct _ERESOURCE *v7; // rdi
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rdx
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  struct OBJECT *v16; // rsi
  HDC v17; // rbx
  int v18; // eax
  int v19; // ebx
  __int64 v20; // rbp
  unsigned int v21; // r15d
  GdiHandleManager *v22; // rbx
  unsigned int v23; // eax
  struct _ENTRY *v24; // rax
  struct _ENTRY *v25; // rcx
  char v26; // al
  struct OBJECT *EntryObject; // rax
  DC *v28[2]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v29[2]; // [rsp+40h] [rbp-58h] BYREF
  struct _ENTRY *v30; // [rsp+50h] [rbp-48h] BYREF
  int v31; // [rsp+58h] [rbp-40h]
  int v32; // [rsp+5Ch] [rbp-3Ch]
  char v33; // [rsp+B0h] [rbp+18h] BYREF

  v5 = (int)ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared();
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(
      v5,
      (unsigned int)&LockAcquireShared,
      a3,
      (_DWORD)ghsemDynamicModeChange,
      (__int64)L"ghsemDynamicModeChange");
  v6 = ghsemGreLock;
  if ( ghsemGreLock )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v6);
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz(v5, a2, a3, (_DWORD)ghsemGreLock, 2, (__int64)L"ghsemGreLock");
  v7 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v7);
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz(v5, a2, a3, (_DWORD)ghsemDCVisRgn, 3, (__int64)L"ghsemDCVisRgn");
  v8 = gpDispInfo + 24;
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
    v8 = v9;
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
    goto LABEL_63;
  v16 = 0LL;
  if ( (int)IsGreHintDCWndSupported() >= 0 )
    GreHintDCWnd(a1, 0LL, 0LL, 0LL, 0);
  v17 = *(HDC *)(v9 + 8);
  v28[0] = 0LL;
  v28[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v28, v17);
  if ( !v28[0]
    || !(unsigned int)XDCOBJ::bCleanDC(v28, 0)
    || (v18 = GreSetDCOwnerEx(v17, 2147483666LL, 0LL, 1LL), v19 = 1, !v18) )
  {
    v19 = 0;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v28);
  if ( !v19 )
  {
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
    return 2LL;
  }
  *(_DWORD *)(v9 + 64) &= ~0x1000u;
  v20 = *(_QWORD *)(v9 + 8);
  v21 = v20;
  *(_QWORD *)(v9 + 72) = 0LL;
  *(_QWORD *)(v9 + 80) = 0LL;
  v29[1] = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached() && PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v33) )
    v21 = v20;
  v22 = gpHandleManager;
  v31 = 1;
  v23 = GdiHandleManager::DecodeIndex(
          (GdiHandleEntryDirectory **)gpHandleManager,
          (unsigned __int16)v21 | (v21 >> 8) & 0xFF0000);
  v24 = GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v22 + 2), v23, 0);
  v25 = v24;
  v30 = v24;
  if ( v24 )
  {
    _m_prefetchw((char *)v24 + 8);
    v32 = *((_DWORD *)v24 + 2);
    v26 = *((_BYTE *)v24 + 15);
    if ( (v26 & 0x20) != 0 )
      goto LABEL_47;
    if ( (v26 & 0x40) == 0 )
      goto LABEL_49;
    EntryObject = GdiHandleManager::GetEntryObject(
                    (GdiHandleEntryDirectory **)gpHandleManager,
                    *(_DWORD *)v25 & 0xFFFFFF);
    if ( !*((_WORD *)EntryObject + 6) || *((struct _KTHREAD **)EntryObject + 2) != KeGetCurrentThread() )
    {
LABEL_47:
      HANDLELOCK::vUnlock((HANDLELOCK *)&v30);
      if ( !v31 )
        goto LABEL_53;
    }
    v25 = v30;
LABEL_49:
    if ( *((_BYTE *)v25 + 14) == 1 && *((_WORD *)v25 + 6) == WORD1(v20) )
    {
      v16 = GdiHandleManager::GetEntryObject((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v25 & 0xFFFFFF);
      ++*((_DWORD *)v16 + 2);
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v30);
    goto LABEL_53;
  }
  v31 = 0;
  KeLeaveCriticalRegion();
LABEL_53:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v30);
  v29[0] = v16;
  if ( v16 )
  {
    *((_DWORD *)v16 + 9) &= ~0x100000u;
    GrepValidateVisRgn(v16, *((struct REGION **)v16 + 191));
  }
  DCOBJA::~DCOBJA((DCOBJA *)v29);
  if ( (*(_DWORD *)(v9 + 64) & 0x4000) != 0 && (int)IsGreSelectRedirectionBitmapSupported() >= 0 )
    GreSelectRedirectionBitmap(*(_QWORD *)(v9 + 8), 0LL);
  if ( ++gnDCECount > 32 && (unsigned int)DestroyCacheDC(v8, *(_QWORD *)(v9 + 8)) )
  {
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
    return 1LL;
  }
  v15 = *(_DWORD *)(v9 + 64);
LABEL_63:
  if ( (v15 & 0xC0) != 0 && ((v15 & 2) != 0 || a2) && (int)IsDeleteHrgnClipSupported() >= 0 )
    DeleteHrgnClip(v9);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
  return 0LL;
}

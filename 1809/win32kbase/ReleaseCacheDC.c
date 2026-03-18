/*
 * XREFs of ReleaseCacheDC @ 0x1C0027A50
 * Callers:
 *     NtUserReleaseDC @ 0x1C0028430 (NtUserReleaseDC.c)
 *     _ReleaseDC @ 0x1C0029EE0 (_ReleaseDC.c)
 *     xxxEnumDisplayMonitors @ 0x1C0039060 (xxxEnumDisplayMonitors.c)
 *     UserReleaseDC @ 0x1C00757F0 (UserReleaseDC.c)
 * Callees:
 *     GreValidateVisrgn @ 0x1C0027468 (GreValidateVisrgn.c)
 *     GreUnlockVisRgn @ 0x1C0029B20 (GreUnlockVisRgn.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     DestroyCacheDC @ 0x1C0045330 (DestroyCacheDC.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1C00ACBC0 (GreCleanDCAndSetOwnerEx.c)
 *     McTemplateK0pqz @ 0x1C01082A8 (McTemplateK0pqz.c)
 *     McTemplateK0pz @ 0x1C0108360 (McTemplateK0pz.c)
 */

__int64 __fastcall ReleaseCacheDC(__int64 a1, int a2, __int64 a3)
{
  PERESOURCE v5; // rcx
  struct _ERESOURCE *v6; // rbx
  struct _ERESOURCE *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  HDC v13; // rcx
  PERESOURCE v14; // rcx
  PERESOURCE v15; // rcx
  int v17; // eax
  __int64 v18; // rcx

  v5 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared();
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(v5, &LockAcquireShared, a3, ghsemDynamicModeChange, L"ghsemDynamicModeChange");
  v6 = ghsemGreLock;
  if ( ghsemGreLock )
  {
    PsEnterPriorityRegion(v5);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v6);
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz((_DWORD)v5, a2, a3, (_DWORD)ghsemGreLock, 2, (__int64)L"ghsemGreLock");
  v7 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    PsEnterPriorityRegion(v5);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v7);
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz((_DWORD)v5, a2, a3, (_DWORD)ghsemDCVisRgn, 3, (__int64)L"ghsemDCVisRgn");
  v8 = gpDispInfo + 24;
  v9 = *(_QWORD *)(gpDispInfo + 24);
  if ( !v9 )
  {
LABEL_37:
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
      goto LABEL_37;
  }
  v11 = *(unsigned int *)(v9 + 64);
  if ( (int)v11 < 0 )
  {
    v17 = DestroyCacheDC(v8, v10);
    v18 = *(_QWORD *)(gpDispInfo + 40);
    if ( v17 )
    {
      GreUnlockVisRgn(v18);
      return 1LL;
    }
    goto LABEL_46;
  }
  if ( (v11 & 0x401800) != 0x1000 )
  {
    v18 = *(_QWORD *)(gpDispInfo + 40);
LABEL_46:
    GreUnlockVisRgn(v18);
    return 2LL;
  }
  if ( (v11 & 0x4000) != 0 )
  {
    v5 = *(PERESOURCE *)(*(_QWORD *)(v9 + 32) + 40LL);
    if ( (v5->WaiterPriority & 2) != 0 && (int)IsFlushWEFCOMPOSITEDDCEBoundsSupported() >= 0 )
      FlushWEFCOMPOSITEDDCEBounds(v9);
  }
  v12 = *(_DWORD *)(v9 + 64);
  if ( (v12 & 2) != 0 )
  {
    if ( (int)IsGreHintDCWndSupported() >= 0 )
      GreHintDCWnd(a1, 0LL, 0LL, 0LL, 0);
    if ( !(unsigned int)GreCleanDCAndSetOwnerEx(*(HDC *)(v9 + 8)) )
    {
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
      return 2LL;
    }
    v13 = *(HDC *)(v9 + 8);
    *(_DWORD *)(v9 + 64) &= ~0x1000u;
    *(_QWORD *)(v9 + 72) = 0LL;
    *(_QWORD *)(v9 + 80) = 0LL;
    GreValidateVisrgn(v13, 0);
    if ( (*(_DWORD *)(v9 + 64) & 0x4000) != 0 && (int)IsGreSelectRedirectionBitmapSupported() >= 0 )
      GreSelectRedirectionBitmap(*(_QWORD *)(v9 + 8), 0LL);
    if ( ++gnDCECount > 32 && (unsigned int)DestroyCacheDC(v8, *(_QWORD *)(v9 + 8)) )
    {
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
      return 1LL;
    }
    v12 = *(_DWORD *)(v9 + 64);
  }
  if ( (v12 & 0xC0) != 0 && ((v12 & 2) != 0 || a2) && (int)IsDeleteHrgnClipSupported() >= 0 )
    DeleteHrgnClip(v9);
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(v5, &LockRelease, v11, ghsemDCVisRgn, L"ghsemDCVisRgn");
  v14 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
    PsLeavePriorityRegion();
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(v14, &LockRelease, v11, ghsemGreLock, L"ghsemGreLock");
  v15 = ghsemGreLock;
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
    PsLeavePriorityRegion();
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(v15, &LockRelease, v11, ghsemDynamicModeChange, L"ghsemDynamicModeChange");
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
  return 0LL;
}

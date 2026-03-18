/*
 * XREFs of ReleaseCacheDC @ 0x1C001ED70
 * Callers:
 *     NtUserReleaseDC @ 0x1C0029DE0 (NtUserReleaseDC.c)
 *     _ReleaseDC @ 0x1C003C4F0 (_ReleaseDC.c)
 *     xxxEnumDisplayMonitors @ 0x1C003E730 (xxxEnumDisplayMonitors.c)
 *     UserReleaseDC @ 0x1C008D650 (UserReleaseDC.c)
 * Callees:
 *     GreUnlockVisRgn @ 0x1C0017990 (GreUnlockVisRgn.c)
 *     GreSetDCOwnerEx @ 0x1C0019340 (GreSetDCOwnerEx.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C0019BF0 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C001C0F0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001CFF0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001D5B0 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C001D6E0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C001EBB0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C001ECE0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C001ED54 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00200C0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     DestroyCacheDC @ 0x1C0064E90 (DestroyCacheDC.c)
 *     IsThreadCrossSessionAttached @ 0x1C00BCE08 (IsThreadCrossSessionAttached.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C00BE474 (--1DCOBJA@@QEAA@XZ.c)
 *     McTemplateK0pqz @ 0x1C0132558 (McTemplateK0pqz.c)
 *     McTemplateK0pz @ 0x1C0132610 (McTemplateK0pz.c)
 */

__int64 __fastcall ReleaseCacheDC(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r15d
  PERESOURCE v5; // rcx
  struct _ERESOURCE *v6; // rbx
  struct _ERESOURCE *v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rbx
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  struct OBJECT *v15; // rsi
  HDC v16; // rdi
  int v17; // eax
  int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rbp
  GdiHandleManager *v22; // rdi
  unsigned int v23; // eax
  struct _ENTRY *v24; // rax
  struct _ENTRY *v25; // rcx
  char v26; // al
  struct OBJECT *EntryObject; // rax
  DC *v28[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v29[2]; // [rsp+40h] [rbp-48h] BYREF
  struct _ENTRY *v30; // [rsp+50h] [rbp-38h] BYREF
  int v31; // [rsp+58h] [rbp-30h]
  int v32; // [rsp+5Ch] [rbp-2Ch]
  char v33; // [rsp+A0h] [rbp+18h] BYREF

  v4 = a2;
  v5 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared();
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(v5, &LockAcquireShared, a3, ghsemDynamicModeChange, L"ghsemDynamicModeChange");
  v6 = (struct _ERESOURCE *)ghsemGreLock;
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
  v8 = gpDispInfo + 24;
  v9 = *(_QWORD *)(gpDispInfo + 24);
  if ( !v9 )
  {
LABEL_19:
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), a2, a3);
    UserSetLastError(1425LL);
    return 2LL;
  }
  while ( 1 )
  {
    a2 = *(_QWORD *)(v9 + 8);
    if ( a2 == a1 )
      break;
    v8 = v9;
    v9 = *(_QWORD *)v9;
    if ( !v9 )
      goto LABEL_19;
  }
  v11 = *(_DWORD *)(v9 + 64);
  if ( v11 < 0 )
  {
    v12 = DestroyCacheDC(v8, a2);
    v13 = *(_QWORD *)(gpDispInfo + 40);
    if ( v12 )
    {
      GreUnlockVisRgn(v13, a2, a3);
      return 1LL;
    }
    goto LABEL_25;
  }
  if ( (v11 & 0x401800) != 0x1000 )
  {
    v13 = *(_QWORD *)(gpDispInfo + 40);
LABEL_25:
    GreUnlockVisRgn(v13, a2, a3);
    return 2LL;
  }
  if ( (v11 & 0x4000) != 0
    && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 32) + 40LL) + 27LL) & 2) != 0
    && (int)IsFlushWEFCOMPOSITEDDCEBoundsSupported() >= 0 )
  {
    FlushWEFCOMPOSITEDDCEBounds(v9);
  }
  v14 = *(_DWORD *)(v9 + 64);
  if ( (v14 & 2) == 0 )
    goto LABEL_62;
  v15 = 0LL;
  if ( (int)IsGreHintDCWndSupported() >= 0 )
    GreHintDCWnd(a1, 0LL, 0LL, 0LL, 0);
  v16 = *(HDC *)(v9 + 8);
  v28[0] = 0LL;
  v28[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v28, v16);
  if ( !v28[0]
    || !(unsigned int)XDCOBJ::bCleanDC(v28, 0)
    || (v17 = GreSetDCOwnerEx((unsigned int)v16, 0x80000012, 0, 0), v18 = 1, !v17) )
  {
    v18 = 0;
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v28);
  if ( !v18 )
  {
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v19, v20);
    return 2LL;
  }
  *(_DWORD *)(v9 + 64) &= ~0x1000u;
  v21 = *(_QWORD *)(v9 + 8);
  *(_QWORD *)(v9 + 72) = 0LL;
  *(_QWORD *)(v9 + 80) = 0LL;
  v29[1] = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached() )
    PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v33);
  v22 = gpHandleManager;
  v31 = 1;
  v23 = GdiHandleManager::DecodeIndex(
          (GdiHandleEntryDirectory **)gpHandleManager,
          (unsigned __int16)v21 | ((unsigned int)v21 >> 8) & 0xFF0000);
  v24 = GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v22 + 2), v23, 0);
  v30 = v24;
  v25 = v24;
  if ( v24 )
  {
    _m_prefetchw((char *)v24 + 8);
    v32 = *((_DWORD *)v24 + 2);
    v26 = *((_BYTE *)v24 + 15);
    if ( (v26 & 0x20) != 0 )
      goto LABEL_46;
    if ( (v26 & 0x40) == 0 )
      goto LABEL_48;
    EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v25 & 0xFFFFFF);
    if ( !*((_WORD *)EntryObject + 6) || *((struct _KTHREAD **)EntryObject + 2) != KeGetCurrentThread() )
    {
LABEL_46:
      HANDLELOCK::vUnlock((HANDLELOCK *)&v30);
      if ( !v31 )
        goto LABEL_52;
    }
    v25 = v30;
LABEL_48:
    if ( *((_BYTE *)v25 + 14) == 1 && *((_WORD *)v25 + 6) == WORD1(v21) )
    {
      v15 = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v25 & 0xFFFFFF);
      ++*((_DWORD *)v15 + 2);
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v30);
    goto LABEL_52;
  }
  v31 = 0;
  KeLeaveCriticalRegion();
LABEL_52:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v30);
  v29[0] = v15;
  if ( v15 )
  {
    *((_DWORD *)v15 + 9) &= ~0x100000u;
    GrepValidateVisRgn(v15, *((struct REGION **)v15 + 140));
  }
  DCOBJA::~DCOBJA((DCOBJA *)v29);
  if ( (*(_DWORD *)(v9 + 64) & 0x4000) != 0 && (int)IsGreSelectRedirectionBitmapSupported() >= 0 )
    GreSelectRedirectionBitmap(*(_QWORD *)(v9 + 8), 0LL);
  if ( ++gnDCECount > 32 && (unsigned int)DestroyCacheDC(v8, *(_QWORD *)(v9 + 8)) )
  {
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), a2, a3);
    return 1LL;
  }
  v14 = *(_DWORD *)(v9 + 64);
LABEL_62:
  if ( (v14 & 0xC0) != 0 && ((v14 & 2) != 0 || v4) && (int)IsDeleteHrgnClipSupported() >= 0 )
    DeleteHrgnClip(v9);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), a2, a3);
  return 0LL;
}

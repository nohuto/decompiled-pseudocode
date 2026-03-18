/*
 * XREFs of HmgLockEx @ 0x1C001FCA0
 * Callers:
 *     GreMakeBitmapNonStock @ 0x1C00501C0 (GreMakeBitmapNonStock.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C006C4E4 (-vCleanupRegions@@YAXK@Z.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C009D67C (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     EngDeleteDriverObj @ 0x1C012F6B0 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C012F7D0 (EngLockDriverObj.c)
 *     EngUnlockDriverObj @ 0x1C012F800 (EngUnlockDriverObj.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001F380 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001F810 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C001FEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0020020 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C00200A0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C00B9DA8 (IsThreadCrossSessionAttached.c)
 */

struct OBJECT *__fastcall HmgLockEx(unsigned int a1, char a2, int a3)
{
  struct OBJECT *v6; // rdi
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v8; // rsi
  GdiHandleManager *v9; // rbx
  unsigned int v10; // eax
  struct _ENTRY *v11; // rax
  struct _ENTRY *v12; // rcx
  int v13; // edx
  unsigned int v14; // edx
  struct OBJECT *EntryObject; // rax
  struct _KTHREAD *CurrentThread; // rbx
  __int16 v17; // ax
  struct _ENTRY *v19; // [rsp+20h] [rbp-38h] BYREF
  int v20; // [rsp+28h] [rbp-30h]
  int v21; // [rsp+2Ch] [rbp-2Ch]
  int v22; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached()
    && (CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v22)) != 0
    && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v8 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  }
  else
  {
    v8 = 0LL;
  }
  v9 = gpHandleManager;
  v20 = 1;
  v10 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000);
  v11 = GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v9 + 2), v10, 0);
  v19 = v11;
  v12 = v11;
  if ( !v11 )
  {
    v20 = 0;
    KeLeaveCriticalRegion();
    goto LABEL_28;
  }
  _m_prefetchw((char *)v11 + 8);
  v13 = *((_DWORD *)v11 + 2);
  v21 = v13;
  if ( !a3 )
  {
    v14 = v13 & 0xFFFFFFFE;
    if ( v14 != (v22 & 0xFFFFFFFC) && v14 && (!v8 || v14 != *(_DWORD *)(v8 + 8)) )
      goto LABEL_17;
    if ( (*((_BYTE *)v11 + 15) & 0x20) != 0 )
      goto LABEL_17;
  }
  if ( (*((_BYTE *)v11 + 15) & 0x40) == 0 )
    goto LABEL_19;
  EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v11 & 0xFFFFFF);
  if ( !*((_WORD *)EntryObject + 6) || *((struct _KTHREAD **)EntryObject + 2) != KeGetCurrentThread() )
  {
LABEL_17:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v19);
    if ( !v20 )
      goto LABEL_28;
  }
  v12 = v19;
LABEL_19:
  if ( *((_BYTE *)v12 + 14) == a2 && *((_WORD *)v12 + 6) == HIWORD(a1) && (!a3 || (*((_BYTE *)v12 + 15) & 0x20) != 0) )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v19 & 0xFFFFFF);
    v17 = *((_WORD *)v6 + 6);
    if ( !v17 || *((struct _KTHREAD **)v6 + 2) == CurrentThread )
    {
      *((_QWORD *)v6 + 2) = CurrentThread;
      *((_WORD *)v6 + 6) = v17 + 1;
    }
    else
    {
      v6 = 0LL;
    }
  }
  HANDLELOCK::vUnlock((HANDLELOCK *)&v19);
LABEL_28:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v19);
  return v6;
}

/*
 * XREFs of ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C002B100
 * Callers:
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0028A00 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0028CD0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0029780 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     bDeleteBrush @ 0x1C003CFE0 (bDeleteBrush.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C0043810 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     HmgMarkLazyDelete @ 0x1C005D190 (HmgMarkLazyDelete.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C002AD50 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002BEC0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002C040 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0075BD4 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall HANDLELOCK::bLockHobj(HANDLELOCK *this, struct HOBJ__ *a2, char a3)
{
  unsigned int v4; // ebp
  __int64 result; // rax
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v8; // rsi
  GdiHandleManager *v9; // rbx
  unsigned int v10; // eax
  struct _ENTRY *v11; // rax
  struct _ENTRY *v12; // rdx
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  char v16; // al
  struct OBJECT *EntryObject; // rax
  int v18; // [rsp+40h] [rbp+8h] BYREF

  v4 = (unsigned int)a2;
  if ( *((_DWORD *)this + 2) )
    return 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached()
    && (CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v18)) != 0
    && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v8 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  }
  else
  {
    v8 = 0LL;
  }
  *((_DWORD *)this + 2) = 1;
  v9 = gpHandleManager;
  v10 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)v4 | (v4 >> 8) & 0xFF0000);
  v11 = GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v9 + 2), v10, 0);
  v12 = v11;
  *(_QWORD *)this = v11;
  if ( v11 )
  {
    _m_prefetchw((char *)v11 + 8);
    v13 = *((_DWORD *)v11 + 2);
    v14 = v18;
    *((_DWORD *)this + 3) = v13;
    v15 = v13 & 0xFFFFFFFE;
    if ( v15 != (v14 & 0xFFFFFFFC) && v15 && (!v8 || v15 != *(_DWORD *)(v8 + 8))
      || (v16 = *((_BYTE *)v12 + 15), (v16 & 0x20) != 0)
      || (v16 & 0x40) != 0
      && ((EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v12 & 0xFFFFFF),
           !*((_WORD *)EntryObject + 6))
       || *((struct _KTHREAD **)EntryObject + 2) != KeGetCurrentThread()) )
    {
      HANDLELOCK::vUnlock(this);
    }
  }
  else
  {
    *((_DWORD *)this + 2) = 0;
    KeLeaveCriticalRegion();
  }
  result = *((unsigned int *)this + 2);
  if ( (_DWORD)result && (*(_BYTE *)(*(_QWORD *)this + 14LL) != a3 || *(_WORD *)(*(_QWORD *)this + 12LL) != HIWORD(v4)) )
  {
    HANDLELOCK::vUnlock(this);
    return *((unsigned int *)this + 2);
  }
  return result;
}

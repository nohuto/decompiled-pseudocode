/*
 * XREFs of ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C002F350
 * Callers:
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C002FCB0 (--1DCMEMOBJ@@QEAA@XZ.c)
 *     bDeleteDCInternalEx @ 0x1C0030D10 (bDeleteDCInternalEx.c)
 * Callees:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0029780 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C002AD50 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C002B0E0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002BEC0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002C040 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C002E210 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00335D0 (GreReleaseHmgrSemaphore.c)
 *     EngSetLastError @ 0x1C00689B0 (EngSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C0075BD4 (IsThreadCrossSessionAttached.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C00C2680 (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 *     McTemplateK0pqz @ 0x1C00DA608 (McTemplateK0pqz.c)
 */

__int64 __fastcall bDeleteDCOBJ(struct HOBJ__ ***this, unsigned int *a2, int *a3)
{
  int v3; // ebp
  struct HOBJ__ **v5; // rcx
  unsigned int *v6; // rcx
  unsigned int v7; // edi
  struct _ERESOURCE *v9; // rbx
  struct HOBJ__ *v10; // r15
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v12; // rsi
  GdiHandleManager *v13; // rbx
  unsigned int v14; // eax
  struct _ENTRY *v15; // rax
  struct _ENTRY *v16; // rbx
  unsigned int v17; // ecx
  char v18; // al
  struct OBJECT *EntryObject; // rax
  struct OBJECT *v20; // rax
  struct OBJECT *v21; // rsi
  char v22; // al
  struct _ENTRY *v23; // [rsp+30h] [rbp-48h] BYREF
  int v24; // [rsp+38h] [rbp-40h]
  int v25; // [rsp+3Ch] [rbp-3Ch]
  int v26; // [rsp+88h] [rbp+10h] BYREF

  v3 = 0;
  v5 = *this;
  if ( a2 )
  {
    *((_DWORD *)v5 + 9) |= *a2 & 0x1C00000;
    v6 = a2;
  }
  else
  {
    v6 = (unsigned int *)v5 + 9;
  }
  v7 = *v6;
  if ( (*v6 & 0x400000) == 0 && (*((_BYTE *)*this + 36) & 8) != 0 )
    v3 = 1;
  *a3 = v3;
  if ( !a2 && !(unsigned int)HmgQueryRemoveAttempted(**this, 0) )
  {
    EngSetLastError(0x139Fu);
    return 0LL;
  }
  if ( *((_WORD *)*this + 6) > 1u && (v7 & 0x1C00000) == 0 )
    goto LABEL_12;
  if ( !v3 )
  {
    v9 = ghsemHmgr;
    v10 = **this;
    if ( ghsemHmgr )
    {
      PsEnterPriorityRegion();
      ExEnterCriticalRegionAndAcquireResourceExclusive(v9);
    }
    if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pqz((_DWORD)v6, (_DWORD)a2, (_DWORD)a3, (_DWORD)ghsemHmgr, 16, (__int64)L"ghsemHmgr");
    if ( !(unsigned int)IsThreadCrossSessionAttached()
      && (CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v26)) != 0
      && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
    {
      v12 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
    }
    else
    {
      v12 = 0LL;
    }
    v13 = gpHandleManager;
    v24 = 1;
    v14 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)gpHandleManager,
            (unsigned __int16)v10 | ((unsigned int)v10 >> 8) & 0xFF0000);
    v15 = GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v13 + 2), v14, 0);
    v23 = v15;
    v16 = v15;
    if ( !v15 )
    {
      v24 = 0;
      KeLeaveCriticalRegion();
      goto LABEL_44;
    }
    _m_prefetchw((char *)v15 + 8);
    v25 = *((_DWORD *)v15 + 2);
    v17 = v25 & 0xFFFFFFFE;
    if ( (v25 & 0xFFFFFFFE) != (v26 & 0xFFFFFFFC) && v17 && (!v12 || v17 != *(_DWORD *)(v12 + 8)) )
      goto LABEL_34;
    v18 = *((_BYTE *)v15 + 15);
    if ( (v18 & 0x20) != 0 )
      goto LABEL_34;
    if ( (v18 & 0x40) == 0 )
      goto LABEL_36;
    EntryObject = GdiHandleManager::GetEntryObject(
                    (GdiHandleEntryDirectory **)gpHandleManager,
                    *(_DWORD *)v16 & 0xFFFFFF);
    if ( !*((_WORD *)EntryObject + 6) || *((struct _KTHREAD **)EntryObject + 2) != KeGetCurrentThread() )
    {
LABEL_34:
      HANDLELOCK::vUnlock((HANDLELOCK *)&v23);
      if ( !v24 )
        goto LABEL_44;
    }
    v16 = v23;
LABEL_36:
    v20 = GdiHandleManager::GetEntryObject((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v16 & 0xFFFFFF);
    v21 = v20;
    if ( *((_BYTE *)v16 + 14) == 1 && *((_WORD *)v16 + 6) == WORD1(v10) )
    {
      if ( *((_WORD *)v20 + 6) != 1 || *((_DWORD *)v20 + 2) )
      {
        *((_BYTE *)v16 + 15) |= 8u;
      }
      else
      {
        v22 = *((_BYTE *)v16 + 15);
        if ( (v22 & 1) == 0 )
        {
          *((_BYTE *)v16 + 15) = v22 | 0x40;
          HANDLELOCK::vUnlock((HANDLELOCK *)&v23);
          goto LABEL_45;
        }
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v23);
LABEL_44:
    v21 = 0LL;
LABEL_45:
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v23);
    GreReleaseHmgrSemaphore();
    if ( !v21 )
    {
LABEL_12:
      EngSetLastError(0xAAu);
      return 0LL;
    }
  }
  XDCOBJ::bCleanDC((DC **)this, HIBYTE(v7) & 1);
  if ( !v3 )
    vDeleteDCInternalWorker((DC **)this, (v7 >> 23) & 1);
  return 1LL;
}

/*
 * XREFs of ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C0077450
 * Callers:
 *     bDeleteDCInternalEx @ 0x1C0021720 (bDeleteDCInternalEx.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C007B630 (--1DCMEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C0018270 (GreReleaseHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001CFF0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001D5B0 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C001D6E0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C001EBB0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C001ECE0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C001ED54 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C0020A10 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     EngSetLastError @ 0x1C0094990 (EngSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C00BCE08 (IsThreadCrossSessionAttached.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C012570C (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 *     McTemplateK0pqz @ 0x1C0132558 (McTemplateK0pqz.c)
 */

__int64 __fastcall bDeleteDCOBJ(struct HOBJ__ ***this, unsigned int *a2, int *a3)
{
  struct HOBJ__ **v3; // r9
  int v4; // r15d
  unsigned int *v6; // rax
  unsigned int v7; // edi
  int v8; // eax
  struct HOBJ__ *v10; // rbp
  struct _ERESOURCE *v11; // rbx
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v13; // rsi
  GdiHandleManager *v14; // rbx
  unsigned int v15; // eax
  struct _ENTRY *v16; // rax
  struct _ENTRY *v17; // rbx
  unsigned int v18; // ecx
  char v19; // al
  struct OBJECT *EntryObject; // rax
  struct OBJECT *v21; // rax
  struct OBJECT *v22; // rsi
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  struct _ENTRY *v27; // [rsp+30h] [rbp-38h] BYREF
  int v28; // [rsp+38h] [rbp-30h]
  int v29; // [rsp+3Ch] [rbp-2Ch]
  int v30; // [rsp+70h] [rbp+8h] BYREF

  v3 = *this;
  v4 = 0;
  if ( a2 )
  {
    *((_DWORD *)v3 + 9) |= *a2 & 0x1C00000;
    v6 = a2;
    v3 = *this;
  }
  else
  {
    v6 = (unsigned int *)v3 + 9;
  }
  v7 = *v6;
  v8 = *((_DWORD *)v3 + 9);
  if ( (v8 & 8) != 0 )
  {
    if ( (v7 & 0x400000) != 0 )
      *((_DWORD *)v3 + 9) = v8 & 0xFFFFFFF7;
    else
      v4 = 1;
  }
  *a3 = v4;
  if ( !a2 && !(unsigned int)HmgQueryRemoveAttempted(**this, 0) )
  {
    EngSetLastError(0x139Fu);
    return 0LL;
  }
  if ( *((_WORD *)*this + 6) > 1u && (v7 & 0x1C00000) == 0 )
    goto LABEL_46;
  if ( !v4 )
  {
    v10 = **this;
    v11 = ghsemHmgr;
    if ( ghsemHmgr )
    {
      PsEnterPriorityRegion();
      ExEnterCriticalRegionAndAcquireResourceExclusive(v11);
    }
    if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pqz((_DWORD)this, (_DWORD)a2, (_DWORD)a3, (_DWORD)ghsemHmgr, 17, (__int64)L"ghsemHmgr");
    if ( !(unsigned int)IsThreadCrossSessionAttached()
      && (CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v30)) != 0
      && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
    {
      v13 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
    }
    else
    {
      v13 = 0LL;
    }
    v14 = gpHandleManager;
    v28 = 1;
    v15 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)gpHandleManager,
            (unsigned __int16)v10 | ((unsigned int)v10 >> 8) & 0xFF0000);
    v16 = GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v14 + 2), v15, 0);
    v27 = v16;
    v17 = v16;
    if ( !v16 )
    {
      v28 = 0;
      KeLeaveCriticalRegion();
      goto LABEL_44;
    }
    _m_prefetchw((char *)v16 + 8);
    v29 = *((_DWORD *)v16 + 2);
    v18 = v29 & 0xFFFFFFFE;
    if ( (v29 & 0xFFFFFFFE) != (v30 & 0xFFFFFFFC) && v18 && (!v13 || v18 != *(_DWORD *)(v13 + 8)) )
      goto LABEL_34;
    v19 = *((_BYTE *)v16 + 15);
    if ( (v19 & 0x20) != 0 )
      goto LABEL_34;
    if ( (v19 & 0x40) == 0 )
      goto LABEL_36;
    EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v17 & 0xFFFFFF);
    if ( !*((_WORD *)EntryObject + 6) || *((struct _KTHREAD **)EntryObject + 2) != KeGetCurrentThread() )
    {
LABEL_34:
      HANDLELOCK::vUnlock((HANDLELOCK *)&v27);
      if ( !v28 )
        goto LABEL_44;
    }
    v17 = v27;
LABEL_36:
    v21 = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v17 & 0xFFFFFF);
    v22 = v21;
    if ( *((_BYTE *)v17 + 14) == 1 && *((_WORD *)v17 + 6) == WORD1(v10) )
    {
      if ( *((_WORD *)v21 + 6) != 1 || *((_DWORD *)v21 + 2) )
      {
        *((_BYTE *)v17 + 15) |= 8u;
      }
      else
      {
        v23 = *((_BYTE *)v17 + 15);
        if ( (v23 & 1) == 0 )
        {
          *((_BYTE *)v17 + 15) = v23 | 0x40;
          HANDLELOCK::vUnlock((HANDLELOCK *)&v27);
          goto LABEL_45;
        }
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v27);
LABEL_44:
    v22 = 0LL;
LABEL_45:
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v27);
    GreReleaseHmgrSemaphore(v25, v24, v26);
    if ( !v22 )
    {
LABEL_46:
      EngSetLastError(0xAAu);
      return 0LL;
    }
  }
  XDCOBJ::bCleanDC((DC **)this, HIBYTE(v7) & 1);
  if ( !v4 )
    vDeleteDCInternalWorker((DC **)this, (v7 >> 23) & 1);
  return 1LL;
}

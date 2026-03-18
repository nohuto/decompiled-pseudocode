/*
 * XREFs of ?vCleanupDCs@@YAXK@Z @ 0x1C002F158
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C006127C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     MultiUserCleanupDCs @ 0x1C00C418C (MultiUserCleanupDCs.c)
 * Callees:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0029780 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002A7E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002AAF0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C002BC10 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C002BD90 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002BFC0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?bOwnedBy@ENTRYOBJ@@QEBAHK@Z @ 0x1C002C370 (-bOwnedBy@ENTRYOBJ@@QEBAHK@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00335D0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0033650 (GreAcquireHmgrSemaphore.c)
 *     bDeleteDCInternal @ 0x1C0059000 (bDeleteDCInternal.c)
 *     HmgCheckDCForPrivateReferences @ 0x1C005DB80 (HmgCheckDCForPrivateReferences.c)
 *     HmgSetLock @ 0x1C00684D0 (HmgSetLock.c)
 */

void __fastcall vCleanupDCs(unsigned int a1)
{
  __int64 v1; // r12
  __int64 v2; // rbx
  unsigned int v3; // edi
  GdiHandleManager *v4; // rcx
  GdiHandleManager *v5; // rbp
  unsigned int NextEntryIndex; // eax
  struct _ENTRY *v7; // rsi
  unsigned int v8; // eax
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  unsigned int v11; // r8d
  __int64 v12; // r10
  __int64 v13; // rdx
  HDC v14; // rbp
  ENTRYOBJ *EntryFromObject; // rax
  ENTRYOBJ *v16; // rsi
  ENTRYOBJ *v17; // rcx
  char v18; // al
  GdiHandleManager *v19; // rsi
  unsigned int v20; // eax
  __int64 v21; // r14
  struct _ENTRY *Entry; // rax
  unsigned int v23; // eax
  unsigned int v24; // r8d
  unsigned __int64 v25; // rdx
  unsigned int v26; // ecx
  __int64 v27; // r9
  DC *v28[2]; // [rsp+50h] [rbp-38h] BYREF
  struct _ENTRY *v29; // [rsp+98h] [rbp+10h] BYREF

  v1 = a1;
  v2 = 0LL;
  v3 = 0;
LABEL_2:
  GreAcquireHmgrSemaphore();
LABEL_3:
  while ( 1 )
  {
    v5 = gpHandleManager;
    while ( 1 )
    {
      NextEntryIndex = GdiHandleManager::GetNextEntryIndex(v4, v3, &v29);
      v3 = NextEntryIndex;
      if ( !NextEntryIndex )
        break;
      v7 = v29;
      if ( *((_BYTE *)v29 + 14) == 1 )
      {
        v8 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, NextEntryIndex);
        v9 = *((_QWORD *)v5 + 2);
        v10 = v8;
        v11 = *(_DWORD *)(v9 + 2056);
        if ( v8 >= v11 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
        {
          v13 = 0LL;
LABEL_15:
          v2 = v13;
          goto LABEL_16;
        }
        if ( v8 >= v11 )
          v4 = (GdiHandleManager *)(((v8 - v11) >> 16) + 1);
        else
          v4 = 0LL;
        v12 = *(_QWORD *)(v9 + 8LL * (unsigned int)v4 + 8);
        if ( (_DWORD)v4 )
          v10 = ((1 - (_DWORD)v4) << 16) - v11 + v8;
        if ( (unsigned int)v10 >= *(_DWORD *)(v12 + 20) )
        {
          v13 = 0LL;
        }
        else
        {
          v4 = (GdiHandleManager *)(2LL * (unsigned __int8)v10);
          v13 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * (v10 >> 8)) + 16LL * (unsigned __int8)v10 + 8);
        }
        if ( !v13
          || (*((_BYTE *)v7 + 15) & 0x40) == 0
          || *(_WORD *)(v13 + 12) && *(struct _KTHREAD **)(v13 + 16) == KeGetCurrentThread() )
        {
          goto LABEL_15;
        }
      }
    }
    v3 = 0;
LABEL_16:
    if ( !v3 )
      break;
    v14 = *(HDC *)v2;
    EntryFromObject = GdiHandleManager::GetEntryFromObject(
                        (GdiHandleEntryDirectory **)gpHandleManager,
                        (struct OBJECT *)v2);
    v16 = EntryFromObject;
    if ( EntryFromObject )
    {
      if ( ENTRYOBJ::bOwnedBy(EntryFromObject, v1) )
      {
        GreReleaseHmgrSemaphore();
        v18 = *((_BYTE *)v16 + 15);
        if ( (v18 & 0x20) != 0 )
        {
          *((_BYTE *)v16 + 15) = v18 & 0xDF;
          while ( *(_WORD *)(v2 + 12) )
            KeDelayExecutionThread(0, 0, gpLockShortDelay);
        }
        HmgSetLock(v14);
        bDeleteDCInternal(v14, 1LL, 1LL);
        goto LABEL_2;
      }
      if ( ENTRYOBJ::bOwnedBy(v17, 0) )
      {
        v28[0] = 0LL;
        v28[1] = 0LL;
        while ( (unsigned int)HmgCheckDCForPrivateReferences((DC *)v2, v1) )
        {
          XDCOBJ::vLock((XDCOBJ *)v28, v14);
          if ( v28[0] )
          {
            DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 400LL, 8LL, v28[0], v1, 0LL, 0LL, 0LL, 0);
            XDCOBJ::bCleanDC(v28, 0);
            if ( v28[0] )
              XDCOBJ::vUnlockFast((XDCOBJ *)v28);
            v28[0] = 0LL;
            goto LABEL_3;
          }
          GreReleaseHmgrSemaphore();
          KeDelayExecutionThread(0, 0, gpLockShortDelay);
          GreAcquireHmgrSemaphore();
          v19 = gpHandleManager;
          v20 = GdiHandleManager::DecodeIndex(
                  (GdiHandleEntryDirectory **)gpHandleManager,
                  (unsigned __int16)v14 | ((unsigned int)v14 >> 8) & 0xFF0000);
          v21 = *((_QWORD *)v19 + 2);
          Entry = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v21, v20, 0);
          if ( !Entry || *((_BYTE *)Entry + 14) != 1 || !ENTRYOBJ::bOwnedBy(Entry, 0) )
            goto LABEL_3;
          v23 = GdiHandleManager::DecodeIndex(
                  (GdiHandleEntryDirectory **)v19,
                  (unsigned __int16)v14 | ((unsigned int)v14 >> 8) & 0xFF0000);
          v24 = *(_DWORD *)(v21 + 2056);
          v25 = v23;
          if ( v23 >= v24 + ((*(unsigned __int16 *)(v21 + 2) + 0xFFFF) << 16) )
            goto LABEL_49;
          v26 = v23 >= v24 ? ((v23 - v24) >> 16) + 1 : 0;
          v27 = *(_QWORD *)(v21 + 8LL * v26 + 8);
          if ( v26 )
            v25 = ((1 - v26) << 16) - v24 + v23;
          if ( (unsigned int)v25 >= *(_DWORD *)(v27 + 20) )
LABEL_49:
            v2 = 0LL;
          else
            v2 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * (v25 >> 8)) + 16LL * (unsigned __int8)v25 + 8);
        }
      }
    }
  }
  GreReleaseHmgrSemaphore();
}

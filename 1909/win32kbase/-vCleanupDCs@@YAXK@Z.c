/*
 * XREFs of ?vCleanupDCs@@YAXK@Z @ 0x1C00AB720
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007C408 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     MultiUserCleanupDCs @ 0x1C00B49D8 (MultiUserCleanupDCs.c)
 * Callees:
 *     bDeleteDCInternal @ 0x1C0010100 (bDeleteDCInternal.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C001D060 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C001E190 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C001F210 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001FE60 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C001FEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0020020 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0020EC0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002A070 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002BAC0 (GreAcquireHmgrSemaphore.c)
 *     HmgCheckDCForPrivateReferences @ 0x1C007086C (HmgCheckDCForPrivateReferences.c)
 *     ?bOwnedBy@ENTRYOBJ@@QEBAHK@Z @ 0x1C00709E0 (-bOwnedBy@ENTRYOBJ@@QEBAHK@Z.c)
 *     HmgSafeNextObjtByIndex @ 0x1C0075F4C (HmgSafeNextObjtByIndex.c)
 *     HmgSetLock @ 0x1C0093FCC (HmgSetLock.c)
 *     HmgIsProcessCleanupRequiredByW32Pid @ 0x1C00BB240 (HmgIsProcessCleanupRequiredByW32Pid.c)
 */

void __fastcall vCleanupDCs(__int64 a1)
{
  __int64 v1; // rsi
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  GdiHandleManager *i; // rcx
  struct OBJECT *v6; // rdi
  HDC v7; // r15
  ENTRYOBJ *EntryFromObject; // rax
  ENTRYOBJ *v9; // rbx
  __int64 v10; // rdx
  ENTRYOBJ *v11; // rcx
  __int64 v12; // r8
  char v13; // al
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  struct OBJECT **v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  GdiHandleEntryDirectory **v24; // rdi
  unsigned int v25; // eax
  struct _ENTRY *Entry; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned int v30; // r14d
  DC *v31[2]; // [rsp+50h] [rbp-10h] BYREF
  struct OBJECT *EntryObject; // [rsp+98h] [rbp+38h] BYREF

  v1 = (unsigned int)a1;
  EntryObject = 0LL;
  if ( (unsigned int)HmgIsProcessCleanupRequiredByW32Pid(a1) )
  {
    GreAcquireHmgrSemaphore(v3, v2, v4);
    for ( i = 0LL; ; i = (GdiHandleManager *)v30 )
    {
      v30 = HmgSafeNextObjtByIndex(i, 1, &EntryObject);
      if ( !v30 )
        break;
      v6 = EntryObject;
      v7 = *(HDC *)EntryObject;
      EntryFromObject = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, EntryObject);
      v9 = EntryFromObject;
      if ( EntryFromObject )
      {
        if ( ENTRYOBJ::bOwnedBy(EntryFromObject, v1) )
        {
          GreReleaseHmgrSemaphore((__int64)v11, v10, v12);
          v13 = *((_BYTE *)v9 + 15);
          if ( (v13 & 0x20) != 0 )
          {
            *((_BYTE *)v9 + 15) = v13 & 0xDF;
            while ( *((_WORD *)v6 + 6) )
              KeDelayExecutionThread(0, 0, gpLockShortDelay);
          }
          HmgSetLock((unsigned int)v7);
          bDeleteDCInternal((__int64)v7, 1, 1, 0);
          GreAcquireHmgrSemaphore(v15, v14, v16);
        }
        else if ( ENTRYOBJ::bOwnedBy(v11, 0) )
        {
          v31[0] = 0LL;
          v17 = (struct OBJECT **)v6;
          v31[1] = 0LL;
          while ( (unsigned int)HmgCheckDCForPrivateReferences(v17, v1) )
          {
            XDCOBJ::vLock((XDCOBJ *)v31, v7);
            if ( v31[0] )
            {
              DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 400LL, 8LL, v31[0], v1, 0LL, 0LL, 0LL, 0);
              XDCOBJ::bCleanDC(v31, 0);
              XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v31);
              v31[0] = 0LL;
              break;
            }
            GreReleaseHmgrSemaphore(v19, v18, v20);
            KeDelayExecutionThread(0, 0, gpLockShortDelay);
            GreAcquireHmgrSemaphore(v22, v21, v23);
            v24 = (GdiHandleEntryDirectory **)gpHandleManager;
            v25 = GdiHandleManager::DecodeIndex(
                    (GdiHandleEntryDirectory **)gpHandleManager,
                    (unsigned __int16)v7 | ((unsigned int)v7 >> 8) & 0xFF0000);
            Entry = GdiHandleEntryDirectory::GetEntry(v24[2], v25, 0);
            if ( !Entry || *((_BYTE *)Entry + 14) != 1 || !ENTRYOBJ::bOwnedBy(Entry, 0) )
              break;
            EntryObject = GdiHandleManager::GetEntryObject(
                            (GdiHandleManager *)v24,
                            (unsigned __int16)v7 | ((unsigned int)v7 >> 8) & 0xFF0000);
            v17 = (struct OBJECT **)EntryObject;
          }
        }
      }
    }
    GreReleaseHmgrSemaphore(v28, v27, v29);
  }
}

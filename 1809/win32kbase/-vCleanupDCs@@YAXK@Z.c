/*
 * XREFs of ?vCleanupDCs@@YAXK@Z @ 0x1C0082B34
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0061E50 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     MultiUserCleanupDCs @ 0x1C0082A7C (MultiUserCleanupDCs.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C001DE38 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001DE98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     HmgSafeNextObjtByIndex @ 0x1C0020040 (HmgSafeNextObjtByIndex.c)
 *     ?bOwnedBy@ENTRYOBJ@@QEBAHK@Z @ 0x1C0020280 (-bOwnedBy@ENTRYOBJ@@QEBAHK@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0022D80 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C0023670 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0023700 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0023820 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0029C90 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0029E00 (GreAcquireHmgrSemaphore.c)
 *     bDeleteDCInternal @ 0x1C00427D0 (bDeleteDCInternal.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0075BF0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     HmgMarkUnXferable @ 0x1C0080740 (HmgMarkUnXferable.c)
 *     HmgSetLock @ 0x1C0082FE0 (HmgSetLock.c)
 *     HmgCheckDCForPrivateReferences @ 0x1C00F90F4 (HmgCheckDCForPrivateReferences.c)
 */

void __fastcall vCleanupDCs(__int64 a1, int a2, int a3)
{
  __int64 v3; // r15
  __int64 i; // rcx
  struct OBJECT *v5; // rbx
  HDC v6; // rsi
  ENTRYOBJ *EntryFromObject; // rax
  ENTRYOBJ *v8; // rdi
  __int64 v9; // rdx
  ENTRYOBJ *v10; // rcx
  __int64 v11; // r8
  int v12; // edx
  __int64 v13; // rcx
  int v14; // r8d
  BOOL v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // edx
  __int64 v20; // rcx
  int v21; // r8d
  GdiHandleEntryDirectory **v22; // rdi
  unsigned int v23; // eax
  struct _ENTRY *Entry; // rax
  int v25; // edx
  __int64 v26; // rcx
  int v27; // r8d
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned int v31; // r14d
  struct HOBJ__ ***v32[6]; // [rsp+50h] [rbp-30h] BYREF
  struct OBJECT *EntryObject; // [rsp+B8h] [rbp+38h] BYREF

  v3 = (unsigned int)a1;
  EntryObject = 0LL;
  GreAcquireHmgrSemaphore(a1, a2, a3);
  for ( i = 0LL; ; i = v31 )
  {
    v31 = HmgSafeNextObjtByIndex(i, 1, &EntryObject);
    if ( !v31 )
      break;
    v5 = EntryObject;
    v6 = *(HDC *)EntryObject;
    EntryFromObject = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, EntryObject);
    v8 = EntryFromObject;
    if ( EntryFromObject )
    {
      if ( ENTRYOBJ::bOwnedBy(EntryFromObject, v3) )
      {
        GreReleaseHmgrSemaphore((__int64)v10, v9, v11);
        if ( (*((_BYTE *)v8 + 15) & 0x20) != 0 || *((_DWORD *)v5 + 530) )
        {
          *((_DWORD *)v5 + 530) = 0;
          HmgMarkUnXferable((unsigned int)v6, 1);
          while ( *((_WORD *)v5 + 6) )
            KeDelayExecutionThread(0, 0, gpLockShortDelay);
        }
        HmgSetLock(v6);
        bDeleteDCInternal(v6, 1, 1, 0);
        GreAcquireHmgrSemaphore(v13, v12, v14);
      }
      else if ( ENTRYOBJ::bOwnedBy(v10, 0) )
      {
        while ( (unsigned int)HmgCheckDCForPrivateReferences(v5, v3) )
        {
          DCOBJ::DCOBJ((DCOBJ *)v32, v6);
          v15 = v32[0] != 0LL;
          GreReleaseHmgrSemaphore(v17, v16, v18);
          if ( v15 )
          {
            DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 400LL, 8LL, v32[0], v3, 0LL, 0LL, 0LL, 0);
            XDCOBJ::bCleanDC(v32, 0);
            GreAcquireHmgrSemaphore(v26, v25, v27);
LABEL_20:
            DCOBJ::~DCOBJ((DCOBJ *)v32);
            break;
          }
          KeDelayExecutionThread(0, 0, gpLockShortDelay);
          GreAcquireHmgrSemaphore(v20, v19, v21);
          v22 = (GdiHandleEntryDirectory **)gpHandleManager;
          v23 = GdiHandleManager::DecodeIndex(
                  (GdiHandleEntryDirectory **)gpHandleManager,
                  (unsigned __int16)v6 | ((unsigned int)v6 >> 8) & 0xFF0000);
          Entry = GdiHandleEntryDirectory::GetEntry(v22[2], v23, 0);
          if ( !Entry || *((_BYTE *)Entry + 14) != 1 || !ENTRYOBJ::bOwnedBy(Entry, 0) )
            goto LABEL_20;
          EntryObject = GdiHandleManager::GetEntryObject(
                          (GdiHandleManager *)v22,
                          (unsigned __int16)v6 | ((unsigned int)v6 >> 8) & 0xFF0000);
          v5 = EntryObject;
          DCOBJ::~DCOBJ((DCOBJ *)v32);
        }
      }
    }
  }
  GreReleaseHmgrSemaphore(v29, v28, v30);
}

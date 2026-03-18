/*
 * XREFs of HmgNextOwned @ 0x1C0052850
 * Callers:
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C005272C (-vCleanupRegions@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C00527BC (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007FEC8 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C00145B0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0018270 (GreReleaseHmgrSemaphore.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C001EBB0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?bOwnedBy@ENTRYOBJ@@QEBAHK@Z @ 0x1C003AC10 (-bOwnedBy@ENTRYOBJ@@QEBAHK@Z.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C00B7570 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     HmgIsProcessCleanupRequiredByW32Pid @ 0x1C00BE24C (HmgIsProcessCleanupRequiredByW32Pid.c)
 */

__int64 __fastcall HmgNextOwned(unsigned int NextEntryIndex, unsigned int a2, unsigned __int64 *a3)
{
  __int64 result; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  GdiHandleManager *CurrentThread; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  ENTRYOBJ *v14; // rdi
  struct OBJECT *EntryObject; // rax
  ENTRYOBJ *v16; // [rsp+58h] [rbp+20h] BYREF

  result = HmgIsProcessCleanupRequiredByW32Pid(a2);
  if ( (_DWORD)result )
  {
    GreAcquireHmgrSemaphore(v8, v7, v9);
    while ( 1 )
    {
      NextEntryIndex = GdiHandleManager::GetNextEntryIndex(CurrentThread, NextEntryIndex, &v16);
      if ( !NextEntryIndex )
        break;
      v14 = v16;
      if ( ENTRYOBJ::bOwnedBy(v16, a2) )
      {
        if ( (*((_BYTE *)v14 + 15) & 0x40) == 0 )
          goto LABEL_10;
        EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, NextEntryIndex);
        if ( !EntryObject )
          goto LABEL_10;
        if ( *((_WORD *)EntryObject + 6) )
        {
          CurrentThread = KeGetCurrentThread();
          if ( *((GdiHandleManager **)EntryObject + 2) == CurrentThread )
          {
            v14 = v16;
LABEL_10:
            v12 = (unsigned __int16)NextEntryIndex;
            v11 = (unsigned __int16)NextEntryIndex | (unsigned __int64)(*((unsigned __int16 *)v14 + 6) << 16);
            *a3 = v11;
            goto LABEL_12;
          }
        }
      }
    }
    NextEntryIndex = 0;
LABEL_12:
    GreReleaseHmgrSemaphore(v12, v11, v13);
    return NextEntryIndex;
  }
  return result;
}

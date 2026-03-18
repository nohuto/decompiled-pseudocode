/*
 * XREFs of ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C012375C
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007C408 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgSetOwner @ 0x1C0016200 (HmgSetOwner.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C001FEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002A070 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002BAC0 (GreAcquireHmgrSemaphore.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00717D8 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     UserIsProcessImmersiveAppContainer @ 0x1C0071840 (UserIsProcessImmersiveAppContainer.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C00B4A90 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     HmgIsProcessCleanupRequired @ 0x1C00BB228 (HmgIsProcessCleanupRequired.c)
 */

void __fastcall MultiUserGreCleanupHmgOwnRemoveAllLocks(__int64 a1, __int64 a2)
{
  char v2; // si
  __int64 CurrentProcess; // rbp
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  GdiHandleManager *v9; // rcx
  unsigned int i; // edx
  struct _ENTRY *v11; // rbx
  struct OBJECT *EntryObject; // rax
  __int64 v13; // r8
  struct OBJECT *v14; // rax
  char v15; // r8
  char v16; // al
  unsigned int NextEntryIndex; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned int v20; // edi
  struct _ENTRY *v21; // [rsp+48h] [rbp+10h] BYREF

  v2 = a1;
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
  if ( (unsigned int)HmgIsProcessCleanupRequired(CurrentProcessWin32Process)
    || v2 == 5 && (unsigned int)UserIsProcessImmersiveAppContainer(CurrentProcess) )
  {
    GreAcquireHmgrSemaphore(v7, v6, v8);
    for ( i = 0; ; i = v20 )
    {
      NextEntryIndex = GdiHandleManager::GetNextEntryIndex(v9, i, &v21);
      v20 = NextEntryIndex;
      if ( !NextEntryIndex )
      {
        GreReleaseHmgrSemaphore((__int64)v9, v18, v19);
        return;
      }
      v11 = v21;
      if ( v2 == 5 )
      {
        if ( *((_BYTE *)v21 + 14) != 5
          || *((char *)v21 + 15) >= 0
          || (EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, NextEntryIndex),
              *((_QWORD *)EntryObject + 80) != CurrentProcess) )
        {
LABEL_11:
          if ( v2 != *((_BYTE *)v11 + 14) )
            continue;
          goto LABEL_14;
        }
        SURFACE::vAppContainerOwner(EntryObject, 0LL, v13);
      }
      if ( v2 )
        goto LABEL_11;
      if ( (unsigned __int8)(*((_BYTE *)v11 + 14) - 1) > 0x1Du )
        continue;
LABEL_14:
      if ( ((*((_DWORD *)v11 + 2) ^ (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFD) & 0xFFFFFFFE) == 0 )
      {
        v14 = GdiHandleManager::GetEntryObject(gpHandleManager, v20);
        v15 = *((_BYTE *)v11 + 14);
        if ( (v15 == 5 || v15 == 8) && (*((_WORD *)v14 + 7) & 0x4000) != 0 )
        {
          if ( (unsigned int)HmgSetOwner(*(_QWORD *)v14, -2147483630, v15) )
            _InterlockedIncrement(&gGarbageCollectionPendingCount);
        }
        else
        {
          *((_DWORD *)v14 + 2) = 0;
          *((_WORD *)v14 + 6) = 0;
          *((_QWORD *)v14 + 2) = 0LL;
          *((_DWORD *)v11 + 2) &= ~1u;
          *((_BYTE *)v11 + 15) &= ~1u;
          v16 = *((_BYTE *)v11 + 15);
          if ( (v16 & 0x20) != 0 )
          {
            *((_QWORD *)v11 + 2) = 0LL;
            v16 = *((_BYTE *)v11 + 15);
          }
          *((_BYTE *)v11 + 15) = v16 & 0xDF;
        }
      }
    }
  }
}

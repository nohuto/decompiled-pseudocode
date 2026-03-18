/*
 * XREFs of HmgNextGarbageCollectible @ 0x1C00BB290
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007C408 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C001FEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002A070 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002BAC0 (GreAcquireHmgrSemaphore.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C00B4A90 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 */

__int64 __fastcall HmgNextGarbageCollectible(int a1, unsigned __int64 *a2, _BYTE *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rcx
  unsigned int NextEntryIndex; // eax
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  struct _ENTRY *v10; // rdi
  struct OBJECT *EntryObject; // rax
  struct _ENTRY *v13; // [rsp+48h] [rbp+20h] BYREF

  v5 = a1;
  GreAcquireHmgrSemaphore(a1, (int)a2, (int)a3);
  while ( 1 )
  {
    NextEntryIndex = GdiHandleManager::GetNextEntryIndex((GdiHandleManager *)v6, v5, &v13);
    v5 = NextEntryIndex;
    if ( !NextEntryIndex )
      break;
    v10 = v13;
    if ( *((_DWORD *)v13 + 2) == -2147483630 )
    {
      EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, NextEntryIndex);
      if ( EntryObject )
      {
        v6 = 0x4000LL;
        if ( (*((_WORD *)EntryObject + 7) & 0x4000) != 0 )
        {
          v6 = (unsigned __int16)v5;
          v8 = (unsigned __int16)v5 | (unsigned __int64)(*((unsigned __int16 *)v10 + 6) << 16);
          *a3 = *((_BYTE *)v10 + 14);
          *a2 = v8;
          goto LABEL_8;
        }
      }
    }
  }
  v5 = 0;
LABEL_8:
  GreReleaseHmgrSemaphore(v6, v8, v9);
  return v5;
}

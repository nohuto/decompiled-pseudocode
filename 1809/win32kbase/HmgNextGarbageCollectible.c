/*
 * XREFs of HmgNextGarbageCollectible @ 0x1C00AAC0C
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C00ACB28 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C0020220 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C0023670 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0029C90 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0029E00 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall HmgNextGarbageCollectible(__int64 a1, unsigned __int64 *a2, _BYTE *a3)
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

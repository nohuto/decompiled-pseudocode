/*
 * XREFs of HmgNextGarbageCollectible @ 0x1C0076618
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C0077D10 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C002BD90 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002BEC0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00335D0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0033650 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall HmgNextGarbageCollectible(int a1, unsigned __int64 *a2, _BYTE *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rcx
  unsigned int NextEntryIndex; // eax
  unsigned __int64 v8; // rdx
  int v9; // r8d
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
      EntryObject = GdiHandleManager::GetEntryObject((GdiHandleEntryDirectory **)gpHandleManager, NextEntryIndex);
      if ( EntryObject )
      {
        v6 = 0x4000LL;
        if ( (*((_WORD *)EntryObject + 7) & 0x4000) != 0 )
        {
          LODWORD(v6) = (unsigned __int16)v5;
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

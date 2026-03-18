/*
 * XREFs of ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C00F9BAC
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0061E50 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgSetOwner @ 0x1C001E160 (HmgSetOwner.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C0020220 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C0023670 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0029C90 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0029E00 (GreAcquireHmgrSemaphore.c)
 *     HmgIsGarbageCollectibleType @ 0x1C00AABEC (HmgIsGarbageCollectibleType.c)
 */

void __fastcall MultiUserGreCleanupHmgOwnRemoveAllLocks(__int64 a1)
{
  char v1; // bp
  int v2; // edx
  __int64 v3; // rcx
  int v4; // r8d
  GdiHandleManager *v5; // rcx
  unsigned int NextEntryIndex; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int i; // esi
  struct _ENTRY *v11; // rbx
  GdiHandleManager *v12; // rcx
  struct OBJECT *EntryObject; // rax
  struct OBJECT *v14; // rdi
  char v15; // al
  struct _ENTRY *v16; // [rsp+48h] [rbp+10h] BYREF

  v1 = a1;
  PsGetCurrentProcess(a1);
  GreAcquireHmgrSemaphore(v3, v2, v4);
  NextEntryIndex = GdiHandleManager::GetNextEntryIndex(v5, 0, &v16);
  for ( i = NextEntryIndex; NextEntryIndex; i = NextEntryIndex )
  {
    v11 = v16;
    LOBYTE(NextEntryIndex) = *((_BYTE *)v16 + 14);
    v12 = (GdiHandleManager *)(NextEntryIndex - 1);
    LOBYTE(v12) = (unsigned __int8)(NextEntryIndex - 1) <= 0x1Du;
    if ( v1 )
    {
      if ( v1 != (_BYTE)NextEntryIndex )
        goto LABEL_13;
    }
    else if ( (unsigned __int8)(NextEntryIndex - 1) > 0x1Du )
    {
      goto LABEL_13;
    }
    if ( ((*((_DWORD *)v11 + 2) ^ (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFD) & 0xFFFFFFFE) == 0 )
    {
      EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, i);
      v14 = EntryObject;
      if ( *((_DWORD *)EntryObject + 2) )
      {
        if ( HmgIsGarbageCollectibleType(*((_BYTE *)v11 + 14)) )
          *((_WORD *)v14 + 7) |= 0x4000u;
      }
      else if ( (*((_WORD *)EntryObject + 7) & 0x4000) == 0 )
      {
        *((_DWORD *)EntryObject + 2) = 0;
        *((_WORD *)EntryObject + 6) = 0;
        *((_QWORD *)EntryObject + 2) = 0LL;
        *((_DWORD *)v11 + 2) &= ~1u;
        *((_BYTE *)v11 + 15) &= ~1u;
        v15 = *((_BYTE *)v11 + 15);
        if ( (v15 & 0x20) != 0 )
        {
          *((_QWORD *)v11 + 2) = 0LL;
          v15 = *((_BYTE *)v11 + 15);
        }
        *((_BYTE *)v11 + 15) = v15 & 0xDF;
        goto LABEL_13;
      }
      if ( (unsigned int)HmgSetOwner(*(_QWORD *)v14, -2147483630, *((_BYTE *)v11 + 14))
        && (*((_WORD *)v14 + 7) & 0x4000) != 0 )
      {
        _InterlockedIncrement(&gGarbageCollectionPendingCount);
      }
    }
LABEL_13:
    NextEntryIndex = GdiHandleManager::GetNextEntryIndex(v12, i, &v16);
  }
  GreReleaseHmgrSemaphore(v8, v7, v9);
}

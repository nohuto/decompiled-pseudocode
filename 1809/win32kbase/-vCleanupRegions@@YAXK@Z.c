/*
 * XREFs of ?vCleanupRegions@@YAXK@Z @ 0x1C007E7FC
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0061E50 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     bDeleteRegion @ 0x1C001CC90 (bDeleteRegion.c)
 *     HmgNextOwned @ 0x1C00200E0 (HmgNextOwned.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0022D80 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     HmgLockEx @ 0x1C0023060 (HmgLockEx.c)
 */

void __fastcall vCleanupRegions(int a1)
{
  unsigned int Owned; // esi
  HRGN v3; // rdi
  struct _ENTRY *EntryFromObject; // rax
  struct OBJECT *v5; // rax
  struct OBJECT *v6; // rbx
  HRGN v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  Owned = 0;
  while ( 1 )
  {
    Owned = HmgNextOwned(Owned, a1, (unsigned __int64 *)&v7);
    if ( !Owned )
      break;
    v3 = v7;
    if ( (BYTE2(v7) & 0x1F) == 4 )
    {
      v5 = HmgLockEx((unsigned int)v7, 4, 0);
      v6 = v5;
      if ( v5 )
      {
        EntryFromObject = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, v5);
        if ( EntryFromObject )
          *((_QWORD *)EntryFromObject + 2) = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)v6 + 3);
        v3 = v7;
      }
      bDeleteRegion(v3);
    }
  }
}

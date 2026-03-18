/*
 * XREFs of ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x1C00B605C
 * Callers:
 *     HmgCreate @ 0x1C005D050 (HmgCreate.c)
 *     MultiUserNtGreCleanup @ 0x1C00B59E8 (MultiUserNtGreCleanup.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?Destroy@GdiHandleEntryDirectory@@SAXPEAV1@@Z @ 0x1C00B6098 (-Destroy@GdiHandleEntryDirectory@@SAXPEAV1@@Z.c)
 */

void __fastcall GdiHandleManager::Destroy(struct GdiHandleManager *a1)
{
  GdiHandleManager *v1; // rbx
  __int64 v2; // rcx

  v1 = gpHandleManager;
  v2 = *((_QWORD *)gpHandleManager + 3);
  if ( v2 )
    Win32FreePool(v2);
  GdiHandleEntryDirectory::Destroy(*((struct GdiHandleEntryDirectory **)v1 + 2));
  Win32FreePool((__int64)v1);
}

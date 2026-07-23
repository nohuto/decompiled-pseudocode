/*
 * XREFs of BiBindEfiNamespaceObjects @ 0x140930080
 * Callers:
 *     BiOpenSystemStore @ 0x14073CF6C (BiOpenSystemStore.c)
 * Callees:
 *     BiLogMessage @ 0x14073E4B4 (BiLogMessage.c)
 *     BiBindEfiBootManager @ 0x14092FC10 (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x14092FE38 (BiBindEfiEntries.c)
 *     BiBuildIdentifierList @ 0x140930128 (BiBuildIdentifierList.c)
 *     BiFreeIdentifierList @ 0x140931740 (BiFreeIdentifierList.c)
 */

__int64 __fastcall BiBindEfiNamespaceObjects(HANDLE BcdStoreHandle)
{
  int v2; // ebx
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  BiLogMessage(2LL, L"Binding EFI namespace objects");
  v4[1] = (__int64)v4;
  v4[0] = (__int64)v4;
  v2 = BiBuildIdentifierList(BcdStoreHandle);
  if ( v2 < 0
    || (v2 = BiBindEfiEntries(BcdStoreHandle, v4), v2 < 0)
    || (v2 = BiBindEfiBootManager(BcdStoreHandle, (__int64)v4), v2 < 0) )
  {
    BiLogMessage(4LL, L"BiBindEfiNamespaceObjects failed %x", (unsigned int)v2);
  }
  BiFreeIdentifierList(v4);
  return (unsigned int)v2;
}

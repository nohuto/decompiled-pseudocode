/*
 * XREFs of BiBindEfiNamespaceObjects @ 0x14092FAF4
 * Callers:
 *     BiOpenSystemStore @ 0x14073EE6C (BiOpenSystemStore.c)
 * Callees:
 *     BiLogMessage @ 0x1407403B4 (BiLogMessage.c)
 *     BiBindEfiBootManager @ 0x14092F684 (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x14092F8AC (BiBindEfiEntries.c)
 *     BiBuildIdentifierList @ 0x14092FB9C (BiBuildIdentifierList.c)
 *     BiFreeIdentifierList @ 0x1409311B4 (BiFreeIdentifierList.c)
 */

__int64 __fastcall BiBindEfiNamespaceObjects(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  BiLogMessage(2LL, L"Binding EFI namespace objects");
  v5[1] = (__int64)v5;
  v5[0] = (__int64)v5;
  v3 = BiBuildIdentifierList(a1, v2, v5);
  if ( v3 < 0 || (v3 = BiBindEfiEntries(a1, v5), v3 < 0) || (v3 = BiBindEfiBootManager(a1, (__int64)v5), v3 < 0) )
    BiLogMessage(4LL, L"BiBindEfiNamespaceObjects failed %x", (unsigned int)v3);
  BiFreeIdentifierList(v5);
  return (unsigned int)v3;
}

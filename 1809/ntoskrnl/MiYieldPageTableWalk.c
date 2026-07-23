/*
 * XREFs of MiYieldPageTableWalk @ 0x1401227F8
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14006EE70 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MiReleaseWalkLocks @ 0x140122868 (MiReleaseWalkLocks.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiYieldPageTableWalk(__int64 a1, int a2)
{
  __int64 (*v2)(void); // rax
  int v5; // edi
  bool v6; // zf

  v2 = *(__int64 (**)(void))(a1 + 160);
  *(_BYTE *)(a1 + 5) = 1;
  if ( v2 )
  {
    v5 = v2();
  }
  else
  {
    v5 = 0;
    if ( *(_BYTE *)(a1 + 4) == 17 )
    {
      *(_BYTE *)(a1 + 5) = 0;
      return 0LL;
    }
  }
  v6 = *(_BYTE *)(a1 + 8) == 1;
  *(_BYTE *)(a1 + 5) = 0;
  if ( !v6 && v5 < 3 )
  {
    if ( a2 )
      MiReleaseWalkLocks(a1);
  }
  return (unsigned int)v5;
}

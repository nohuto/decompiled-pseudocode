/*
 * XREFs of RaidDeleteDma @ 0x1C0074460
 * Callers:
 *     RaidDeleteAdapter @ 0x1C003A9C4 (RaidDeleteAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 */

void __fastcall RaidDeleteDma(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  void (*v4)(void); // rax

  if ( a1 )
  {
    v2 = *a1;
    if ( v2 )
    {
      v3 = *(_QWORD *)(v2 + 8);
      if ( v3 )
      {
        v4 = *(void (**)(void))(v3 + 8);
        if ( v4 )
        {
          v4();
          memset(a1, 0, 0x20uLL);
        }
      }
    }
  }
}

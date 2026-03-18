/*
 * XREFs of InbvGetResourceAddress @ 0x140291B80
 * Callers:
 *     DisplayBootBitmap @ 0x14018AF08 (DisplayBootBitmap.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 InbvGetResourceAddress()
{
  __int64 (*v0)(void); // rax

  if ( qword_140467F68 && (v0 = *(__int64 (**)(void))(qword_140467F68 + 128)) != 0LL )
    return v0();
  else
    return 0LL;
}

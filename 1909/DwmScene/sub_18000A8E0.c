/*
 * XREFs of sub_18000A8E0 @ 0x18000A8E0
 * Callers:
 *     sub_1801277BA @ 0x1801277BA (sub_1801277BA.c)
 * Callees:
 *     sub_18000D190 @ 0x18000D190 (sub_18000D190.c)
 */

void __fastcall sub_18000A8E0(void **a1)
{
  void *v1; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *a1;
  if ( v1 && !ReleaseMutex(v1) )
  {
    sub_18000D190(retaddr, 2298LL, "d:\\os\\public\\amd64fre\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
    JUMPOUT(0x18000A911LL);
  }
}

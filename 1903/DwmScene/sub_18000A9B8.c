/*
 * XREFs of sub_18000A9B8 @ 0x18000A9B8
 * Callers:
 *     sub_18000BBFC @ 0x18000BBFC (sub_18000BBFC.c)
 *     sub_18000BDFC @ 0x18000BDFC (sub_18000BDFC.c)
 * Callees:
 *     sub_18000D190 @ 0x18000D190 (sub_18000D190.c)
 */

void __fastcall sub_18000A9B8(__int64 a1)
{
  void *v2; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(void **)(a1 + 8);
  if ( v2 && !CloseHandle(v2) )
  {
    sub_18000D190(retaddr, 2288LL, "d:\\os\\public\\amd64fre\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
    JUMPOUT(0x18000AA19LL);
  }
  if ( *(_QWORD *)a1 )
  {
    if ( !CloseHandle(*(HANDLE *)a1) )
    {
      sub_18000D190(retaddr, 2288LL, "d:\\os\\public\\amd64fre\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
      __debugbreak();
    }
  }
}

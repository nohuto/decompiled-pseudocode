/*
 * XREFs of sub_18000D298 @ 0x18000D298
 * Callers:
 *     sub_18000AA90 @ 0x18000AA90 (sub_18000AA90.c)
 *     sub_18000AD28 @ 0x18000AD28 (sub_18000AD28.c)
 *     sub_18000BDFC @ 0x18000BDFC (sub_18000BDFC.c)
 * Callees:
 *     sub_18000D190 @ 0x18000D190 (sub_18000D190.c)
 */

void __fastcall sub_18000D298(void **a1, void *a2)
{
  void *v2; // rdi
  DWORD LastError; // ebp
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    if ( !CloseHandle(v2) )
    {
      sub_18000D190(
        retaddr,
        2288,
        (__int64)"d:\\os\\public\\amd64fre\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
      JUMPOUT(0x18000D305LL);
    }
    SetLastError(LastError);
  }
  *a1 = a2;
}

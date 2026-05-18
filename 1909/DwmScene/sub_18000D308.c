/*
 * XREFs of sub_18000D308 @ 0x18000D308
 * Callers:
 *     sub_18000BDFC @ 0x18000BDFC (sub_18000BDFC.c)
 * Callees:
 *     sub_18000D190 @ 0x18000D190 (sub_18000D190.c)
 */

void __fastcall sub_18000D308(void **a1, void *a2)
{
  void *v2; // rdi
  DWORD LastError; // ebp
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    if ( !ReleaseMutex(v2) )
    {
      sub_18000D190(
        retaddr,
        2298,
        (__int64)"d:\\os\\public\\amd64fre\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
      JUMPOUT(0x18000D375LL);
    }
    SetLastError(LastError);
  }
  *a1 = a2;
}

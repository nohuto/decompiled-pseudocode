/*
 * XREFs of ?WaitOnConnection@ViewHierarchy@@UEAAXXZ @ 0x180059AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall ViewHierarchy::WaitOnConnection(HANDLE *this)
{
  DWORD v1; // eax
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = WaitForSingleObjectEx(this[22], 0xFFFFFFFF, 0);
  if ( v1 != 258 )
  {
    if ( v1 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        2512LL,
        (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
        v2);
      __debugbreak();
    }
  }
}

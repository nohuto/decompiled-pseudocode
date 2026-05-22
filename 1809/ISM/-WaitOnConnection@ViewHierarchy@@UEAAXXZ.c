/*
 * XREFs of ?WaitOnConnection@ViewHierarchy@@UEAAXXZ @ 0x18000EA40
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall ViewHierarchy::WaitOnConnection(HANDLE *this)
{
  DWORD v1; // eax
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = WaitForSingleObjectEx(this[22], 0xFFFFFFFF, 0);
  if ( v1 != 258 && v1 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xA07,
      (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
      v2);
    JUMPOUT(0x18000EA7DLL);
  }
}

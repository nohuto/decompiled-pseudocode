/*
 * XREFs of MsixvcUpdatePolicyUInt64 @ 0x1800044E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002764 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MsixvcUpdatePolicyInternal@@YAJPEB_W0I0_K@Z @ 0x180003EA8 (-MsixvcUpdatePolicyInternal@@YAJPEB_W0I0_K@Z.c)
 */

__int64 __fastcall MsixvcUpdatePolicyUInt64(const wchar_t *a1, const wchar_t *a2, unsigned int a3, unsigned __int64 a4)
{
  int updated; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  updated = MsixvcUpdatePolicyInternal(a1, a2, a3, 0LL, a4);
  v5 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x78,
    (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
    (const char *)(unsigned int)updated);
  return v5;
}

/*
 * XREFs of sub_18005BC5C @ 0x18005BC5C
 * Callers:
 *     sub_18005BB70 @ 0x18005BB70 (sub_18005BB70.c)
 * Callees:
 *     RtlGetNtSystemRoot @ 0x180029260 (RtlGetNtSystemRoot.c)
 *     sub_18005C0EC @ 0x18005C0EC (sub_18005C0EC.c)
 *     _wcsnicmp @ 0x18008E310 (_wcsnicmp.c)
 */

__int64 __fastcall sub_18005BC5C(wchar_t *String1, size_t *a2, const wchar_t **a3)
{
  const wchar_t *NtSystemRoot; // rax
  size_t v7; // rbx
  const wchar_t *v8; // rax

  *a3 = 0LL;
  *a2 = 0LL;
  NtSystemRoot = RtlGetNtSystemRoot();
  v7 = -1LL;
  do
    ++v7;
  while ( NtSystemRoot[v7] );
  if ( !wcsnicmp(String1, NtSystemRoot, v7) )
  {
    *a2 = v7;
    v8 = L"\\Windows";
LABEL_5:
    *a3 = v8;
    return 0LL;
  }
  if ( (int)sub_18005C0EC(String1) >= 0 )
  {
    v8 = L"\\Program Files";
    goto LABEL_5;
  }
  return 3221225659LL;
}

/*
 * XREFs of KRegKey::QueryValueMultisz__lambda_29d8629352f6f89c7b5645c91a914417___lambda_b682bc781c4d660a15b7c549a2c203d1____0 @ 0x1C0124C94
 * Callers:
 *     ndisLoadNamedFilterAltitudes @ 0x1C01265CC (ndisLoadNamedFilterAltitudes.c)
 * Callees:
 *     KRegKey::QueryValueMultisz__lambda_29d8629352f6f89c7b5645c91a914417___lambda_b682bc781c4d660a15b7c549a2c203d1___ @ 0x1C0124AA8 (KRegKey--QueryValueMultisz__lambda_29d8629352f6f89c7b5645c91a914417___lambda_b682bc781c4d660a15b.c)
 */

__int64 __fastcall KRegKey::QueryValueMultisz__lambda_29d8629352f6f89c7b5645c91a914417___lambda_b682bc781c4d660a15b7c549a2c203d1____0(
        HANDLE *a1)
{
  __int64 v1; // r8
  const wchar_t *v2; // rax
  __int64 result; // rax
  __int16 v4; // dx
  _UNICODE_STRING v5; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&v5.Length = 0LL;
  v5.Buffer = 0LL;
  v1 = 0x7FFFLL;
  v2 = L"NamedAltitudes";
  do
  {
    if ( !*v2 )
      break;
    ++v2;
    --v1;
  }
  while ( v1 );
  result = v1 == 0 ? 0xC000000D : 0;
  if ( v1 )
    v4 = 0x7FFF - v1;
  else
    v4 = 0;
  if ( v1 )
  {
    v5.Buffer = L"NamedAltitudes";
    v5.Length = 2 * v4;
    v5.MaximumLength = 2 * v4 + 2;
    return KRegKey::QueryValueMultisz__lambda_29d8629352f6f89c7b5645c91a914417___lambda_b682bc781c4d660a15b7c549a2c203d1___(
             a1,
             &v5);
  }
  return result;
}

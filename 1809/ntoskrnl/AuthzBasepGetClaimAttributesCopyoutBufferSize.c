/*
 * XREFs of AuthzBasepGetClaimAttributesCopyoutBufferSize @ 0x1408EFC7C
 * Callers:
 *     AuthzBasepQueryClaimAttributesToken @ 0x1406B46A8 (AuthzBasepQueryClaimAttributesToken.c)
 * Callees:
 *     AuthzBasepGetClaimAttributeValueCopyoutBufferSize @ 0x1408EFAD8 (AuthzBasepGetClaimAttributeValueCopyoutBufferSize.c)
 */

__int64 __fastcall AuthzBasepGetClaimAttributesCopyoutBufferSize(unsigned int *a1, unsigned __int64 *a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // r8
  unsigned int *v5; // rdi
  __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  if ( !is_mul_ok(0x20uLL, *a1) )
    return 3221225621LL;
  result = 0LL;
  v4 = 32LL * *a1 + 16;
  if ( v4 < 0x10 )
    return 3221225621LL;
  v5 = a1 + 2;
  v6 = *((_QWORD *)a1 + 1);
  while ( (unsigned int *)v6 != v5 )
  {
    v7 = (v4 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v7 < v4 )
      return 3221225621LL;
    v8 = v7 + *(unsigned __int16 *)(v6 + 32);
    if ( v8 < v7 || v8 + 2 < v8 )
      return 3221225621LL;
    v9 = v8 + 2;
    result = AuthzBasepGetClaimAttributeValueCopyoutBufferSize(v6, &v9);
    if ( (int)result < 0 )
      return result;
    v6 = *(_QWORD *)v6;
    v4 = v9;
  }
  *a2 = v4;
  return result;
}

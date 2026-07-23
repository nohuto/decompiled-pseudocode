/*
 * XREFs of AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x1400A6BF0
 * Callers:
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1400A6AB0 (AuthzBasepQuerySecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepGetSecurityAttributeValueCopyoutBufferSize @ 0x1400A6904 (AuthzBasepGetSecurityAttributeValueCopyoutBufferSize.c)
 *     AuthzBasepFindSecurityAttribute @ 0x1400A7130 (AuthzBasepFindSecurityAttribute.c)
 */

__int64 __fastcall AuthzBasepGetSecurityAttributesCopyoutBufferSize(
        unsigned int *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  __int64 result; // rax
  unsigned __int64 v9; // rbx
  unsigned int v10; // edi
  __int64 SecurityAttribute; // rax
  unsigned __int64 v12; // rdx
  unsigned int *v13; // rsi
  __int64 v14; // rdi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 )
  {
    if ( is_mul_ok(0x28uLL, *a1) )
    {
      result = 0LL;
      v9 = 40LL * *a1 + 16;
      if ( v9 >= 0x10 )
      {
        v13 = a1 + 2;
        v14 = *((_QWORD *)a1 + 1);
        while ( (unsigned int *)v14 != v13 )
        {
          v15 = (v9 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v15 < v9 || v15 + *(unsigned __int16 *)(v14 + 32) < v15 )
            return 3221225621LL;
          v16 = v15 + *(unsigned __int16 *)(v14 + 32);
          result = AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(v14, &v16);
          if ( (int)result < 0 )
            return result;
          v14 = *(_QWORD *)v14;
          v9 = v16;
        }
        goto LABEL_12;
      }
    }
    return 3221225621LL;
  }
  if ( !is_mul_ok(0x28uLL, a3) )
    return 3221225621LL;
  result = 0LL;
  v9 = 40LL * a3 + 16;
  if ( v9 < 0x10 )
    return 3221225621LL;
  v10 = 0;
  if ( !a3 )
  {
LABEL_12:
    *a4 = v9;
    return result;
  }
  while ( 1 )
  {
    SecurityAttribute = AuthzBasepFindSecurityAttribute(a1, a2 + 16LL * v10);
    if ( !SecurityAttribute )
      return 3221226021LL;
    v12 = (v9 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v12 < v9 || v12 + *(unsigned __int16 *)(SecurityAttribute + 32) < v12 )
      return 3221225621LL;
    v16 = v12 + *(unsigned __int16 *)(SecurityAttribute + 32);
    result = AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(SecurityAttribute, &v16);
    if ( (int)result < 0 )
      return result;
    v9 = v16;
    if ( ++v10 >= a3 )
      goto LABEL_12;
  }
}

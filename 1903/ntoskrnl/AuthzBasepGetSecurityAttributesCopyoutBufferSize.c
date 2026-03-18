/*
 * XREFs of AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x140092220
 * Callers:
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1400920E0 (AuthzBasepQuerySecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x1400926B0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepGetSecurityAttributeValueCopyoutBufferSize @ 0x1400929E0 (AuthzBasepGetSecurityAttributeValueCopyoutBufferSize.c)
 */

__int64 __fastcall AuthzBasepGetSecurityAttributesCopyoutBufferSize(
        unsigned int *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  __int64 result; // rax
  unsigned __int64 v9; // rbx
  unsigned int v10; // ebp
  __int64 SecurityAttribute; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // r11
  unsigned int *v14; // rsi
  unsigned __int64 v15; // rcx
  __int64 *v16; // r11
  unsigned __int64 v17; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 )
  {
    if ( is_mul_ok(0x28uLL, *a1) )
    {
      result = 0LL;
      v9 = 40LL * *a1 + 16;
      if ( v9 >= 0x10 )
      {
        v13 = *((_QWORD *)a1 + 1);
        v14 = a1 + 2;
        if ( (unsigned int *)v13 == a1 + 2 )
          goto LABEL_20;
        while ( 1 )
        {
          v15 = (v9 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v15 < v9 || v15 + *(unsigned __int16 *)(v13 + 32) < v15 )
            break;
          v17 = v15 + *(unsigned __int16 *)(v13 + 32);
          result = AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(v13, &v17);
          if ( (int)result < 0 )
            return result;
          v13 = *v16;
          v9 = v17;
          if ( (unsigned int *)v13 == v14 )
            goto LABEL_20;
        }
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
LABEL_20:
    *a4 = v9;
    return result;
  }
  do
  {
    SecurityAttribute = AuthzBasepFindSecurityAttribute(a1, a2 + 16LL * v10);
    if ( !SecurityAttribute )
      return 3221226021LL;
    v12 = (v9 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v12 < v9 || v12 + *(unsigned __int16 *)(SecurityAttribute + 32) < v12 )
      return 3221225621LL;
    v17 = v12 + *(unsigned __int16 *)(SecurityAttribute + 32);
    result = AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(SecurityAttribute, &v17);
    if ( (int)result < 0 )
      return result;
    v9 = v17;
    ++v10;
  }
  while ( v10 < a3 );
  *a4 = v17;
  return result;
}

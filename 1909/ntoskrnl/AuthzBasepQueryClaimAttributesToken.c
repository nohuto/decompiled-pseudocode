/*
 * XREFs of AuthzBasepQueryClaimAttributesToken @ 0x1406D122C
 * Callers:
 *     NtQueryInformationToken @ 0x1405ED700 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x140600830 (SeQueryInformationToken.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     AuthzBasepCopyoutClaimAttributes @ 0x14092C02C (AuthzBasepCopyoutClaimAttributes.c)
 *     AuthzBasepGetClaimAttributesCopyoutBufferSize @ 0x14092C360 (AuthzBasepGetClaimAttributesCopyoutBufferSize.c)
 */

__int64 __fastcall AuthzBasepQueryClaimAttributesToken(_DWORD *a1, _QWORD *a2, unsigned int a3, _DWORD *a4)
{
  size_t v7; // rbp
  __int64 result; // rax
  int v9; // ebx
  size_t v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  *a4 = 0;
  v7 = a3;
  if ( *a1 )
  {
    result = AuthzBasepGetClaimAttributesCopyoutBufferSize(a1, &v10);
    if ( (int)result >= 0 )
    {
      v9 = v10;
      if ( v10 )
      {
        if ( v7 >= v10 )
        {
          memset(a2, 0, v7);
          result = AuthzBasepCopyoutClaimAttributes(a1, a2, v7);
        }
        else
        {
          result = 3221225507LL;
        }
        *a4 = v9;
      }
      else
      {
        return 3221225485LL;
      }
    }
  }
  else
  {
    if ( a3 < 0x10 )
    {
      result = 3221225507LL;
    }
    else
    {
      *a2 = 0LL;
      a2[1] = 0LL;
      *(_WORD *)a2 = 1;
      result = 0LL;
    }
    *a4 = 16;
  }
  return result;
}

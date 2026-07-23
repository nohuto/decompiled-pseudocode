/*
 * XREFs of AuthzBasepQueryTokenAttributeAndValues @ 0x140324EF0
 * Callers:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x1400A6EE8 (AuthzBasepQuerySecurityAttributeAndValues.c)
 * Callees:
 *     SepCopyTokenIntegrity @ 0x140091D60 (SepCopyTokenIntegrity.c)
 *     AuthzBasepFindTokenAttribute @ 0x140324E7C (AuthzBasepFindTokenAttribute.c)
 */

__int64 __fastcall AuthzBasepQueryTokenAttributeAndValues(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edi
  _UNKNOWN **TokenAttribute; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 *v7; // rdx
  unsigned int v8; // r8d
  int v9; // ecx
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // rax
  unsigned int v13; // ecx
  __int64 v14; // r8
  __int64 v16; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 56);
  v2 = 0;
  *(_DWORD *)(a1 + 36) = 0;
  if ( v1 )
  {
    if ( *(_DWORD *)(v1 + 8) != 1 )
      return (unsigned int)-2147483622;
    v12 = *(_QWORD *)(a1 + 8);
    v7 = (__int64 *)(a1 + 64);
    v13 = *(_DWORD *)(a1 + 64) + 1;
    if ( v13 > 0x24 )
      return (unsigned int)-2147483622;
    do
    {
      v14 = *(_QWORD *)(v12 + 72);
      if ( _bittest64(&v14, v13) )
        break;
      ++v13;
    }
    while ( v13 <= 0x24 );
    if ( v13 > 0x24 )
      return (unsigned int)-2147483622;
    *v7 = v13;
    goto LABEL_27;
  }
  TokenAttribute = AuthzBasepFindTokenAttribute((const UNICODE_STRING *)(a1 + 16));
  if ( TokenAttribute )
  {
    *(_QWORD *)(a1 + 56) = TokenAttribute;
    *(_WORD *)(a1 + 32) = *((_WORD *)TokenAttribute + 6);
    if ( *((_DWORD *)TokenAttribute + 2) == 1 )
    {
      v7 = (__int64 *)(a1 + 64);
      v8 = 2;
      v9 = 0;
      v10 = 2LL;
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
      *(_DWORD *)(a1 + 40) = 0;
      *(_QWORD *)(a1 + 64) = 0LL;
      do
      {
        if ( _bittest64(&v11, v8) )
        {
          ++v9;
          if ( !*v7 )
            *v7 = v10;
        }
        ++v8;
        ++v10;
      }
      while ( v8 <= 0x24 );
      *(_DWORD *)(a1 + 40) = v9;
      if ( !v9 )
        return (unsigned int)-1073741275;
    }
    else
    {
      if ( *((_DWORD *)TokenAttribute + 2) == 2 )
      {
        SepCopyTokenIntegrity();
        v7 = (__int64 *)(a1 + 64);
        *(_QWORD *)(a1 + 64) = *(unsigned int *)(v16 + 8);
      }
      else
      {
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1104LL);
        if ( *((_DWORD *)TokenAttribute + 2) == 3 )
        {
          if ( !v5 )
            return (unsigned int)-1073741275;
          v6 = *(unsigned int *)(v5 + 8);
        }
        else
        {
          if ( !v5 )
            return (unsigned int)-1073741275;
          v6 = *(unsigned int *)(v5 + 12);
        }
        v7 = (__int64 *)(a1 + 64);
        *(_QWORD *)(a1 + 64) = v6;
      }
      *(_DWORD *)(a1 + 40) = 1;
    }
LABEL_27:
    *(_QWORD *)(a1 + 48) = v7;
    return v2;
  }
  return (unsigned int)-1073741275;
}

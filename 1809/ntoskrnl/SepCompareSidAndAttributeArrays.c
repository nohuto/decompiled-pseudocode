/*
 * XREFs of SepCompareSidAndAttributeArrays @ 0x1405BD2FC
 * Callers:
 *     NtCompareTokens @ 0x1405BAA30 (NtCompareTokens.c)
 *     SepCompareClaimAttributes @ 0x1405BD2A4 (SepCompareClaimAttributes.c)
 * Callees:
 *     RtlEqualSid @ 0x1400A7D30 (RtlEqualSid.c)
 */

char __fastcall SepCompareSidAndAttributeArrays(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // r14d
  unsigned int v6; // edi
  __int64 v7; // rax
  unsigned int v8; // ebx
  _BYTE *v9; // rsi
  __int64 v10; // r15
  unsigned int v12; // r15d
  __int64 v13; // rsi
  unsigned int v14; // ebp
  void *v15; // rdi
  unsigned int v16; // r15d
  __int64 i; // rsi
  unsigned int v18; // ebp
  void *v19; // r13

  v4 = a4;
  v6 = a2;
  v7 = a1;
  if ( a2 == a4 )
  {
    v8 = 0;
    if ( a2 )
    {
      v9 = (_BYTE *)(a3 + 8);
      v10 = a1 - a3;
      do
      {
        if ( !RtlEqualSid(*(PSID *)&v9[v10 - 8], *((PSID *)v9 - 1)) )
          break;
        if ( ((*v9 ^ v9[v10]) & 0x14) != 0 )
          break;
        ++v8;
        v9 += 16;
      }
      while ( v8 < v6 );
      v7 = a1;
    }
    if ( v8 == v6 )
      return 1;
    v12 = v8;
    if ( v8 >= v6 )
    {
LABEL_21:
      v16 = v8;
      if ( v8 >= v4 )
        return 1;
      for ( i = a3 + 16LL * v8; ; i += 16LL )
      {
        v18 = v8;
        if ( v8 < v6 )
        {
          v19 = *(void **)i;
          do
          {
            if ( RtlEqualSid(v19, *(PSID *)(a1 + 16LL * v18))
              && (((unsigned __int8)*(_DWORD *)(i + 8) ^ *(_BYTE *)(a1 + 16LL * v18 + 8)) & 0x14) == 0 )
            {
              break;
            }
            ++v18;
          }
          while ( v18 < v6 );
          v4 = a4;
        }
        if ( v18 == v6 )
          break;
        if ( ++v16 >= v4 )
          return 1;
      }
    }
    else
    {
      v13 = v7 + 16LL * v8;
      while ( 1 )
      {
        v14 = v8;
        if ( v8 < v4 )
        {
          v15 = *(void **)v13;
          do
          {
            if ( RtlEqualSid(v15, *(PSID *)(a3 + 16LL * v14))
              && (((unsigned __int8)*(_DWORD *)(v13 + 8) ^ *(_BYTE *)(a3 + 16LL * v14 + 8)) & 0x14) == 0 )
            {
              break;
            }
            ++v14;
          }
          while ( v14 < v4 );
          v6 = a2;
        }
        if ( v14 == v4 )
          break;
        ++v12;
        v13 += 16LL;
        if ( v12 >= v6 )
          goto LABEL_21;
      }
    }
  }
  return 0;
}

/*
 * XREFs of AuthzBasepCopyoutClaimAttributes @ 0x1408EF948
 * Callers:
 *     AuthzBasepQueryClaimAttributesToken @ 0x1406B46A8 (AuthzBasepQueryClaimAttributesToken.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x140155EDC (RtlStringCbCopyNW.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     AuthzBasepCopyoutClaimAttributeValues @ 0x1408EF6D8 (AuthzBasepCopyoutClaimAttributeValues.c)
 */

__int64 __fastcall AuthzBasepCopyoutClaimAttributes(unsigned int *a1, _DWORD *a2, size_t a3)
{
  unsigned __int64 v6; // r12
  __int64 result; // rax
  _DWORD *v8; // r15
  int v9; // ecx
  __int64 v10; // r8
  _DWORD *v11; // rsi
  __int64 *v12; // r13
  __int64 v13; // r14
  _DWORD *v14; // r15
  size_t v15; // rcx
  wchar_t *v16; // rsi
  unsigned __int64 v17; // rsi
  size_t v18; // [rsp+68h] [rbp+10h] BYREF

  if ( !a2 || !a3 )
  {
    result = 3221225485LL;
    goto LABEL_18;
  }
  v6 = (unsigned __int64)a2 + a3;
  if ( (_DWORD *)((char *)a2 + a3) < a2 )
  {
    result = 3221225485LL;
    goto LABEL_19;
  }
  memset(a2, 0, a3);
  v8 = a2 + 4;
  if ( (unsigned __int64)(a2 + 4) > v6 )
  {
    result = 3221225507LL;
    goto LABEL_19;
  }
  v9 = *a1;
  v10 = 8LL * *a1;
  if ( is_mul_ok(0x20uLL, *a1) )
  {
    v11 = &v8[v10];
    result = 0LL;
    if ( (unsigned __int64)&v8[v10] > v6 )
    {
LABEL_9:
      result = 2147483653LL;
      goto LABEL_19;
    }
    v12 = (__int64 *)(a1 + 2);
    *a2 = 1;
    a2[1] = v9;
    *((_QWORD *)a2 + 1) = v8;
    v13 = *v12;
    if ( (__int64 *)*v12 != v12 )
    {
      v14 = a2 + 8;
      do
      {
        *((_WORD *)v14 - 4) = *(_WORD *)(v13 + 48);
        *v14 = *(_DWORD *)(v13 + 60);
        *((_WORD *)v14 - 3) = 0;
        *(v14 - 1) = *(_DWORD *)(v13 + 52);
        v15 = *(unsigned __int16 *)(v13 + 32) + 2LL;
        v18 = v15;
        v16 = (wchar_t *)(((unsigned __int64)v11 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
        if ( (unsigned __int64)v16 + v15 > v6 )
          goto LABEL_9;
        *((_QWORD *)v14 - 2) = v16;
        RtlStringCbCopyNW(v16, v15, *(STRSAFE_PCNZWCH *)(v13 + 40), v15 - 2);
        v17 = (unsigned __int64)v16 + v18;
        result = AuthzBasepCopyoutClaimAttributeValues(v13, (__int64)(v14 - 4), v17, v6 - v17, &v18);
        if ( (int)result < 0 )
          goto LABEL_19;
        v11 = (_DWORD *)(v18 + v17);
        v14 += 8;
        v13 = *(_QWORD *)v13;
      }
      while ( (__int64 *)v13 != v12 );
    }
LABEL_18:
    if ( (int)result >= 0 )
      return result;
    goto LABEL_19;
  }
  result = 3221225621LL;
LABEL_19:
  if ( a3 >= 0x10 )
  {
    *(_QWORD *)a2 = 0LL;
    *((_QWORD *)a2 + 1) = 0LL;
  }
  return result;
}

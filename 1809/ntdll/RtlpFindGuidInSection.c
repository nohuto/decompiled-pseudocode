/*
 * XREFs of RtlpFindGuidInSection @ 0x180075084
 * Callers:
 *     RtlFindActivationContextSectionGuid @ 0x18000A540 (RtlFindActivationContextSectionGuid.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     bsearch @ 0x180092940 (bsearch.c)
 *     RtlCompareMemory @ 0x1800A4A80 (RtlCompareMemory.c)
 */

__int64 __fastcall RtlpFindGuidInSection(__int64 a1, _DWORD *a2, unsigned int *a3)
{
  unsigned int v6; // r14d
  unsigned int v7; // ebx
  _DWORD *v8; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // r14d
  __int64 v13; // rdx
  __int64 v14; // r13
  unsigned int *v15; // r12
  __int64 v16; // [rsp+30h] [rbp-68h]
  __int128 Key; // [rsp+38h] [rbp-60h] BYREF

  if ( *(_DWORD *)a1 != 1682469703 )
    return (unsigned int)-1072365565;
  v6 = *(_DWORD *)(a1 + 20);
  v7 = 0;
  if ( !v6 )
    return (unsigned int)-1072365560;
  if ( ((unsigned __int8)-(*(_DWORD *)(a1 + 28) != 0) & (*(_DWORD *)(a1 + 8) == 1)) != 0 )
  {
    v11 = *(unsigned int *)(a1 + 28);
    v12 = 0;
    v13 = (unsigned int)(*a2 % *(_DWORD *)(v11 + a1));
    v14 = (unsigned int)(*a2 % *(_DWORD *)(v11 + a1));
    v16 = a1 + *(unsigned int *)(v11 + a1 + 4);
    v15 = (unsigned int *)(a1 + *(unsigned int *)(v16 + 8 * v13 + 4));
    if ( !*(_DWORD *)(v16 + 8LL * (unsigned int)v13) )
      return (unsigned int)-1072365560;
    while ( 1 )
    {
      v8 = (_DWORD *)(a1 + *v15++);
      if ( RtlCompareMemory(v8, a2, 0x10uLL) == 16 )
        break;
      if ( (unsigned int)++v12 >= *(_DWORD *)(v16 + 8 * v14) )
        return (unsigned int)-1072365560;
    }
  }
  else
  {
    v8 = (_DWORD *)(a1 + *(unsigned int *)(a1 + 24));
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      Key = *(_OWORD *)a2;
      v8 = bsearch(&Key, v8, v6, 0x1CuLL, RtlpCompareProtectedPolicyEntry);
    }
    else
    {
      while ( RtlCompareMemory(v8, a2, 0x10uLL) != 16 )
      {
        v8 += 7;
        if ( !--v6 )
          return (unsigned int)-1072365560;
      }
    }
  }
  if ( !v8 || !v8[4] )
    return (unsigned int)-1072365560;
  if ( a3 )
  {
    v10 = *a3;
    a3[1] = *(_DWORD *)(a1 + 12);
    *((_QWORD *)a3 + 1) = a1 + (unsigned int)v8[4];
    a3[4] = v8[5];
    if ( a3 + 17 <= (unsigned int *)((char *)a3 + v10) )
      a3[16] = v8[6];
  }
  return v7;
}

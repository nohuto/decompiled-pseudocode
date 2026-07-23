/*
 * XREFs of AuthzBasepCopyoutClaimAttributeValues @ 0x1408EF6D8
 * Callers:
 *     AuthzBasepCopyoutClaimAttributes @ 0x1408EF948 (AuthzBasepCopyoutClaimAttributes.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x140155EDC (RtlStringCbCopyNW.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 __fastcall AuthzBasepCopyoutClaimAttributeValues(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdi
  unsigned __int16 v9; // ax
  __int64 v10; // rdx
  unsigned __int64 v11; // r10
  __int64 *v12; // r15
  __int64 *v13; // r14
  unsigned __int64 v14; // r13
  wchar_t *v15; // r10
  unsigned int v16; // r12d
  size_t v17; // r8
  wchar_t *v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // r10
  __int64 *v22; // r15
  __int64 *v23; // r14
  unsigned __int64 v24; // r13
  unsigned int v25; // r12d
  size_t v26; // rdx
  wchar_t *v27; // rbp
  __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned __int64 v30; // r10
  __int64 *v31; // r15
  __int64 *v32; // r14
  unsigned int v33; // r12d
  size_t v34; // rdx
  wchar_t *v35; // rbp
  __int64 v36; // r8
  unsigned __int64 v37; // r10
  _QWORD *v38; // r11
  _QWORD *v39; // rdx
  unsigned int v40; // r9d
  __int64 v41; // rcx

  v5 = 0;
  v6 = a3 + a4;
  if ( a3 + a4 < a3 )
    return (unsigned int)-2147483643;
  *a5 = 0LL;
  v9 = *(_WORD *)(a1 + 48);
  if ( !v9 )
    return (unsigned int)-1073741811;
  if ( v9 > 2u )
  {
    switch ( v9 )
    {
      case 3u:
        v29 = 8LL * *(unsigned int *)(a1 + 60);
        v30 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v30 + v29 <= v6 )
        {
          *(_QWORD *)(a2 + 24) = v30;
          v31 = (__int64 *)(a1 + 72);
          v32 = *(__int64 **)(a1 + 72);
          v15 = (wchar_t *)(v29 + v30);
          v33 = 0;
          while ( v32 != v31 )
          {
            v34 = *((unsigned __int16 *)v32 + 20) + 2LL;
            v35 = (wchar_t *)((char *)v15 + v34);
            if ( (unsigned __int64)v15 + v34 > v6 )
              return (unsigned int)-2147483643;
            *(_QWORD *)(((a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 8LL * v33) = v15;
            RtlStringCbCopyNW(v15, v34, (STRSAFE_PCNZWCH)v32[6], v34 - 2);
            v32 = (__int64 *)*v32;
            v15 = v35;
            ++v33;
          }
          goto LABEL_33;
        }
        return (unsigned int)-2147483643;
      case 4u:
        v20 = 16LL * *(unsigned int *)(a1 + 60);
        v21 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v21 + v20 <= v6 )
        {
          *(_QWORD *)(a2 + 24) = v21;
          v22 = (__int64 *)(a1 + 72);
          v23 = *(__int64 **)(a1 + 72);
          v24 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          v15 = (wchar_t *)(v20 + v21);
          v25 = 0;
          while ( v23 != v22 )
          {
            v26 = *((unsigned __int16 *)v23 + 24) + 2LL;
            v27 = (wchar_t *)((char *)v15 + v26);
            if ( (unsigned __int64)v15 + v26 > v6 )
              return (unsigned int)-2147483643;
            v28 = 2LL * v25;
            *(_QWORD *)(v24 + 8 * v28) = v23[5];
            *(_QWORD *)(v24 + 8 * v28 + 8) = v15;
            RtlStringCbCopyNW(v15, v26, (STRSAFE_PCNZWCH)v23[7], v26 - 2);
            v23 = (__int64 *)*v23;
            v15 = v27;
            ++v25;
          }
          goto LABEL_33;
        }
        return (unsigned int)-2147483643;
      case 5u:
        goto LABEL_10;
    }
    if ( v9 != 6 )
    {
      if ( v9 == 16 )
      {
LABEL_10:
        v10 = 16LL * *(unsigned int *)(a1 + 60);
        v11 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v11 + v10 <= v6 )
        {
          *(_QWORD *)(a2 + 24) = v11;
          v12 = (__int64 *)(a1 + 72);
          v13 = *(__int64 **)(a1 + 72);
          v14 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          v15 = (wchar_t *)(v10 + v11);
          v16 = 0;
          while ( v13 != v12 )
          {
            v17 = *((unsigned int *)v13 + 12);
            v18 = (wchar_t *)((char *)v15 + v17);
            if ( (unsigned __int64)v15 + v17 > v6 )
              return (unsigned int)-2147483643;
            v19 = 2LL * v16;
            *(_QWORD *)(v14 + 8 * v19) = v15;
            *(_DWORD *)(v14 + 8 * v19 + 8) = v17;
            memmove(v15, (const void *)v13[5], v17);
            v13 = (__int64 *)*v13;
            v15 = v18;
            ++v16;
          }
          goto LABEL_33;
        }
        return (unsigned int)-2147483643;
      }
      return (unsigned int)-1073741811;
    }
  }
  v36 = 8LL * *(unsigned int *)(a1 + 60);
  v37 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v37 + v36 <= v6 )
  {
    v38 = (_QWORD *)(a1 + 72);
    *(_QWORD *)(a2 + 24) = v37;
    v39 = *(_QWORD **)(a1 + 72);
    v40 = 0;
    while ( v39 != v38 )
    {
      v41 = v40++;
      *(_QWORD *)(v37 + 8 * v41) = v39[5];
      v39 = (_QWORD *)*v39;
    }
    v15 = (wchar_t *)(v36 + v37);
LABEL_33:
    *a5 = (char *)v15 - a3;
    return v5;
  }
  return (unsigned int)-2147483643;
}

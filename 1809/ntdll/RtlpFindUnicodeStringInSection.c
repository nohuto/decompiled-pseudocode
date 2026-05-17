/*
 * XREFs of RtlpFindUnicodeStringInSection @ 0x18000BCF4
 * Callers:
 *     RtlFindActivationContextSectionString @ 0x18000B990 (RtlFindActivationContextSectionString.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x180030670 (RtlQueryActivationContextApplicationSettings.c)
 * Callees:
 *     RtlHashUnicodeString @ 0x18000BF90 (RtlHashUnicodeString.c)
 *     DbgPrintEx @ 0x18004D290 (DbgPrintEx.c)
 *     RtlCompareUnicodeStrings @ 0x1800571D0 (RtlCompareUnicodeStrings.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     bsearch @ 0x180092930 (bsearch.c)
 */

__int64 __fastcall RtlpFindUnicodeStringInSection(
        _DWORD *a1,
        unsigned __int64 a2,
        unsigned __int16 *a3,
        unsigned int *a4,
        _DWORD *a5,
        unsigned int *a6)
{
  int v7; // r10d
  bool v8; // zf
  char v11; // r14
  __int64 v12; // r8
  __int64 result; // rax
  __int64 v14; // rdx
  char v15; // dl
  unsigned int v16; // r11d
  __int64 v17; // rcx
  __int64 v18; // rbp
  __int64 v19; // rdx
  char *v20; // rcx
  unsigned int *v21; // r12
  char *v22; // r15
  unsigned __int64 v23; // rdx
  int *v24; // r9
  unsigned __int64 v25; // rax
  char *v26; // rbx
  size_t v27; // r8
  char *v28; // rbx
  char *v29; // r12
  char *v30; // rax
  unsigned int v31; // ebp
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // ebp
  char v36; // [rsp+50h] [rbp-78h]
  int v37; // [rsp+54h] [rbp-74h] BYREF
  unsigned int v38; // [rsp+58h] [rbp-70h]
  unsigned __int64 v39; // [rsp+60h] [rbp-68h]
  unsigned int Key[6]; // [rsp+68h] [rbp-60h] BYREF

  v7 = a1[4] & 1;
  v8 = *a1 == 1682469715;
  v39 = a2;
  v11 = 1;
  v36 = v7;
  if ( !v8 )
    return 3222601731LL;
  if ( !a1[5] )
    return 3222601736LL;
  v12 = (unsigned int)a1[7];
  if ( (_DWORD)v12 == -1 )
  {
    v11 = 0;
  }
  else if ( *a5 != (_DWORD)v12 )
  {
    LOBYTE(a2) = v7;
    result = RtlHashUnicodeString(a3, a2, v12, a6);
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result != -1073741811 )
        return result;
      LOBYTE(v14) = v36;
      result = RtlHashUnicodeString(a3, v14, 0LL, &v37);
      if ( (int)result < 0 )
        return result;
      DbgPrintEx(
        51LL,
        0LL,
        "RtlpFindUnicodeStringInSection: Unsupported hash algorithm %lu found in string section.\n",
        a1[7]);
      v11 = 0;
    }
    else
    {
      *a5 = a1[7];
    }
    LOBYTE(v7) = v36;
  }
  v15 = 0;
  if ( a1[2] == 1 )
    v15 = v11;
  if ( ((unsigned __int8)-(a1[8] != 0) & (unsigned __int8)v15) != 0 )
  {
    v17 = (unsigned int)a1[8];
    v18 = 0LL;
    v38 = *a6;
    v16 = v38;
    v19 = v38 % *(_DWORD *)((char *)a1 + v17);
    v20 = (char *)a1 + *(unsigned int *)((char *)a1 + v17 + 4);
    v37 = v19;
    v21 = (unsigned int *)&v20[8 * v19];
    v22 = (char *)a1 + v21[1];
    if ( *v21 )
    {
      v23 = v39;
      while ( 1 )
      {
        v24 = (int *)&v22[4 * v18];
        v25 = *v24;
        if ( v25 > v23 )
          break;
        v26 = (char *)a1 + v25;
        if ( !v11 || *(_DWORD *)v26 == v16 )
        {
          v33 = *((unsigned int *)v26 + 1);
          if ( v33 > v23 )
          {
            DbgPrintEx(
              51LL,
              0LL,
              "SXS: String hash table entry at %p has invalid key offset (= %ld)\n"
              "   Header = %p; Index = %lu; Bucket = %p; Chain = %p\n",
              v26,
              v33,
              a1,
              v37,
              v21,
              v22);
            return 3222601731LL;
          }
          if ( !(unsigned int)RtlCompareUnicodeStrings(
                                *((_QWORD *)a3 + 1),
                                (unsigned __int64)*a3 >> 1,
                                (int)a1 + (int)v33,
                                (unsigned __int64)*((unsigned __int16 *)v26 + 4) >> 1,
                                v7) )
            goto LABEL_34;
          v16 = v38;
          v23 = v39;
        }
        LOBYTE(v7) = v36;
        v18 = (unsigned int)(v18 + 1);
        if ( (unsigned int)v18 >= *v21 )
          return 3222601736LL;
      }
      DbgPrintEx(51LL, 0LL, "SXS: String hash collision chain offset at %p (= %ld) out of bounds\n", v24, *v24);
      return 3222601731LL;
    }
    return 3222601736LL;
  }
  if ( v11 && (a1[4] & 2) != 0 )
  {
    v27 = (unsigned int)a1[5];
    v28 = (char *)a1 + (unsigned int)a1[6];
    v29 = &v28[24 * (unsigned int)(v27 - 1)];
    Key[0] = *a6;
    v30 = (char *)bsearch(Key, v28, v27, 0x18uLL, RtlpCompareActivationContextStringSectionEntryByPseudoKey);
    if ( v30 )
    {
      for ( ; v30 != v28; v30 -= 24 )
      {
        if ( *(_DWORD *)v30 != *a6 )
          break;
      }
      v31 = *a6;
      v26 = v30 + 24;
      if ( *(_DWORD *)v30 == *a6 )
        v26 = v30;
      v32 = (unsigned __int64)*a3 >> 1;
      do
      {
        if ( !(unsigned int)RtlCompareUnicodeStrings(
                              *((_QWORD *)a3 + 1),
                              v32,
                              (int)a1 + *((_DWORD *)v26 + 1),
                              (unsigned __int64)*((unsigned __int16 *)v26 + 4) >> 1,
                              v36) )
          break;
        v26 += 24;
        if ( v26 > v29 )
          goto LABEL_31;
      }
      while ( *(_DWORD *)v26 == v31 );
      if ( v26 > v29 || *(_DWORD *)v26 != v31 )
      {
LABEL_31:
        v26 = 0LL;
        goto LABEL_34;
      }
      goto LABEL_34;
    }
    return 3222601736LL;
  }
  v35 = a1[5];
  v26 = (char *)a1 + (unsigned int)a1[6];
  if ( !v35 )
    return 3222601736LL;
  while ( v11 && *(_DWORD *)v26 != *a6
       || (unsigned int)RtlCompareUnicodeStrings(
                          *((_QWORD *)a3 + 1),
                          (unsigned __int64)*a3 >> 1,
                          (int)a1 + *((_DWORD *)v26 + 1),
                          (unsigned __int64)*((unsigned __int16 *)v26 + 4) >> 1,
                          v7) )
  {
    LOBYTE(v7) = v36;
    v26 += 24;
    if ( !--v35 )
      return 3222601736LL;
  }
LABEL_34:
  if ( !v26 || !*((_DWORD *)v26 + 3) )
    return 3222601736LL;
  if ( a4 )
  {
    v34 = *a4;
    a4[1] = a1[3];
    *((_QWORD *)a4 + 1) = (char *)a1 + *((unsigned int *)v26 + 3);
    a4[4] = *((_DWORD *)v26 + 4);
    if ( a4 + 17 <= (unsigned int *)((char *)a4 + v34) )
      a4[16] = *((_DWORD *)v26 + 5);
  }
  return 0LL;
}

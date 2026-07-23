/*
 * XREFs of sub_18002715C @ 0x18002715C
 * Callers:
 *     RtlFindActivationContextSectionString @ 0x180026BF0 (RtlFindActivationContextSectionString.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x180077860 (RtlQueryActivationContextApplicationSettings.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x180019EE0 (RtlCompareUnicodeString.c)
 *     RtlHashUnicodeString @ 0x1800273F0 (RtlHashUnicodeString.c)
 *     DbgPrintEx @ 0x180052780 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     bsearch @ 0x18008F220 (bsearch.c)
 */

NTSTATUS __fastcall sub_18002715C(
        _DWORD *a1,
        unsigned __int64 a2,
        _UNICODE_STRING *a3,
        unsigned int *a4,
        _DWORD *a5,
        ULONG *HashValue)
{
  int v7; // r13d
  bool v8; // zf
  _UNICODE_STRING *v9; // r11
  char v11; // r15
  ULONG v12; // r8d
  NTSTATUS result; // eax
  char v14; // dl
  ULONG v15; // r10d
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rdx
  char *v19; // rcx
  unsigned int *v20; // rdx
  unsigned int v21; // eax
  int *v22; // r12
  unsigned __int64 v23; // rdx
  int *i; // r13
  unsigned __int64 v25; // rcx
  char *v26; // rbx
  size_t v27; // r8
  char *v28; // rbx
  char *v29; // r15
  char *v30; // rax
  ULONG v31; // r14d
  unsigned __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // r14d
  ULONG v36; // [rsp+58h] [rbp-51h] BYREF
  _UNICODE_STRING String2; // [rsp+60h] [rbp-49h] BYREF
  BOOLEAN CaseInSensitive[4]; // [rsp+70h] [rbp-39h]
  ULONG v39; // [rsp+74h] [rbp-35h]
  unsigned int v40; // [rsp+78h] [rbp-31h]
  unsigned __int64 v41; // [rsp+80h] [rbp-29h]
  unsigned int *v42; // [rsp+88h] [rbp-21h]
  ULONG Key[6]; // [rsp+90h] [rbp-19h] BYREF

  v7 = a1[4] & 1;
  v8 = *a1 == 1682469715;
  v9 = a3;
  v11 = 1;
  v41 = a2;
  *(_DWORD *)CaseInSensitive = v7;
  if ( !v8 )
    return -1072365565;
  if ( !a1[5] )
    return -1072365560;
  v12 = a1[7];
  if ( v12 == -1 )
  {
    v11 = 0;
  }
  else if ( *a5 != v12 )
  {
    result = RtlHashUnicodeString(v9, v7, v12, HashValue);
    if ( result < 0 )
    {
      if ( result != -1073741811 )
        return result;
      result = RtlHashUnicodeString(a3, v7, 0, &v36);
      if ( result < 0 )
        return result;
      DbgPrintEx(
        0x33u,
        0,
        "RtlpFindUnicodeStringInSection: Unsupported hash algorithm %lu found in string section.\n",
        a1[7]);
      v11 = 0;
    }
    else
    {
      *a5 = a1[7];
    }
    v9 = a3;
  }
  v14 = 0;
  if ( a1[2] == 1 )
    v14 = v11;
  if ( ((unsigned __int8)-(a1[8] != 0) & (unsigned __int8)v14) != 0 )
  {
    v16 = (unsigned int)a1[8];
    v17 = 0LL;
    v39 = *HashValue;
    v15 = v39;
    v18 = v39 % *(_DWORD *)((char *)a1 + v16);
    v19 = (char *)a1 + *(unsigned int *)((char *)a1 + v16 + 4);
    v36 = v18;
    v20 = (unsigned int *)&v19[8 * v18];
    v21 = *v20;
    v22 = (_DWORD *)((char *)a1 + v20[1]);
    v42 = v20;
    v40 = v21;
    if ( v21 )
    {
      v23 = v41;
      for ( i = v22; ; ++i )
      {
        v25 = *i;
        if ( v25 > v23 )
          break;
        v26 = (char *)a1 + v25;
        if ( !v11 || *(_DWORD *)v26 == v15 )
        {
          v32 = *((unsigned int *)v26 + 1);
          if ( v32 > v23 )
          {
            DbgPrintEx(
              0x33u,
              0,
              "SXS: String hash table entry at %p has invalid key offset (= %ld)\n"
              "   Header = %p; Index = %lu; Bucket = %p; Chain = %p\n",
              v26,
              v32,
              a1,
              v36,
              v42,
              v22);
            return -1072365565;
          }
          String2.Length = *((_WORD *)v26 + 4);
          String2.MaximumLength = String2.Length;
          String2.Buffer = (PWCH)((char *)a1 + v32);
          if ( !RtlCompareUnicodeString(v9, &String2, CaseInSensitive[0]) )
            goto LABEL_33;
          v15 = v39;
          v23 = v41;
        }
        v9 = a3;
        v17 = (unsigned int)(v17 + 1);
        if ( (unsigned int)v17 >= v40 )
          return -1072365560;
      }
      DbgPrintEx(0x33u, 0, "SXS: String hash collision chain offset at %p (= %ld) out of bounds\n", &v22[v17], v25);
      return -1072365565;
    }
    return -1072365560;
  }
  if ( v11 && (a1[4] & 2) != 0 )
  {
    v27 = (unsigned int)a1[5];
    v28 = (char *)a1 + (unsigned int)a1[6];
    v29 = &v28[24 * (unsigned int)(v27 - 1)];
    Key[0] = *HashValue;
    v30 = (char *)bsearch(Key, v28, v27, 0x18uLL, sub_180078DE0);
    if ( v30 )
    {
      for ( ; v30 != v28; v30 -= 24 )
      {
        if ( *(_DWORD *)v30 != *HashValue )
          break;
      }
      v31 = *HashValue;
      v26 = v30 + 24;
      if ( *(_DWORD *)v30 == *HashValue )
        v26 = v30;
      do
      {
        String2.Length = *((_WORD *)v26 + 4);
        String2.MaximumLength = String2.Length;
        String2.Buffer = (PWCH)((char *)a1 + *((unsigned int *)v26 + 1));
        if ( !RtlCompareUnicodeString(a3, &String2, v7) )
          break;
        v26 += 24;
        if ( v26 > v29 )
          goto LABEL_30;
      }
      while ( *(_DWORD *)v26 == v31 );
      if ( v26 > v29 || *(_DWORD *)v26 != v31 )
      {
LABEL_30:
        v26 = 0LL;
        goto LABEL_33;
      }
      goto LABEL_33;
    }
    return -1072365560;
  }
  v34 = a1[5];
  v26 = (char *)a1 + (unsigned int)a1[6];
  if ( !v34 )
    return -1072365560;
  while ( 1 )
  {
    String2.Length = *((_WORD *)v26 + 4);
    String2.MaximumLength = String2.Length;
    String2.Buffer = (PWCH)((char *)a1 + *((unsigned int *)v26 + 1));
    if ( (!v11 || *(_DWORD *)v26 == *HashValue) && !RtlCompareUnicodeString(v9, &String2, v7) )
      break;
    v9 = a3;
    v26 += 24;
    if ( !--v34 )
      return -1072365560;
  }
LABEL_33:
  if ( !v26 || !*((_DWORD *)v26 + 3) )
    return -1072365560;
  if ( a4 )
  {
    v33 = *a4;
    a4[1] = a1[3];
    *((_QWORD *)a4 + 1) = (char *)a1 + *((unsigned int *)v26 + 3);
    a4[4] = *((_DWORD *)v26 + 4);
    if ( a4 + 17 <= (unsigned int *)((char *)a4 + v33) )
      a4[16] = *((_DWORD *)v26 + 5);
  }
  return 0;
}

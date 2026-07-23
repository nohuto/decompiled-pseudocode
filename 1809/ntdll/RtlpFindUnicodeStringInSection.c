/*
 * XREFs of RtlpFindUnicodeStringInSection @ 0x18000BCF4
 * Callers:
 *     RtlFindActivationContextSectionString @ 0x18000B990 (RtlFindActivationContextSectionString.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x180030670 (RtlQueryActivationContextApplicationSettings.c)
 * Callees:
 *     RtlHashUnicodeString @ 0x18000BF90 (RtlHashUnicodeString.c)
 *     DbgPrintEx @ 0x18004D290 (DbgPrintEx.c)
 *     RtlCompareUnicodeStrings @ 0x1800571D0 (RtlCompareUnicodeStrings.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     bsearch @ 0x180092940 (bsearch.c)
 */

NTSTATUS __fastcall RtlpFindUnicodeStringInSection(
        _DWORD *a1,
        unsigned __int64 a2,
        _UNICODE_STRING *a3,
        unsigned int *a4,
        _DWORD *a5,
        ULONG *HashValue)
{
  int v7; // r10d
  bool v8; // zf
  char v11; // r14
  ULONG v12; // r8d
  NTSTATUS result; // eax
  char v14; // dl
  ULONG v15; // r11d
  __int64 v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // rdx
  char *v19; // rcx
  unsigned int *v20; // r12
  char *v21; // r15
  unsigned __int64 v22; // rdx
  int *v23; // r9
  unsigned __int64 v24; // rax
  char *v25; // rbx
  size_t v26; // r8
  char *v27; // rbx
  char *v28; // r12
  char *v29; // rax
  ULONG v30; // ebp
  SIZE_T v31; // r14
  unsigned __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // ebp
  BOOLEAN CaseInSensitive; // [rsp+50h] [rbp-78h]
  ULONG v36; // [rsp+54h] [rbp-74h] BYREF
  ULONG v37; // [rsp+58h] [rbp-70h]
  unsigned __int64 v38; // [rsp+60h] [rbp-68h]
  ULONG Key[6]; // [rsp+68h] [rbp-60h] BYREF

  v7 = a1[4] & 1;
  v8 = *a1 == 1682469715;
  v38 = a2;
  v11 = 1;
  CaseInSensitive = v7;
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
    result = RtlHashUnicodeString(a3, v7, v12, HashValue);
    if ( result < 0 )
    {
      if ( result != -1073741811 )
        return result;
      result = RtlHashUnicodeString(a3, CaseInSensitive, 0, &v36);
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
    LOBYTE(v7) = CaseInSensitive;
  }
  v14 = 0;
  if ( a1[2] == 1 )
    v14 = v11;
  if ( ((unsigned __int8)-(a1[8] != 0) & (unsigned __int8)v14) != 0 )
  {
    v16 = (unsigned int)a1[8];
    v17 = 0LL;
    v37 = *HashValue;
    v15 = v37;
    v18 = v37 % *(_DWORD *)((char *)a1 + v16);
    v19 = (char *)a1 + *(unsigned int *)((char *)a1 + v16 + 4);
    v36 = v18;
    v20 = (unsigned int *)&v19[8 * v18];
    v21 = (char *)a1 + v20[1];
    if ( *v20 )
    {
      v22 = v38;
      while ( 1 )
      {
        v23 = (int *)&v21[4 * v17];
        v24 = *v23;
        if ( v24 > v22 )
          break;
        v25 = (char *)a1 + v24;
        if ( !v11 || *(_DWORD *)v25 == v15 )
        {
          v32 = *((unsigned int *)v25 + 1);
          if ( v32 > v22 )
          {
            DbgPrintEx(
              0x33u,
              0,
              "SXS: String hash table entry at %p has invalid key offset (= %ld)\n"
              "   Header = %p; Index = %lu; Bucket = %p; Chain = %p\n",
              v25,
              v32,
              a1,
              v36,
              v20,
              v21);
            return -1072365565;
          }
          if ( !RtlCompareUnicodeStrings(
                  a3->Buffer,
                  (unsigned __int64)a3->Length >> 1,
                  (PCWCH)((char *)a1 + v32),
                  (unsigned __int64)*((unsigned __int16 *)v25 + 4) >> 1,
                  v7) )
            goto LABEL_34;
          v15 = v37;
          v22 = v38;
        }
        LOBYTE(v7) = CaseInSensitive;
        v17 = (unsigned int)(v17 + 1);
        if ( (unsigned int)v17 >= *v20 )
          return -1072365560;
      }
      DbgPrintEx(0x33u, 0, "SXS: String hash collision chain offset at %p (= %ld) out of bounds\n", v23, *v23);
      return -1072365565;
    }
    return -1072365560;
  }
  if ( v11 && (a1[4] & 2) != 0 )
  {
    v26 = (unsigned int)a1[5];
    v27 = (char *)a1 + (unsigned int)a1[6];
    v28 = &v27[24 * (unsigned int)(v26 - 1)];
    Key[0] = *HashValue;
    v29 = (char *)bsearch(Key, v27, v26, 0x18uLL, RtlpCompareActivationContextStringSectionEntryByPseudoKey);
    if ( v29 )
    {
      for ( ; v29 != v27; v29 -= 24 )
      {
        if ( *(_DWORD *)v29 != *HashValue )
          break;
      }
      v30 = *HashValue;
      v25 = v29 + 24;
      if ( *(_DWORD *)v29 == *HashValue )
        v25 = v29;
      v31 = (unsigned __int64)a3->Length >> 1;
      do
      {
        if ( !RtlCompareUnicodeStrings(
                a3->Buffer,
                v31,
                (PCWCH)((char *)a1 + *((unsigned int *)v25 + 1)),
                (unsigned __int64)*((unsigned __int16 *)v25 + 4) >> 1,
                CaseInSensitive) )
          break;
        v25 += 24;
        if ( v25 > v28 )
          goto LABEL_31;
      }
      while ( *(_DWORD *)v25 == v30 );
      if ( v25 > v28 || *(_DWORD *)v25 != v30 )
      {
LABEL_31:
        v25 = 0LL;
        goto LABEL_34;
      }
      goto LABEL_34;
    }
    return -1072365560;
  }
  v34 = a1[5];
  v25 = (char *)a1 + (unsigned int)a1[6];
  if ( !v34 )
    return -1072365560;
  while ( v11 && *(_DWORD *)v25 != *HashValue
       || RtlCompareUnicodeStrings(
            a3->Buffer,
            (unsigned __int64)a3->Length >> 1,
            (PCWCH)((char *)a1 + *((unsigned int *)v25 + 1)),
            (unsigned __int64)*((unsigned __int16 *)v25 + 4) >> 1,
            v7) )
  {
    LOBYTE(v7) = CaseInSensitive;
    v25 += 24;
    if ( !--v34 )
      return -1072365560;
  }
LABEL_34:
  if ( !v25 || !*((_DWORD *)v25 + 3) )
    return -1072365560;
  if ( a4 )
  {
    v33 = *a4;
    a4[1] = a1[3];
    *((_QWORD *)a4 + 1) = (char *)a1 + *((unsigned int *)v25 + 3);
    a4[4] = *((_DWORD *)v25 + 4);
    if ( a4 + 17 <= (unsigned int *)((char *)a4 + v33) )
      a4[16] = *((_DWORD *)v25 + 5);
  }
  return 0;
}

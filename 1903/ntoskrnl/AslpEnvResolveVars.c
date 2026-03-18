/*
 * XREFs of AslpEnvResolveVars @ 0x14074BF18
 * Callers:
 *     AslEnvExpandStrings2 @ 0x14074BD88 (AslEnvExpandStrings2.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140153F64 (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x1401542B8 (RtlStringCchCatW.c)
 *     _wcsnicmp @ 0x1401A0240 (_wcsnicmp.c)
 *     AslLogCallPrintf @ 0x140708C54 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpEnvResolveVars(
        NTSTRSAFE_PCWSTR pszSrc,
        unsigned int a2,
        wchar_t *a3,
        unsigned int a4,
        __int16 a5,
        __int16 a6,
        unsigned int *a7)
{
  size_t v7; // rdi
  int v9; // ebx
  int v10; // esi
  unsigned int v11; // ebp
  unsigned __int64 i; // r12
  unsigned int v14; // eax
  __int16 v15; // cx
  unsigned __int64 j; // rdi
  NTSTATUS v17; // ebx
  __int64 v18; // rdx
  wchar_t *v19; // rcx
  wchar_t v20; // ax
  wchar_t *v21; // rax
  const wchar_t *v23; // [rsp+70h] [rbp+8h]

  v23 = pszSrc;
  v7 = a4;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  for ( i = 0LL; i < 4; ++i )
  {
    if ( v9 )
      goto LABEL_33;
    v14 = dword_140427010[6 * i];
    if ( a2 > v14 )
    {
      if ( wcsnicmp(pszSrc, off_140427000[3 * i], v14) )
      {
LABEL_12:
        pszSrc = v23;
        continue;
      }
      v11 = a2 + dword_140427014[6 * i] - dword_140427010[6 * i];
      if ( v11 > (unsigned int)v7 )
      {
        v17 = -1073741789;
LABEL_31:
        *a7 = v11;
        return (unsigned int)v17;
      }
      if ( !i )
      {
        v15 = a5;
        for ( j = 0LL; j < 14; j += 2LL )
        {
          if ( *(_WORD *)((char *)&unk_1404279D0 + j * 8) == v15 && *(_WORD *)((char *)&unk_1404279D2 + j * 8) == a6 )
          {
            v17 = 0;
            if ( (unsigned __int64)a4 - 1 > 0x7FFFFFFE )
              v17 = -1073741811;
            if ( v17 < 0 )
            {
              if ( a4 )
                *a3 = 0;
            }
            else
            {
              v18 = a4;
              v19 = a3;
              if ( a4 )
              {
                do
                {
                  if ( !(2147483646LL - a4 + v18) )
                    break;
                  v20 = *(wchar_t *)((char *)v19 + (char *)L"%systemroot%" - (char *)a3);
                  if ( !v20 )
                    break;
                  *v19++ = v20;
                  --v18;
                }
                while ( v18 );
              }
              v21 = v19 - 1;
              if ( v18 )
                v21 = v19;
              v17 = v18 != 0 ? 0 : 0x80000005;
              *v21 = 0;
            }
            if ( v17 < 0 )
              goto LABEL_40;
            v17 = RtlStringCchCatW(a3, a4, (&off_1404279D8)[j]);
            if ( v17 < 0 )
              goto LABEL_40;
            v17 = RtlStringCchCatW(a3, a4, &v23[dword_140427010[0]]);
            if ( v17 < 0 )
              goto LABEL_40;
            v15 = a5;
            v10 = 1;
          }
        }
        if ( v10 )
        {
LABEL_11:
          v7 = a4;
          v9 = 1;
          goto LABEL_12;
        }
        AslLogCallPrintf(1LL);
        v7 = a4;
      }
      if ( !v10 )
      {
        v17 = RtlStringCchCopyW(a3, v7, (&off_140427008)[3 * i]);
        if ( v17 < 0 )
          goto LABEL_40;
        v17 = RtlStringCchCatW(a3, v7, &v23[dword_140427010[6 * i]]);
        if ( v17 < 0 )
          goto LABEL_40;
      }
      goto LABEL_11;
    }
  }
  if ( v9 )
    goto LABEL_33;
  v11 = a2;
  if ( a2 > (unsigned int)v7 )
  {
    v17 = -1073741789;
    *a7 = a2;
    return (unsigned int)v17;
  }
  v17 = RtlStringCchCopyW(a3, (unsigned int)v7, pszSrc);
  if ( v17 >= 0 )
  {
LABEL_33:
    v17 = 0;
    goto LABEL_31;
  }
LABEL_40:
  AslLogCallPrintf(1LL);
  return (unsigned int)v17;
}

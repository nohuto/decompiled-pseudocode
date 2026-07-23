/*
 * XREFs of AslpEnvResolveVars @ 0x140723110
 * Callers:
 *     AslEnvExpandStrings2 @ 0x140722F74 (AslEnvExpandStrings2.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140092360 (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x1400F5038 (RtlStringCchCatW.c)
 *     _wcsnicmp @ 0x140195BB0 (_wcsnicmp.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
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
  unsigned int v7; // esi
  int v8; // ebx
  int v9; // edi
  unsigned int v10; // ebp
  unsigned __int64 i; // r14
  unsigned __int64 v13; // r12
  unsigned int v14; // eax
  int v15; // eax
  unsigned __int64 j; // rbx
  size_t v17; // rdi
  NTSTATUS v18; // esi
  size_t v19; // rdx
  wchar_t *v20; // rax
  wchar_t v21; // cx
  unsigned int v23; // ebx
  const wchar_t *v24; // [rsp+70h] [rbp+8h]
  unsigned int v25; // [rsp+78h] [rbp+10h]

  v25 = a2;
  v24 = pszSrc;
  v7 = a4;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  for ( i = 0LL; i < 4; ++i )
  {
    if ( v8 )
      goto LABEL_34;
    v13 = 24 * i;
    v14 = *((_DWORD *)&unk_140401CD0 + 6 * i);
    if ( a2 > v14 )
    {
      v15 = wcsnicmp(pszSrc, off_140401CC0[v13 / 8], v14);
      a2 = v25;
      if ( v15 )
        goto LABEL_13;
      v10 = v25 + *(_DWORD *)((char *)&unk_140401CD4 + v13) - *(_DWORD *)((char *)&unk_140401CD0 + v13);
      if ( v10 > v7 )
      {
        v18 = -1073741789;
LABEL_26:
        *a7 = v10;
        return (unsigned int)v18;
      }
      if ( i )
      {
        if ( v9 )
          goto LABEL_12;
      }
      else
      {
        for ( j = 0LL; j < 14; j += 2LL )
        {
          if ( *(_WORD *)((char *)&unk_1404025D0 + j * 8) == a5 && *(_WORD *)((char *)&unk_1404025D2 + j * 8) == a6 )
          {
            v17 = v7;
            v18 = 0;
            if ( v17 - 1 > 0x7FFFFFFE )
              v18 = -1073741811;
            if ( v18 < 0 )
            {
              if ( v17 )
                *a3 = 0;
            }
            else
            {
              v19 = v17;
              v20 = a3;
              v18 = 0;
              if ( !v17 )
                goto LABEL_35;
              while ( 2147483646 - v17 + v19 )
              {
                v21 = *(wchar_t *)((char *)v20 + (char *)L"%systemroot%" - (char *)a3);
                if ( !v21 )
                  break;
                *v20++ = v21;
                if ( !--v19 )
                  goto LABEL_35;
              }
              if ( !v19 )
              {
LABEL_35:
                --v20;
                v18 = -2147483643;
              }
              *v20 = 0;
            }
            if ( v18 < 0 )
              goto LABEL_45;
            v18 = RtlStringCchCatW(a3, v17, (&off_1404025D8)[j]);
            if ( v18 < 0 )
              goto LABEL_45;
            v18 = RtlStringCchCatW(a3, v17, &v24[*(unsigned int *)((char *)&unk_140401CD0 + v13)]);
            if ( v18 < 0 )
              goto LABEL_45;
            v7 = a4;
            v9 = 1;
          }
        }
        if ( v9 )
        {
          a2 = v25;
LABEL_12:
          v8 = 1;
LABEL_13:
          pszSrc = v24;
          continue;
        }
        AslLogCallPrintf(1LL);
      }
      v23 = v7;
      v18 = RtlStringCchCopyW(a3, v7, (&off_140401CC8)[v13 / 8]);
      if ( v18 < 0 )
        goto LABEL_45;
      v18 = RtlStringCchCatW(a3, v23, &v24[*(unsigned int *)((char *)&unk_140401CD0 + v13)]);
      if ( v18 < 0 )
        goto LABEL_45;
      v7 = a4;
      a2 = v25;
      goto LABEL_12;
    }
  }
  if ( v8 )
    goto LABEL_34;
  v10 = a2;
  if ( a2 > v7 )
  {
    v18 = -1073741789;
    *a7 = a2;
    return (unsigned int)v18;
  }
  v18 = RtlStringCchCopyW(a3, v7, pszSrc);
  if ( v18 >= 0 )
  {
LABEL_34:
    v18 = 0;
    goto LABEL_26;
  }
LABEL_45:
  AslLogCallPrintf(1LL);
  return (unsigned int)v18;
}

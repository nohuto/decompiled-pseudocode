/*
 * XREFs of ttfdQueryFontFile @ 0x1C0220870
 * Callers:
 *     <none>
 * Callees:
 *     StringCchCopyW @ 0x1C021E32C (StringCchCopyW.c)
 */

__int64 __fastcall ttfdQueryFontFile(__int64 a1, int a2, unsigned int a3, wchar_t *a4)
{
  int v6; // edx
  __int64 v8; // rdi
  unsigned int v9; // ebp
  unsigned int i; // r14d
  __int64 v11; // r10
  unsigned __int64 v12; // r15
  __int64 v13; // rcx
  int v14; // edx
  wchar_t *v15; // rdx
  wchar_t v16; // ax
  wchar_t *v17; // rax

  v6 = a2 - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
      return *(unsigned int *)(a1 + 12);
    else
      return 0xFFFFFFFFLL;
  }
  else
  {
    v8 = a3 >> 1;
    v9 = 0;
    for ( i = 0; v9 < *(_DWORD *)(a1 + 12); ++v9 )
    {
      if ( (*(_DWORD *)(a1 + 16LL * v9 + 44) & 1) != 0 )
      {
        v11 = *(_QWORD *)(a1 + 16 * (v9 + 3LL)) + 352LL;
        v12 = (unsigned __int64)(*(_DWORD *)(*(_QWORD *)(a1 + 16 * (v9 + 3LL)) + 364LL)
                               - *(_DWORD *)(*(_QWORD *)(a1 + 16 * (v9 + 3LL)) + 368LL)) >> 1;
        if ( v9 )
        {
          if ( a4 )
          {
            v13 = (unsigned int)v8;
            v14 = 0;
            if ( (unsigned __int64)(v8 - 1) > 0x7FFFFFFE )
              v14 = -2147024809;
            if ( v14 < 0 )
            {
              if ( (_DWORD)v8 )
                *a4 = 0;
            }
            else
            {
              v15 = a4;
              if ( (_DWORD)v8 )
              {
                do
                {
                  if ( !(2147483646LL - (unsigned int)v8 + v13) )
                    break;
                  v16 = *(wchar_t *)((char *)v15 + (char *)L" & " - (char *)a4);
                  if ( !v16 )
                    break;
                  *v15++ = v16;
                  --v13;
                }
                while ( v13 );
              }
              v17 = v15 - 1;
              if ( v13 )
                v17 = v15;
              v14 = -2147024774;
              if ( v13 )
                v14 = 0;
              *v17 = 0;
            }
            if ( v14 < 0 )
              return i;
            a4 += 3;
            v8 = (unsigned int)(v8 - 3);
          }
          i += 6;
        }
        if ( a4 )
        {
          if ( StringCchCopyW(a4, (unsigned int)v8, (STRSAFE_LPCWSTR)(v11 + *(int *)(v11 + 16))) < 0 )
            return i;
          a4 += (int)v12 - 2;
          v8 = (unsigned int)(2 - v12 + v8);
        }
        i += 2 * v12;
      }
    }
    return i;
  }
}

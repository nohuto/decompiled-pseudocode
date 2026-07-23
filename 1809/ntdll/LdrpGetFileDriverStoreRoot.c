/*
 * XREFs of LdrpGetFileDriverStoreRoot @ 0x18007FA88
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18003E950 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     _wcsnicmp @ 0x180091A30 (_wcsnicmp.c)
 */

bool __fastcall LdrpGetFileDriverStoreRoot(unsigned __int64 a1, __int64 a2, _WORD *a3)
{
  char v3; // di
  __int64 v5; // rax
  const wchar_t *v7; // rbx
  int v8; // eax
  unsigned __int64 v10; // rbx
  __int64 v11; // rcx
  unsigned __int64 v12; // r14
  __int16 v13; // ax
  _WORD *v14; // rax

  v3 = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_WORD *)(a1 + 2 * v5) );
  v7 = (const wchar_t *)(a1 + 2LL * (unsigned int)v5);
  v8 = 0;
  if ( (unsigned __int64)v7 > a1 )
  {
    while ( *v7 != 92 || ++v8 != 4 )
    {
      if ( (unsigned __int64)--v7 <= a1 )
        goto LABEL_9;
    }
    ++v7;
LABEL_9:
    if ( v8 == 4 && !wcsnicmp(L"DriverStore", v7, 0xBuLL) )
    {
      v10 = ((__int64)((__int64)v7 - a1) >> 1) + 11;
      if ( v10 <= 0x7FFFFFFE )
      {
        v11 = 351LL;
        v12 = a1 - (_QWORD)a3;
        do
        {
          if ( !(v10 + v11 - 351) )
            break;
          v13 = *(_WORD *)((char *)a3 + v12);
          if ( !v13 )
            break;
          *a3++ = v13;
          --v11;
        }
        while ( v11 );
        v14 = a3 - 1;
        if ( v11 )
          v14 = a3;
        *v14 = 0;
        return v11 != 0;
      }
      else
      {
        *a3 = 0;
      }
    }
  }
  return v3;
}

/*
 * XREFs of SepSddlGetAclForString @ 0x1C0108584
 * Callers:
 *     SepSddlDaclFromSDDLString @ 0x1C01084A4 (SepSddlDaclFromSDDLString.c)
 * Callees:
 *     memset @ 0x1C0027180 (memset.c)
 *     SepSddlAddAceToAcl @ 0x1C01083A4 (SepSddlAddAceToAcl.c)
 *     SepSddlGetSidForString @ 0x1C010891C (SepSddlGetSidForString.c)
 *     SepSddlLookupAccessMaskInTable @ 0x1C01089F4 (SepSddlLookupAccessMaskInTable.c)
 *     SepSddlParseWideStringUlong @ 0x1C0108A8C (SepSddlParseWideStringUlong.c)
 */

__int64 __fastcall SepSddlGetAclForString(wchar_t *Str1, const void **a2, wchar_t **a3)
{
  wchar_t *v5; // rsi
  unsigned int SidForString; // edi
  unsigned int v7; // ebx
  wchar_t *v8; // rax
  __int64 v10; // rax
  wchar_t *v11; // rcx
  wchar_t *v12; // rax
  int i; // r8d
  unsigned int v14; // r13d
  _QWORD *PoolWithTag; // rax
  unsigned int v16; // r15d
  _WORD *v17; // r14
  unsigned int v18; // r12d
  ACCESS_MASK AccessMask; // r15d
  wchar_t v20; // ax
  wchar_t v21; // cx
  const wchar_t *v22; // rbx
  wchar_t *j; // rbx
  wchar_t v24; // ax
  wchar_t *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _WORD *v29; // rax
  wchar_t *v30; // rbx
  const void **v31; // rbx
  _WORD *v32; // rcx
  wchar_t *v33; // [rsp+40h] [rbp-28h] BYREF
  _WORD *v34; // [rsp+48h] [rbp-20h]
  PSID Sid; // [rsp+50h] [rbp-18h]
  ACCESS_MASK v36; // [rsp+B0h] [rbp+48h] BYREF
  const void **v37; // [rsp+B8h] [rbp+50h]
  int v38; // [rsp+C0h] [rbp+58h] BYREF
  int v39; // [rsp+C8h] [rbp+60h]

  v37 = a2;
  *a2 = 0LL;
  v5 = Str1;
  Sid = 0LL;
  SidForString = 0;
  v7 = 0;
  v8 = wcschr(Str1, 0x3Au);
  *a3 = v8;
  if ( v8 == v5 )
    return 3221225485LL;
  if ( v8 )
  {
    v11 = v8 - 1;
  }
  else
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v5[v10] );
    v11 = &v5[v10];
  }
  *a3 = v11;
  v12 = v5;
  for ( i = 0; v12 < v11; ++v12 )
  {
    if ( *v12 == 59 )
    {
      ++v7;
    }
    else if ( *v12 != 32 )
    {
      i = 1;
    }
  }
  v14 = v7 / 5;
  if ( v7 != 5 * (v7 / 5) || !v7 && i )
    return (unsigned int)-1073741811;
  if ( !v14 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x6C416553u);
    *a2 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 524290LL;
      return SidForString;
    }
    return (unsigned int)-1073741670;
  }
  v16 = 48 * v14 + 8;
  if ( v16 > 0xFFFF )
    v16 = 0xFFFF;
  v17 = ExAllocatePoolWithTag(PagedPool, v16, 0x6C416553u);
  *v37 = v17;
  if ( !v17 )
    return (unsigned int)-1073741670;
  v38 = 8;
  memset(v17, 0, v16);
  *v17 = 2;
  v17[1] = v16;
  v18 = 0;
  *((_DWORD *)v17 + 1) = 0;
LABEL_25:
  AccessMask = 0;
  v36 = 0;
  while ( 1 )
  {
    v20 = *v5;
    if ( *v5 != 32 )
      break;
    ++v5;
  }
  v21 = *v5;
  if ( v20 == 40 )
    v21 = v5[1];
  v22 = v5 + 1;
  if ( v20 != 40 )
    v22 = v5;
  if ( v21 == 32 )
  {
    do
      ++v22;
    while ( *v22 == 32 );
  }
  if ( !_wcsnicmp(v22, L"A", 1uLL) )
  {
    for ( j = (wchar_t *)(v22 + 2); *j == 32; ++j )
      ;
    if ( *j == 59 )
    {
      do
        v24 = *++j;
      while ( *j == 32 );
      while ( 1 )
      {
        if ( v24 == 59 )
        {
          ++j;
          goto LABEL_49;
        }
        if ( v24 == 32 )
        {
          do
            ++j;
          while ( *j == 32 );
        }
        if ( (unsigned int)SepSddlLookupAccessMaskInTable(j) )
        {
          AccessMask |= v39;
          v25 = v33;
          v36 = AccessMask;
        }
        else
        {
          SepSddlParseWideStringUlong(j, &v33, &v36);
          v25 = v33;
          AccessMask = v36;
          if ( v33 == j )
          {
            SidForString = -1073741811;
LABEL_49:
            if ( SidForString )
              goto LABEL_75;
            v26 = 2LL;
            do
            {
              while ( *j == 32 )
                ++j;
              if ( *j != 59 )
                SidForString = -1073741811;
              ++j;
              --v26;
            }
            while ( v26 );
            if ( SidForString )
              goto LABEL_75;
            while ( *j == 32 )
              ++j;
            SidForString = SepSddlGetSidForString(j);
            if ( SidForString )
              goto LABEL_75;
            v29 = v34;
            if ( !v34 )
              goto LABEL_73;
            if ( *v34 == 32 )
            {
              do
                ++v29;
              while ( *v29 == 32 );
              v34 = v29;
            }
            if ( *v29 != 41 )
            {
LABEL_73:
              SidForString = -1073741705;
              goto LABEL_75;
            }
            v30 = v29 + 1;
            if ( Sid )
            {
              SidForString = SepSddlAddAceToAcl(v37, &v38, v27, v28, AccessMask, v14 - v18, Sid);
              if ( SidForString )
                goto LABEL_75;
            }
            v5 = v30 + 1;
            ++v18;
            if ( *v30 != 40 )
              v5 = v30;
            if ( v18 >= v14 )
              goto LABEL_75;
            goto LABEL_25;
          }
        }
        j = v25;
        v24 = *v25;
      }
    }
  }
  SidForString = -1073741811;
LABEL_75:
  v31 = v37;
  v32 = *v37;
  if ( SidForString )
  {
    ExFreePoolWithTag(v32, 0);
    *v31 = 0LL;
  }
  else
  {
    v32[1] = v38;
  }
  return SidForString;
}

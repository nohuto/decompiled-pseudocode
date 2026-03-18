/*
 * XREFs of DrvDbDeleteObjectSubKey @ 0x14093ECCC
 * Callers:
 *     DrvDbDeleteObjectRegKey @ 0x14093EB64 (DrvDbDeleteObjectRegKey.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x14013E378 (RtlStringCchCopyExW.c)
 *     wcschr @ 0x1401A2640 (wcschr.c)
 *     wcsrchr @ 0x1401A2830 (wcsrchr.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _PnpCtxRegOpenKey @ 0x1406295DC (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegCloseKey @ 0x1406F4868 (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegEnumValue @ 0x1406FB120 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1406FB170 (_PnpCtxRegQueryInfoKey.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x14071800C (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpDeletePropertyWorker @ 0x14071DEF4 (_PnpDeletePropertyWorker.c)
 *     _PnpCtxRegDeleteTree @ 0x140754FAC (_PnpCtxRegDeleteTree.c)
 *     _PnpCtxRegDeleteKey @ 0x1409335A8 (_PnpCtxRegDeleteKey.c)
 *     _PnpCtxRegDeleteValue @ 0x1409335E0 (_PnpCtxRegDeleteValue.c)
 */

__int64 __fastcall DrvDbDeleteObjectSubKey(__int64 *a1, char *a2, const WCHAR *a3, unsigned int a4)
{
  unsigned int v4; // r13d
  __int64 v6; // rcx
  PVOID PoolWithTag; // r15
  unsigned int v9; // edi
  wchar_t *v10; // r14
  int v11; // eax
  __int64 v12; // rcx
  int InfoKey; // ebx
  signed int i; // eax
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rdi
  int v18; // eax
  __int64 v19; // rbx
  size_t v20; // rbx
  wchar_t *v21; // rax
  char *j; // rax
  int v23; // eax
  int v24; // eax
  wchar_t *v25; // rax
  bool v26; // zf
  int v27; // eax
  unsigned int v28; // esi
  PVOID v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 dwFlags; // [rsp+28h] [rbp-28h]
  int v34; // [rsp+40h] [rbp-10h] BYREF
  char *v35; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v37; // [rsp+A8h] [rbp+58h] BYREF

  v4 = 0;
  v6 = *a1;
  v35 = 0LL;
  PoolWithTag = 0LL;
  v9 = 0;
  v10 = 0LL;
  if ( a4 <= 1 )
  {
    v11 = PnpCtxRegDeleteTree(v6, a2, a3);
    InfoKey = v11;
    goto LABEL_3;
  }
  v11 = PnpCtxRegOpenKey(v6, (__int64)a2, (__int64)a3, 0, 0x3001Fu, (__int64)&v35);
  InfoKey = v11;
  if ( v11 < 0 )
  {
LABEL_3:
    if ( v11 == -1073741444 )
      InfoKey = 0;
    goto LABEL_68;
  }
  for ( i = PnpGetGenericStorePropertyKeys(*a1, (int)v35, 0LL, 0, 0LL, 0, &v37);
        ;
        i = PnpGetGenericStorePropertyKeys(*a1, (int)v35, 0LL, 0, (__int64)PoolWithTag, v15, &v37) )
  {
    InfoKey = i;
    if ( i != -1073741789 )
      break;
    v15 = v37;
    if ( v37 <= v9 )
    {
      InfoKey = -1073741595;
      break;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    v9 = v15;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 20 * v15, 0x42444450u);
    if ( !PoolWithTag )
    {
      InfoKey = -1073741801;
      break;
    }
  }
  v12 = 0x80000000LL;
  if ( (int)(InfoKey + 0x80000000) >= 0 && InfoKey != -1073741275 )
    goto LABEL_66;
  if ( InfoKey != -1073741275 )
    v4 = v9;
  v16 = 0;
  v17 = 0LL;
  if ( InfoKey != -1073741275 )
    v16 = InfoKey;
  InfoKey = v16;
  if ( v4 )
  {
    do
    {
      v18 = PnpDeletePropertyWorker(*a1, (__int64)v35, 0LL, (__int64)PoolWithTag + 20 * v17, 0, dwFlags, 0);
      InfoKey = v18;
      if ( v18 == -1073741275 || v18 == -1073741790 )
      {
        InfoKey = 0;
      }
      else if ( v18 < 0 )
      {
        goto LABEL_66;
      }
      v17 = (unsigned int)(v17 + 1);
    }
    while ( (unsigned int)v17 < v4 );
  }
  if ( InfoKey < 0 )
    goto LABEL_66;
  if ( !wcschr(a3, 0x5Cu) )
  {
    v27 = PnpCtxRegDeleteKey(*a1, v35, 0LL);
    InfoKey = v27;
    if ( v27 == -1073741444 )
    {
      InfoKey = 0;
      goto LABEL_66;
    }
    if ( v27 != -1073741535 )
      goto LABEL_66;
    InfoKey = PnpCtxRegQueryInfoKey(v12, v35, 0LL, 0LL, (__int64)&v37, (__int64)&v34, 0LL);
    if ( InfoKey < 0 )
      goto LABEL_66;
    v28 = v34 + 1;
    if ( !v37 )
      goto LABEL_66;
    v29 = ExAllocatePoolWithTag(PagedPool, 2LL * v28, 0x42444450u);
    if ( v29 )
    {
      v37 = v28;
      InfoKey = PnpCtxRegEnumValue(v12, v35, 0, v29, (__int64)&v37, 0LL, 0LL, 0);
      if ( InfoKey < 0 )
      {
LABEL_61:
        if ( InfoKey == -2147483622 )
          InfoKey = 0;
      }
      else
      {
        while ( 1 )
        {
          InfoKey = PnpCtxRegDeleteValue(v30, v35, (const WCHAR *)v29);
          if ( ((InfoKey + 0x80000000) & 0x80000000) == 0 && InfoKey != -1073741772 )
            break;
          v37 = v28;
          InfoKey = PnpCtxRegEnumValue(v31, v35, 0, v29, (__int64)&v37, 0LL, 0LL, 0);
          if ( InfoKey < 0 )
            goto LABEL_61;
        }
      }
      ExFreePoolWithTag(v29, 0);
      goto LABEL_64;
    }
LABEL_34:
    InfoKey = -1073741801;
    goto LABEL_66;
  }
  v19 = -1LL;
  do
    ++v19;
  while ( a3[v19] );
  v20 = v19 + 1;
  v21 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * v20, 0x42444450u);
  v10 = v21;
  if ( !v21 )
    goto LABEL_34;
  RtlStringCchCopyExW(v21, v20, a3, 0LL, 0LL, 0x900u);
  for ( j = v35; ; j = 0LL )
  {
    if ( !j )
    {
      v23 = PnpCtxRegOpenKey(*a1, (__int64)a2, (__int64)v10, 0, 0x3001Fu, (__int64)&v35);
      InfoKey = v23;
      if ( v23 < 0 )
      {
        v26 = v23 == -1073741444;
        goto LABEL_48;
      }
      InfoKey = PnpCtxRegQueryInfoKey(v12, v35, (__int64)&v34, 0LL, (__int64)&v37, 0LL, 0LL);
      if ( InfoKey < 0 || v34 || v37 )
        goto LABEL_64;
      j = v35;
    }
    v24 = PnpCtxRegDeleteKey(*a1, j, 0LL);
    InfoKey = v24;
    if ( v24 == -1073741444 )
    {
      InfoKey = 0;
      goto LABEL_45;
    }
    if ( v24 < 0 )
      break;
LABEL_45:
    v25 = wcsrchr(v10, 0x5Cu);
    if ( !v25 )
      goto LABEL_64;
    *v25 = 0;
    PnpCtxRegCloseKey(v12, v35);
    v35 = 0LL;
  }
  v26 = v24 == -1073741535;
LABEL_48:
  if ( v26 )
    InfoKey = 0;
LABEL_64:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
LABEL_66:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_68:
  if ( v35 )
    PnpCtxRegCloseKey(v12, v35);
  return (unsigned int)InfoKey;
}

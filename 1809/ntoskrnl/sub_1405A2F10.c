/*
 * XREFs of sub_1405A2F10 @ 0x1405A2F10
 * Callers:
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x1405A1888 (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExUpdateLicenseDataInternal @ 0x1405A1AD0 (ExUpdateLicenseDataInternal.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall sub_1405A2F10(__int64 a1, char a2, void *a3, unsigned int a4, unsigned int *a5)
{
  unsigned int v5; // ebx
  unsigned __int64 v10; // r10
  unsigned __int16 *v11; // rdx
  char *v12; // rcx
  __int64 v13; // r8
  unsigned __int16 v14; // ax
  char *v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rax
  unsigned __int16 *v21; // rcx

  v5 = 0;
  if ( a3 )
    memset(a3, 0, 16LL * a4);
  v10 = (unsigned int)(*(_DWORD *)(a1 + 4) + 20);
  v11 = 0LL;
  if ( a1 + 20 != v10 + a1 )
    v11 = (unsigned __int16 *)(a1 + 20);
  while ( v11 )
  {
    v12 = (char *)v11 - a1;
    if ( a2 == 1 )
    {
      if ( (unsigned __int64)(v12 + 20) > v10 )
        return 3221225534LL;
      v13 = *v11;
      if ( (unsigned __int64)&v12[v13] > v10 )
        return 3221225534LL;
      v14 = v11[1];
      if ( v14 > (unsigned __int16)v13 )
        return 3221225534LL;
      v15 = (char *)v11 + v13;
      if ( (unsigned __int16 *)((char *)v11 + v13) < v11 )
        return 3221225534LL;
      v16 = v14;
      v17 = (unsigned __int64)v11 + v14 + 16;
      if ( v17 < (unsigned __int64)(v11 + 8) )
        return 3221225534LL;
      if ( v17 > (unsigned __int64)v15 )
        return 3221225534LL;
      v18 = (unsigned __int64)v11 + v16 + v11[3] + 16;
      if ( v18 < (unsigned __int64)(v11 + 8) )
        return 3221225534LL;
      if ( v18 > (unsigned __int64)v15 )
        return 3221225534LL;
      v19 = *((_DWORD *)v11 + 2);
      if ( v19 )
      {
        if ( (v19 & 3) == 0 )
          return 3221225534LL;
      }
    }
    if ( a3 && v5 < a4 )
    {
      v20 = 2LL * v5;
      *((_BYTE *)a3 + 8 * v20) = 2;
      *((_QWORD *)a3 + v20 + 1) = v11;
    }
    ++v5;
    v21 = (unsigned __int16 *)((char *)v11 + *v11);
    v11 = 0LL;
    if ( v21 != (unsigned __int16 *)(v10 + a1) )
      v11 = v21;
  }
  if ( a5 )
    *a5 = v5;
  return a4 < v5 ? 0xC0000023 : 0;
}

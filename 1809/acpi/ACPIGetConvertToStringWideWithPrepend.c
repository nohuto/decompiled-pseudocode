/*
 * XREFs of ACPIGetConvertToStringWideWithPrepend @ 0x1C0053F18
 * Callers:
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C0027490 (ACPIGetConvertToCompatibleIDWide.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C000C604 (RtlStringCchPrintfA.c)
 *     ACPIAnsiStringToWideHelper @ 0x1C000C680 (ACPIAnsiStringToWideHelper.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall ACPIGetConvertToStringWideWithPrepend(__int64 a1, int a2, __int64 a3, int a4, char **a5, _DWORD *a6)
{
  unsigned int v9; // r9d
  __int64 v10; // rax
  _BYTE *v11; // rcx
  _BYTE *v12; // rdx
  _BYTE *v13; // rax
  char v14; // bp
  int v15; // r14d
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rbx
  char *PoolWithTag; // rax
  char *v20; // rsi
  __int64 v21; // rcx

  if ( a2 < 0 )
    return (unsigned int)a2;
  if ( *(_WORD *)(a3 + 2) != 2 )
    return 3222536207LL;
  v9 = *(_DWORD *)(a3 + 24);
  v10 = 0LL;
  v11 = *(_BYTE **)(a3 + 32);
  if ( v9 )
  {
    v12 = *(_BYTE **)(a3 + 32);
    while ( *v12 )
    {
      if ( *v12 == 92 )
      {
        v13 = &v11[v10];
        goto LABEL_11;
      }
      v10 = (unsigned int)(v10 + 1);
      ++v12;
      if ( (unsigned int)v10 >= v9 )
        break;
    }
  }
  v13 = 0LL;
LABEL_11:
  if ( v13 || *v11 == 42 )
  {
    v14 = 0;
    v15 = 0;
  }
  else
  {
    v14 = 1;
    v15 = 5;
  }
  v16 = -1LL;
  v17 = -1LL;
  do
    ++v17;
  while ( v11[v17] );
  v18 = (unsigned int)(v17 + 1);
  if ( v14 )
  {
    do
      ++v16;
    while ( v11[v16] );
    v18 = (unsigned int)(v15 + v16 + v18 + 1);
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(
                          (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                          2 * v18,
                          0x53706341u);
  v20 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 2 * v18);
  v21 = 0LL;
  if ( v14 )
  {
    RtlStringCchPrintfA(v20, (unsigned int)v18, "ACPI\\%s", *(const char **)(a3 + 32));
    v21 = (unsigned int)(v15 + *(_DWORD *)(a3 + 24));
  }
  RtlStringCchPrintfA(&v20[v21], (unsigned int)(v18 - v21), "%s", *(const char **)(a3 + 32));
  ACPIAnsiStringToWideHelper(v20, 2 * v18);
  *a5 = v20;
  if ( a6 )
    *a6 = 2 * v18;
  return 0LL;
}

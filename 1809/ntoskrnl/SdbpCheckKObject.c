/*
 * XREFs of SdbpCheckKObject @ 0x140724020
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x14067DB20 (SdbGetDatabaseMatchEx.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     SdbpCreateSearchDBContext @ 0x14067D760 (SdbpCreateSearchDBContext.c)
 *     AslFileMappingCreate @ 0x14067F63C (AslFileMappingCreate.c)
 *     AslFileMappingDelete @ 0x14067FB24 (AslFileMappingDelete.c)
 *     SdbpReleaseSearchDBContext @ 0x14067FB84 (SdbpReleaseSearchDBContext.c)
 *     SdbpCheckForMatch @ 0x140724154 (SdbpCheckForMatch.c)
 *     SdbpMatchCpu @ 0x1407249CC (SdbpMatchCpu.c)
 *     SdbpMatchBios @ 0x140724A20 (SdbpMatchBios.c)
 *     SdbpMatchOem @ 0x140724A74 (SdbpMatchOem.c)
 *     SdbpMatchAcpi @ 0x140724AC8 (SdbpMatchAcpi.c)
 */

__int64 SdbpCheckKObject(__int64 a1, unsigned int a2, const WCHAR *a3, ...)
{
  __int64 v6; // r15
  const wchar_t **v7; // rsi
  unsigned int SearchDBContext; // ebx
  _QWORD *v10; // rdi
  int v11; // eax
  _QWORD v12[12]; // [rsp+38h] [rbp-41h] BYREF
  char v13; // [rsp+C8h] [rbp+4Fh] BYREF
  const wchar_t **v14; // [rsp+E0h] [rbp+67h] BYREF
  va_list va; // [rsp+E0h] [rbp+67h]
  wchar_t *v16; // [rsp+E8h] [rbp+6Fh]
  wchar_t *v17; // [rsp+F0h] [rbp+77h]
  _QWORD *v18; // [rsp+F8h] [rbp+7Fh]
  va_list va1; // [rsp+100h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v14 = va_arg(va1, const wchar_t **);
  v16 = va_arg(va1, wchar_t *);
  v17 = va_arg(va1, wchar_t *);
  v18 = va_arg(va1, _QWORD *);
  memset(v12, 0, sizeof(v12));
  v6 = *(_QWORD *)(a1 + 8);
  v7 = 0LL;
  SearchDBContext = 0;
  v14 = 0LL;
  if ( !a3
    || (v11 = AslFileMappingCreate((wchar_t ***)va, a3, (void *)0xFFFFFFFFFFFFFFFFLL, v16, v17), v7 = v14, v11 >= 0) )
  {
    memset(v12, 0, sizeof(v12));
    LODWORD(v12[0]) = 26;
    SearchDBContext = SdbpCreateSearchDBContext(v12, v7);
    if ( SearchDBContext )
    {
      SearchDBContext = SdbpCheckForMatch(a1, v6, a2, (unsigned int)v12, (__int64)&v13, (__int64)va);
      if ( SearchDBContext )
      {
        v10 = v18;
        if ( v18 )
        {
          SearchDBContext = SdbpMatchAcpi(v6, a2, *v18);
          if ( SearchDBContext )
          {
            SearchDBContext = SdbpMatchOem(v6, a2, v10[1]);
            if ( SearchDBContext )
            {
              SearchDBContext = SdbpMatchBios(v6, a2, v10[2]);
              if ( SearchDBContext )
                SearchDBContext = SdbpMatchCpu(v6, a2, v10[3]);
            }
          }
        }
      }
    }
  }
  SdbpReleaseSearchDBContext(v12);
  AslFileMappingDelete((PVOID *)v7);
  return SearchDBContext;
}

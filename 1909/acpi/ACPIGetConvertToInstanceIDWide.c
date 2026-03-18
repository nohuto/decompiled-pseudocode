/*
 * XREFs of ACPIGetConvertToInstanceIDWide @ 0x1C0026474
 * Callers:
 *     ACPIGetWorkerForString @ 0x1C00052C0 (ACPIGetWorkerForString.c)
 *     ACPIGetConvertToInstanceID @ 0x1C0025E80 (ACPIGetConvertToInstanceID.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0005788 (RtlStringCchPrintfA.c)
 *     ACPIAnsiStringToWideHelper @ 0x1C0005804 (ACPIAnsiStringToWideHelper.c)
 *     RtlStringCchPrintfW @ 0x1C00265E8 (RtlStringCchPrintfW.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall ACPIGetConvertToInstanceIDWide(__int64 a1, int a2, __int64 a3, int a4, char **a5, _DWORD *a6)
{
  __int64 v8; // rbx
  char *v9; // rdi
  __int64 v11; // rbx
  char *PoolWithTag; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rbx
  char *v15; // rax

  if ( (a4 & 0x4000000) == 0 && (*(_QWORD *)(a1 + 8) & 0x1000000000000LL) != 0 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( *(_BYTE *)(*(_QWORD *)(a1 + 568) + v11) );
    v8 = (unsigned int)(v11 + 1);
    PoolWithTag = (char *)ExAllocatePoolWithTag(
                            (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                            2 * v8,
                            0x53706341u);
    v9 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, 2 * v8);
    RtlStringCchPrintfA(v9, (unsigned int)v8, "%s", *(const char **)(a1 + 568));
    v13 = 2 * v8;
LABEL_15:
    ACPIAnsiStringToWideHelper(v9, v13);
    goto LABEL_7;
  }
  if ( a2 < 0 )
    return (unsigned int)a2;
  if ( *(_WORD *)(a3 + 2) != 1 )
  {
    if ( *(_WORD *)(a3 + 2) != 2 )
      return 3222536207LL;
    v14 = -1LL;
    do
      ++v14;
    while ( *(_BYTE *)(*(_QWORD *)(a3 + 32) + v14) );
    v8 = (unsigned int)(v14 + 1);
    v15 = (char *)ExAllocatePoolWithTag(
                    (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                    2 * v8,
                    0x53706341u);
    v9 = v15;
    if ( !v15 )
      return 3221225626LL;
    memset(v15, 0, 2 * v8);
    RtlStringCchPrintfA(v9, (unsigned int)v8, "%s", *(const char **)(a3 + 32));
    v13 = 2 * v8;
    goto LABEL_15;
  }
  LODWORD(v8) = 9;
  v9 = (char *)ExAllocatePoolWithTag(
                 (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                 0x12uLL,
                 0x53706341u);
  if ( !v9 )
    return 3221225626LL;
  *(_QWORD *)v9 = 0LL;
  *((_QWORD *)v9 + 1) = 0LL;
  *((_WORD *)v9 + 8) = 0;
  RtlStringCchPrintfW((NTSTRSAFE_PWSTR)v9, 9uLL, L"%lx", *(unsigned int *)(a3 + 16));
LABEL_7:
  *a5 = v9;
  if ( a6 )
    *a6 = 2 * v8;
  return 0LL;
}

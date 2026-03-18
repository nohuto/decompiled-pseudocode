/*
 * XREFs of ?DpiKsrEnumeratePersistedMemoryCallback@@YAJPEBU_GUID@@_KPEAX@Z @ 0x1C02A8FC0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

__int64 __fastcall DpiKsrEnumeratePersistedMemoryCallback(const struct _GUID *a1, __int64 a2, unsigned int *a3)
{
  unsigned int v3; // eax
  unsigned int v5; // ecx
  size_t v7; // rbx
  char *PoolWithTag; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  char *v12; // rsi
  __int64 v13; // rax

  v3 = *a3;
  v5 = a3[1];
  if ( *a3 >= v5 )
  {
    v7 = 8 * v5;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 16 * v5 + 128, 0x74727044u);
    v12 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v13 = WdLogNewEntry5_WdError(v10, v9, v11);
      *(_QWORD *)(v13 + 24) = -1073741801LL;
      WdLogEvent5_WdError(v13);
      return 3221225495LL;
    }
    memmove(PoolWithTag, a3, v7);
    memset(&v12[v7], 0, 0x80uLL);
    v3 = *a3;
  }
  *(_QWORD *)(*((_QWORD *)a3 + 33) + 8LL * v3) = a2;
  ++*a3;
  return 0LL;
}

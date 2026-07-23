/*
 * XREFs of MiGetCcAccessLog @ 0x140663C28
 * Callers:
 *     MmPrefetchForCacheManager @ 0x1406637F8 (MmPrefetchForCacheManager.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiQueuePageAccessLog @ 0x140088970 (MiQueuePageAccessLog.c)
 *     MiInitializePageAccessLogging @ 0x140114994 (MiInitializePageAccessLogging.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall MiGetCcAccessLog(__int64 a1, __int64 a2)
{
  __int64 v4; // r10
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  _QWORD *v9; // rcx
  PVOID result; // rax
  unsigned __int64 v11; // rbx
  char *AnyMultiplexedVm; // rax
  __int64 v13; // r10

  if ( !qword_14043B980 )
    goto LABEL_12;
  v4 = _InterlockedExchange64(&qword_14043B980, 0LL);
  if ( !v4 )
    goto LABEL_12;
  v5 = *(_QWORD *)(v4 + 40);
  if ( *(_QWORD *)(v4 + 32) + 8 * a2 > v5 || (__int64)((*(_QWORD *)(v4 + 48) - v5) & 0xFFFFFFFFFFFFFFF8uLL) >= 4096 )
  {
    MiQueuePageAccessLog((_SLIST_ENTRY *)v4);
    v4 = 0LL;
  }
  if ( !v4 )
  {
LABEL_12:
    v11 = (8 * a2 + 4183) & 0xFFFFFFFFFFFFF000uLL;
    result = ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x63416D4Du);
    if ( !result )
      return result;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
    MiInitializePageAccessLogging((__int64)AnyMultiplexedVm, v13, v11);
    *(_DWORD *)(v4 + 8) = 1;
  }
  v6 = *(_QWORD *)(v4 + 40);
  v7 = *(_QWORD *)(v4 + 48);
  v8 = *(_QWORD *)(a1 + 24);
  v9 = (_QWORD *)(v6 + 8);
  if ( v6 + 8 >= v7 )
    goto LABEL_11;
  do
  {
    if ( *v9 == v8 )
      break;
    ++v9;
  }
  while ( (unsigned __int64)v9 < v7 );
  if ( (unsigned __int64)v9 >= v7 )
  {
LABEL_11:
    v9 = *(_QWORD **)(v4 + 40);
    *(_QWORD *)(v4 + 40) = v6 - 8;
    *v9 = v8;
  }
  *(_QWORD *)(v4 + 24) = *(_QWORD *)(v4 + 32);
  result = (PVOID)v4;
  *(_DWORD *)(v4 + 12) = (__int64)(v7 - (_QWORD)v9) >> 3;
  return result;
}

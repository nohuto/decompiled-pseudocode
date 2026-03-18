/*
 * XREFs of DxgkAllocateContiguousMemoryCB @ 0x1C003E6E0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DpiAddMemoryTracker @ 0x1C00505C4 (DpiAddMemoryTracker.c)
 */

__int64 __fastcall DxgkAllocateContiguousMemoryCB(__int64 a1, PHYSICAL_ADDRESS *a2, __int64 a3)
{
  __int64 CacheType; // rbx
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID ContiguousMemorySpecifyCache; // rbp
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  SIZE_T QuadPart; // rax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax

  CacheType = (int)a2[4].LowPart;
  if ( (int)CacheType > 2 )
  {
    v6 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v6 + 24) = CacheType;
    WdLogEvent5_WdWarning(v6);
    return 2147942487LL;
  }
  ContiguousMemorySpecifyCache = MmAllocateContiguousMemorySpecifyCache(
                                   a2->QuadPart,
                                   a2[1],
                                   a2[2],
                                   a2[3],
                                   (MEMORY_CACHING_TYPE)CacheType);
  if ( !ContiguousMemorySpecifyCache )
  {
    v13 = WdLogNewEntry5_WdLowResource(v9, v8, v11, v12);
    *(_QWORD *)(v13 + 24) = 860LL;
    WdLogEvent5_WdLowResource(v13);
    LODWORD(v14) = -1073741801;
    return (unsigned int)v14;
  }
  v17 = operator new[](0x28uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v17 )
  {
    QuadPart = a2->QuadPart;
    *v17 = 0LL;
    v17[1] = 0LL;
    *((_DWORD *)v17 + 4) = 0;
    v17[3] = ContiguousMemorySpecifyCache;
    v17[4] = QuadPart;
  }
  else
  {
    v17 = 0LL;
  }
  if ( !v17 )
  {
    v21 = WdLogNewEntry5_WdLowResource(v16, v15, v18, v19);
    *(_QWORD *)(v21 + 24) = 868LL;
    WdLogEvent5_WdLowResource(v21);
    LODWORD(v14) = -1073741801;
    goto LABEL_12;
  }
  v22 = DpiAddMemoryTracker(a1, v17);
  v14 = v22;
  if ( v22 < 0 )
  {
    v26 = WdLogNewEntry5_WdWarning(v24, v23, v25);
    *(_QWORD *)(v26 + 24) = v14;
    WdLogEvent5_WdWarning(v26);
LABEL_12:
    MmFreeContiguousMemory(ContiguousMemorySpecifyCache);
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
    return (unsigned int)v14;
  }
  a2[5].QuadPart = (LONGLONG)v17;
  result = 0LL;
  a2[6].QuadPart = (LONGLONG)ContiguousMemorySpecifyCache;
  return result;
}

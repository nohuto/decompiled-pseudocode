/*
 * XREFs of MapChildMmioSpace @ 0x1C022B2F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

__int64 __fastcall MapChildMmioSpace(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, _QWORD *a5)
{
  PVOID PoolWithTag; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // rbx
  __int64 v15; // rax
  char v17; // al
  __int64 v18; // rcx
  _QWORD *v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdi
  __int64 v25; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x4B677844u);
  v14 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v15 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
    *(_QWORD *)(v15 + 24) = 9967LL;
    WdLogEvent5_WdLowResource(v15);
    return 3221225495LL;
  }
  memset(PoolWithTag, 0, 0x30uLL);
  v17 = *(_BYTE *)(a1 + 299);
  if ( (v17 & 8) != 0 )
  {
    v18 = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 432LL);
  }
  else
  {
    if ( (v17 & 4) == 0 )
    {
      v19 = 0LL;
      goto LABEL_9;
    }
    v18 = *(_QWORD *)(a1 + 432);
  }
  v19 = (_QWORD *)(v18 + 88);
LABEL_9:
  v20 = ((__int64 (__fastcall *)(_QWORD, __int64, unsigned __int64, __int64, void *))qword_1C00A3E90)(
          *v19,
          a2 + 48,
          a3 >> 12,
          a4,
          v14);
  v24 = v20;
  if ( v20 >= 0 )
  {
    *a5 = v14;
    _InterlockedIncrement(&g_VgpuNumHpaToGpaMappings);
    _InterlockedExchangeAdd64(&g_VgpuSizeHpaToGpaMappings, a3);
  }
  else
  {
    v25 = WdLogNewEntry5_WdError(v22, v21, v23);
    *(_QWORD *)(v25 + 24) = v24;
    WdLogEvent5_WdError(v25);
    ExFreePoolWithTag(v14, 0x4B677844u);
  }
  return (unsigned int)v24;
}

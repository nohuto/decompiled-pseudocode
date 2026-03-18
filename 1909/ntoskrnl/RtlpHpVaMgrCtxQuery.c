/*
 * XREFs of RtlpHpVaMgrCtxQuery @ 0x1400201E0
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x140022010 (RtlpHpSegMgrCommit.c)
 *     RtlpHpQueryVA @ 0x14010FFC8 (RtlpHpQueryVA.c)
 * Callees:
 *     RtlSparseArrayElementAllocated @ 0x14002029C (RtlSparseArrayElementAllocated.c)
 *     RtlpLogHeapFailure @ 0x140319BCC (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxQuery(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v6; // r9
  __int64 v8; // rax
  __int64 v9; // rax

  v3 = a2;
  v6 = RtlSparseArrayElementAllocated(a1 + 16, (unsigned __int64)(a2 - *(_QWORD *)(a1 + 8)) >> 20);
  if ( v6 )
  {
    *(_DWORD *)(a3 + 28) = 0;
    if ( (*(_BYTE *)v6 & 4) != 0 )
      v8 = *(_QWORD *)(v6 + 24);
    else
      v8 = *(unsigned __int16 *)(v6 + 24);
    *(_QWORD *)a3 = v8 << 20;
    v9 = *(unsigned __int8 *)(v6 + 1) + 45LL;
    *(_DWORD *)(a3 + 24) = 16;
    *(_DWORD *)(a3 + 8) = (*(unsigned __int8 *)(a1 + 48 * v9 + 46) >> 1) & 3;
    *(_DWORD *)(a3 + 12) = *(unsigned __int8 *)(a1 + 48 * v9 + 45);
    *(_QWORD *)(a3 + 16) = v6 + 8;
    return 0LL;
  }
  else
  {
    RtlpLogHeapFailure(22, v3, 0, 0, 0LL, 0LL);
    return 3221225473LL;
  }
}

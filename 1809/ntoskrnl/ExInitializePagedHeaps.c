/*
 * XREFs of ExInitializePagedHeaps @ 0x1401929A0
 * Callers:
 *     MiInitSystem @ 0x1409BD5A8 (MiInitSystem.c)
 * Callees:
 *     ExCreateHeap @ 0x140170328 (ExCreateHeap.c)
 *     RtlpDynamicLookasideInitialize @ 0x1401B7CD8 (RtlpDynamicLookasideInitialize.c)
 */

__int64 ExInitializePagedHeaps()
{
  unsigned int v0; // r14d
  __int64 v1; // r15
  __int64 result; // rax
  _RTL_RUN_ONCE v3; // rdi
  _RTL_RUN_ONCE v4; // rax
  __int64 Value; // rax
  __int128 v6; // [rsp+20h] [rbp-30h]
  __int128 v7; // [rsp+30h] [rbp-20h]
  __int128 v8; // [rsp+40h] [rbp-10h] BYREF
  _RTL_RUN_ONCE v9; // [rsp+70h] [rbp+20h] BYREF

  if ( (unsigned int)ExpHeapBackedPoolEnabledState < 2 )
    return 0LL;
  v0 = 0;
  if ( !dword_1404444C8 )
  {
LABEL_6:
    v8 = 2uLL;
    result = ExCreateHeap(&v8, 0LL, (__int64 *)&v9);
    if ( (int)result < 0 )
      return result;
    Value = v9.Value;
    *(_DWORD *)(v9.Value + 816) |= 2u;
    *(_BYTE *)(Value + 269) |= 8u;
    *(_BYTE *)(Value + 461) |= 8u;
    qword_1404C7510 = Value;
    return 0LL;
  }
  while ( 1 )
  {
    v1 = 1048LL * v0;
    v6 = 2uLL;
    BYTE2(v6) = v0;
    v8 = v6;
    result = ExCreateHeap(&v8, 0LL, (__int64 *)&v9);
    if ( (int)result < 0 )
      return result;
    v3.Ptr = v9.Ptr;
    ExPoolState[v1 + 1570] = v9;
    RtlpDynamicLookasideInitialize(&ExPoolState[v1 + 1576]);
    *(_QWORD *)(v3.Value + 40) = &ExPoolState[v1 + 1576];
    v7 = 0xAuLL;
    BYTE2(v7) = v0;
    v8 = v7;
    result = ExCreateHeap(&v8, 0LL, (__int64 *)&v9);
    if ( (int)result < 0 )
      return result;
    v4.Ptr = v9.Ptr;
    ++v0;
    ExPoolState[v1 + 1571] = v9;
    *(_DWORD *)(v4.Value + 816) |= 2u;
    *(_BYTE *)(v4.Value + 269) |= 8u;
    *(_BYTE *)(v4.Value + 461) |= 8u;
    if ( v0 >= dword_1404444C8 )
      goto LABEL_6;
  }
}

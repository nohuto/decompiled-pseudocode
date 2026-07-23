/*
 * XREFs of IoInitializeProcessor @ 0x14072A5D0
 * Callers:
 *     KiStartDynamicProcessor @ 0x140844028 (KiStartDynamicProcessor.c)
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExInitializeSystemLookasideList @ 0x140571370 (ExInitializeSystemLookasideList.c)
 *     IopQueryProcessorInitValues @ 0x140763F84 (IopQueryProcessorInitValues.c)
 */

__int64 __fastcall IoInitializeProcessor(__int64 a1, _BYTE *a2)
{
  _BYTE *v4; // rsi
  char *PoolWithTag; // rbx
  void *v6; // rbp
  int v7; // eax
  void *v8; // rbp
  void *v9; // rbp
  void *v10; // rbp
  _BYTE v12[32]; // [rsp+30h] [rbp-58h] BYREF

  if ( !a2 )
    IopQueryProcessorInitValues(v12);
  v4 = v12;
  if ( a2 )
    v4 = a2;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x280uLL, 0x6F49u);
  v6 = PoolWithTag;
  if ( IopIrpCreditsEnabled > 0 )
    v7 = *((_DWORD *)v4 + 7);
  else
    v7 = 0x7FFFFFFF;
  *(_DWORD *)(a1 + 11676) = v7;
  *(_QWORD *)(a1 + 2168) = &IopCompletionLookasideList;
  if ( PoolWithTag )
  {
    ExInitializeSystemLookasideList(
      (__int64)PoolWithTag,
      512,
      56,
      1349542729,
      *((_WORD *)v4 + 3),
      (__int64)&ExSystemLookasideListHead);
    PoolWithTag += 128;
  }
  else
  {
    v6 = &IopCompletionLookasideList;
  }
  *(_QWORD *)(a1 + 2160) = v6;
  *(_QWORD *)(a1 + 2088) = &IopLargeIrpLookasideList;
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    ExInitializeSystemLookasideList(
      (__int64)PoolWithTag,
      512,
      *((_DWORD *)v4 + 5),
      1282437705,
      *((_WORD *)v4 + 2),
      (__int64)&ExSystemLookasideListHead);
    PoolWithTag += 128;
  }
  else
  {
    v8 = &IopLargeIrpLookasideList;
  }
  *(_QWORD *)(a1 + 2080) = v8;
  *(_QWORD *)(a1 + 2072) = &IopMediumIrpLookasideList;
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    ExInitializeSystemLookasideList(
      (__int64)PoolWithTag,
      512,
      *((_DWORD *)v4 + 4),
      1299214921,
      *((_WORD *)v4 + 1),
      (__int64)&ExSystemLookasideListHead);
    PoolWithTag += 128;
  }
  else
  {
    v9 = &IopMediumIrpLookasideList;
  }
  *(_QWORD *)(a1 + 2064) = v9;
  *(_QWORD *)(a1 + 2056) = &IopSmallIrpLookasideList;
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    ExInitializeSystemLookasideList(
      (__int64)PoolWithTag,
      512,
      *((_DWORD *)v4 + 3),
      1399878217,
      *(_WORD *)v4,
      (__int64)&ExSystemLookasideListHead);
    PoolWithTag += 128;
  }
  else
  {
    v10 = &IopSmallIrpLookasideList;
  }
  *(_QWORD *)(a1 + 2048) = v10;
  *(_QWORD *)(a1 + 2104) = &IopMdlLookasideList;
  if ( PoolWithTag )
    ExInitializeSystemLookasideList(
      (__int64)PoolWithTag,
      512,
      *((_DWORD *)v4 + 6),
      1349280845,
      *((_WORD *)v4 + 4),
      (__int64)&ExSystemLookasideListHead);
  else
    PoolWithTag = (char *)&IopMdlLookasideList;
  *(_QWORD *)(a1 + 2096) = PoolWithTag;
  if ( (IopIrpStackProfilerFlags & 3) != 0 )
  {
    memset((void *)(a1 + 25792), 0, 0x50uLL);
    *(_DWORD *)(a1 + 25872) = 0;
    memset((void *)(a1 + 25876), 0, 0x50uLL);
    *(_DWORD *)(a1 + 25956) = 0;
  }
  return 0LL;
}

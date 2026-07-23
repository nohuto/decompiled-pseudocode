/*
 * XREFs of MmAllocateMappingAddress @ 0x1406FA580
 * Callers:
 *     SmFpPreAllocate @ 0x14018E748 (SmFpPreAllocate.c)
 *     HvlpInitializeHvCrashdump @ 0x14027804C (HvlpInitializeHvCrashdump.c)
 *     PnprInitializeMappingReserve @ 0x140836230 (PnprInitializeMappingReserve.c)
 *     EtwpSavePersistedLogger @ 0x1408CB79C (EtwpSavePersistedLogger.c)
 *     PspInitPhase0 @ 0x1409B20C8 (PspInitPhase0.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiInsertMappingNode @ 0x14015EE68 (MiInsertMappingNode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiInsertPteTracker @ 0x1402CDCB0 (MiInsertPteTracker.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

PVOID __stdcall MmAllocateMappingAddress(SIZE_T NumberOfBytes, ULONG PoolTag)
{
  __int64 v2; // rbp
  SIZE_T v3; // rbx
  _QWORD *PoolWithTag; // rsi
  ULONG_PTR v5; // rax
  unsigned __int64 v6; // r11
  unsigned int v7; // r14d
  __int64 v8; // rdi
  __int64 v9; // rdx
  int v10; // r8d
  __int64 *v11; // r11
  bool v13; // zf
  _BYTE v14[16]; // [rsp+30h] [rbp-68h] BYREF
  SIZE_T v15; // [rsp+40h] [rbp-58h]
  __int64 v16; // [rsp+48h] [rbp-50h]
  __int64 v17; // [rsp+50h] [rbp-48h]
  int v18; // [rsp+5Ch] [rbp-3Ch]
  __int64 v19; // [rsp+60h] [rbp-38h]
  ULONG_PTR BugCheckParameter4; // [rsp+98h] [rbp+0h]

  v2 = PoolTag;
  v3 = (NumberOfBytes + 4095) >> 12;
  if ( !v3 )
    KeBugCheckEx(0xDAu, 0x100uLL, 0LL, PoolTag, BugCheckParameter4);
  if ( !PoolTag )
    return 0LL;
  if ( v3 >= 0x100000000LL )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x6D72694Du);
  if ( !PoolWithTag )
    return 0LL;
  v5 = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)(unsigned int)v3);
  v6 = v5;
  if ( !v5 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return 0LL;
  }
  v7 = 0;
  PoolWithTag[4] = v3;
  v8 = (__int64)(v5 << 25) >> 16;
  PoolWithTag[3] = v8;
  *((_DWORD *)PoolWithTag + 10) = v2;
  do
  {
    if ( !MiPteInShadowRange(v6) )
      goto LABEL_8;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v10 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_8;
      v13 = (v9 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_8;
      v13 = (v9 & 1) == 0;
    }
    if ( !v13 )
      v9 |= 0x8000000000000000uLL;
LABEL_8:
    *v11 = v9;
    if ( v10 )
      MiWritePteShadow((__int64)v11, v9);
    ++v7;
    v6 = (unsigned __int64)(v11 + 1);
  }
  while ( v7 < v3 );
  if ( (dword_14054117C & 1) != 0 )
  {
    v18 = 0;
    v19 = 0LL;
    v16 = v8;
    v17 = v2;
    v15 = v3 << 12;
    MiInsertPteTracker((__int64)v14, 2, 0, 1);
  }
  MiInsertMappingNode(PoolWithTag);
  return (PVOID)v8;
}

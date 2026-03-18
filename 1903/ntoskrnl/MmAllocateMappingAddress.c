/*
 * XREFs of MmAllocateMappingAddress @ 0x1407343E0
 * Callers:
 *     SmFpPreAllocate @ 0x140198C14 (SmFpPreAllocate.c)
 *     HvlpInitializeHvCrashdump @ 0x14028C12C (HvlpInitializeHvCrashdump.c)
 *     PnprInitializeMappingReserve @ 0x14086F980 (PnprInitializeMappingReserve.c)
 *     EtwpSavePersistedLogger @ 0x140907A28 (EtwpSavePersistedLogger.c)
 *     PspInitPhase0 @ 0x140A0457C (PspInitPhase0.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiReservePtes @ 0x140030210 (MiReservePtes.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiInsertMappingNode @ 0x140175100 (MiInsertMappingNode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     MiInsertPteTracker @ 0x1402E7CDC (MiInsertPteTracker.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
  _QWORD *v11; // r11
  bool v13; // zf
  _QWORD v14[5]; // [rsp+30h] [rbp-68h] BYREF
  int v15; // [rsp+58h] [rbp-40h]
  int v16; // [rsp+5Ch] [rbp-3Ch]
  __int64 v17; // [rsp+60h] [rbp-38h]
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
  v5 = MiReservePtes((__int64)&qword_1404669C0, (unsigned __int64 *)(unsigned int)v3);
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
      if ( HIBYTE(word_140465BEC) )
        goto LABEL_8;
      v13 = (v9 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_8;
      v13 = (v9 & 1) == 0;
    }
    if ( !v13 )
      v9 |= 0x8000000000000000uLL;
LABEL_8:
    *v11 = v9;
    if ( v10 )
      MiWritePteShadow((__int64)v11);
    ++v7;
    v6 = (unsigned __int64)(v11 + 1);
  }
  while ( v7 < v3 );
  if ( (dword_14057118C & 1) != 0 )
  {
    v14[0] = 0LL;
    v14[1] = 0LL;
    v15 = 0;
    v16 = 0;
    v17 = 0LL;
    v14[3] = v8;
    v14[4] = v2;
    v14[2] = v3 << 12;
    MiInsertPteTracker((__int64)v14, 2, 0, 1);
  }
  MiInsertMappingNode(PoolWithTag);
  return (PVOID)v8;
}

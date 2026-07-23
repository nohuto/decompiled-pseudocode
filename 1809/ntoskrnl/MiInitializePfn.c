/*
 * XREFs of MiInitializePfn @ 0x1401094B0
 * Callers:
 *     MmCheckCachedPageStates @ 0x1400B01F0 (MmCheckCachedPageStates.c)
 *     MmAllocateIndependentPagesEx @ 0x14010903C (MmAllocateIndependentPagesEx.c)
 *     MiCreateSharedZeroPages @ 0x140109240 (MiCreateSharedZeroPages.c)
 *     MmAllocateSpecialPool @ 0x1402ACD54 (MmAllocateSpecialPool.c)
 *     MiInitializeProtoPfn @ 0x1402C4D4C (MiInitializeProtoPfn.c)
 *     MiMapNewSession @ 0x1407171D8 (MiMapNewSession.c)
 *     MiInitializeSystemImagePage @ 0x1409B9190 (MiInitializeSystemImagePage.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiChangePageAttribute @ 0x1400EF9A0 (MiChangePageAttribute.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiInitializePfn(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  unsigned __int64 v4; // r10
  unsigned __int64 v7; // r11
  unsigned int v8; // r9d
  char v9; // cl
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned int v13; // r12d
  char v14; // r10
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // rbp
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Queue; // esi
  unsigned int v21; // esi
  unsigned __int8 v22; // r13
  unsigned __int8 v23; // cl
  __int64 v24; // rax
  char v25; // cl
  char result; // al
  __int64 v27; // rcx
  unsigned __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // r8
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v35; // [rsp+60h] [rbp+8h] BYREF
  int v36; // [rsp+70h] [rbp+18h] BYREF
  int v37; // [rsp+78h] [rbp+20h] BYREF

  v4 = *(_QWORD *)a2;
  v7 = 0xFFFFF6FB7DBED000uLL;
  v8 = a3;
  v9 = a3;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    v28 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v28 )
    {
      v29 = *(_QWORD *)(v28 + 8 * ((a2 >> 3) & 0x1FF));
      v30 = v4 | 0x20;
      if ( (v29 & 0x20) == 0 )
        v30 = *(_QWORD *)a2;
      v4 = v30;
      if ( (v29 & 0x42) != 0 )
        v4 = v30 | 0x42;
    }
  }
  if ( (a4 & 4) != 0 )
  {
    v27 = 32LL * (v9 & 0x1F);
    if ( v4 )
      v4 = v27 | v4 & 0xFFFFFFFFFFFFFC1FuLL;
    else
      v4 = MiSwizzleInvalidPte(v27);
  }
  v11 = -9LL;
  if ( (v4 & 0x400) != 0 )
    v11 = -2049LL;
  v12 = v4 & v11;
  *(_QWORD *)(a1 + 16) = v12;
  if ( (a4 & 2) != 0 )
  {
    *(_QWORD *)(a1 + 40) |= 0x200000000000000uLL;
  }
  else if ( (a4 & 8) == 0 )
  {
    *(_QWORD *)(a1 + 16) = v12 & 0xFFFFFFFFFC00FFFFuLL;
  }
  v13 = 1;
  v14 = 2;
  if ( v8 != 31 )
  {
    if ( v8 >> 3 == 3 && (v8 & 7) != 0 )
    {
      v13 = 2;
    }
    else if ( v8 >> 3 == 1 )
    {
      v13 = 0;
    }
  }
  *(_WORD *)(a1 + 32) = 1;
  v15 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v16 = *(_QWORD *)v15;
  if ( v15 >= v7
    && v15 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v16 & 1) != 0
    && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
  {
    v31 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v31 )
    {
      v32 = *(_QWORD *)(v31 + 8 * ((v15 >> 3) & 0x1FF));
      v15 = v16 | 0x20;
      if ( (v32 & 0x20) == 0 )
        v15 = v16;
      v16 = v15;
      if ( (v32 & 0x42) != 0 )
        v16 = v15 | 0x42;
    }
  }
  v35 = v16;
  if ( (unsigned __int64)&v35 >= v7
    && (unsigned __int64)&v35 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v16 & 1) != 0
    && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
  {
    v15 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v15 )
    {
      v33 = *(_QWORD *)(v15 + 8 * (((unsigned __int64)&v35 >> 3) & 0x1FF));
      v15 = v16 | 0x20;
      if ( (v33 & 0x20) == 0 )
        v15 = v16;
      v16 = v15;
      if ( (v33 & 0x42) != 0 )
        v16 = v15 | 0x42;
    }
  }
  v17 = (v16 >> 12) & 0xFFFFFFFFFLL;
  *(_QWORD *)(a1 + 40) = v17 | *(_QWORD *)(a1 + 40) & 0xFFFFFFF000000000uLL;
  v18 = 48 * v17 - 0x58000000000LL;
  CurrentThread = KeGetCurrentThread();
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
  {
    v21 = Queue >> 9;
  }
  else
  {
    v21 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
    if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    {
      if ( v21 < 2 )
        v14 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
      LOBYTE(v21) = v14;
    }
  }
  v22 = 17;
  if ( (a4 & 1) == 0 )
  {
    if ( (a4 & 0x10) != 0 )
    {
      v36 = a4 & 1;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v36, v15, v17);
        while ( *(__int64 *)(a1 + 24) < 0 );
      }
    }
    else
    {
      v22 = MiLockPageInline(a1);
    }
  }
  v37 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v37, v15, v17);
    while ( *(__int64 *)(v18 + 24) < 0 );
  }
  *(_QWORD *)(v18 + 24) ^= ((*(_QWORD *)(v18 + 24) + 1LL) ^ *(_QWORD *)(v18 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v23 = *(_BYTE *)(a1 + 34);
  if ( v23 >> 6 != v13 )
  {
    MiChangePageAttribute(a1, v13, 1);
    v23 = *(_BYTE *)(a1 + 34);
  }
  v24 = *(_QWORD *)(a1 + 24);
  v25 = v23 & 0xF8 | 6;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 24) = v24 & 0xC000000000000000uLL | 1;
  result = (v21 ^ *(_BYTE *)(a1 + 35)) & 7;
  *(_BYTE *)(a1 + 35) ^= result;
  *(_BYTE *)(a1 + 34) = v25;
  if ( (a4 & 0x20) == 0 )
  {
    result = v25 | 0x10;
    *(_BYTE *)(a1 + 34) = v25 | 0x10;
  }
  if ( (a4 & 0x40) != 0 )
    *(_BYTE *)(a1 + 35) |= 0x20u;
  if ( (a4 & 1) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (a4 & 0x10) == 0 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v22 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      result = v22;
      __writecr8(v22);
    }
  }
  return result;
}

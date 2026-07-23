/*
 * XREFs of MiIsCfgBitMapPageShared @ 0x140076140
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x1405F11D0 (MiMarkSharedImageCfgBits.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiIsPrototypePteVadLookup @ 0x14002D250 (MiIsPrototypePteVadLookup.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x140042770 (MiGetProtoPteAddress.c)
 *     MiFastLockLeafPageTable @ 0x140045BC0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x14006E930 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiGetLeafVa @ 0x140076400 (MiGetLeafVa.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall MiIsCfgBitMapPageShared(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rsi
  unsigned __int16 *v5; // rbp
  unsigned __int8 v6; // r15
  unsigned __int64 v7; // rbx
  unsigned __int64 LeafVa; // rax
  unsigned int v9; // r14d
  char *AnyMultiplexedVm; // rdi
  __int64 v11; // rbx
  signed __int64 v12; // rbx
  __int64 v14; // r9
  unsigned __int64 v15; // rcx
  __int64 v16; // r9
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  signed __int64 v20; // [rsp+20h] [rbp-118h] BYREF
  __int64 v21; // [rsp+28h] [rbp-110h] BYREF
  __int64 v22; // [rsp+30h] [rbp-108h]
  __int64 v23; // [rsp+38h] [rbp-100h] BYREF
  _QWORD v24[22]; // [rsp+40h] [rbp-F8h] BYREF

  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  v6 = MiLockWorkingSetShared((__int64)v5);
  v21 = 0LL;
  v22 = 0LL;
  memset(v24, 0, sizeof(v24));
  LODWORD(v24[0]) = 2145;
  v7 = (__int64)(v4 << 25) >> 16;
  LeafVa = MiGetLeafVa(v7);
  v9 = 1;
  if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_14043CB80 && LeafVa <= qword_14043B5F0 )
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  else
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  if ( (unsigned int)MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v7, 0) )
  {
    v11 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  else
  {
    LODWORD(v24[0]) |= 4u;
    v24[21] = &v21;
    v24[2] = 0LL;
    v24[20] = MiGetNextPageTableTail;
    BYTE2(v24[1]) = 1;
    v24[3] = AnyMultiplexedVm;
    BYTE4(v24[0]) = v6;
    v24[4] = (__int64)(v4 << 25) >> 16;
    v24[5] = v24[4];
    MiWalkPageTables((int *)v24);
    v11 = v22;
  }
  if ( v4 != v11 )
  {
    v9 = 3;
    goto LABEL_11;
  }
  v12 = *(_QWORD *)v4;
  if ( MiPteInShadowRange(v4)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v12 & 1) != 0
    && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
  {
    v17 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v17 )
    {
      v18 = v12 | 0x20;
      v19 = *(_QWORD *)(v17 + 8 * ((v4 >> 3) & 0x1FF));
      if ( (v19 & 0x20) == 0 )
        v18 = v12;
      v12 = v18;
      if ( (v19 & 0x42) != 0 )
        v12 = v18 | 0x42;
    }
  }
  v20 = v12;
  if ( !v12 )
  {
    v9 = 2;
    goto LABEL_9;
  }
  MiGetProtoPteAddress(a2, a1 >> 12, 0, &v23);
  if ( (v12 & 1) == 0 )
  {
    if ( (v12 & 0x400) != 0 )
    {
      if ( MiIsPrototypePteVadLookup(v12) )
        goto LABEL_9;
      if ( qword_14043B180 && (v12 & 0x10) == 0 )
        v12 &= ~qword_14043B180;
      if ( v14 == v12 >> 16 )
        goto LABEL_9;
    }
    goto LABEL_18;
  }
  v15 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v20) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( (*(_QWORD *)(v15 + 40) & 0x200000000000000LL) == 0 || (*(_QWORD *)(v15 + 8) | 0x8000000000000000uLL) != v16 )
LABEL_18:
    v9 = 0;
LABEL_9:
  if ( ((v4 >> 9) & 0x7FFFFFFFF8LL) != 0x98000000000LL )
    MiUnlockPageTableInternal(v5, ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
LABEL_11:
  MiUnlockWorkingSetShared((__int64)v5, v6);
  return v9;
}

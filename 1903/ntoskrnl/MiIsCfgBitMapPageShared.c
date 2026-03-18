/*
 * XREFs of MiIsCfgBitMapPageShared @ 0x14005D300
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x140607108 (MiMarkSharedImageCfgBits.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiWalkPageTables @ 0x140048F60 (MiWalkPageTables.c)
 *     MiGetLeafVa @ 0x14005A9F0 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1400C7FF0 (MiGetProtoPteAddress.c)
 *     MiFastLockLeafPageTable @ 0x1400CB770 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MiIsPrototypePteVadLookup @ 0x140102370 (MiIsPrototypePteVadLookup.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MiIsCfgBitMapPageShared(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rsi
  unsigned __int16 *v5; // rbp
  unsigned __int8 v6; // r15
  unsigned __int64 v7; // rbx
  unsigned __int64 LeafVa; // rax
  unsigned int v9; // r14d
  unsigned __int16 *AnyMultiplexedVm; // rdi
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  __int64 v16; // r9
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // [rsp+20h] [rbp-118h] BYREF
  __int64 v21; // [rsp+28h] [rbp-110h] BYREF
  __int64 v22; // [rsp+30h] [rbp-108h]
  char v23[8]; // [rsp+38h] [rbp-100h] BYREF
  __int16 v24; // [rsp+40h] [rbp-F8h] BYREF
  int v25; // [rsp+42h] [rbp-F6h]
  unsigned __int8 v26; // [rsp+46h] [rbp-F2h]
  char v27; // [rsp+47h] [rbp-F1h]
  __int64 v28; // [rsp+48h] [rbp-F0h]
  unsigned __int16 *v29; // [rsp+50h] [rbp-E8h]
  __int64 v30; // [rsp+58h] [rbp-E0h]
  __int64 v31; // [rsp+60h] [rbp-D8h]
  _BYTE v32[112]; // [rsp+68h] [rbp-D0h] BYREF
  __int64 (__fastcall *v33)(); // [rsp+D8h] [rbp-60h]
  __int64 *v34; // [rsp+E0h] [rbp-58h]

  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[6];
  v6 = MiLockWorkingSetShared(v5);
  v21 = 0LL;
  v22 = 0LL;
  v25 = 0;
  v27 = 0;
  memset(v32, 0, sizeof(v32));
  v24 = 2145;
  v7 = (__int64)(v4 << 25) >> 16;
  LeafVa = MiGetLeafVa(v7);
  v9 = 1;
  if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_1404675B0 && LeafVa <= qword_140465EE0 )
    AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[6];
  else
    AnyMultiplexedVm = (unsigned __int16 *)MiGetAnyMultiplexedVm(1LL);
  if ( (unsigned int)MiFastLockLeafPageTable(AnyMultiplexedVm, v7, 0LL) )
  {
    v11 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  else
  {
    v24 |= 4u;
    v34 = &v21;
    v28 = 0LL;
    v29 = AnyMultiplexedVm;
    LOBYTE(v25) = v25 & 0xE3 | 4;
    v33 = MiGetNextPageTableTail;
    v26 = v6;
    v30 = (__int64)(v4 << 25) >> 16;
    v31 = v30;
    MiWalkPageTables(&v24);
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
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v18 = v12 | 0x20;
      v19 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v4 >> 3) & 0x1FF));
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
  MiGetProtoPteAddress(a2, a1 >> 12, 0LL, v23);
  if ( (v12 & 1) == 0 )
  {
    if ( (v12 & 0x400) != 0 )
    {
      if ( (unsigned int)MiIsPrototypePteVadLookup(v12) )
        goto LABEL_9;
      if ( qword_140465B00 && (v12 & 0x10) == 0 )
        v12 &= ~qword_140465B00;
      if ( v14 == v12 >> 16 )
        goto LABEL_9;
    }
    goto LABEL_18;
  }
  v15 = MI_READ_PTE_LOCK_FREE(&v20);
  if ( (*(_QWORD *)(48 * ((v15 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) & 0x200000000000000LL) == 0
    || (*(_QWORD *)(48 * ((v15 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 8) | 0x8000000000000000uLL) != v16 )
  {
LABEL_18:
    v9 = 0;
  }
LABEL_9:
  if ( ((v4 >> 9) & 0x7FFFFFFFF8LL) != 0x98000000000LL )
    MiUnlockPageTableInternal(v5);
LABEL_11:
  MiUnlockWorkingSetShared(v5, v6);
  return v9;
}

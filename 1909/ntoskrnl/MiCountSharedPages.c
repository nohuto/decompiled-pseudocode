/*
 * XREFs of MiCountSharedPages @ 0x140105ED0
 * Callers:
 *     MiSetProtectionOnSection @ 0x14004E680 (MiSetProtectionOnSection.c)
 *     MiDeletePartialVad @ 0x1400E74B8 (MiDeletePartialVad.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1402CF8F0 (MiPrepareImagePagesForHotPatch.c)
 * Callees:
 *     MiWalkPageTables @ 0x140049000 (MiWalkPageTables.c)
 *     ExAcquireSpinLockShared @ 0x140061A20 (ExAcquireSpinLockShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1400A7E70 (MiGetProtoPteAddress.c)
 *     MiFastLockLeafPageTable @ 0x1400AB5F0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MiIsPrototypePteVadLookup @ 0x1400CBD20 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     MiPteNeedsCommitCharge @ 0x14010632C (MiPteNeedsCommitCharge.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall MiCountSharedPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _KPROCESS *Process; // r15
  char SecureHandle; // al
  __int64 v7; // r15
  unsigned __int8 v8; // al
  LONG *v9; // rbx
  KIRQL v10; // cl
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 v12; // rbx
  __int64 v13; // r13
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  char *AnyMultiplexedVm; // rsi
  int v17; // eax
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r12
  int v20; // ecx
  __int64 v21; // rsi
  __int64 v22; // r15
  unsigned __int64 v23; // rsi
  signed __int64 v24; // rbx
  unsigned __int64 v25; // rbx
  unsigned __int64 DeepFreezeStartTime; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // [rsp+20h] [rbp-E0h]
  __int64 v32; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v33; // [rsp+38h] [rbp-C8h]
  __int64 v34; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v35; // [rsp+58h] [rbp-A8h]
  signed __int64 v36; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+68h] [rbp-98h] BYREF
  __int64 v38; // [rsp+70h] [rbp-90h]
  _QWORD v39[22]; // [rsp+80h] [rbp-80h] BYREF

  v30 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  SecureHandle = Process[1].SecureState.SecureHandle;
  v7 = (__int64)&Process[1].IdealNode[6];
  v8 = SecureHandle & 7;
  v32 = v7;
  if ( v8 >= 6u )
  {
    CurrentIrql = KeGetCurrentIrql();
    v33 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  }
  else
  {
    if ( v8 == 2 )
      v9 = &dword_140466F00;
    else
      v9 = (LONG *)(v7 + 192);
    v10 = ExAcquireSpinLockShared(v9);
    if ( v9[1] )
      _InterlockedExchange(v9 + 1, 0);
    CurrentIrql = v10;
    v33 = v10;
  }
  if ( a2 > a3 )
  {
LABEL_29:
    v21 = v30;
    goto LABEL_30;
  }
  v12 = a2;
  v13 = (__int64)(a3 << 25) >> 16;
  v38 = v13;
LABEL_9:
  v34 = 0LL;
  v35 = 0LL;
  memset((char *)v39 + 2, 0, 0xA6uLL);
  LOWORD(v39[0]) = 2145;
  v14 = (__int64)(v12 << 25) >> 16;
  v15 = v14;
  if ( v14 >= 0xFFFFF68000000000uLL )
  {
    do
    {
      if ( v15 > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v15 = (__int64)(v15 << 25) >> 16;
    }
    while ( v15 >= 0xFFFFF68000000000uLL );
    v7 = v32;
  }
  if ( v15 < 0xFFFF800000000000uLL || v15 >= qword_1404672B0 && v15 <= qword_140465BE0 )
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[6];
  else
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v17 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v14, 0);
  if ( v17 )
  {
    LODWORD(v34) = v17 - 1;
    v18 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v35 = v18;
  }
  else
  {
    LOWORD(v39[0]) |= 4u;
    v39[20] = &v34;
    v39[1] = 0LL;
    v39[2] = AnyMultiplexedVm;
    BYTE2(v39[0]) = BYTE2(v39[0]) & 0xE3 | 4;
    v39[19] = MiGetNextPageTableTail;
    BYTE6(v39[0]) = CurrentIrql;
    v39[3] = v14;
    v39[4] = v13;
    MiWalkPageTables((__int16 *)v39);
    v18 = v35;
  }
  if ( v18 )
  {
    v19 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  else
  {
    v19 = 0LL;
    v18 = a3 + 8;
  }
  v20 = *(_DWORD *)(a1 + 48) >> 7;
  if ( (*(_DWORD *)(a1 + 48) & 0x70) != 0x20 || (v20 & 0x1F) == 1 )
  {
    v21 = v30;
    if ( (v20 & 5) != 5 )
    {
      v21 = ((__int64)(v18 - a2) >> 3) + v30;
      v30 = v21;
    }
    a2 = v18;
  }
  else
  {
    v21 = v30;
    if ( a2 < v18 )
    {
      do
      {
        if ( (unsigned int)MiPteNeedsCommitCharge(a1, a2) == 1 )
          ++v21;
        a2 += 8LL;
      }
      while ( a2 < v18 );
      v7 = v32;
      v30 = v21;
    }
  }
  if ( a2 != a3 + 8 )
  {
    v22 = v30;
    v23 = (__int64)(a2 << 25) >> 16;
    while ( 1 )
    {
      v24 = *(_QWORD *)a2;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL
        && a2 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v24 & 1) != 0
        && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
      {
        DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( DeepFreezeStartTime )
        {
          v28 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((a2 >> 3) & 0x1FF));
          v29 = v24 | 0x20;
          if ( (v28 & 0x20) == 0 )
            v29 = *(_QWORD *)a2;
          v24 = v29;
          if ( (v28 & 0x42) != 0 )
            v24 = v29 | 0x42;
        }
      }
      v36 = v24;
      if ( v24 )
      {
        if ( (v24 & 1) != 0 )
        {
          if ( (v24 & 0x200) != 0 )
            goto LABEL_26;
          v25 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v36) >> 12) & 0xFFFFFFFFFLL)
              - 0x58000000000LL;
          if ( (*(_QWORD *)(v25 + 40) & 0x200000000000000LL) == 0
            || (*(_QWORD *)(v25 + 8) | 0x8000000000000000uLL) != MiGetProtoPteAddress(a1, v23 >> 12, 0, &v37) )
          {
            goto LABEL_26;
          }
          goto LABEL_32;
        }
        if ( (v24 & 0x400) != 0 )
        {
          if ( !MiIsPrototypePteVadLookup(v24) )
          {
            if ( qword_140465800 && (v24 & 0x10) == 0 )
              v24 &= ~qword_140465800;
            if ( v24 >> 16 != MiGetProtoPteAddress(a1, v23 >> 12, 0, &v37)
              || (*(_DWORD *)(a1 + 48) & 0x70) == 0x20 && (unsigned int)MiPteNeedsCommitCharge(a1, a2) != 1 )
            {
              goto LABEL_26;
            }
LABEL_32:
            ++v22;
            goto LABEL_26;
          }
          if ( (v24 & 0xA0) != 0xA0 )
            goto LABEL_32;
        }
      }
      else if ( (unsigned int)MiPteNeedsCommitCharge(a1, a2) == 1 )
      {
        goto LABEL_32;
      }
LABEL_26:
      a2 += 8LL;
      v23 += 4096LL;
      v12 = a2;
      if ( (a2 & 0xFFF) == 0 || a2 > a3 )
      {
        v30 = v22;
        v7 = v32;
        MiUnlockPageTableInternal(v32, v19);
        v13 = v38;
        CurrentIrql = v33;
        if ( a2 > a3 )
          goto LABEL_29;
        goto LABEL_9;
      }
    }
  }
  if ( v19 )
    MiUnlockPageTableInternal(v7, v19);
LABEL_30:
  MiUnlockWorkingSetShared(v7, v33);
  return v21;
}

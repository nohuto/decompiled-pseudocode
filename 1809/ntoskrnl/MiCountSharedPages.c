/*
 * XREFs of MiCountSharedPages @ 0x14010ACF0
 * Callers:
 *     MiDeletePartialVad @ 0x140025850 (MiDeletePartialVad.c)
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1402B9B84 (MiPrepareImagePagesForHotPatch.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiIsPrototypePteVadLookup @ 0x14002D250 (MiIsPrototypePteVadLookup.c)
 *     MiGetProtoPteAddress @ 0x140042770 (MiGetProtoPteAddress.c)
 *     MiFastLockLeafPageTable @ 0x140045BC0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x14006E930 (MiWalkPageTables.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiPteNeedsCommitCharge @ 0x14010B164 (MiPteNeedsCommitCharge.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall MiCountSharedPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _KPROCESS *Process; // r15
  char Flink; // al
  __int64 v7; // r15
  unsigned __int8 v8; // al
  LONG *v9; // rbx
  KIRQL v10; // cl
  __int64 CurrentIrql; // r12
  __int64 v12; // rsi
  __int64 v13; // r13
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  char *AnyMultiplexedVm; // rsi
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // r12
  int v22; // ecx
  __int64 v23; // rsi
  __int64 v24; // r15
  unsigned __int64 v25; // rsi
  signed __int64 v26; // rbx
  __int64 v27; // rbx
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // [rsp+20h] [rbp-E0h]
  signed __int64 v37; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v38; // [rsp+38h] [rbp-C8h]
  __int64 v39; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v40; // [rsp+48h] [rbp-B8h]
  __int64 v41; // [rsp+50h] [rbp-B0h]
  __int64 v42; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v43; // [rsp+60h] [rbp-A0h]
  __int64 v44; // [rsp+68h] [rbp-98h] BYREF
  __int64 v45; // [rsp+70h] [rbp-90h]
  _QWORD v46[22]; // [rsp+80h] [rbp-80h] BYREF

  v35 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  Flink = (char)Process[2].Header.WaitListHead.Flink;
  v7 = (__int64)&Process[1].IdealNode[12];
  v8 = Flink & 7;
  v38 = v7;
  if ( v8 >= 6u )
  {
    CurrentIrql = KeGetCurrentIrql();
    v39 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  }
  else
  {
    if ( v8 == 2 )
      v9 = &dword_14043C7C0;
    else
      v9 = (LONG *)(v7 + 192);
    v10 = ExAcquireSpinLockShared(v9);
    if ( v9[1] )
      _InterlockedExchange(v9 + 1, 0);
    LOBYTE(CurrentIrql) = v10;
    v39 = v10;
  }
  if ( a2 > a3 )
  {
LABEL_30:
    v23 = v35;
    goto LABEL_31;
  }
  v12 = 0LL;
  v41 = 0LL;
  v13 = (__int64)(a3 << 25) >> 16;
  v45 = v13;
LABEL_9:
  v42 = 0LL;
  v43 = 0LL;
  memset(v46, 0, sizeof(v46));
  LODWORD(v46[0]) = 2145;
  v14 = (__int64)((a2 << 25) - v12) >> 16;
  v15 = v14;
  if ( v14 >= 0xFFFFF68000000000uLL )
  {
    do
    {
      if ( v15 > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v15 = (__int64)((v15 << 25) - v12) >> 16;
    }
    while ( v15 >= 0xFFFFF68000000000uLL );
    v7 = v38;
  }
  if ( v15 < 0xFFFF800000000000uLL || v15 >= qword_14043CB80 && v15 <= qword_14043B5F0 )
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  else
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v17 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v14, 0);
  if ( v17 )
  {
    LODWORD(v42) = v17 - 1;
    v20 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v43 = v20;
  }
  else
  {
    LODWORD(v46[0]) |= 4u;
    v46[21] = &v42;
    v46[2] = 0LL;
    v46[20] = MiGetNextPageTableTail;
    BYTE2(v46[1]) = 1;
    v46[3] = AnyMultiplexedVm;
    BYTE4(v46[0]) = CurrentIrql;
    v46[4] = v14;
    v46[5] = v13;
    MiWalkPageTables((int *)v46);
    v20 = v43;
  }
  if ( v20 )
  {
    v21 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  else
  {
    v21 = 0LL;
    v20 = a3 + 8;
  }
  v40 = v21;
  v22 = *(_DWORD *)(a1 + 48) >> 3;
  if ( (*(_DWORD *)(a1 + 48) & 7) != 2 || (v22 & 0x1F) == 1 )
  {
    v23 = v35;
    if ( (v22 & 5) != 5 )
    {
      v23 = ((__int64)(v20 - a2) >> 3) + v35;
      v35 = v23;
    }
    a2 = v20;
  }
  else
  {
    v23 = v35;
    if ( a2 < v20 )
    {
      do
      {
        if ( (unsigned int)MiPteNeedsCommitCharge(a1, a2, v18, v19) == 1 )
          ++v23;
        a2 += 8LL;
      }
      while ( a2 < v20 );
      v7 = v38;
      v35 = v23;
    }
  }
  if ( a2 != a3 + 8 )
  {
    v24 = v35;
    v25 = (__int64)((a2 << 25) - v41) >> 16;
    while ( 1 )
    {
      v26 = *(_QWORD *)a2;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL
        && a2 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v26 & 1) != 0
        && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
      {
        v29 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v29 )
        {
          v30 = *(_QWORD *)(v29 + 8 * ((a2 >> 3) & 0x1FF));
          v31 = v26 | 0x20;
          if ( (v30 & 0x20) == 0 )
            v31 = *(_QWORD *)a2;
          v26 = v31;
          if ( (v30 & 0x42) != 0 )
            v26 = v31 | 0x42;
        }
      }
      v37 = v26;
      if ( v26 )
      {
        if ( (v26 & 1) != 0 )
        {
          if ( (v26 & 0x200) != 0 )
            goto LABEL_27;
          if ( (unsigned __int64)&v37 >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)&v37 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
          {
            v32 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v32 )
            {
              v33 = *(_QWORD *)(v32 + 8 * (((unsigned __int64)&v37 >> 3) & 0x1FF));
              v34 = v26 | 0x20;
              if ( (v33 & 0x20) == 0 )
                v34 = v26;
              v26 = v34;
              if ( (v33 & 0x42) != 0 )
                v26 = v34 | 0x42;
            }
          }
          v27 = 48 * (((unsigned __int64)v26 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          if ( (*(_QWORD *)(v27 + 40) & 0x200000000000000LL) == 0
            || (*(_QWORD *)(v27 + 8) | 0x8000000000000000uLL) != MiGetProtoPteAddress(a1, v25 >> 12, 0, &v44) )
          {
            goto LABEL_27;
          }
          goto LABEL_35;
        }
        if ( (v26 & 0x400) != 0 )
        {
          if ( !MiIsPrototypePteVadLookup(v26) )
          {
            if ( qword_14043B180 && (v26 & 0x10) == 0 )
              v26 &= ~qword_14043B180;
            if ( v26 >> 16 != MiGetProtoPteAddress(a1, v25 >> 12, 0, &v44)
              || (*(_DWORD *)(a1 + 48) & 7) == 2 && (unsigned int)MiPteNeedsCommitCharge(a1, a2, v18, v19) != 1 )
            {
              goto LABEL_27;
            }
LABEL_35:
            ++v24;
            goto LABEL_27;
          }
          if ( (v26 & 0xA0) != 0xA0 )
            goto LABEL_35;
        }
      }
      else if ( (unsigned int)MiPteNeedsCommitCharge(a1, a2, v18, v19) == 1 )
      {
        goto LABEL_35;
      }
LABEL_27:
      a2 += 8LL;
      v25 += 4096LL;
      if ( (a2 & 0xFFF) == 0 || a2 > a3 )
      {
        v35 = v24;
        v7 = v38;
        MiUnlockPageTableInternal(v38, v40);
        v13 = v45;
        v12 = v41;
        LOBYTE(CurrentIrql) = v39;
        if ( a2 > a3 )
          goto LABEL_30;
        goto LABEL_9;
      }
    }
  }
  if ( v21 )
    MiUnlockPageTableInternal(v7, v21);
LABEL_31:
  MiUnlockWorkingSetShared(v7, v39);
  return v23;
}

/*
 * XREFs of MiCheckProcessorPteCache @ 0x140030930
 * Callers:
 *     MiReservePtes @ 0x140030210 (MiReservePtes.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     MiEmptyPteBins @ 0x1400F27D0 (MiEmptyPteBins.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MiCheckProcessorPteCache(unsigned __int64 a1)
{
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v4; // rsi
  unsigned __int64 v5; // r14
  signed __int64 *p_PteBitCache; // rdx
  signed __int64 *v7; // rbx
  signed __int64 v8; // r8
  unsigned __int64 v9; // r11
  signed __int64 *v10; // r9
  signed __int64 *v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rcx
  _BYTE *v15; // rsi
  char v16; // al
  __int64 i; // r10
  bool v19; // zf
  __int64 v20; // rcx
  unsigned int v21; // r15d
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // rcx
  __int64 v24; // r10
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // r9
  __int64 *v27; // r15
  unsigned __int64 v28; // r13
  unsigned __int64 v29; // r11
  __int64 v30; // r15
  unsigned __int64 v31; // r12
  __int64 *v32; // r8
  __int64 v33; // rax
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // r8
  volatile signed __int64 *v37; // r9
  signed __int64 v38; // rax
  unsigned __int8 v39; // dl
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  unsigned __int64 v42; // r12
  bool v43; // sf
  __int64 v44; // rdx
  unsigned int v45; // ecx
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rcx
  struct _KPRCB *v48; // rcx
  unsigned __int8 OldIrql; // r12
  struct _KPRCB *v50; // rcx
  struct _KPRCB *v51; // rcx
  unsigned __int8 v52; // [rsp+20h] [rbp-58h]
  __int64 v53; // [rsp+28h] [rbp-50h] BYREF
  __int64 v54; // [rsp+30h] [rbp-48h]
  unsigned int v55; // [rsp+44h] [rbp-34h]
  int v56; // [rsp+48h] [rbp-30h]
  int v57; // [rsp+4Ch] [rbp-2Ch]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  v53 = 0LL;
  v54 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  v52 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0LL;
  v5 = -1LL;
  p_PteBitCache = (signed __int64 *)&CurrentPrcb->PteBitCache;
  if ( CurrentPrcb->PteBitCache != -1LL )
    goto LABEL_3;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v48 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v48->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v48);
  }
  __writecr8(CurrentIrql);
  v25 = qword_140466A00;
LABEL_33:
  while ( 2 )
  {
    v26 = qword_140466A08;
    v27 = &qword_1404669C0;
    if ( qword_140466A08 )
    {
      while ( qword_1404669C0 < v26 )
      {
        KeAcquireInStackQueuedSpinLock(&qword_1404669F0, &LockHandle);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v50 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v50->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v50);
        }
        __writecr8(OldIrql);
        v26 = qword_140466A08;
        if ( !qword_140466A08 )
          goto LABEL_37;
      }
      v27 = &v53;
      v53 = qword_1404669C0 - v26;
      v54 = qword_1404669C8 + 8 * (v26 >> 6);
      if ( v25 )
        v25 -= v26;
    }
LABEL_37:
    v28 = *v27;
    v29 = v25;
    v30 = v27[1];
    if ( v25 >= v28 )
      v29 = 0LL;
    v31 = v28 - 1;
    while ( 1 )
    {
      if ( v31 - v29 == -1LL )
        goto LABEL_67;
      v32 = (__int64 *)(v30 + 8 * (v29 >> 6));
      v33 = ((1LL << (v29 & 0x3F)) - 1) | *v32;
      if ( v33 != -1 )
        break;
      while ( (unsigned __int64)++v32 <= v30 + 8 * (v31 >> 6) )
      {
        v33 = *v32;
        if ( *v32 != -1 )
          goto LABEL_42;
      }
LABEL_67:
      if ( !v29 )
      {
        if ( !(unsigned int)MiEmptyPteBins(&qword_1404669C0, 0LL, -1LL, v26) )
          return 0LL;
        v25 = 0LL;
        goto LABEL_33;
      }
      v42 = v25 + 1;
      if ( v25 + 1 > v28 )
        v42 = v28;
      v31 = v42 - 1;
      v29 = 0LL;
    }
LABEL_42:
    _BitScanForward64((unsigned __int64 *)&v33, ~v33);
    v34 = v33 + (((__int64)v32 - v30) >> 3 << 6);
    if ( v34 > v31 || v34 == -1LL )
      goto LABEL_67;
    v35 = (v34 + v26) & 0xFFFFFFFFFFFFFFC0uLL;
    v36 = *(_QWORD *)(qword_1404669C8 + 8 * (v35 >> 6));
    v37 = (volatile signed __int64 *)(qword_1404669C8 + 8 * (v35 >> 6));
    if ( v36 == -1LL )
      goto LABEL_92;
    while ( 1 )
    {
      v38 = _InterlockedCompareExchange64(v37, -1LL, v36);
      if ( v36 == v38 )
        break;
      v36 = v38;
      if ( v38 == -1 )
        goto LABEL_92;
    }
    if ( v36 == -1LL )
    {
LABEL_92:
      v25 = v35 + 64;
      continue;
    }
    break;
  }
  v39 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v39 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v52 = v39;
  p_PteBitCache = (signed __int64 *)&CurrentPrcb->PteBitCache;
  if ( CurrentPrcb->PteBitCache == -1LL )
  {
    *p_PteBitCache = v36;
    CurrentPrcb->PteBitOffset = v35;
    v40 = ~v36 - ((~v36 >> 1) & 0x5555555555555555LL);
    _InterlockedExchangeAdd64(
      &qword_140466A18,
      -(__int64)((0x101010101010101LL
                * (((v40 & 0x3333333333333333LL)
                  + ((v40 >> 2) & 0x3333333333333333LL)
                  + (((v40 & 0x3333333333333333LL) + ((v40 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
    qword_140466A00 = v35 + 64;
  }
  else
  {
    _InterlockedAnd64(v37, v36);
  }
LABEL_3:
  v54 = (__int64)p_PteBitCache;
  v53 = 64LL;
  v7 = p_PteBitCache;
  if ( !a1 )
  {
    v5 = 0LL;
    goto LABEL_14;
  }
  if ( a1 <= 0x40 )
  {
    v8 = *p_PteBitCache;
    v9 = 63 - a1 + 1;
    v10 = &p_PteBitCache[v9 >> 6];
    v11 = p_PteBitCache;
    if ( a1 >= 0x40 )
    {
      while ( 2 )
      {
        v43 = v8 < 0;
        while ( 1 )
        {
          if ( v43 )
          {
            do
            {
              if ( ++v11 > v10 )
                goto LABEL_10;
              v8 = *v11;
            }
            while ( *v11 < 0 );
          }
          v19 = !_BitScanReverse64((unsigned __int64 *)&v44, v8);
          if ( v19 )
            v45 = 64;
          else
            v45 = 63 - v44;
          v55 = v45;
          v13 = ((v11 - v7 + 1) << 6) - v45;
          if ( v13 > v9 )
            goto LABEL_10;
          v46 = a1 - v45;
          if ( a1 == v45 )
            goto LABEL_9;
          v8 = v11[1];
          ++v11;
          if ( v46 < 0x40 )
            break;
          v43 = v8 < 0;
          if ( !v8 )
          {
            v46 -= 64LL;
            if ( !v46 )
              goto LABEL_9;
            v8 = v11[1];
            ++v11;
            break;
          }
        }
        v19 = !_BitScanForward64(&v47, v8);
        if ( v19 )
          v47 = 64LL;
        v56 = v47;
        if ( v47 < v46 )
          continue;
        break;
      }
LABEL_9:
      v5 = v13;
    }
    else if ( a1 > 1 )
    {
      for ( i = 0LL; ; v57 = i )
      {
        if ( v8 == -1 )
        {
          while ( 1 )
          {
            if ( ++v11 > v10 )
              goto LABEL_10;
            v8 = *v11;
            if ( *v11 != -1 )
            {
              i = 0LL;
              break;
            }
          }
        }
        v19 = !_BitScanForward64((unsigned __int64 *)&v20, v8);
        if ( v19 )
          LODWORD(v20) = 64;
        if ( (unsigned int)(i + v20) >= a1 )
          break;
        v21 = a1;
        v22 = ~v8;
        while ( 1 )
        {
          v22 &= v22 >> (v21 >> 1);
          if ( !v22 )
            break;
          v21 -= v21 >> 1;
          if ( v21 <= 1 )
          {
            _BitScanForward64(&v23, v22);
            v24 = (unsigned int)v23;
            goto LABEL_29;
          }
        }
        if ( v11 == p_PteBitCache )
          goto LABEL_10;
        v19 = !_BitScanReverse64((unsigned __int64 *)&v41, v8);
        if ( v19 )
          i = 64LL;
        else
          i = (unsigned int)(63 - v41);
        v8 = v11[1];
        ++v11;
      }
      v24 = -i;
LABEL_29:
      v13 = ((v11 - p_PteBitCache) << 6) + v24;
      if ( v13 <= v9 )
        goto LABEL_9;
    }
    else if ( v8 == -1 )
    {
      while ( ++v11 <= v10 )
      {
        v8 = *v11;
        if ( *v11 != -1 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      _BitScanForward64(&v12, ~v8);
      v13 = (unsigned int)v12 + ((v11 - p_PteBitCache) << 6);
      if ( v13 <= v9 )
        goto LABEL_9;
    }
  }
LABEL_10:
  if ( v5 != -1LL )
  {
    v14 = v5 & 7;
    v15 = (char *)v7 + (v5 >> 3);
    if ( v14 + a1 <= 8 )
    {
      v16 = byte_1403821E8[a1] << v14;
      goto LABEL_13;
    }
    if ( (v5 & 7) != 0 )
    {
      *v15++ |= byte_140380E20[v14];
      a1 -= (unsigned int)(8 - v14);
    }
    if ( a1 > 8 )
    {
      memset(v15, 255, a1 >> 3);
      v15 += a1 >> 3;
      a1 &= 7u;
    }
    if ( a1 )
    {
      v16 = byte_1403821E8[a1];
LABEL_13:
      *v15 |= v16;
    }
LABEL_14:
    v4 = qword_1404669D0 + 8 * (v5 + CurrentPrcb->PteBitOffset);
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v52 < 2u )
  {
    v51 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v51->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v51);
  }
  __writecr8(v52);
  return v4;
}

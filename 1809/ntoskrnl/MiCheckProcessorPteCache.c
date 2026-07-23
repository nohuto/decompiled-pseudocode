/*
 * XREFs of MiCheckProcessorPteCache @ 0x14005CFB0
 * Callers:
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiEmptyPteBins @ 0x1400EFC90 (MiEmptyPteBins.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall MiCheckProcessorPteCache(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r15
  __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  signed __int64 *p_PteBitCache; // rdx
  signed __int64 *v10; // rbx
  signed __int64 v11; // r8
  unsigned __int64 v12; // r11
  signed __int64 *v13; // r9
  signed __int64 *v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rcx
  _BYTE *v18; // rsi
  char v19; // al
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // r10
  __int64 *v23; // rbx
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // r11
  __int64 v26; // rbx
  unsigned __int64 v27; // r15
  __int64 *v28; // r8
  __int64 v29; // rax
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // r8
  volatile signed __int64 *v32; // r10
  signed __int64 v33; // rax
  unsigned __int8 v34; // dl
  unsigned __int64 v35; // rax
  __int64 i; // r10
  bool v37; // zf
  __int64 v38; // rcx
  unsigned int v39; // r14d
  unsigned __int64 v40; // r10
  unsigned __int64 v41; // rcx
  __int64 v42; // r10
  __int64 v43; // rcx
  bool v44; // sf
  __int64 v45; // rdx
  unsigned int v46; // ecx
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // r15
  struct _KPRCB *v50; // rcx
  unsigned __int8 OldIrql; // r15
  struct _KPRCB *v52; // rcx
  struct _KPRCB *v53; // rcx
  __int64 v54; // [rsp+20h] [rbp-78h] BYREF
  __int64 v55; // [rsp+28h] [rbp-70h]
  unsigned int v56; // [rsp+3Ch] [rbp-5Ch]
  int v57; // [rsp+40h] [rbp-58h]
  int v58; // [rsp+44h] [rbp-54h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = 0LL;
  v8 = -1LL;
  p_PteBitCache = (signed __int64 *)&CurrentPrcb->PteBitCache;
  if ( CurrentPrcb->PteBitCache != -1LL )
    goto LABEL_3;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v50 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v50->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v50);
  }
  __writecr8(CurrentIrql);
  v21 = qword_14043C0A0;
LABEL_22:
  while ( 2 )
  {
    v22 = qword_14043C0A8;
    v23 = &qword_14043C060;
    if ( qword_14043C0A8 )
    {
      while ( qword_14043C060 < v22 )
      {
        KeAcquireInStackQueuedSpinLock(&qword_14043C090, &LockHandle);
        KxReleaseQueuedSpinLock(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v52 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v52->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v52);
        }
        __writecr8(OldIrql);
        v22 = qword_14043C0A8;
        if ( !qword_14043C0A8 )
          goto LABEL_26;
      }
      v23 = &v54;
      v54 = qword_14043C060 - v22;
      v55 = qword_14043C068 + 8 * (v22 >> 6);
      if ( v21 )
        v21 -= v22;
    }
LABEL_26:
    v24 = *v23;
    v25 = v21;
    v26 = v23[1];
    if ( v21 >= v24 )
      v25 = 0LL;
    v27 = v24 - 1;
    while ( 1 )
    {
      if ( v27 - v25 == -1LL )
        goto LABEL_80;
      v28 = (__int64 *)(v26 + 8 * (v25 >> 6));
      a4 = v26 + 8 * (v27 >> 6);
      v29 = ((1LL << (v25 & 0x3F)) - 1) | *v28;
      if ( v29 != -1 )
        break;
      while ( (unsigned __int64)++v28 <= a4 )
      {
        v29 = *v28;
        if ( *v28 != -1 )
          goto LABEL_31;
      }
LABEL_80:
      if ( !v25 )
      {
        if ( !(unsigned int)MiEmptyPteBins(&qword_14043C060, 0LL, -1LL, a4) )
          return 0LL;
        v21 = 0LL;
        goto LABEL_22;
      }
      v49 = v21 + 1;
      if ( v21 + 1 > v24 )
        v49 = v24;
      v27 = v49 - 1;
      v25 = 0LL;
    }
LABEL_31:
    _BitScanForward64((unsigned __int64 *)&v29, ~v29);
    v30 = v29 + (((__int64)v28 - v26) >> 3 << 6);
    if ( v30 > v27 || v30 == -1LL )
      goto LABEL_80;
    a4 = (v30 + v22) & 0xFFFFFFFFFFFFFFC0uLL;
    v31 = *(_QWORD *)(qword_14043C068 + 8 * (a4 >> 6));
    v32 = (volatile signed __int64 *)(qword_14043C068 + 8 * (a4 >> 6));
    if ( v31 == -1LL )
      goto LABEL_92;
    while ( 1 )
    {
      v33 = _InterlockedCompareExchange64(v32, -1LL, v31);
      if ( v31 == v33 )
        break;
      v31 = v33;
      if ( v33 == -1 )
        goto LABEL_92;
    }
    if ( v31 == -1LL )
    {
LABEL_92:
      v21 = a4 + 64;
      continue;
    }
    break;
  }
  v34 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v34 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentIrql = v34;
  p_PteBitCache = (signed __int64 *)&CurrentPrcb->PteBitCache;
  if ( CurrentPrcb->PteBitCache == -1LL )
  {
    *p_PteBitCache = v31;
    CurrentPrcb->PteBitOffset = a4;
    v35 = ~v31 - ((~v31 >> 1) & 0x5555555555555555LL);
    _InterlockedExchangeAdd64(
      &qword_14043C0B8,
      -(__int64)((0x101010101010101LL
                * (((v35 & 0x3333333333333333LL)
                  + ((v35 >> 2) & 0x3333333333333333LL)
                  + (((v35 & 0x3333333333333333LL) + ((v35 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
    qword_14043C0A0 = a4 + 64;
  }
  else
  {
    _InterlockedAnd64(v32, v31);
  }
LABEL_3:
  v55 = (__int64)p_PteBitCache;
  v54 = 64LL;
  v10 = p_PteBitCache;
  if ( !a1 )
  {
    v8 = 0LL;
    goto LABEL_14;
  }
  if ( a1 <= 0x40 )
  {
    v11 = *p_PteBitCache;
    v12 = 63 - a1 + 1;
    v13 = &p_PteBitCache[v12 >> 6];
    v14 = p_PteBitCache;
    if ( a1 >= 0x40 )
    {
      while ( 2 )
      {
        v44 = v11 < 0;
        while ( 1 )
        {
          if ( v44 )
          {
            do
            {
              if ( ++v14 > v13 )
                goto LABEL_10;
              v11 = *v14;
            }
            while ( *v14 < 0 );
          }
          v37 = !_BitScanReverse64((unsigned __int64 *)&v45, v11);
          if ( v37 )
            v46 = 64;
          else
            v46 = 63 - v45;
          v56 = v46;
          v16 = ((v14 - v10 + 1) << 6) - v46;
          if ( v16 > v12 )
            goto LABEL_10;
          v47 = a1 - v46;
          if ( a1 == v46 )
            goto LABEL_9;
          v11 = v14[1];
          ++v14;
          if ( v47 < 0x40 )
            break;
          v44 = v11 < 0;
          if ( !v11 )
          {
            v47 -= 64LL;
            if ( !v47 )
              goto LABEL_9;
            v11 = v14[1];
            ++v14;
            break;
          }
        }
        v37 = !_BitScanForward64(&v48, v11);
        if ( v37 )
          v48 = 64LL;
        v57 = v48;
        if ( v48 < v47 )
          continue;
        break;
      }
LABEL_9:
      v8 = v16;
    }
    else if ( a1 > 1 )
    {
      for ( i = 0LL; ; v58 = i )
      {
        if ( v11 == -1 )
        {
          while ( 1 )
          {
            if ( ++v14 > v13 )
              goto LABEL_10;
            v11 = *v14;
            if ( *v14 != -1 )
            {
              i = 0LL;
              break;
            }
          }
        }
        v37 = !_BitScanForward64((unsigned __int64 *)&v38, v11);
        if ( v37 )
          LODWORD(v38) = 64;
        if ( (unsigned int)(i + v38) >= a1 )
          break;
        v39 = a1;
        v40 = ~v11;
        while ( 1 )
        {
          v40 &= v40 >> (v39 >> 1);
          if ( !v40 )
            break;
          v39 -= v39 >> 1;
          if ( v39 <= 1 )
          {
            _BitScanForward64(&v41, v40);
            v42 = (unsigned int)v41;
            goto LABEL_48;
          }
        }
        if ( v14 == p_PteBitCache )
          goto LABEL_10;
        v37 = !_BitScanReverse64((unsigned __int64 *)&v43, v11);
        if ( v37 )
          i = 64LL;
        else
          i = (unsigned int)(63 - v43);
        v11 = v14[1];
        ++v14;
      }
      v42 = -i;
LABEL_48:
      v16 = ((v14 - p_PteBitCache) << 6) + v42;
      if ( v16 <= v12 )
        goto LABEL_9;
    }
    else if ( v11 == -1 )
    {
      while ( ++v14 <= v13 )
      {
        v11 = *v14;
        if ( *v14 != -1 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      _BitScanForward64(&v15, ~v11);
      v16 = (unsigned int)v15 + ((v14 - p_PteBitCache) << 6);
      if ( v16 <= v12 )
        goto LABEL_9;
    }
  }
LABEL_10:
  if ( v8 != -1LL )
  {
    v17 = v8 & 7;
    v18 = (char *)v10 + (v8 >> 3);
    if ( v17 + a1 <= 8 )
    {
      v19 = byte_1403630E8[a1] << v17;
      goto LABEL_13;
    }
    if ( (v8 & 7) != 0 )
    {
      *v18++ |= byte_140361CC8[v17];
      a1 -= (unsigned int)(8 - v17);
    }
    if ( a1 > 8 )
    {
      memset(v18, 255, a1 >> 3);
      v18 += a1 >> 3;
      a1 &= 7u;
    }
    if ( a1 )
    {
      v19 = byte_1403630E8[a1];
LABEL_13:
      *v18 |= v19;
    }
LABEL_14:
    v7 = qword_14043C070 + 8 * (v8 + CurrentPrcb->PteBitOffset);
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v53 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v53->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v53);
  }
  __writecr8(CurrentIrql);
  return v7;
}

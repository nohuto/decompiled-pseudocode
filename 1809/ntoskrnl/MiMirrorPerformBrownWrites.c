/*
 * XREFs of MiMirrorPerformBrownWrites @ 0x140152494
 * Callers:
 *     MmDuplicateMemory @ 0x14056D274 (MmDuplicateMemory.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiAddLockedPageCharge @ 0x14002DFAC (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030B20 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiPfnReferenceCountIsZero @ 0x140030E00 (MiPfnReferenceCountIsZero.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiDiscardTransitionPte @ 0x14015839C (MiDiscardTransitionPte.c)
 *     RtlFindNextForwardRunClearCappedEx @ 0x14015B220 (RtlFindNextForwardRunClearCappedEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiMirrorPerformBrownWrites(__int64 a1, char a2, _QWORD *a3)
{
  char v3; // r13
  int v4; // r12d
  ULONG_PTR v5; // rbx
  int v6; // r14d
  __int64 v7; // rbp
  unsigned __int64 v8; // r9
  unsigned __int64 i; // r8
  _QWORD *v10; // rdi
  __int64 j; // rax
  unsigned __int64 v12; // rdi
  __int64 NextForwardRunClearCapped; // rax
  __int64 v14; // rbx
  __int64 v15; // r15
  unsigned __int64 v16; // rbx
  int v17; // r13d
  __int64 v19; // r8
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rdx
  volatile signed __int32 *v22; // r8
  unsigned int v23; // eax
  unsigned __int64 v24; // rcx
  __int64 v25; // rbp
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // rsi
  __int64 v30; // r15
  unsigned __int8 v31; // r14
  ULONG_PTR v32; // r9
  unsigned __int64 v33; // rdx
  volatile signed __int32 *v34; // r8
  unsigned int v35; // eax
  unsigned __int64 v36; // rcx
  struct _KPRCB *v37; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v39; // rcx
  unsigned __int64 v40; // rsi
  unsigned __int64 v41; // rbp
  unsigned __int8 v42; // r14
  struct _KPRCB *v43; // rcx
  int v44; // [rsp+20h] [rbp-68h]
  __int64 v45; // [rsp+28h] [rbp-60h]
  __int64 v46; // [rsp+30h] [rbp-58h] BYREF
  __int64 v47; // [rsp+38h] [rbp-50h]
  int v51; // [rsp+A8h] [rbp+20h]

  v3 = a2;
  v4 = 0;
  v44 = 0;
  v5 = 0LL;
  v51 = 0;
  v6 = 0;
  v45 = 0LL;
  v7 = 0LL;
  while ( 1 )
  {
    v8 = v5 & -(__int64)(v5 < qword_14043B870);
    for ( i = qword_14043B870 - 1; i - v8 == -1LL; i = v19 - 1 )
    {
      v12 = -1LL;
LABEL_23:
      if ( !v8 )
        goto LABEL_10;
      v19 = v5 + 1;
      v8 = 0LL;
      if ( v5 + 1 > qword_14043B870 )
        v19 = qword_14043B870;
    }
    v10 = (_QWORD *)(qword_14043B878 + 8 * (v8 >> 6));
    for ( j = ((1LL << (v8 & 0x3F)) - 1) | ~*v10; j == -1; j = ~*v10 )
    {
      if ( (unsigned __int64)++v10 > qword_14043B878 + 8 * (i >> 6) )
        goto LABEL_20;
    }
    _BitScanForward64((unsigned __int64 *)&j, ~j);
    v12 = j + (((__int64)v10 - qword_14043B878) >> 3 << 6);
    if ( v12 > i )
    {
LABEL_20:
      v12 = -1LL;
      goto LABEL_23;
    }
    if ( v12 == -1LL )
      goto LABEL_23;
LABEL_10:
    if ( v12 < v5 || v12 == -1LL )
      goto LABEL_19;
    NextForwardRunClearCapped = RtlFindNextForwardRunClearCappedEx(&qword_14043B870, v12, i, &v46);
    v14 = v46;
    v15 = NextForwardRunClearCapped;
    if ( !NextForwardRunClearCapped )
      v14 = qword_14043B870;
    v16 = v14 - v12;
    v17 = v3 & 8;
    if ( !v17 )
      goto LABEL_15;
    if ( v6 != 1 )
      break;
    v20 = v12 & 0x1F;
    v21 = v16;
    v22 = (volatile signed __int32 *)(qword_14043B888 + 4 * (v12 >> 5));
    if ( v20 + v16 <= 0x20 )
    {
      if ( v16 == 32 )
      {
        *v22 = -1;
        goto LABEL_40;
      }
      v23 = ((1 << v16) - 1) << v20;
      goto LABEL_39;
    }
    if ( (v12 & 0x1F) != 0 )
    {
      _InterlockedOr(v22, ((1 << (32 - (v12 & 0x1F))) - 1) << v20);
      v21 = v16 - (32 - (unsigned int)(v12 & 0x1F));
      ++v22;
    }
    if ( v21 >= 0x20 )
    {
      v24 = v21 >> 5;
      v21 += -32LL * (v21 >> 5);
      do
      {
        *v22++ = -1;
        --v24;
      }
      while ( v24 );
    }
    if ( v21 )
    {
      v23 = (1 << v21) - 1;
LABEL_39:
      _InterlockedOr(v22, v23);
    }
LABEL_40:
    v5 = v15 + v12 + v16;
LABEL_18:
    v7 = v45;
    v3 = a2;
    if ( v5 >= qword_14043B870 )
      goto LABEL_19;
  }
  v47 = 0LL;
  if ( v16 > 0x100 )
    v16 = 256LL;
  v25 = -1LL;
  v26 = v16;
  v5 = v12;
  v27 = 48 * v12 - 0x58000000000LL;
  v28 = v27 + 48 * v26;
  v29 = v27 + 24;
  while ( 1 )
  {
    v30 = v25;
    v31 = MiLockPageInline(v27);
    if ( *(_WORD *)(v29 + 8) || (unsigned __int8)((*(_BYTE *)(v29 + 10) & 7) - 2) > 2u )
    {
      _InterlockedAnd64((volatile signed __int64 *)v29, 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v31 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v31);
      if ( v25 != -1 )
        goto LABEL_83;
      goto LABEL_71;
    }
    if ( !(unsigned int)MiUnlinkPageFromList(v27, 0) )
      break;
    *(_QWORD *)v29 &= 0xC000000000000000uLL;
    if ( !(unsigned int)MiAddLockedPageCharge(v27, 0) )
    {
      MiPfnReferenceCountIsZero(v27, v5);
      goto LABEL_75;
    }
    v32 = v5 & 0x1F;
    LOBYTE(v33) = 1;
    v34 = (volatile signed __int32 *)(qword_14043B888 + 4 * (v5 >> 5));
    if ( v32 + 1 > 0x20 )
    {
      if ( (v5 & 0x1F) != 0 )
      {
        _InterlockedAnd(v34++, ~(((1 << (32 - (v5 & 0x1F))) - 1) << v32));
        v33 = 1LL - (32 - (unsigned int)(v5 & 0x1F));
        if ( v33 >= 0x20 )
        {
          v36 = v33 >> 5;
          v33 += -32LL * (v33 >> 5);
          do
          {
            *v34++ = 0;
            --v36;
          }
          while ( v36 );
        }
        if ( !v33 )
          goto LABEL_57;
      }
      v35 = -1 << v33;
    }
    else
    {
      v35 = ~(1 << v32);
    }
    _InterlockedAnd(v34, v35);
LABEL_57:
    _InterlockedAnd64((volatile signed __int64 *)v29, 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v31 < 2u )
    {
      v37 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v37->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v37);
    }
    __writecr8(v31);
    v25 = v5;
    if ( v30 != -1 )
      v25 = v30;
LABEL_71:
    v27 += 48LL;
    v29 += 48LL;
    ++v5;
    if ( v27 >= v28 )
    {
      v6 = v51;
      goto LABEL_81;
    }
  }
  MiDiscardTransitionPte(v27);
LABEL_75:
  _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v31 < 2u )
  {
    v39 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v39->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v39);
  }
  __writecr8(v31);
  v6 = 1;
  v51 = 1;
LABEL_81:
  if ( v25 == -1 )
  {
    v4 = v44;
    goto LABEL_18;
  }
LABEL_83:
  v15 = v47;
  v12 = v25;
  v16 = v5 - v25;
  v7 = v45;
LABEL_15:
  v45 = v16 + v7;
  v44 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(a1 + 16))(v12 << 12, v16 << 12);
  v4 = v44;
  if ( v17 )
  {
    v40 = 48 * v12 - 0x58000000000LL;
    v41 = v40 + 48 * v16;
    do
    {
      v42 = MiLockPageInline(v40);
      MiRemoveLockedPageChargeAndDecRef(v40);
      _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v42 < 2u )
      {
        v43 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v43->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v43);
      }
      __writecr8(v42);
      v40 += 48LL;
    }
    while ( v40 < v41 );
    v4 = v44;
  }
  if ( v4 >= 0 )
  {
    v6 = v51;
    v5 = v12 + v15 + v16;
    goto LABEL_18;
  }
LABEL_19:
  *a3 = v45;
  return (unsigned int)v4;
}

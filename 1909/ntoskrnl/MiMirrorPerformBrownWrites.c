/*
 * XREFs of MiMirrorPerformBrownWrites @ 0x1401601FC
 * Callers:
 *     MmDuplicateMemory @ 0x14059D3EC (MmDuplicateMemory.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1400265C0 (MiPfnReferenceCountIsZero.c)
 *     MiUnlinkPageFromList @ 0x1400B3280 (MiUnlinkPageFromList.c)
 *     MiAddLockedPageCharge @ 0x1400CBA88 (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CED60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiDiscardTransitionPteEx @ 0x14016817C (MiDiscardTransitionPteEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiMirrorPerformBrownWrites(__int64 a1, char a2, _QWORD *a3)
{
  unsigned int v3; // r12d
  ULONG_PTR v4; // rsi
  int v5; // r15d
  __int64 v6; // r13
  char v7; // bp
  unsigned __int64 v8; // r9
  unsigned __int64 i; // r8
  _QWORD *v10; // rdi
  __int64 j; // rax
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r9
  _DWORD *v15; // r8
  __int64 v16; // r14
  unsigned __int64 k; // rcx
  unsigned __int64 v18; // rbx
  _DWORD *v20; // r8
  __int64 v21; // r8
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rdx
  volatile signed __int32 *v24; // r8
  unsigned int v25; // eax
  unsigned __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rbp
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // r13
  unsigned __int64 v31; // rbx
  __int64 v32; // r12
  unsigned __int8 v33; // r15
  ULONG_PTR v34; // r9
  unsigned __int64 v35; // rdx
  volatile signed __int32 *v36; // r8
  unsigned int v37; // eax
  unsigned __int64 v38; // rcx
  struct _KPRCB *v39; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v41; // rcx
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // rbp
  unsigned __int8 v44; // r15
  struct _KPRCB *v45; // rcx
  int v46; // [rsp+20h] [rbp-68h]
  int v47; // [rsp+28h] [rbp-60h]
  __int64 v48; // [rsp+38h] [rbp-50h]
  int v52; // [rsp+A8h] [rbp+20h]

  v3 = 0;
  v46 = 0;
  v4 = 0LL;
  v52 = 0;
  v5 = 0;
  v48 = 0LL;
  v6 = 0LL;
  v7 = a2;
  while ( 1 )
  {
    v8 = v4 & -(__int64)(v4 < qword_140465F50);
    for ( i = qword_140465F50 - 1; i - v8 == -1LL; i = v21 - 1 )
    {
      v12 = -1LL;
LABEL_44:
      if ( !v8 )
        goto LABEL_10;
      v21 = v4 + 1;
      v8 = 0LL;
      if ( v4 + 1 > qword_140465F50 )
        v21 = qword_140465F50;
    }
    v10 = (_QWORD *)(qword_140465F58 + 8 * (v8 >> 6));
    for ( j = ((1LL << (v8 & 0x3F)) - 1) | ~*v10; j == -1; j = ~*v10 )
    {
      if ( (unsigned __int64)++v10 > qword_140465F58 + 8 * (i >> 6) )
        goto LABEL_41;
    }
    _BitScanForward64((unsigned __int64 *)&j, ~j);
    v12 = j + (((__int64)v10 - qword_140465F58) >> 3 << 6);
    if ( v12 > i )
    {
LABEL_41:
      v12 = -1LL;
      goto LABEL_44;
    }
    if ( v12 == -1LL )
      goto LABEL_44;
LABEL_10:
    if ( v12 < v4 || v12 == -1LL )
      goto LABEL_30;
    if ( qword_140465F50 > v12 )
    {
      v13 = v12;
      v14 = qword_140465F58 + 4 * ((unsigned __int64)(qword_140465F50 - 1) >> 5);
      v15 = (_DWORD *)(qword_140465F58 + 4 * (v12 >> 5));
      if ( v15 != (_DWORD *)v14 && (*v15 | dword_14037C900[v12 & 0x1F]) == -1 )
      {
        v13 = (v12 & 0xFFFFFFFFFFFFFFE0uLL) + 32;
        for ( ++v15; (unsigned __int64)v15 < v14 && *v15 == -1; ++v15 )
          v13 += 32LL;
      }
      while ( v13 < qword_140465F50 && _bittest64((const signed __int64 *)qword_140465F58, v13) )
        ++v13;
      v16 = 0LL;
      if ( v15 != (_DWORD *)v14 && (*v15 & ~dword_14037C900[v13 & 0x1F]) == 0 )
      {
        v16 = 32 - (v13 & 0x1F);
        if ( v16 == -1 )
          goto LABEL_24;
        v20 = v15 + 1;
        while ( (unsigned __int64)v20 < v14 && !*v20 )
        {
          ++v20;
          v16 += 32LL;
          if ( v16 == -1 )
            goto LABEL_24;
        }
      }
      for ( k = v16 + v13; k < qword_140465F50; ++v16 )
      {
        if ( _bittest64((const signed __int64 *)qword_140465F58, k) )
          break;
        if ( v16 == -1 )
          break;
        ++k;
      }
LABEL_24:
      if ( v16 )
        goto LABEL_25;
      goto LABEL_49;
    }
    v16 = 0LL;
LABEL_49:
    v13 = qword_140465F50;
LABEL_25:
    v18 = v13 - v12;
    v47 = v7 & 8;
    if ( (v7 & 8) == 0 )
      goto LABEL_26;
    if ( v5 != 1 )
      break;
    v22 = v12 & 0x1F;
    v23 = v18;
    v24 = (volatile signed __int32 *)(qword_140465F68 + 4 * (v12 >> 5));
    if ( v22 + v18 <= 0x20 )
    {
      if ( v18 == 32 )
      {
        *v24 = -1;
        goto LABEL_63;
      }
      v25 = ((1 << v18) - 1) << v22;
      goto LABEL_62;
    }
    if ( (v12 & 0x1F) != 0 )
    {
      _InterlockedOr(v24, ((1 << (32 - (v12 & 0x1F))) - 1) << v22);
      v23 = v18 - (32 - (unsigned int)(v12 & 0x1F));
      ++v24;
    }
    if ( v23 >= 0x20 )
    {
      v26 = v23 >> 5;
      v23 += -32LL * (v23 >> 5);
      do
      {
        *v24++ = -1;
        --v26;
      }
      while ( v26 );
    }
    if ( v23 )
    {
      v25 = (1 << v23) - 1;
LABEL_62:
      _InterlockedOr(v24, v25);
    }
LABEL_63:
    v4 = v18 + v16 + v12;
LABEL_29:
    if ( v4 >= qword_140465F50 )
      goto LABEL_30;
  }
  v4 = v12;
  v27 = 3 * v12;
  v16 = 0LL;
  v28 = -1LL;
  if ( v18 > 0x100 )
    v18 = 256LL;
  v29 = 16 * v27 - 0x58000000000LL;
  v30 = v29 + 48 * v18;
  v31 = v29 + 24;
  while ( 1 )
  {
    v32 = v28;
    v33 = MiLockPageInline(v29);
    if ( *(_WORD *)(v31 + 8) || (unsigned __int8)((*(_BYTE *)(v31 + 10) & 7) - 2) > 2u )
    {
      _InterlockedAnd64((volatile signed __int64 *)v31, 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v33 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v33);
      if ( v28 != -1 )
        goto LABEL_106;
      goto LABEL_94;
    }
    if ( !(unsigned int)MiUnlinkPageFromList(v29, 0) )
      break;
    *(_QWORD *)v31 &= 0xC000000000000000uLL;
    if ( !(unsigned int)MiAddLockedPageCharge(v29, 0) )
    {
      MiPfnReferenceCountIsZero(v29, v4);
      goto LABEL_98;
    }
    v34 = v4 & 0x1F;
    LOBYTE(v35) = 1;
    v36 = (volatile signed __int32 *)(qword_140465F68 + 4 * (v4 >> 5));
    if ( v34 + 1 > 0x20 )
    {
      if ( (v4 & 0x1F) != 0 )
      {
        _InterlockedAnd(v36++, ~(((1 << (32 - (v4 & 0x1F))) - 1) << v34));
        v35 = 1LL - (32 - (unsigned int)(v4 & 0x1F));
        if ( v35 >= 0x20 )
        {
          v38 = v35 >> 5;
          v35 += -32LL * (v35 >> 5);
          do
          {
            *v36++ = 0;
            --v38;
          }
          while ( v38 );
        }
        if ( !v35 )
          goto LABEL_80;
      }
      v37 = -1 << v35;
    }
    else
    {
      v37 = ~(1 << v34);
    }
    _InterlockedAnd(v36, v37);
LABEL_80:
    _InterlockedAnd64((volatile signed __int64 *)v31, 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v33 < 2u )
    {
      v39 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v39->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v39);
    }
    __writecr8(v33);
    v28 = v4;
    if ( v32 != -1 )
      v28 = v32;
LABEL_94:
    v29 += 48LL;
    v31 += 48LL;
    ++v4;
    if ( v29 >= v30 )
    {
      v5 = v52;
      goto LABEL_104;
    }
  }
  MiDiscardTransitionPteEx(v29, 0LL);
LABEL_98:
  _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v33 < 2u )
  {
    v41 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v41->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v41);
  }
  __writecr8(v33);
  v5 = 1;
  v52 = 1;
LABEL_104:
  if ( v28 == -1 )
  {
    v3 = v46;
    v6 = v48;
    v7 = a2;
    goto LABEL_29;
  }
LABEL_106:
  v6 = v48;
  v18 = v4 - v28;
  v12 = v28;
LABEL_26:
  v6 += v18;
  v48 = v6;
  v46 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(a1 + 16))(v12 << 12, v18 << 12);
  v3 = v46;
  if ( v47 )
  {
    v42 = 48 * v12 - 0x58000000000LL;
    v43 = v42 + 48 * v18;
    do
    {
      v44 = MiLockPageInline(v42);
      MiRemoveLockedPageChargeAndDecRef(v42);
      _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v44 < 2u )
      {
        v45 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v45->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v45);
      }
      __writecr8(v44);
      v42 += 48LL;
    }
    while ( v42 < v43 );
  }
  if ( v46 >= 0 )
  {
    v5 = v52;
    v7 = a2;
    v4 = v12 + v18 + v16;
    goto LABEL_29;
  }
LABEL_30:
  *a3 = v6;
  return v3;
}

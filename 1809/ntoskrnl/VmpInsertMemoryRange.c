/*
 * XREFs of VmpInsertMemoryRange @ 0x14030C6A0
 * Callers:
 *     VmCreateMemoryRange @ 0x1408B0140 (VmCreateMemoryRange.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC640 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x1400BD690 (RtlRbInsertNodeEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     VmpProcessContextLockExclusive @ 0x14030D0AC (VmpProcessContextLockExclusive.c)
 *     VmpFreeMemoryRanges @ 0x1408B073C (VmpFreeMemoryRanges.c)
 */

__int64 __fastcall VmpInsertMemoryRange(PEX_SPIN_LOCK SpinLock, _QWORD *a2, __int64 a3)
{
  __int64 *v3; // rdi
  void *v7; // r14
  unsigned __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r12
  unsigned __int64 *v12; // r11
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned int v15; // ebx
  int v16; // edx
  unsigned __int64 v17; // rax
  unsigned __int64 *v18; // rbx
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  int v21; // edx
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 *v29; // rdx
  __int64 **v30; // rcx
  __int64 ***v31; // rax
  __int64 **i; // rcx
  bool v33; // r8
  int v34; // ecx
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  bool v39; // r8
  int v40; // ecx
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = (__int64 *)a2[5];
  v7 = 0LL;
  v8 = 0LL;
  v9 = VmpProcessContextLockExclusive(SpinLock);
  v10 = *((_QWORD *)SpinLock + 9);
  v11 = v9;
  if ( v10 == -1 )
  {
    *((_QWORD *)SpinLock + 9) = a3;
  }
  else if ( v10 != a3 )
  {
    v15 = -1073740007;
    goto LABEL_81;
  }
  v12 = (unsigned __int64 *)(SpinLock + 2);
  v13 = *((_QWORD *)SpinLock + 2);
  v14 = *((_QWORD *)SpinLock + 1);
  if ( (v13 & 1) != 0 && v14 )
    v14 ^= (unsigned __int64)v12;
  v16 = v13 & 1;
  while ( v14 )
  {
    if ( (unsigned __int64)v3[7] < *(_QWORD *)(v14 + 24) )
    {
      v17 = *(_QWORD *)v14;
    }
    else
    {
      if ( (unsigned __int64)v3[6] <= *(_QWORD *)(v14 + 32) )
        goto LABEL_21;
      v17 = *(_QWORD *)(v14 + 8);
    }
    if ( v16 && v17 )
      v14 ^= v17;
    else
      v14 = v17;
  }
  v18 = (unsigned __int64 *)(SpinLock + 6);
  v19 = *((_QWORD *)SpinLock + 4);
  v20 = *((_QWORD *)SpinLock + 3);
  if ( (v19 & 1) != 0 && v20 )
    v20 ^= (unsigned __int64)v18;
  v21 = v19 & 1;
  if ( !v20 )
  {
LABEL_33:
    v27 = *((_QWORD *)SpinLock + 2);
    v28 = *v12;
    if ( (v27 & 1) != 0 && v28 )
      v28 ^= (unsigned __int64)v12;
    v33 = 0;
    v34 = v27 & 1;
    if ( v28 )
    {
      v35 = v3[6];
      while ( 1 )
      {
        if ( v35 > *(_QWORD *)(v28 + 32) || v35 >= *(_QWORD *)(v28 + 24) )
        {
          v36 = *(_QWORD *)(v28 + 8);
          if ( v34 )
          {
            if ( !v36 )
              goto LABEL_59;
            v36 ^= v28;
          }
          if ( !v36 )
          {
LABEL_59:
            v33 = 1;
            break;
          }
        }
        else
        {
          v36 = *(_QWORD *)v28;
          if ( v34 )
          {
            if ( !v36 )
              goto LABEL_53;
            v36 ^= v28;
          }
          if ( !v36 )
          {
LABEL_53:
            v33 = 0;
            break;
          }
        }
        v28 = v36;
      }
    }
    RtlRbInsertNodeEx((unsigned __int64)(SpinLock + 2), v28, v33, v3 + 3);
    if ( !v8 )
    {
      v37 = *((_QWORD *)SpinLock + 4);
      v38 = *v18;
      if ( (v37 & 1) != 0 && v38 )
        v38 ^= (unsigned __int64)v18;
      v39 = 0;
      v40 = v37 & 1;
      if ( v38 )
      {
        v41 = a2[3];
        while ( 1 )
        {
          if ( v41 > *(_QWORD *)(v38 + 32) || v41 >= *(_QWORD *)(v38 + 24) )
          {
            v42 = *(_QWORD *)(v38 + 8);
            if ( v40 )
            {
              if ( !v42 )
                goto LABEL_78;
              v42 ^= v38;
            }
            if ( !v42 )
            {
LABEL_78:
              v39 = 1;
              break;
            }
          }
          else
          {
            v42 = *(_QWORD *)v38;
            if ( v40 )
            {
              if ( !v42 )
                goto LABEL_72;
              v42 ^= v38;
            }
            if ( !v42 )
            {
LABEL_72:
              v39 = 0;
              break;
            }
          }
          v38 = v42;
        }
      }
      RtlRbInsertNodeEx((unsigned __int64)(SpinLock + 6), v38, v39, a2);
    }
    v15 = 0;
    goto LABEL_81;
  }
  v22 = a2[4];
  while ( 1 )
  {
    v23 = *(_QWORD *)(v20 + 24);
    if ( v22 >= v23 )
      break;
    v26 = *(_QWORD *)v20;
LABEL_28:
    if ( v21 && v26 )
      v20 ^= v26;
    else
      v20 = v26;
    if ( !v20 )
      goto LABEL_33;
  }
  v24 = a2[3];
  v25 = *(_QWORD *)(v20 + 32);
  if ( v24 > v25 )
  {
    v26 = *(_QWORD *)(v20 + 8);
    goto LABEL_28;
  }
  v8 = v20;
  if ( v23 == v24 && v25 == v22 )
  {
    v29 = (__int64 *)*v3;
    v30 = (__int64 **)v3[1];
    if ( *(__int64 **)(*v3 + 8) != v3 || *v30 != v3 )
      __fastfail(3u);
    *v30 = v29;
    v29[1] = (__int64)v30;
    v3[2] = v20;
    v31 = (__int64 ***)(v20 + 40);
    for ( i = *v31; i != (__int64 **)v31; i = (__int64 **)*i )
    {
      if ( (unsigned __int64)i[6] > v3[6] )
        break;
    }
    v7 = a2;
    *i[1] = (__int64)v3;
    v3[1] = (__int64)i[1];
    i[1] = v3;
    *v3 = (__int64)i;
    goto LABEL_33;
  }
LABEL_21:
  v15 = -1073741800;
LABEL_81:
  if ( v11 != -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v11 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8((unsigned __int8)v11);
  }
  if ( v7 )
    VmpFreeMemoryRanges(v7);
  return v15;
}

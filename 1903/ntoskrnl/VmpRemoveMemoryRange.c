/*
 * XREFs of VmpRemoveMemoryRange @ 0x14032B200
 * Callers:
 *     VmDeleteMemoryRange @ 0x1408ED480 (VmDeleteMemoryRange.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x140063870 (RtlRbRemoveNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     VmpFlushTbVaRange @ 0x14032A1FC (VmpFlushTbVaRange.c)
 *     VmpProcessContextLockExclusive @ 0x14032AD80 (VmpProcessContextLockExclusive.c)
 *     VmpVaRangeNumberOfGpaRanges @ 0x14032B8D8 (VmpVaRangeNumberOfGpaRanges.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     VmpFreeMemoryRanges @ 0x1408EDBD4 (VmpFreeMemoryRanges.c)
 */

__int64 __fastcall VmpRemoveMemoryRange(
        PEX_SPIN_LOCK SpinLock,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5)
{
  void *v5; // rsi
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r12
  unsigned int v11; // ebx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *v19; // rdi
  _QWORD *v20; // rbx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r9
  bool v26; // zf
  _QWORD v27[13]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD *v28; // [rsp+A0h] [rbp+8h]
  __int64 v29; // [rsp+A8h] [rbp+10h] BYREF
  PVOID P; // [rsp+B0h] [rbp+18h]
  __int64 v31; // [rsp+B8h] [rbp+20h] BYREF

  v5 = 0LL;
  v31 = 0LL;
  v28 = 0LL;
  P = 0LL;
  v6 = a4 + a2 - 1;
  v7 = a3 + a4 - 1;
  v29 = VmpProcessContextLockExclusive(SpinLock);
  if ( *((_QWORD *)SpinLock + 9) != a5 )
  {
    v11 = -1073740007;
    goto LABEL_18;
  }
  memset(v27, 0, 24);
  VmpFlushTbVaRange(SpinLock, a2, v6, v27, &v31, (unsigned __int64 *)&v29);
  v12 = (unsigned __int64)(SpinLock + 2);
  v13 = *((_QWORD *)SpinLock + 1);
  if ( (SpinLock[4] & 1) != 0 && v13 )
    v13 ^= v12;
  while ( 1 )
  {
    if ( !v13 )
      goto LABEL_16;
    v14 = *(_QWORD *)(v13 + 32);
    if ( a3 <= v14 )
      break;
    v16 = *(_QWORD *)(v13 + 8);
LABEL_11:
    if ( (SpinLock[4] & 1) != 0 && v16 )
      v13 ^= v16;
    else
      v13 = v16;
  }
  v15 = *(_QWORD *)(v13 + 24);
  if ( a3 < v15 )
  {
    v16 = *(_QWORD *)v13;
    goto LABEL_11;
  }
  v19 = (_QWORD *)(v13 - 24);
  if ( v13 == 24 )
  {
LABEL_16:
    v11 = -1073741172;
    goto LABEL_17;
  }
  v20 = (_QWORD *)v19[2];
  if ( v15 != a3 || v14 != v7 || v20[3] != a2 || v20[4] != v6 )
  {
    if ( (unsigned __int64)VmpVaRangeNumberOfGpaRanges(v19[2]) > 1 )
    {
LABEL_45:
      v11 = -1073741637;
      goto LABEL_17;
    }
    if ( a3 == v24 && a2 == v20[3] )
    {
      v26 = v7 == v25;
      if ( v7 >= v25 )
      {
LABEL_52:
        if ( v26 && v6 == v20[4] && a3 > v24 && a2 > v20[3] )
        {
          v19[7] = a3 - 1;
          v20[4] = a2 - 1;
          goto LABEL_57;
        }
        goto LABEL_45;
      }
      if ( v6 < v20[4] )
      {
        v19[6] = v7 + 1;
        v20[3] = v6 + 1;
        goto LABEL_57;
      }
    }
    v26 = v7 == v25;
    goto LABEL_52;
  }
  RtlRbRemoveNode((unsigned __int64 *)SpinLock + 1, v13);
  v19[5] = -1LL;
  v21 = *v19;
  v22 = (_QWORD *)v19[1];
  if ( *(_QWORD **)(*v19 + 8LL) != v19 || (_QWORD *)*v22 != v19 )
    __fastfail(3u);
  *v22 = v21;
  *(_QWORD *)(v21 + 8) = v22;
  P = v19;
  if ( (_QWORD *)v20[5] == v20 + 5 )
  {
    RtlRbRemoveNode((unsigned __int64 *)SpinLock + 3, (unsigned __int64)v20);
    v20[2] = -1LL;
    v23 = *(_QWORD *)v12;
    v28 = v20;
    if ( (SpinLock[4] & 1) == 0 )
      goto LABEL_41;
    if ( !v23 )
      goto LABEL_42;
    v23 ^= v12;
LABEL_41:
    if ( !v23 )
LABEL_42:
      *((_QWORD *)SpinLock + 9) = -1LL;
  }
LABEL_57:
  ++*((_QWORD *)SpinLock + 5);
  v11 = 0;
LABEL_17:
  v5 = v28;
LABEL_18:
  if ( v29 != -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v29 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8((unsigned __int8)v29);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v5 )
    VmpFreeMemoryRanges(v5);
  return v11;
}

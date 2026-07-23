/*
 * XREFs of MiMakeImagePageOk @ 0x1402C47EC
 * Callers:
 *     MiFinishHardFault @ 0x14002E010 (MiFinishHardFault.c)
 *     MiHandleTransitionFault @ 0x14003B680 (MiHandleTransitionFault.c)
 *     MiResolveProtoPteFault @ 0x140042E60 (MiResolveProtoPteFault.c)
 * Callees:
 *     MiReleaseFaultState @ 0x14001AED0 (MiReleaseFaultState.c)
 *     MiComputeImagePteIndex @ 0x14001B70C (MiComputeImagePteIndex.c)
 *     MiGetSessionIdForVa @ 0x14001BC8C (MiGetSessionIdForVa.c)
 *     MiIsFaultPteIntact @ 0x14002D02C (MiIsFaultPteIntact.c)
 *     MiRelockFaultState @ 0x14002D290 (MiRelockFaultState.c)
 *     MiObtainProtoReference @ 0x14002DD34 (MiObtainProtoReference.c)
 *     MiRelockProtoPoolPage @ 0x14002DDDC (MiRelockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x14002DFAC (MiAddLockedPageCharge.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030B20 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiStartingOffset @ 0x140031170 (MiStartingOffset.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiDereferenceControlAreaProbe @ 0x140094C2C (MiDereferenceControlAreaProbe.c)
 *     MiReturnPfnReferenceCount @ 0x14013B8B0 (MiReturnPfnReferenceCount.c)
 *     MiDiscardTransitionPte @ 0x14015839C (MiDiscardTransitionPte.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiValidateImagePfn @ 0x1405A9854 (MiValidateImagePfn.c)
 */

__int64 __fastcall MiMakeImagePageOk(__int64 *a1, unsigned __int64 a2, __int64 a3, ULONG_PTR a4, __int64 a5)
{
  __int64 v5; // rdi
  __int64 v9; // r14
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // r12
  struct _KPRCB *CurrentPrcb; // rcx
  _KPROCESS *Process; // rsi
  unsigned int SessionIdForVa; // ebx
  int v16; // edi
  int v17; // eax
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int8 CurrentIrql; // cl
  __int64 v22; // [rsp+40h] [rbp-68h]
  unsigned __int64 v23; // [rsp+48h] [rbp-60h]
  __int64 v24; // [rsp+50h] [rbp-58h]
  char v25; // [rsp+B0h] [rbp+8h] BYREF
  unsigned __int64 v26; // [rsp+B8h] [rbp+10h]
  __int64 v27; // [rsp+C0h] [rbp+18h] BYREF
  int v28; // [rsp+C8h] [rbp+20h] BYREF

  v27 = a3;
  v26 = a2;
  v5 = a1[7];
  v23 = *a1;
  v22 = 0LL;
  v24 = v5;
  if ( (*(_QWORD *)(a4 + 24) & 0x4000000000000000LL) != 0 )
    return 3221226548LL;
  v9 = *(_QWORD *)(a4 + 16);
  if ( qword_14043B180 && (v9 & 0x10) == 0 )
    v9 &= ~qword_14043B180;
  v10 = v9 >> 16;
  v11 = *(_QWORD *)v10;
  if ( (MiFlags & 0x8000) == 0
    || (*(_DWORD *)(v11 + 92) & 0x180000) == 0
    || (*(_BYTE *)(v10 + 34) & 2) != 0 && (*(_DWORD *)(v11 + 56) & 0x4000000) != 0 )
  {
    return 3221226536LL;
  }
  if ( (*(_BYTE *)(a4 + 34) & 7) == 2 && !*(_WORD *)(a4 + 32) )
  {
    if ( !(unsigned int)MiUnlinkPageFromList(a4, 0) )
    {
      MiDiscardTransitionPte(a4);
      return 3221226548LL;
    }
    *(_QWORD *)(a4 + 24) &= 0xC000000000000000uLL;
  }
  MiAddLockedPageCharge(a4, 1);
  _InterlockedAdd64((volatile signed __int64 *)(v11 + 112), 1uLL);
  _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v12 = a5;
  MiObtainProtoReference(a5, 0);
  MiUnlockProtoPoolPage(v12, 0x11u);
  if ( v5 )
  {
    v22 = MiReleaseFaultState(a1 + 7, 1, &v25);
  }
  else
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(1uLL);
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  SessionIdForVa = MiGetSessionIdForVa(v23);
  v16 = MiStartingOffset((__int64 *)v10, v26, SessionIdForVa);
  v17 = MiComputeImagePteIndex(a4, SessionIdForVa);
  v18 = MiValidateImagePfn(v11, v16, (_DWORD)Process, v17);
  MiDereferenceControlAreaProbe((volatile signed __int64 *)v11, 0);
  if ( v24 )
  {
    MiRelockFaultState(a1 + 7, v22);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  }
  MiRelockProtoPoolPage(v12, 0LL);
  MiReturnPfnReferenceCount(v12);
  v28 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v28, v19, v20);
    while ( *(__int64 *)(a4 + 24) < 0 );
  }
  if ( v18 >= 0
    && ((*(_QWORD *)(a4 + 24) & 0x4000000000000000LL) != 0
     || !v24
     || !(unsigned int)MiIsFaultPteIntact((__int64)a1, *a1, v26, &v27)) )
  {
    v18 = -1073740748;
  }
  MiRemoveLockedPageChargeAndDecRef(a4);
  return (unsigned int)v18;
}

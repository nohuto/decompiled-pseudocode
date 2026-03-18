/*
 * XREFs of MmSetAddressRangeModifiedEx @ 0x14005E570
 * Callers:
 *     CcFlushCachePriv @ 0x1400773D0 (CcFlushCachePriv.c)
 *     CcZeroDataInCache @ 0x1400FEBC4 (CcZeroDataInCache.c)
 *     CcPurgeAndClearCacheSection @ 0x1401263F4 (CcPurgeAndClearCacheSection.c)
 *     MmSetAddressRangeModified @ 0x140136020 (MmSetAddressRangeModified.c)
 *     CcUnpinRepinnedBcb @ 0x14027D570 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiMakeProtectionMask @ 0x1400504A0 (MiMakeProtectionMask.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiCaptureDirtyBitToPfn @ 0x14005C224 (MiCaptureDirtyBitToPfn.c)
 *     MiLockWorkingSetOptimal @ 0x14005D668 (MiLockWorkingSetOptimal.c)
 *     MiWriteValidPteNewProtection @ 0x14005E890 (MiWriteValidPteNewProtection.c)
 *     MiGetSystemCacheReverseMap @ 0x140075F40 (MiGetSystemCacheReverseMap.c)
 *     MiReleasePageFileInfo @ 0x14008A250 (MiReleasePageFileInfo.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1400FABB4 (MI_TIGHTER_PERMISSIONS.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall MmSetAddressRangeModifiedEx(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // r12
  int v4; // edi
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rbx
  BOOL v13; // eax
  __int64 DeepFreezeStartTime; // rdx
  _KPROCESS *Process; // rcx
  __int64 v16; // r8
  __int64 v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // r10
  __int64 v20; // r9
  __int64 v21; // rbp
  unsigned __int8 CurrentIrql; // r13
  unsigned __int64 v23; // r11
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v28; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  int v30; // eax
  __int64 v31; // rbx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  unsigned __int8 v34; // [rsp+20h] [rbp-128h]
  _BYTE v35[3]; // [rsp+21h] [rbp-127h] BYREF
  int v36; // [rsp+24h] [rbp-124h] BYREF
  int ProtectionMask; // [rsp+28h] [rbp-120h]
  int v38; // [rsp+2Ch] [rbp-11Ch]
  __int64 v39; // [rsp+30h] [rbp-118h] BYREF
  __int64 v40; // [rsp+38h] [rbp-110h]
  __int64 v41; // [rsp+40h] [rbp-108h]
  __int64 v42; // [rsp+48h] [rbp-100h]
  int v43; // [rsp+50h] [rbp-F8h] BYREF
  __int16 v44; // [rsp+54h] [rbp-F4h]
  __int16 v45; // [rsp+56h] [rbp-F2h]
  __int64 v46; // [rsp+58h] [rbp-F0h]
  __int64 v47; // [rsp+60h] [rbp-E8h]
  __int64 v48; // [rsp+68h] [rbp-E0h]
  _BYTE v49[152]; // [rsp+70h] [rbp-D8h] BYREF

  v2 = a2 - 1;
  v45 = 0;
  memset(v49, 0, sizeof(v49));
  v34 = 0;
  ProtectionMask = MiMakeProtectionMask(4u);
  v46 = 20LL;
  v4 = ProtectionMask;
  v43 = 0;
  v44 = 0;
  v47 = 0LL;
  v48 = 0LL;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = (((a1 + v2) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v8 = 0LL;
  v41 = MiLockWorkingSetOptimal((__int64)&unk_14046A1C0, v5, v35);
  v10 = *(_QWORD *)(MiGetSystemCacheReverseMap(v7, v9) + 24);
  v11 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v10 & 1) == 0 )
    v11 = v10;
  v42 = *(_QWORD *)(qword_140465E88 + 8LL * (*(_WORD *)(*(_QWORD *)v11 + 60LL) & 0x3FF)) + 0x2000LL;
  do
  {
    v12 = *(_QWORD *)v5;
    v13 = MiPteInShadowRange(v5);
    v16 = v13;
    if ( v13 )
    {
      if ( (MiFlags & 0xC00000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 && (v12 & 1) != 0 && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          DeepFreezeStartTime = Process[2].DeepFreezeStartTime;
          if ( DeepFreezeStartTime )
          {
            v28 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v5 >> 3) & 0x1FF));
            DeepFreezeStartTime = v12 | 0x20;
            Process = (_KPROCESS *)(unsigned __int8)v28;
            LOBYTE(Process) = v28 & 0x20;
            if ( (v28 & 0x20) == 0 )
              DeepFreezeStartTime = v12;
            v12 = DeepFreezeStartTime;
            if ( (v28 & 0x42) != 0 )
              v12 = DeepFreezeStartTime | 0x42;
          }
        }
      }
    }
    v39 = v12;
    if ( (v12 & 1) != 0 )
    {
      v38 = 0;
      v17 = 0LL;
      v18 = MI_READ_PTE_LOCK_FREE(&v39);
      v21 = v20 + 48 * (v19 & (v18 >> 12));
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v23);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v36 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v36);
        while ( *(__int64 *)(v21 + 24) < 0 );
      }
      v24 = (*(_BYTE *)(v21 + 34) & 0x10) == 0;
      v25 = *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(v21 + 40) >> 40) & 0x3FFLL));
      v40 = v25;
      if ( v24 || (*(_DWORD *)(v21 + 16) & 0x400LL) == 0 )
      {
        v26 = MiCaptureDirtyBitToPfn(v21);
        v25 = v40;
        v17 = v26;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v25 = v40;
      }
      __writecr8(CurrentIrql);
      if ( v17 )
        MiReleasePageFileInfo(v25, v17, 0LL);
      v4 = ProtectionMask;
      if ( ProtectionMask != 2 || (v12 & 0x800) == 0 )
      {
        if ( (v12 & 0x42) == 0 )
          goto LABEL_17;
        MiWriteValidPteNewProtection(v5, v12 & 0xFFFFFFFFFFFFFFBDuLL);
        v34 = 1;
LABEL_16:
        MiInsertTbFlushEntry((__int64)&v43, v7, 1LL, 0);
        goto LABEL_17;
      }
      v8 ^= (v8 ^ MI_READ_PTE_LOCK_FREE(&v39)) & 0xFFFFFFFFF000LL;
      MiWriteValidPteNewProtection(v5, v8);
      if ( ((MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0) && !(unsigned int)MI_TIGHTER_PERMISSIONS(v12, v8) )
        v30 = v38;
      else
        v30 = 1;
      if ( (v12 & 0x42) != 0 )
        v34 = 1;
      if ( v30 )
        goto LABEL_16;
    }
    else if ( v4 == 2 && (v12 & 8) == 0 )
    {
      v31 = v12 | 8;
      v39 = v31;
      v32 = v31;
      if ( !(_DWORD)v16 )
        goto LABEL_63;
      if ( !(unsigned int)MiPteHasShadow(Process) )
      {
        v32 = v31;
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
          && (v31 & 1) != 0 )
        {
          v32 = v31 | 0x8000000000000000uLL;
        }
LABEL_63:
        *(_QWORD *)v5 = v32;
        goto LABEL_17;
      }
      v33 = v31;
      if ( !HIBYTE(word_1404658EC) && (v31 & 1) != 0 )
        v33 = v31 | 0x8000000000000000uLL;
      *(_QWORD *)v5 = v33;
      MiWritePteShadow(v5, v33);
    }
LABEL_17:
    v5 += 8LL;
    v7 += 4096LL;
  }
  while ( v5 <= v6 );
  MiFlushTbList(&v43, DeepFreezeStartTime, v16, 0xFFFFFA8000000000uLL);
  MiUnlockPageTableInternal(v42);
  MiUnlockWorkingSetShared(v42, v35[0]);
  return v34;
}

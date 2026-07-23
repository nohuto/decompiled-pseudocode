/*
 * XREFs of MmSetAddressRangeModifiedEx @ 0x140086770
 * Callers:
 *     CcFlushCachePriv @ 0x14001EA90 (CcFlushCachePriv.c)
 *     CcZeroDataInCache @ 0x1400E0844 (CcZeroDataInCache.c)
 *     CcPurgeAndClearCacheSection @ 0x1400E7978 (CcPurgeAndClearCacheSection.c)
 *     MmSetAddressRangeModified @ 0x1401343D0 (MmSetAddressRangeModified.c)
 *     CcUnpinRepinnedBcb @ 0x140269FC0 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiMakeProtectionMask @ 0x140074490 (MiMakeProtectionMask.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x140086738 (MI_TIGHTER_PERMISSIONS.c)
 *     MiCaptureDirtyBitToPfn @ 0x140087900 (MiCaptureDirtyBitToPfn.c)
 *     MiWriteValidPteNewProtection @ 0x140087960 (MiWriteValidPteNewProtection.c)
 *     MiLockWorkingSetOptimal @ 0x140088334 (MiLockWorkingSetOptimal.c)
 *     MiGetSystemCacheReverseMap @ 0x1400ADE90 (MiGetSystemCacheReverseMap.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmSetAddressRangeModifiedEx(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // r12
  unsigned __int8 v4; // bp
  int v5; // edi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r15
  __int64 v9; // rsi
  __int64 SystemCacheReverseMap; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  __int64 v15; // rbx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r10
  __int64 v22; // r9
  __int64 v23; // rbp
  unsigned __int8 CurrentIrql; // r13
  unsigned __int64 v25; // r11
  bool v26; // zf
  struct _KEVENT *v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  int v33; // eax
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  char v37; // [rsp+20h] [rbp-128h]
  unsigned __int8 v38[3]; // [rsp+21h] [rbp-127h] BYREF
  int v39; // [rsp+24h] [rbp-124h] BYREF
  int ProtectionMask; // [rsp+28h] [rbp-120h]
  int v41; // [rsp+2Ch] [rbp-11Ch]
  __int64 v42; // [rsp+30h] [rbp-118h] BYREF
  struct _KEVENT *v43; // [rsp+38h] [rbp-110h]
  __int64 v44; // [rsp+40h] [rbp-108h]
  __int64 v45; // [rsp+48h] [rbp-100h]
  int v46; // [rsp+50h] [rbp-F8h] BYREF
  __int16 v47; // [rsp+54h] [rbp-F4h]
  __int64 v48; // [rsp+58h] [rbp-F0h]
  __int64 v49; // [rsp+60h] [rbp-E8h]
  __int64 v50; // [rsp+68h] [rbp-E0h]

  v3 = a2 - 1;
  v4 = 0;
  v37 = 0;
  ProtectionMask = MiMakeProtectionMask(4u);
  v48 = 20LL;
  v5 = ProtectionMask;
  v46 = 0;
  v47 = 0;
  v49 = 0LL;
  v50 = 0LL;
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = (((a1 + v3) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v9 = 0LL;
  v44 = MiLockWorkingSetOptimal(&unk_14043F700, v6, v38);
  SystemCacheReverseMap = MiGetSystemCacheReverseMap(v8);
  v11 = 0x8000000000000000uLL;
  v12 = *(_QWORD *)(SystemCacheReverseMap + 24);
  v13 = v12 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v12 & 1) == 0 )
    v13 = *(_QWORD *)(SystemCacheReverseMap + 24);
  v45 = *(_QWORD *)(qword_14043B808 + 8LL * (*(_WORD *)(*(_QWORD *)v13 + 60LL) & 0x3FF)) + 7424LL;
  v14 = v6;
  do
  {
    v15 = *(_QWORD *)v6;
    if ( v14 >= 0xFFFFF6FB7DBED000uLL
      && v14 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v15 & 1) != 0
      && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
    {
      v29 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v29 )
      {
        v30 = *(_QWORD *)(v29 + 8 * ((v6 >> 3) & 0x1FF));
        v31 = v15 | 0x20;
        if ( (v30 & 0x20) == 0 )
          v31 = *(_QWORD *)v6;
        v15 = v31;
        if ( (v30 & 0x42) != 0 )
          v15 = v31 | 0x42;
      }
    }
    v42 = v15;
    if ( (v15 & 1) != 0 )
    {
      v41 = 0;
      v17 = 0LL;
      v18 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v42);
      v23 = v22 + 48 * (v21 & (v18 >> 12));
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v25);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v39 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v39, v19, v20);
        while ( *(__int64 *)(v23 + 24) < 0 );
      }
      v26 = (*(_BYTE *)(v23 + 34) & 0x10) == 0;
      v27 = *(struct _KEVENT **)(qword_14043B808 + 8 * ((*(_QWORD *)(v23 + 40) >> 40) & 0x3FFLL));
      v43 = v27;
      if ( v26 || (*(_DWORD *)(v23 + 16) & 0x400LL) == 0 )
      {
        v28 = MiCaptureDirtyBitToPfn(v23);
        v27 = v43;
        v17 = v28;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v27 = v43;
      }
      __writecr8(CurrentIrql);
      if ( v17 )
        MiReleasePageFileInfo(v27, v17, 0);
      v5 = ProtectionMask;
      if ( ProtectionMask == 2 && (v15 & 0x800) != 0 )
      {
        v9 ^= (v9 ^ MI_READ_PTE_LOCK_FREE((unsigned __int64)&v42)) & 0xFFFFFFFFF000LL;
        MiWriteValidPteNewProtection(v6, v9);
        if ( ((MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0) && !MI_TIGHTER_PERMISSIONS(v15, v9) )
          v33 = v41;
        else
          v33 = 1;
        if ( (v15 & 0x42) != 0 )
        {
          v4 = 1;
          v37 = 1;
        }
        else
        {
          v4 = v37;
        }
        if ( !v33 )
          goto LABEL_20;
      }
      else
      {
        if ( (v15 & 0x42) == 0 )
        {
          v4 = v37;
          goto LABEL_20;
        }
        MiWriteValidPteNewProtection(v6, v15 & 0xFFFFFFFFFFFFFFBDuLL);
        v4 = 1;
        v37 = 1;
      }
      MiInsertTbFlushEntry(&v46, v8, 1LL);
LABEL_20:
      v11 = 0x8000000000000000uLL;
      goto LABEL_7;
    }
    if ( v5 == 2 && (v15 & 8) == 0 )
    {
      v34 = v15 | 8;
      v42 = v34;
      if ( MiPteInShadowRange(v6) )
      {
        if ( (unsigned int)MiPteHasShadow(v36, v35) )
        {
          if ( !HIBYTE(word_14043B26C) && (v34 & 1) != 0 )
            v35 |= v11;
          *(_QWORD *)v6 = v35;
          MiWritePteShadow(v6);
          goto LABEL_20;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
          && (v34 & 1) != 0 )
        {
          v35 |= v11;
        }
      }
      *(_QWORD *)v6 = v35;
    }
LABEL_7:
    v6 += 8LL;
    v8 += 4096LL;
    v14 = v6;
  }
  while ( v6 <= v7 );
  MiFlushTbList(&v46, 0xFFFFF6FB7DBED7F8uLL, v11, 0xFFFFFA8000000000uLL);
  MiUnlockPageTableInternal(v45, v44);
  MiUnlockWorkingSetShared(v45, v38[0]);
  return v4;
}

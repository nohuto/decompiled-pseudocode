/*
 * XREFs of MiIdealClusterPage @ 0x1402C6E04
 * Callers:
 *     MiHandleTransitionFault @ 0x14003B680 (MiHandleTransitionFault.c)
 * Callees:
 *     MiReleaseFaultState @ 0x14001AED0 (MiReleaseFaultState.c)
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiGet64KPage @ 0x14002B8B0 (MiGet64KPage.c)
 *     MiInitializePageColorBase @ 0x14002C4C0 (MiInitializePageColorBase.c)
 *     MiIsFaultPteIntact @ 0x14002D02C (MiIsFaultPteIntact.c)
 *     MiRelockFaultState @ 0x14002D290 (MiRelockFaultState.c)
 *     MiObtainProtoReference @ 0x14002DD34 (MiObtainProtoReference.c)
 *     MiRelockProtoPoolPage @ 0x14002DDDC (MiRelockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x14002DFAC (MiAddLockedPageCharge.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x1400304A0 (MiRemoveLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030B20 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x140042770 (MiGetProtoPteAddress.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiFindContiguousPages @ 0x14009A050 (MiFindContiguousPages.c)
 *     MiPageToNode @ 0x14009CF50 (MiPageToNode.c)
 *     MiCopyPage @ 0x1400B1B90 (MiCopyPage.c)
 *     MiReleaseFreshPage @ 0x1400E1084 (MiReleaseFreshPage.c)
 *     MiReleaseNonPagedResources @ 0x1400E1968 (MiReleaseNonPagedResources.c)
 *     MiReturnPfnReferenceCount @ 0x14013B8B0 (MiReturnPfnReferenceCount.c)
 *     MiAcquireNonPagedResources @ 0x14013DB2C (MiAcquireNonPagedResources.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memcmp @ 0x140196340 (memcmp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiArePageContentsZero @ 0x1402BF958 (MiArePageContentsZero.c)
 *     MiSwapHardFaultPage @ 0x1402D014C (MiSwapHardFaultPage.c)
 */

volatile signed __int32 *__fastcall MiIdealClusterPage(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int8 *a5,
        void *a6,
        _BYTE *a7)
{
  volatile signed __int32 *v7; // rbx
  char v9; // r13
  __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r12
  __int64 ProtoPteAddress; // rax
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r9
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rsi
  unsigned __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 *v25; // r10
  __int64 v26; // r11
  unsigned __int64 v27; // r11
  volatile signed __int64 *v28; // r14
  unsigned int v29; // r9d
  __int64 *v30; // rcx
  __int64 v31; // rdx
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // r10
  unsigned __int64 v34; // rax
  unsigned __int8 *v35; // r15
  unsigned int v36; // r11d
  int v37; // r13d
  unsigned int v38; // edx
  __int16 v39; // cx
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int64 CurrentIrql; // r13
  __int64 v46; // rax
  struct _KPRCB *v47; // rcx
  int ContiguousPages; // r13d
  __int64 v49; // r14
  __int64 v50; // rbx
  ULONG_PTR v51; // rcx
  ULONG_PTR v52; // r13
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // r13
  bool v55; // zf
  unsigned __int8 v56; // r12
  struct _KPRCB *CurrentPrcb; // rcx
  int v58; // eax
  bool v59; // r12
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r14
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // r8
  unsigned int v68; // [rsp+68h] [rbp-98h]
  ULONG_PTR v69; // [rsp+68h] [rbp-98h]
  char v70[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v71; // [rsp+78h] [rbp-88h]
  unsigned __int8 *v72; // [rsp+80h] [rbp-80h]
  int v73; // [rsp+88h] [rbp-78h] BYREF
  __int64 v74; // [rsp+90h] [rbp-70h] BYREF
  __int64 v75; // [rsp+98h] [rbp-68h] BYREF
  __int64 *v76; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v77; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v78; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v79; // [rsp+B8h] [rbp-48h]
  void *Buf2; // [rsp+C0h] [rbp-40h]
  ULONG_PTR v81; // [rsp+C8h] [rbp-38h]
  _BYTE *v82; // [rsp+D0h] [rbp-30h]
  __int64 v83; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v84; // [rsp+E0h] [rbp-20h] BYREF
  volatile signed __int32 *v85; // [rsp+E8h] [rbp-18h]
  __int64 v86; // [rsp+F0h] [rbp-10h]
  __int64 v87; // [rsp+F8h] [rbp-8h]
  volatile signed __int32 *v88; // [rsp+100h] [rbp+0h] BYREF
  __int16 v89; // [rsp+108h] [rbp+8h]
  unsigned __int16 v90; // [rsp+10Ah] [rbp+Ah]
  __int128 Buf1; // [rsp+110h] [rbp+10h] BYREF
  __int128 v92; // [rsp+120h] [rbp+20h]
  __int128 v93; // [rsp+130h] [rbp+30h]
  _OWORD v94[3]; // [rsp+140h] [rbp+40h] BYREF
  char v95; // [rsp+170h] [rbp+70h] BYREF

  v7 = (volatile signed __int32 *)a5;
  v9 = 0;
  v75 = a2;
  v87 = a3;
  v76 = a1;
  v12 = a1[7];
  v13 = *((_DWORD *)a1 + 20);
  v14 = *a1;
  LODWORD(v71) = v13 >> 6;
  *a7 = 0;
  v82 = a7;
  v77 = a4;
  v15 = ((v14 & 0xFFFFFFFFFFFFF000uLL) - (v14 & 0xFFFFFFFFFFFF0000uLL)) >> 12;
  v55 = (*(_DWORD *)(a2 + 48) & 0x4000) == 0;
  v85 = (volatile signed __int32 *)a5;
  Buf2 = a6;
  v74 = v12;
  if ( v55 )
  {
    ProtoPteAddress = MiGetProtoPteAddress(a2, v14 >> 12, 4, &v83);
    if ( !ProtoPteAddress || !v83 || ProtoPteAddress != a3 )
      return v7;
    v17 = *(_QWORD *)(v83 + 8);
    v18 = v17 + 8 * (*(unsigned int *)(v83 + 44) - (unsigned __int64)(*(_DWORD *)(v83 + 52) & 0x3FFFFFFF));
    if ( (a3 & 0xFFFFFFFFFFFFF000uLL) > v17 )
      v17 = a3 & 0xFFFFFFFFFFFFF000uLL;
    if ( v18 > (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
      v18 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( v17 >= v18 || a3 - 8 * v15 < v17 || a3 + 8 * (16 - v15) > v18 )
      return v7;
    v19 = *(_WORD *)(*(_QWORD *)v83 + 60LL) & 0x3FF;
  }
  else
  {
    v20 = *((_QWORD *)a5 + 1) | 0x8000000000000000uLL;
    if ( v20 < 0xFFFFF68000000000uLL || v20 > 0xFFFFF6FFFFFFFFFFuLL )
      return v7;
    v19 = *(unsigned __int16 *)(v12 + 174);
  }
  v21 = *(_QWORD *)(qword_14043B808 + 8 * v19);
  v22 = a3 - 8 * v15;
  v79 = v21;
  do
  {
    v23 = MI_READ_PTE_LOCK_FREE(v22);
    v22 = v24 + 8;
    *v25 = v23;
  }
  while ( v26 != 1 );
  v27 = 0xFFFFFA8000000000uLL;
  v28 = (volatile signed __int64 *)Buf2;
  v29 = 0;
  v30 = (__int64 *)&v95;
  v31 = (__int64)(a5 + 0x58000000000LL) / 48;
  v32 = -1LL;
  v81 = v31;
  while ( 1 )
  {
    v33 = 0xFFFFFFFFFLL;
    v84 = *v30;
    if ( (v84 & 1) != 0 )
      break;
    ++v29;
    ++v30;
    if ( v29 >= 0x10 )
      goto LABEL_24;
  }
  v34 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v84);
  v32 = v33 & (v34 >> 12);
  if ( (v32 & 0xF) != v29 )
    return v7;
  LOBYTE(v31) = v81;
LABEL_24:
  v35 = 0LL;
  if ( v29 == 16 )
  {
    if ( (v31 & 0xF) != v15 )
    {
      if ( (unsigned int)MiAcquireNonPagedResources((ULONG_PTR *)v21, 1uLL) )
      {
        MiInitializePageColorBase(v74, (*(_DWORD *)(v75 + 48) >> 8) & 0x3F, (__int64)&v88);
        v37 = v90;
        v38 = v90 >> byte_14043B109;
        v39 = _InterlockedExchangeAdd(v88, v36);
        LODWORD(v72) = (unsigned __int16)(v89 & v39) | v37;
        v9 = v36;
        goto LABEL_34;
      }
      return v7;
    }
LABEL_31:
    *v82 = 1;
    return v7;
  }
  v32 += v15 - v29;
  if ( v32 > v33 || (*(_QWORD *)(48 * v32 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
    return v7;
  v35 = (unsigned __int8 *)(v27 + 48 * v32);
  if ( v35 == a5 )
    goto LABEL_31;
  v38 = MiPageToNode(v32, 0);
  LOBYTE(v36) = 1;
  LODWORD(v72) = dword_14043B148 & v32;
LABEL_34:
  v68 = v38;
  *(_BYTE *)(*(_QWORD *)(v21 + 16) + 1984LL * v38 + 851) = v36;
  *((_QWORD *)a5 + 3) &= 0xC000000000000000uLL;
  if ( !(unsigned int)MiAddLockedPageCharge((__int64)a5, 0) )
    return v7;
  v41 = *((_OWORD *)a5 + 1);
  v94[0] = *(_OWORD *)a5;
  v42 = *((_OWORD *)a5 + 2);
  v94[1] = v41;
  v94[2] = v42;
  _InterlockedAnd64((volatile signed __int64 *)a5 + 3, 0x7FFFFFFFFFFFFFFFuLL);
  if ( v28 )
  {
    MiObtainProtoReference((__int64)v28, 0);
    v43 = *((_OWORD *)v28 + 1);
    Buf1 = *(_OWORD *)v28;
    v44 = *((_OWORD *)v28 + 2);
    v92 = v43;
    v93 = v44;
    MiUnlockProtoPoolPage((__int64)v28, 0x11u);
  }
  v86 = MiReleaseFaultState(v76 + 7, 1, v70);
  if ( v9 == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v71 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v46 = MiGet64KPage(v21, (v77 >> 5) & 0x1F, (unsigned int)v72, 0LL);
    if ( v46 )
    {
      v49 = v46;
      v50 = 16LL;
      v51 = (v46 + 0x58000000000LL) / 48;
      v52 = v51;
      do
      {
        v53 = v52;
        v69 = v52;
        v72 = v35;
        v78 = v32;
        if ( (MiFlags & 0x80u) != 0 )
        {
          v69 = v52;
          if ( (++dword_14043B92C & MmPageValidationFrequency) == 0 )
          {
            MiArePageContentsZero(v51, 1LL);
            v53 = v52;
            v69 = v52;
          }
        }
        v54 = v53 & 0xF;
        if ( v54 != v15 )
        {
          MiReleaseFreshPage(v49);
          v53 = v69;
        }
        v55 = v54 == v15;
        v51 = v53 + 1;
        v35 = (unsigned __int8 *)v49;
        v32 = v53;
        if ( v54 != v15 )
          v35 = v72;
        v52 = v53 + 1;
        if ( !v55 )
          v32 = v78;
        v49 += 48LL;
        --v50;
      }
      while ( v50 );
      ContiguousPages = 0;
      v7 = v85;
      v21 = v79;
      v28 = (volatile signed __int64 *)Buf2;
      v56 = v71;
      v78 = v53 + 1;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v71 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v56);
    }
    else
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
      {
        v47 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v47->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v47);
      }
      __writecr8((unsigned __int8)CurrentIrql);
      MiReleaseNonPagedResources(v21, 1uLL);
      ContiguousPages = -1073741801;
    }
  }
  else
  {
    v35 = (unsigned __int8 *)(48 * v32 - 0x58000000000LL);
    v58 = ((((v71 & 1) == 0) + 0x2000) << 17) | 8;
    if ( (void (__noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[0].Blink != KeSwapProcessOrStack )
      v58 = (((v71 & 1) == 0) + 0x2000) << 17;
    ContiguousPages = MiFindContiguousPages(
                        v21,
                        v32,
                        v32,
                        0LL,
                        1uLL,
                        a5[34] >> 6,
                        v68,
                        0x80000000,
                        v58,
                        0LL,
                        (__int64 *)&v78);
  }
  v59 = 0;
  MiRelockFaultState(v76 + 7, v86);
  if ( v28 )
  {
    *((_QWORD *)&v92 + 1) |= 0x8000000000000000uLL;
    MiRelockProtoPoolPage((__int64)v28, 0LL);
    v73 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v28 + 6, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v73, v62, v63);
      while ( *((__int64 *)v28 + 3) < 0 );
    }
    v59 = memcmp(&Buf1, (const void *)v28, 0x30uLL) != 0;
    _InterlockedAnd64(v28 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    MiReturnPfnReferenceCount((__int64)v28);
  }
  LODWORD(v74) = 0;
  while ( _interlockedbittestandset64(v7 + 6, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v74, v60, v61);
    while ( *((__int64 *)v7 + 3) < 0 );
  }
  if ( v59
    || memcmp(v94, (const void *)v7, 0x30uLL)
    || (*((_QWORD *)v7 + 3) & 0x4000000000000000LL) != 0
    || (v64 = v87, !(unsigned int)MiIsFaultPteIntact((__int64)v76, *v76, v87, &v77)) )
  {
    if ( ContiguousPages >= 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)v7 + 3, 0x7FFFFFFFFFFFFFFFuLL);
      MiReleaseFreshPage((__int64)v35);
      if ( (ULONG_PTR *)v21 == &MiSystemPartition )
        MiReturnResidentAvailable(1uLL);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 7360), 1uLL);
      MiReturnCommit(v21, 1uLL);
      LODWORD(v75) = 0;
      while ( _interlockedbittestandset64(v7 + 6, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v75, v66, v67);
        while ( *((__int64 *)v7 + 3) < 0 );
      }
    }
    MiRemoveLockedPageChargeAndDecRef((__int64)v7);
    return 0LL;
  }
  else
  {
    if ( ContiguousPages < 0 )
    {
      MiRemoveLockedPageCharge((__int64)v7);
      return v7;
    }
    MiCopyPage(v32, v81, 0LL, (v77 & 0x40) != 0 ? 16 : 8);
    MiSwapHardFaultPage(v64, v7, v35, v65);
    *((_WORD *)v35 + 16) = 0;
    if ( (ULONG_PTR *)v21 == &MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 7360), 1uLL);
    *v82 = 1;
    return (volatile signed __int32 *)v35;
  }
}

/*
 * XREFs of MiIdealClusterPage @ 0x1402E0D7C
 * Callers:
 *     MiHandleTransitionFault @ 0x1400D3150 (MiHandleTransitionFault.c)
 * Callees:
 *     MiCopyPage @ 0x14002C5D0 (MiCopyPage.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiRemoveLockedPageCharge @ 0x140054610 (MiRemoveLockedPageCharge.c)
 *     MiUnlockProtoPoolPage @ 0x140054F90 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140091A00 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 *     MiRelockProtoPoolPage @ 0x140091D24 (MiRelockProtoPoolPage.c)
 *     MiPageToNode @ 0x1400A02E4 (MiPageToNode.c)
 *     MiReleaseFaultState @ 0x1400A1624 (MiReleaseFaultState.c)
 *     MiGetLargePage @ 0x1400A3FF0 (MiGetLargePage.c)
 *     MiInitializePageColorBase @ 0x1400A60A8 (MiInitializePageColorBase.c)
 *     MiObtainProtoReference @ 0x1400A6590 (MiObtainProtoReference.c)
 *     MiAddLockedPageCharge @ 0x1400A7374 (MiAddLockedPageCharge.c)
 *     MiReleaseNonPagedResources @ 0x1400AD49C (MiReleaseNonPagedResources.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1400C7FF0 (MiGetProtoPteAddress.c)
 *     MiFindContiguousPages @ 0x1400D9FE0 (MiFindContiguousPages.c)
 *     MiAcquireNonPagedResources @ 0x1400E3D00 (MiAcquireNonPagedResources.c)
 *     MiReleaseFreshPage @ 0x1400F62CC (MiReleaseFreshPage.c)
 *     MiReturnPfnReferenceCount @ 0x1400FCE8C (MiReturnPfnReferenceCount.c)
 *     MiIsFaultPteIntact @ 0x140102138 (MiIsFaultPteIntact.c)
 *     MiRelockFaultState @ 0x1401023B0 (MiRelockFaultState.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memcmp @ 0x1401A09F0 (memcmp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiArePageContentsZero @ 0x1402D905C (MiArePageContentsZero.c)
 *     MiSwapHardFaultPage @ 0x1402EC2A0 (MiSwapHardFaultPage.c)
 */

volatile signed __int32 *__fastcall MiIdealClusterPage(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int8 *a5,
        void *a6,
        _BYTE *a7)
{
  volatile signed __int32 *v7; // rdi
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned __int64 v14; // rbx
  __int64 ProtoPteAddress; // rax
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r9
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // r14
  unsigned __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 *v24; // r10
  __int64 v25; // r11
  volatile signed __int64 *v26; // r13
  ULONG_PTR v27; // rsi
  __int64 *v28; // rcx
  __int64 v29; // rdx
  unsigned __int8 *v30; // r10
  unsigned int v31; // r9d
  unsigned __int64 v32; // r11
  unsigned __int64 v33; // rax
  unsigned __int8 *v34; // r15
  unsigned int v35; // r11d
  unsigned int v36; // ebx
  signed __int32 v37; // r12d
  unsigned int v38; // r12d
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int64 CurrentIrql; // rbx
  struct _KPRCB *v45; // rcx
  int ContiguousPages; // r12d
  __int64 v47; // r13
  _WORD *v48; // rbx
  __int64 v49; // rdi
  ULONG_PTR v50; // rcx
  ULONG_PTR v51; // r12
  ULONG_PTR v52; // rdx
  ULONG_PTR v53; // r12
  bool v54; // zf
  unsigned __int8 v55; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  int v57; // eax
  bool v58; // bl
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rbx
  __int64 v63; // r9
  char v64; // [rsp+60h] [rbp-A0h]
  char v65[7]; // [rsp+61h] [rbp-9Fh] BYREF
  __int64 LargePage; // [rsp+68h] [rbp-98h]
  __int64 v67; // [rsp+70h] [rbp-90h]
  int v68; // [rsp+78h] [rbp-88h] BYREF
  int v69; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v70; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 *v71; // [rsp+88h] [rbp-78h]
  unsigned __int64 v72; // [rsp+90h] [rbp-70h] BYREF
  _WORD *v73; // [rsp+98h] [rbp-68h]
  ULONG_PTR v74; // [rsp+A0h] [rbp-60h] BYREF
  volatile signed __int32 *v75; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v76; // [rsp+B0h] [rbp-50h]
  __int64 v77; // [rsp+B8h] [rbp-48h]
  void *Buf2; // [rsp+C0h] [rbp-40h]
  ULONG_PTR v79; // [rsp+C8h] [rbp-38h]
  _BYTE *v80; // [rsp+D0h] [rbp-30h]
  __int64 v81; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v82; // [rsp+E0h] [rbp-20h] BYREF
  volatile signed __int32 *v83; // [rsp+E8h] [rbp-18h]
  __int64 v84; // [rsp+F0h] [rbp-10h]
  __int64 v85; // [rsp+F8h] [rbp-8h]
  _OWORD Buf1[3]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v87[3]; // [rsp+130h] [rbp+30h] BYREF
  char v88; // [rsp+160h] [rbp+60h] BYREF

  v7 = (volatile signed __int32 *)a5;
  LargePage = a2;
  v85 = a3;
  v71 = a1;
  v72 = a4;
  v83 = (volatile signed __int32 *)a5;
  Buf2 = a6;
  v80 = a7;
  memset(Buf1, 0, sizeof(Buf1));
  v11 = *a1;
  v12 = a1[7];
  v75 = 0LL;
  v76 = 0LL;
  v13 = *((_DWORD *)a1 + 20);
  *a7 = 0;
  LODWORD(v67) = v13 >> 6;
  v70 = v12;
  v14 = ((v11 & 0xFFFFFFFFFFFFF000uLL) - (v11 & 0xFFFFFFFFFFFF0000uLL)) >> 12;
  v54 = (*(_DWORD *)(a2 + 48) & 0x100000) == 0;
  v73 = (_WORD *)v14;
  if ( v54 )
  {
    ProtoPteAddress = MiGetProtoPteAddress(a2, v11 >> 12, 4, &v81);
    if ( !ProtoPteAddress || !v81 || ProtoPteAddress != a3 )
      return v7;
    v16 = *(_QWORD *)(v81 + 8);
    v17 = v16 + 8 * (*(unsigned int *)(v81 + 44) - (unsigned __int64)(*(_DWORD *)(v81 + 52) & 0x3FFFFFFF));
    if ( (a3 & 0xFFFFFFFFFFFFF000uLL) > v16 )
      v16 = a3 & 0xFFFFFFFFFFFFF000uLL;
    if ( v17 > (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
      v17 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( v16 >= v17 || a3 - 8 * v14 < v16 || a3 + 8 * (16 - v14) > v17 )
      return v7;
    v18 = *(_WORD *)(*(_QWORD *)v81 + 60LL) & 0x3FF;
  }
  else
  {
    v19 = *((_QWORD *)a5 + 1) | 0x8000000000000000uLL;
    if ( v19 < 0xFFFFF68000000000uLL || v19 > 0xFFFFF6FFFFFFFFFFuLL )
      return v7;
    v18 = *(unsigned __int16 *)(v12 + 174);
  }
  v20 = *(_QWORD *)(qword_140466188 + 8 * v18);
  v21 = a3 - 8 * v14;
  v77 = v20;
  do
  {
    v22 = MI_READ_PTE_LOCK_FREE(v21);
    v21 = v23 + 8;
    *v24 = v22;
  }
  while ( v25 != 1 );
  v26 = (volatile signed __int64 *)Buf2;
  v27 = -1LL;
  v28 = (__int64 *)&v88;
  v29 = (__int64)(a5 + 0x58000000000LL) / 48;
  v30 = 0LL;
  v79 = v29;
  v31 = 0;
  while ( 1 )
  {
    v32 = 0xFFFFFFFFFLL;
    v82 = *v28;
    if ( (v82 & 1) != 0 )
      break;
    ++v31;
    ++v28;
    if ( v31 >= 0x10 )
      goto LABEL_24;
  }
  v33 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v82);
  v27 = v32 & (v33 >> 12);
  if ( (v27 & 0xF) != v31 )
    return v7;
  LOBYTE(v29) = v79;
LABEL_24:
  v64 = (char)v30;
  v34 = v30;
  if ( v31 == 16 )
  {
    if ( (v29 & 0xF) != v14 )
    {
      if ( (unsigned int)MiAcquireNonPagedResources((ULONG_PTR *)v20, 1uLL) )
      {
        v64 = 1;
        MiInitializePageColorBase(v70, (*(_DWORD *)(LargePage + 48) >> 12) & 0x3F, (__int64)&v75);
        v36 = HIDWORD(v76) >> byte_140465A4D;
        v37 = _InterlockedExchangeAdd(v75, v35);
        v38 = HIDWORD(v76) | v76 & v37;
        goto LABEL_34;
      }
      return v7;
    }
LABEL_31:
    *v80 = 1;
    return v7;
  }
  v27 += v14 - v31;
  if ( v27 > v32 || (*(_QWORD *)(48 * v27 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
    return v7;
  v34 = (unsigned __int8 *)(48 * v27 - 0x58000000000LL);
  if ( v34 == a5 )
    goto LABEL_31;
  v36 = MiPageToNode(v27, 0);
  v38 = dword_140465AB0 & v27;
  LOBYTE(v35) = 1;
LABEL_34:
  *(_BYTE *)(*(_QWORD *)(v20 + 16) + 1984LL * v36 + 851) = v35;
  *((_QWORD *)a5 + 3) &= 0xC000000000000000uLL;
  if ( !(unsigned int)MiAddLockedPageCharge((__int64)a5, 0) )
    return v7;
  v40 = *((_OWORD *)a5 + 1);
  v87[0] = *(_OWORD *)a5;
  v41 = *((_OWORD *)a5 + 2);
  v87[1] = v40;
  v87[2] = v41;
  _InterlockedAnd64((volatile signed __int64 *)a5 + 3, 0x7FFFFFFFFFFFFFFFuLL);
  if ( v26 )
  {
    MiObtainProtoReference((__int64)v26, 0);
    v42 = *((_OWORD *)v26 + 1);
    Buf1[0] = *(_OWORD *)v26;
    v43 = *((_OWORD *)v26 + 2);
    Buf1[1] = v42;
    Buf1[2] = v43;
    MiUnlockProtoPoolPage((ULONG_PTR)v26, 0x11u);
  }
  v84 = MiReleaseFaultState((__int64)(v71 + 7), 1, v65);
  if ( v64 == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v67 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    LargePage = MiGetLargePage(v20, 2u, (v72 >> 5) & 0x1F, v38, 0LL);
    if ( LargePage )
    {
      v47 = LargePage;
      v48 = v73;
      v49 = 16LL;
      v50 = (LargePage + 0x58000000000LL) / 48;
      v51 = v50;
      do
      {
        v52 = v51;
        LargePage = v51;
        v73 = v34;
        v74 = v27;
        if ( (MiFlags & 0x80u) != 0 )
        {
          LargePage = v51;
          if ( (++dword_14046630C & MmPageValidationFrequency) == 0 )
          {
            MiArePageContentsZero(v50, 1LL);
            v52 = v51;
            LargePage = v51;
          }
        }
        v53 = v52 & 0xF;
        if ( (_WORD *)v53 != v48 )
        {
          MiReleaseFreshPage(v47);
          v52 = LargePage;
        }
        v54 = v53 == (_QWORD)v48;
        v50 = v52 + 1;
        v34 = (unsigned __int8 *)v47;
        v27 = v52;
        if ( (_WORD *)v53 != v48 )
          v34 = (unsigned __int8 *)v73;
        v51 = v52 + 1;
        if ( !v54 )
          v27 = v74;
        v47 += 48LL;
        --v49;
      }
      while ( v49 );
      ContiguousPages = 0;
      v7 = v83;
      v20 = v77;
      v26 = (volatile signed __int64 *)Buf2;
      v55 = v67;
      v74 = v52 + 1;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v67 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v55);
    }
    else
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
      {
        v45 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v45->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v45);
      }
      __writecr8((unsigned __int8)CurrentIrql);
      MiReleaseNonPagedResources(v20, 1uLL);
      ContiguousPages = -1073741801;
    }
  }
  else
  {
    v34 = (unsigned __int8 *)(48 * v27 - 0x58000000000LL);
    v57 = ((((v67 & 1) == 0) + 0x2000) << 17) | 8;
    if ( (void (__noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[0].Blink != KeSwapProcessOrStack )
      v57 = (((v67 & 1) == 0) + 0x2000) << 17;
    ContiguousPages = MiFindContiguousPages(
                        v20,
                        v27,
                        v27,
                        0LL,
                        1uLL,
                        a5[34] >> 6,
                        v36,
                        0x80000000,
                        v57,
                        0LL,
                        (__int64 *)&v74);
  }
  v58 = 0;
  MiRelockFaultState((__int64)(v71 + 7), v84);
  if ( v26 )
  {
    *((_QWORD *)&Buf1[1] + 1) |= 0x8000000000000000uLL;
    MiRelockProtoPoolPage((__int64)v26, 0LL);
    v68 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v26 + 6, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v68);
      while ( *((__int64 *)v26 + 3) < 0 );
    }
    v58 = memcmp(Buf1, (const void *)v26, 0x30uLL) != 0;
    _InterlockedAnd64(v26 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    MiReturnPfnReferenceCount((ULONG_PTR)v26);
  }
  v69 = 0;
  while ( _interlockedbittestandset64(v7 + 6, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v69);
    while ( *((__int64 *)v7 + 3) < 0 );
  }
  if ( v58
    || memcmp(v87, (const void *)v7, 0x30uLL)
    || (*((_QWORD *)v7 + 3) & 0x4000000000000000LL) != 0
    || (v62 = v85, !(unsigned int)MiIsFaultPteIntact((__int64)v71, *v71, v85, &v72)) )
  {
    if ( ContiguousPages >= 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)v7 + 3, 0x7FFFFFFFFFFFFFFFuLL);
      MiReleaseFreshPage((__int64)v34);
      if ( (ULONG_PTR *)v20 == &MiSystemPartition )
        MiReturnResidentAvailable(1uLL);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 8128), 1uLL);
      MiReturnCommit(v20, 1uLL);
      LODWORD(v70) = 0;
      while ( _interlockedbittestandset64(v7 + 6, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v70);
        while ( *((__int64 *)v7 + 3) < 0 );
      }
    }
    MiRemoveLockedPageChargeAndDecRef((ULONG_PTR)v7, v59, v60, v61);
    return 0LL;
  }
  else
  {
    if ( ContiguousPages < 0 )
    {
      MiRemoveLockedPageCharge((__int64)v7);
      return v7;
    }
    MiCopyPage(v27, v79, 0LL, (v72 & 0x40) != 0 ? 16 : 8);
    MiSwapHardFaultPage(v62, v7, v34, v63);
    *((_WORD *)v34 + 16) = 0;
    if ( (ULONG_PTR *)v20 == &MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 8128), 1uLL);
    *v80 = 1;
    return (volatile signed __int32 *)v34;
  }
}

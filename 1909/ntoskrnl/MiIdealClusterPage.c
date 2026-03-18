/*
 * XREFs of MiIdealClusterPage @ 0x1402E0ADC
 * Callers:
 *     MiHandleTransitionFault @ 0x1400B2FD0 (MiHandleTransitionFault.c)
 * Callees:
 *     MiCopyPage @ 0x14002C9C0 (MiCopyPage.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiRemoveLockedPageCharge @ 0x1400546B0 (MiRemoveLockedPageCharge.c)
 *     MiUnlockProtoPoolPage @ 0x140055030 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiReleaseNonPagedResources @ 0x14008EDAC (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x14008F414 (MiAcquireNonPagedResources.c)
 *     MiInitializePageColorBase @ 0x1400938D8 (MiInitializePageColorBase.c)
 *     MiObtainProtoReference @ 0x140093DC0 (MiObtainProtoReference.c)
 *     MiGetLargePage @ 0x140096E20 (MiGetLargePage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1400A7E70 (MiGetProtoPteAddress.c)
 *     MiFindContiguousPages @ 0x1400B9E60 (MiFindContiguousPages.c)
 *     MiReleaseFaultState @ 0x1400C4718 (MiReleaseFaultState.c)
 *     MiPageToNode @ 0x1400C53C4 (MiPageToNode.c)
 *     MiAddLockedPageCharge @ 0x1400CBA88 (MiAddLockedPageCharge.c)
 *     MiIsFaultPteIntact @ 0x1400CBAE8 (MiIsFaultPteIntact.c)
 *     MiRelockFaultState @ 0x1400CBD60 (MiRelockFaultState.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CED60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReturnResidentAvailable @ 0x1400CEF50 (MiReturnResidentAvailable.c)
 *     MiRelockProtoPoolPage @ 0x1400CF084 (MiRelockProtoPoolPage.c)
 *     MiReleaseFreshPage @ 0x1400F9D6C (MiReleaseFreshPage.c)
 *     MiReturnPfnReferenceCount @ 0x1400FF01C (MiReturnPfnReferenceCount.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memcmp @ 0x1401A1110 (memcmp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiArePageContentsZero @ 0x1402D8DBC (MiArePageContentsZero.c)
 *     MiSwapHardFaultPage @ 0x1402EC000 (MiSwapHardFaultPage.c)
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
  __int64 v59; // rbx
  __int64 v60; // r9
  char v61; // [rsp+60h] [rbp-A0h]
  char v62[7]; // [rsp+61h] [rbp-9Fh] BYREF
  __int64 LargePage; // [rsp+68h] [rbp-98h]
  __int64 v64; // [rsp+70h] [rbp-90h]
  int v65; // [rsp+78h] [rbp-88h] BYREF
  int v66; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v67; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 *v68; // [rsp+88h] [rbp-78h]
  unsigned __int64 v69; // [rsp+90h] [rbp-70h] BYREF
  _WORD *v70; // [rsp+98h] [rbp-68h]
  ULONG_PTR v71; // [rsp+A0h] [rbp-60h] BYREF
  volatile signed __int32 *v72; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v73; // [rsp+B0h] [rbp-50h]
  __int64 v74; // [rsp+B8h] [rbp-48h]
  void *Buf2; // [rsp+C0h] [rbp-40h]
  ULONG_PTR v76; // [rsp+C8h] [rbp-38h]
  _BYTE *v77; // [rsp+D0h] [rbp-30h]
  __int64 v78; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v79; // [rsp+E0h] [rbp-20h] BYREF
  volatile signed __int32 *v80; // [rsp+E8h] [rbp-18h]
  __int64 v81; // [rsp+F0h] [rbp-10h]
  __int64 v82; // [rsp+F8h] [rbp-8h]
  _OWORD Buf1[3]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v84[3]; // [rsp+130h] [rbp+30h] BYREF
  char v85; // [rsp+160h] [rbp+60h] BYREF

  v7 = (volatile signed __int32 *)a5;
  LargePage = a2;
  v82 = a3;
  v68 = a1;
  v69 = a4;
  v80 = (volatile signed __int32 *)a5;
  Buf2 = a6;
  v77 = a7;
  memset(Buf1, 0, sizeof(Buf1));
  v11 = *a1;
  v12 = a1[7];
  v72 = 0LL;
  v73 = 0LL;
  v13 = *((_DWORD *)a1 + 20);
  *a7 = 0;
  LODWORD(v64) = v13 >> 6;
  v67 = v12;
  v14 = ((v11 & 0xFFFFFFFFFFFFF000uLL) - (v11 & 0xFFFFFFFFFFFF0000uLL)) >> 12;
  v54 = (*(_DWORD *)(a2 + 48) & 0x100000) == 0;
  v70 = (_WORD *)v14;
  if ( v54 )
  {
    ProtoPteAddress = MiGetProtoPteAddress(a2, v11 >> 12, 4, &v78);
    if ( !ProtoPteAddress || !v78 || ProtoPteAddress != a3 )
      return v7;
    v16 = *(_QWORD *)(v78 + 8);
    v17 = v16 + 8 * (*(unsigned int *)(v78 + 44) - (unsigned __int64)(*(_DWORD *)(v78 + 52) & 0x3FFFFFFF));
    if ( (a3 & 0xFFFFFFFFFFFFF000uLL) > v16 )
      v16 = a3 & 0xFFFFFFFFFFFFF000uLL;
    if ( v17 > (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
      v17 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( v16 >= v17 || a3 - 8 * v14 < v16 || a3 + 8 * (16 - v14) > v17 )
      return v7;
    v18 = *(_WORD *)(*(_QWORD *)v78 + 60LL) & 0x3FF;
  }
  else
  {
    v19 = *((_QWORD *)a5 + 1) | 0x8000000000000000uLL;
    if ( v19 < 0xFFFFF68000000000uLL || v19 > 0xFFFFF6FFFFFFFFFFuLL )
      return v7;
    v18 = *(unsigned __int16 *)(v12 + 174);
  }
  v20 = *(_QWORD *)(qword_140465E88 + 8 * v18);
  v21 = a3 - 8 * v14;
  v74 = v20;
  do
  {
    v22 = MI_READ_PTE_LOCK_FREE(v21);
    v21 = v23 + 8;
    *v24 = v22;
  }
  while ( v25 != 1 );
  v26 = (volatile signed __int64 *)Buf2;
  v27 = -1LL;
  v28 = (__int64 *)&v85;
  v29 = (__int64)(a5 + 0x58000000000LL) / 48;
  v30 = 0LL;
  v76 = v29;
  v31 = 0;
  while ( 1 )
  {
    v32 = 0xFFFFFFFFFLL;
    v79 = *v28;
    if ( (v79 & 1) != 0 )
      break;
    ++v31;
    ++v28;
    if ( v31 >= 0x10 )
      goto LABEL_24;
  }
  v33 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v79);
  v27 = v32 & (v33 >> 12);
  if ( (v27 & 0xF) != v31 )
    return v7;
  LOBYTE(v29) = v76;
LABEL_24:
  v61 = (char)v30;
  v34 = v30;
  if ( v31 == 16 )
  {
    if ( (v29 & 0xF) != v14 )
    {
      if ( (unsigned int)MiAcquireNonPagedResources(v20, 1uLL) )
      {
        v61 = 1;
        MiInitializePageColorBase(v67, (*(_DWORD *)(LargePage + 48) >> 12) & 0x3F, (__int64)&v72);
        v36 = HIDWORD(v73) >> byte_14046574D;
        v37 = _InterlockedExchangeAdd(v72, v35);
        v38 = HIDWORD(v73) | v73 & v37;
        goto LABEL_34;
      }
      return v7;
    }
LABEL_31:
    *v77 = 1;
    return v7;
  }
  v27 += v14 - v31;
  if ( v27 > v32 || (*(_QWORD *)(48 * v27 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
    return v7;
  v34 = (unsigned __int8 *)(48 * v27 - 0x58000000000LL);
  if ( v34 == a5 )
    goto LABEL_31;
  v36 = MiPageToNode(v27, 0);
  v38 = dword_1404657B0 & v27;
  LOBYTE(v35) = 1;
LABEL_34:
  *(_BYTE *)(*(_QWORD *)(v20 + 16) + 1984LL * v36 + 851) = v35;
  *((_QWORD *)a5 + 3) &= 0xC000000000000000uLL;
  if ( !(unsigned int)MiAddLockedPageCharge((__int64)a5, 0) )
    return v7;
  v40 = *((_OWORD *)a5 + 1);
  v84[0] = *(_OWORD *)a5;
  v41 = *((_OWORD *)a5 + 2);
  v84[1] = v40;
  v84[2] = v41;
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
  v81 = MiReleaseFaultState((__int64)(v68 + 7), 1u, v62);
  if ( v61 == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v64 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    LargePage = MiGetLargePage(v20, 2u, (v69 >> 5) & 0x1F, v38, 0LL);
    if ( LargePage )
    {
      v47 = LargePage;
      v48 = v70;
      v49 = 16LL;
      v50 = (LargePage + 0x58000000000LL) / 48;
      v51 = v50;
      do
      {
        v52 = v51;
        LargePage = v51;
        v70 = v34;
        v71 = v27;
        if ( (MiFlags & 0x80u) != 0 )
        {
          LargePage = v51;
          if ( (++dword_14046600C & MmPageValidationFrequency) == 0 )
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
          v34 = (unsigned __int8 *)v70;
        v51 = v52 + 1;
        if ( !v54 )
          v27 = v71;
        v47 += 48LL;
        --v49;
      }
      while ( v49 );
      ContiguousPages = 0;
      v7 = v80;
      v20 = v74;
      v26 = (volatile signed __int64 *)Buf2;
      v55 = v64;
      v71 = v52 + 1;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v64 < 2u )
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
    v57 = ((((v64 & 1) == 0) + 0x2000) << 17) | 8;
    if ( (void (__noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[0].Blink != KeSwapProcessOrStack )
      v57 = (((v64 & 1) == 0) + 0x2000) << 17;
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
                        (__int64 *)&v71);
  }
  v58 = 0;
  MiRelockFaultState((__int64)(v68 + 7), v81);
  if ( v26 )
  {
    *((_QWORD *)&Buf1[1] + 1) |= 0x8000000000000000uLL;
    MiRelockProtoPoolPage((__int64)v26, 0LL);
    v65 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v26 + 6, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v65);
      while ( *((__int64 *)v26 + 3) < 0 );
    }
    v58 = memcmp(Buf1, (const void *)v26, 0x30uLL) != 0;
    _InterlockedAnd64(v26 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    MiReturnPfnReferenceCount((ULONG_PTR)v26);
  }
  v66 = 0;
  while ( _interlockedbittestandset64(v7 + 6, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v66);
    while ( *((__int64 *)v7 + 3) < 0 );
  }
  if ( v58
    || memcmp(v84, (const void *)v7, 0x30uLL)
    || (*((_QWORD *)v7 + 3) & 0x4000000000000000LL) != 0
    || (v59 = v82, !(unsigned int)MiIsFaultPteIntact((__int64)v68, *v68, v82, &v69)) )
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
      LODWORD(v67) = 0;
      while ( _interlockedbittestandset64(v7 + 6, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v67);
        while ( *((__int64 *)v7 + 3) < 0 );
      }
    }
    MiRemoveLockedPageChargeAndDecRef((ULONG_PTR)v7);
    return 0LL;
  }
  else
  {
    if ( ContiguousPages < 0 )
    {
      MiRemoveLockedPageCharge((__int64)v7);
      return v7;
    }
    MiCopyPage(v27, v76, 0LL, (v69 & 0x40) != 0 ? 16 : 8);
    MiSwapHardFaultPage(v59, v7, v34, v60);
    *((_WORD *)v34 + 16) = 0;
    if ( (ULONG_PTR *)v20 == &MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 8128), 1uLL);
    *v77 = 1;
    return (volatile signed __int32 *)v34;
  }
}

/*
 * XREFs of NtLockVirtualMemory @ 0x14008DF10
 * Callers:
 *     <none>
 * Callees:
 *     KeStackAttachProcess @ 0x140013AD0 (KeStackAttachProcess.c)
 *     MiUnlockVa @ 0x14001F434 (MiUnlockVa.c)
 *     MiUnlockPageTableCharges @ 0x140020B28 (MiUnlockPageTableCharges.c)
 *     MiMakeSystemAddressValid @ 0x140021630 (MiMakeSystemAddressValid.c)
 *     MiWorkingSetIsContended @ 0x140023050 (MiWorkingSetIsContended.c)
 *     KeUnstackDetachProcess @ 0x14003A6B0 (KeUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiVadPureReserve @ 0x140052A40 (MiVadPureReserve.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiLockPageAndSetDirty @ 0x14005D264 (MiLockPageAndSetDirty.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiGetNextPageTable @ 0x14005DF80 (MiGetNextPageTable.c)
 *     MiLocateAddress @ 0x140073CF0 (MiLocateAddress.c)
 *     MiGetPagingFileOffset @ 0x1400761B4 (MiGetPagingFileOffset.c)
 *     MiGetEffectivePagePriorityThread @ 0x14008DCDC (MiGetEffectivePagePriorityThread.c)
 *     MiUpdatePfnPriority @ 0x14008DD04 (MiUpdatePfnPriority.c)
 *     MiGetWsleContents @ 0x14008DDD0 (MiGetWsleContents.c)
 *     MiPageTableLockIsContended @ 0x14008DE78 (MiPageTableLockIsContended.c)
 *     MiLockPageTablePage @ 0x140090030 (MiLockPageTablePage.c)
 *     MiSetVaAgeList @ 0x1400C5760 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiVadPagesTradable @ 0x1400E2B14 (MiVadPagesTradable.c)
 *     MiLockPageTable @ 0x14015CD54 (MiLockPageTable.c)
 *     MiUnlockPageTable @ 0x14019D098 (MiUnlockPageTable.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiShouldYieldProcessor @ 0x1402C4B24 (MiShouldYieldProcessor.c)
 *     MiLockPageAtDpc @ 0x1402D8FB8 (MiLockPageAtDpc.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiUnlockVadRange @ 0x140694D90 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x140694EA0 (MiLockVadRange.c)
 *     MiLockUnlockCommon @ 0x1406C6CF0 (MiLockUnlockCommon.c)
 */

NTSTATUS __stdcall NtLockVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T NumberOfBytesToLock,
        ULONG MapType)
{
  NTSTATUS result; // eax
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rbx
  PVOID PoolWithTag; // rax
  PVOID v10; // rsi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r10
  unsigned __int64 Address; // r12
  _QWORD *v15; // rdx
  unsigned __int64 i; // r8
  unsigned __int64 v17; // rdi
  char *v18; // rsi
  __int64 v19; // rdx
  char v20; // r9
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rax
  __int64 v23; // r11
  ULONG_PTR v24; // r14
  __int64 v25; // r10
  unsigned __int64 v26; // rax
  __int64 v27; // r11
  __int64 v28; // r9
  __int64 v29; // rbx
  unsigned __int64 v30; // rdx
  unsigned int EffectivePagePriorityThread; // ebx
  BOOL v32; // ebx
  bool v33; // zf
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // r8
  _QWORD *v37; // rcx
  _QWORD **v38; // rax
  _QWORD *j; // rcx
  unsigned __int64 v40; // r14
  unsigned __int64 NextPageTable; // rax
  char v42; // r12
  unsigned __int64 v43; // r13
  unsigned __int64 v44; // r14
  const signed __int64 *v45; // rbx
  int v46; // r12d
  NTSTATUS v47; // ebx
  unsigned __int64 v48; // rcx
  _QWORD **v49; // rax
  _QWORD *k; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  char v53; // [rsp+40h] [rbp-128h]
  int v54; // [rsp+44h] [rbp-124h]
  int v55; // [rsp+44h] [rbp-124h]
  char v56; // [rsp+48h] [rbp-120h]
  unsigned __int64 v57; // [rsp+50h] [rbp-118h]
  PVOID Object; // [rsp+58h] [rbp-110h] BYREF
  char WsleContents; // [rsp+60h] [rbp-108h]
  unsigned __int64 v60; // [rsp+68h] [rbp-100h]
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-F8h]
  PVOID P; // [rsp+78h] [rbp-F0h]
  unsigned __int64 v63; // [rsp+80h] [rbp-E8h]
  unsigned __int64 v64; // [rsp+88h] [rbp-E0h]
  unsigned __int64 v65; // [rsp+90h] [rbp-D8h]
  unsigned __int64 v66; // [rsp+98h] [rbp-D0h]
  __int64 v67; // [rsp+A0h] [rbp-C8h] BYREF
  int v68; // [rsp+A8h] [rbp-C0h] BYREF
  unsigned int v69; // [rsp+ACh] [rbp-BCh]
  __int64 v70; // [rsp+B0h] [rbp-B8h] BYREF
  __int64 v71; // [rsp+B8h] [rbp-B0h]
  char *v72; // [rsp+C0h] [rbp-A8h]
  __int64 v73; // [rsp+C8h] [rbp-A0h] BYREF
  __int64 v74; // [rsp+D0h] [rbp-98h]
  struct _KTHREAD *CurrentThread; // [rsp+D8h] [rbp-90h]
  PSIZE_T v76; // [rsp+E0h] [rbp-88h]
  PVOID *v77; // [rsp+E8h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-78h] BYREF

  v76 = NumberOfBytesToLock;
  v77 = BaseAddress;
  memset(&ApcState, 0, sizeof(ApcState));
  v56 = 0;
  result = MiLockUnlockCommon((ULONG_PTR)ProcessHandle, (__int64)&v67, (__int64)&v70, (__int64)&Object);
  if ( result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  v6 = v67;
  v7 = (v67 + v70 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v60 = v67 & 0xFFFFFFFFFFFFF000uLL;
  v8 = ((v7 - (v67 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1;
  v57 = 0LL;
  BugCheckParameter2 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * ((v8 >> 6) + ((v8 & 0x3F) != 0)), 0x6B6C6D4Du);
  v10 = PoolWithTag;
  P = PoolWithTag;
  if ( !PoolWithTag )
  {
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    return -1073741670;
  }
  memset(PoolWithTag, 0, 4 * ((v8 >> 5) + ((v8 & 0x1F) != 0)));
  if ( ProcessHandle != (HANDLE)-1LL )
  {
    KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
    v56 = 2;
  }
  v11 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v65 = v11;
  v12 = v60;
  v63 = v60;
  v71 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = MiLockVadRange(Object, v60, v7, 0LL);
  v66 = v13;
  if ( !v13 )
  {
    v47 = -1073741819;
    goto LABEL_82;
  }
  Address = MiLocateAddress(v12);
  v15 = (_QWORD *)Address;
  for ( i = 0LL; i < v13; i = v36 + 1 )
  {
    if ( !(unsigned int)MiVadPagesTradable(v15) )
    {
      v47 = -1073741747;
      goto LABEL_82;
    }
    v37 = v15;
    v38 = (_QWORD **)v15[1];
    if ( v38 )
    {
      v15 = (_QWORD *)v15[1];
      for ( j = *v38; j; j = (_QWORD *)*j )
        v15 = j;
    }
    else
    {
      while ( 1 )
      {
        v15 = (_QWORD *)(v15[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v15 || (_QWORD *)*v15 == v37 )
          break;
        v37 = v15;
      }
    }
  }
  v54 = MiVadPureReserve(Address);
  v17 = 0LL;
  v18 = (char *)Object + 1280;
  v72 = (char *)Object + 1280;
  v74 = *((_QWORD *)Object + 162);
LABEL_9:
  v20 = MiLockWorkingSetShared((__int64)v18);
  v53 = v20;
LABEL_10:
  v21 = 0xFFFFF6FB40000000uLL;
  while ( 1 )
  {
    if ( v12 > v7 )
    {
      if ( v17 )
      {
        MiUnlockPageTable(v18, v17);
        v20 = v53;
      }
      LOBYTE(v19) = v20;
      MiUnlockWorkingSetShared(v18, v19);
      MiUnlockVadRange(Object, v63, v66, 0LL);
      if ( (v56 & 2) != 0 )
        KeUnstackDetachProcess(&ApcState);
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      ExFreePoolWithTag(P, 0);
      v40 = v67 & 0xFFFFFFFFFFFFF000uLL;
      *v76 = v7 - (v67 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      *v77 = (PVOID)v40;
      return (v56 & 1) != 0 ? 0x40000019 : 0;
    }
    if ( v12 >> 12 > (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) )
    {
      v48 = Address;
      v49 = *(_QWORD ***)(Address + 8);
      if ( v49 )
      {
        Address = *(_QWORD *)(Address + 8);
        for ( k = *v49; k; k = (_QWORD *)*k )
          Address = (unsigned __int64)k;
      }
      else
      {
        while ( 1 )
        {
          Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !Address || *(_QWORD *)Address == v48 )
            break;
          v48 = Address;
        }
      }
      v54 = MiVadPureReserve(Address);
    }
    v64 = ((v12 >> 18) & 0x3FFFFFF8) + v21;
    if ( v17 != v64 )
    {
      if ( v17 )
      {
        MiUnlockPageTable(v18, v17);
        v17 = 0LL;
        v20 = v53;
      }
      if ( v54 )
      {
        NextPageTable = MiGetNextPageTable(v11, v71, 0LL, v20, 0, &v68);
        if ( NextPageTable )
          v17 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( NextPageTable != v11 )
        {
          v55 = -1073741819;
          goto LABEL_60;
        }
      }
      else
      {
        v69 = (*(_DWORD *)(Address + 48) >> 12) & 0x3F;
        MiMakeSystemAddressValid(v11, 0LL, v69, v20, 0);
        v17 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
    }
    if ( (*(_BYTE *)v11 & 1) == 0 )
    {
      MiUnlockPageTable(v18, v17);
      v17 = 0LL;
      v64 = 0LL;
      LOBYTE(v35) = v53;
      MiUnlockWorkingSetShared(v18, v35);
      goto LABEL_9;
    }
    v73 = MI_READ_PTE_LOCK_FREE(v11);
    v22 = MI_READ_PTE_LOCK_FREE(&v73);
    v24 = v23 + 48 * ((v22 >> 12) & 0xFFFFFFFFFLL);
    WsleContents = MiGetWsleContents(0xFFFFFFFFFLL, v12);
    if ( (WsleContents & 0xF) == 8 )
    {
      v56 |= 1u;
      goto LABEL_26;
    }
    if ( *((_QWORD *)v18 + 14) <= (unsigned __int64)(*(_QWORD *)(v74 + 32) + 6LL) )
    {
      v55 = -1073741663;
      goto LABEL_60;
    }
    if ( (v25 & *(_QWORD *)(v24 + 40)) != 0 && !(unsigned int)MiLockPageTablePage(v24, 1LL) )
      goto LABEL_102;
    v26 = MI_READ_PTE_LOCK_FREE(v64);
    BugCheckParameter2 = v27 + 48 * ((v26 >> 12) & 0xFFFFFFFFFLL);
    if ( !(unsigned int)MiLockPageTablePage(BugCheckParameter2, 2LL) )
      break;
    v29 = 0LL;
    if ( (*(_DWORD *)(v24 + 16) & 0x400LL) != 0 )
    {
      v30 = *(_QWORD *)(v24 + 40);
      if ( (v30 & 0x200000000000000LL) != 0 )
      {
        v29 = *(_QWORD *)(qword_140466188 + 8 * ((v30 >> 40) & 0x3FF));
        if ( !(unsigned int)MiChargeCommit(v29, 1uLL, 0) )
        {
          MiUnlockPageTableCharges(BugCheckParameter2, 2);
          MiUnlockPageTableCharges(48 * (*(_QWORD *)(v24 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 1);
          v55 = -1073741523;
          goto LABEL_60;
        }
        _InterlockedAdd64((volatile signed __int64 *)(v29 + 8576), 1uLL);
      }
    }
    else if ( (unsigned int)MiGetPagingFileOffset(v24 + 16) )
    {
      MiLockPageAndSetDirty(v24, 1);
    }
    LOBYTE(v28) = 8;
    if ( !(unsigned int)MiSetVaAgeList(v18, v60, 1LL, v28) )
    {
      MiUnlockPageTableCharges(BugCheckParameter2, 2);
      v52 = *(_QWORD *)(v24 + 40);
      if ( (v52 & 0x200000000000000LL) != 0 )
      {
        MiUnlockPageTableCharges(48 * (v52 & 0xFFFFFFFFFLL) - 0x58000000000LL, 1);
        if ( (*(_DWORD *)(v24 + 16) & 0x400LL) != 0 )
          MiReturnCommit(v29, 1uLL);
      }
      goto LABEL_102;
    }
    EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
    MiLockPageAtDpc(v24);
    MiUpdatePfnPriority(v24, EffectivePagePriorityThread, 0);
    _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _bittestandset64((signed __int64 *)P, v57);
    v12 = v60;
LABEL_26:
    BugCheckParameter2 = ++v57;
    v11 = v65 + 8;
    v65 += 8LL;
    v60 = v12 + 4096;
    v32 = 0;
    if ( v60 <= v7 && (v11 & 0x78) == 0 )
    {
      if ( MiWorkingSetIsContended((__int64)v18) || (unsigned int)MiPageTableLockIsContended((__int64)v18, v17) )
      {
LABEL_29:
        MiUnlockPageTable(v18, v17);
        LOBYTE(v34) = v53;
        MiUnlockWorkingSetShared(v18, v34);
        v17 = 0LL;
        MiLockWorkingSetShared((__int64)v18);
        v12 = v60;
        v20 = v53;
        goto LABEL_10;
      }
      v32 = MiShouldYieldProcessor() != 0;
    }
    v33 = !v32;
    v12 = v60;
    v20 = v53;
    v21 = 0xFFFFF6FB40000000uLL;
    if ( !v33 )
      goto LABEL_29;
  }
  v51 = *(_QWORD *)(v24 + 40);
  if ( (v51 & 0x200000000000000LL) != 0 )
    MiUnlockPageTableCharges(48 * (v51 & 0xFFFFFFFFFLL) - 0x58000000000LL, 1);
LABEL_102:
  v55 = -1073741670;
LABEL_60:
  v42 = v53;
  v43 = v57;
  if ( v17 )
  {
    MiUnlockPageTable(v18, v17);
    v17 = 0LL;
  }
  v44 = v63 + (v57 << 12);
  v45 = (const signed __int64 *)P;
  while ( 2 )
  {
    if ( v43 )
    {
      --v43;
      v44 -= 4096LL;
      if ( _bittest64(v45, v43) == 1 )
      {
        if ( v17 != ((v44 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
        {
          if ( v17 )
            MiUnlockPageTable(v18, v17);
          v17 = ((v44 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
          MiLockPageTable(v18, v17);
        }
        MiUnlockVa((__int64)v18, v44);
      }
      v46 = 0;
      if ( (v43 & 0xF) != 0 )
        goto LABEL_68;
      if ( !MiWorkingSetIsContended((__int64)v18)
        && (!v17 || !(unsigned int)MiPageTableLockIsContended((__int64)v18, v17)) )
      {
        if ( (unsigned int)MiShouldYieldProcessor() )
          v46 = 1;
LABEL_68:
        v33 = v46 == 1;
        v42 = v53;
        if ( !v33 )
          continue;
      }
      if ( v17 )
      {
        MiUnlockPageTable(v18, v17);
        v17 = 0LL;
      }
      v42 = v53;
      LOBYTE(v19) = v53;
      MiUnlockWorkingSetShared(v18, v19);
      MiLockWorkingSetShared((__int64)v18);
      continue;
    }
    break;
  }
  v47 = v55;
  if ( v17 )
    MiUnlockPageTable(v18, v17);
  LOBYTE(v19) = v42;
  MiUnlockWorkingSetShared(v18, v19);
  v10 = P;
  v13 = v66;
LABEL_82:
  MiUnlockVadRange(Object, v63, v13, 0LL);
  if ( (v56 & 2) != 0 )
    KeUnstackDetachProcess(&ApcState);
  ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  ExFreePoolWithTag(v10, 0);
  return v47;
}

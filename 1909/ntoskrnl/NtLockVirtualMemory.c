/*
 * XREFs of NtLockVirtualMemory @ 0x1400CB120
 * Callers:
 *     <none>
 * Callees:
 *     KeStackAttachProcess @ 0x140013D00 (KeStackAttachProcess.c)
 *     MiUnlockVa @ 0x14001F824 (MiUnlockVa.c)
 *     MiUnlockPageTableCharges @ 0x140020F18 (MiUnlockPageTableCharges.c)
 *     MiMakeSystemAddressValid @ 0x140021A20 (MiMakeSystemAddressValid.c)
 *     MiWorkingSetIsContended @ 0x140023440 (MiWorkingSetIsContended.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeUnstackDetachProcess @ 0x1400437D0 (KeUnstackDetachProcess.c)
 *     MiChargeCommit @ 0x140052270 (MiChargeCommit.c)
 *     MiVadPureReserve @ 0x140052AE0 (MiVadPureReserve.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiLockPageAndSetDirty @ 0x14005D304 (MiLockPageAndSetDirty.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiGetNextPageTable @ 0x14005E020 (MiGetNextPageTable.c)
 *     MiLocateAddress @ 0x140073F60 (MiLocateAddress.c)
 *     MiGetPagingFileOffset @ 0x140076424 (MiGetPagingFileOffset.c)
 *     MiSetVaAgeList @ 0x1400A55E0 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiVadPagesTradable @ 0x1400C20F4 (MiVadPagesTradable.c)
 *     MiGetEffectivePagePriorityThread @ 0x1400CAEEC (MiGetEffectivePagePriorityThread.c)
 *     MiUpdatePfnPriority @ 0x1400CAF14 (MiUpdatePfnPriority.c)
 *     MiGetWsleContents @ 0x1400CAFE0 (MiGetWsleContents.c)
 *     MiPageTableLockIsContended @ 0x1400CB088 (MiPageTableLockIsContended.c)
 *     MiLockPageTablePage @ 0x1400CD620 (MiLockPageTablePage.c)
 *     MiLockPageTable @ 0x14015D3F4 (MiLockPageTable.c)
 *     MiUnlockPageTable @ 0x14019D818 (MiUnlockPageTable.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiShouldYieldProcessor @ 0x1402C4884 (MiShouldYieldProcessor.c)
 *     MiLockPageAtDpc @ 0x1402D8D18 (MiLockPageAtDpc.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiUnlockVadRange @ 0x140688300 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x140688410 (MiLockVadRange.c)
 *     MiLockUnlockCommon @ 0x1406C55D0 (MiLockUnlockCommon.c)
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
  char v19; // r9
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rax
  __int64 v22; // r11
  ULONG_PTR v23; // r14
  __int64 v24; // r10
  unsigned __int64 v25; // rax
  __int64 v26; // r11
  __int64 v27; // rbx
  unsigned __int64 v28; // rdx
  unsigned int EffectivePagePriorityThread; // ebx
  BOOL v30; // ebx
  bool v31; // zf
  __int64 v32; // r8
  _QWORD *v33; // rcx
  _QWORD **v34; // rax
  _QWORD *j; // rcx
  unsigned __int64 v36; // r14
  unsigned __int64 NextPageTable; // rax
  unsigned __int8 v38; // r12
  unsigned __int64 v39; // r13
  unsigned __int64 v40; // r14
  const signed __int64 *v41; // rbx
  int v42; // r12d
  NTSTATUS v43; // ebx
  unsigned __int64 v44; // rcx
  _QWORD **v45; // rax
  _QWORD *k; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned __int8 v49; // [rsp+40h] [rbp-128h]
  int v50; // [rsp+44h] [rbp-124h]
  int v51; // [rsp+44h] [rbp-124h]
  char v52; // [rsp+48h] [rbp-120h]
  unsigned __int64 v53; // [rsp+50h] [rbp-118h]
  PVOID Object; // [rsp+58h] [rbp-110h] BYREF
  char WsleContents; // [rsp+60h] [rbp-108h]
  unsigned __int64 v56; // [rsp+68h] [rbp-100h]
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-F8h]
  PVOID P; // [rsp+78h] [rbp-F0h]
  unsigned __int64 v59; // [rsp+80h] [rbp-E8h]
  unsigned __int64 v60; // [rsp+88h] [rbp-E0h]
  unsigned __int64 v61; // [rsp+90h] [rbp-D8h]
  unsigned __int64 v62; // [rsp+98h] [rbp-D0h]
  __int64 v63; // [rsp+A0h] [rbp-C8h] BYREF
  int v64; // [rsp+A8h] [rbp-C0h] BYREF
  unsigned int v65; // [rsp+ACh] [rbp-BCh]
  __int64 v66; // [rsp+B0h] [rbp-B8h] BYREF
  __int64 v67; // [rsp+B8h] [rbp-B0h]
  char *v68; // [rsp+C0h] [rbp-A8h]
  __int64 v69; // [rsp+C8h] [rbp-A0h] BYREF
  __int64 v70; // [rsp+D0h] [rbp-98h]
  struct _KTHREAD *CurrentThread; // [rsp+D8h] [rbp-90h]
  PSIZE_T v72; // [rsp+E0h] [rbp-88h]
  PVOID *v73; // [rsp+E8h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-78h] BYREF

  v72 = NumberOfBytesToLock;
  v73 = BaseAddress;
  memset(&ApcState, 0, sizeof(ApcState));
  v52 = 0;
  result = MiLockUnlockCommon((ULONG_PTR)ProcessHandle, (__int64)&v63, (__int64)&v66, (__int64)&Object);
  if ( result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  v6 = v63;
  v7 = (v63 + v66 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v56 = v63 & 0xFFFFFFFFFFFFF000uLL;
  v8 = ((v7 - (v63 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1;
  v53 = 0LL;
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
    v52 = 2;
  }
  v11 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v61 = v11;
  v12 = v56;
  v59 = v56;
  v67 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = MiLockVadRange(Object, v56, v7, 0LL);
  v62 = v13;
  if ( !v13 )
  {
    v43 = -1073741819;
    goto LABEL_82;
  }
  Address = MiLocateAddress(v12);
  v15 = (_QWORD *)Address;
  for ( i = 0LL; i < v13; i = v32 + 1 )
  {
    if ( !(unsigned int)MiVadPagesTradable((__int64)v15) )
    {
      v43 = -1073741747;
      goto LABEL_82;
    }
    v33 = v15;
    v34 = (_QWORD **)v15[1];
    if ( v34 )
    {
      v15 = (_QWORD *)v15[1];
      for ( j = *v34; j; j = (_QWORD *)*j )
        v15 = j;
    }
    else
    {
      while ( 1 )
      {
        v15 = (_QWORD *)(v15[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v15 || (_QWORD *)*v15 == v33 )
          break;
        v33 = v15;
      }
    }
  }
  v50 = MiVadPureReserve(Address);
  v17 = 0LL;
  v18 = (char *)Object + 1280;
  v68 = (char *)Object + 1280;
  v70 = *((_QWORD *)Object + 162);
LABEL_9:
  v19 = MiLockWorkingSetShared((__int64)v18);
  v49 = v19;
LABEL_10:
  v20 = 0xFFFFF6FB40000000uLL;
  while ( 1 )
  {
    if ( v12 > v7 )
    {
      if ( v17 )
      {
        MiUnlockPageTable(v18, v17);
        v19 = v49;
      }
      MiUnlockWorkingSetShared((__int64)v18, v19);
      MiUnlockVadRange(Object, v59, v62, 0LL);
      if ( (v52 & 2) != 0 )
        KeUnstackDetachProcess(&ApcState);
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      ExFreePoolWithTag(P, 0);
      v36 = v63 & 0xFFFFFFFFFFFFF000uLL;
      *v72 = v7 - (v63 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      *v73 = (PVOID)v36;
      return (v52 & 1) != 0 ? 0x40000019 : 0;
    }
    if ( v12 >> 12 > (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) )
    {
      v44 = Address;
      v45 = *(_QWORD ***)(Address + 8);
      if ( v45 )
      {
        Address = *(_QWORD *)(Address + 8);
        for ( k = *v45; k; k = (_QWORD *)*k )
          Address = (unsigned __int64)k;
      }
      else
      {
        while ( 1 )
        {
          Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !Address || *(_QWORD *)Address == v44 )
            break;
          v44 = Address;
        }
      }
      v50 = MiVadPureReserve(Address);
    }
    v60 = ((v12 >> 18) & 0x3FFFFFF8) + v20;
    if ( v17 != v60 )
    {
      if ( v17 )
      {
        MiUnlockPageTable(v18, v17);
        v17 = 0LL;
        v19 = v49;
      }
      if ( v50 )
      {
        NextPageTable = MiGetNextPageTable(v11, v67, 0LL, v19, 0, &v64);
        if ( NextPageTable )
          v17 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( NextPageTable != v11 )
        {
          v51 = -1073741819;
          goto LABEL_60;
        }
      }
      else
      {
        v65 = (*(_DWORD *)(Address + 48) >> 12) & 0x3F;
        MiMakeSystemAddressValid(v11, 0LL, v65, v19, 0);
        v17 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
    }
    if ( (*(_BYTE *)v11 & 1) == 0 )
    {
      MiUnlockPageTable(v18, v17);
      v17 = 0LL;
      v60 = 0LL;
      MiUnlockWorkingSetShared((__int64)v18, v49);
      goto LABEL_9;
    }
    v69 = MI_READ_PTE_LOCK_FREE(v11);
    v21 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v69);
    v23 = v22 + 48 * ((v21 >> 12) & 0xFFFFFFFFFLL);
    WsleContents = MiGetWsleContents(0xFFFFFFFFFLL, v12);
    if ( (WsleContents & 0xF) == 8 )
    {
      v52 |= 1u;
      goto LABEL_26;
    }
    if ( *((_QWORD *)v18 + 14) <= (unsigned __int64)(*(_QWORD *)(v70 + 32) + 6LL) )
    {
      v51 = -1073741663;
      goto LABEL_60;
    }
    if ( (v24 & *(_QWORD *)(v23 + 40)) != 0 && !(unsigned int)MiLockPageTablePage(v23, 1LL) )
      goto LABEL_102;
    v25 = MI_READ_PTE_LOCK_FREE(v60);
    BugCheckParameter2 = v26 + 48 * ((v25 >> 12) & 0xFFFFFFFFFLL);
    if ( !(unsigned int)MiLockPageTablePage(BugCheckParameter2, 2LL) )
      break;
    v27 = 0LL;
    if ( (*(_DWORD *)(v23 + 16) & 0x400LL) != 0 )
    {
      v28 = *(_QWORD *)(v23 + 40);
      if ( (v28 & 0x200000000000000LL) != 0 )
      {
        v27 = *(_QWORD *)(qword_140465E88 + 8 * ((v28 >> 40) & 0x3FF));
        if ( !(unsigned int)MiChargeCommit(v27, 1uLL, 0) )
        {
          MiUnlockPageTableCharges(BugCheckParameter2, 2);
          MiUnlockPageTableCharges(48 * (*(_QWORD *)(v23 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 1);
          v51 = -1073741523;
          goto LABEL_60;
        }
        _InterlockedAdd64((volatile signed __int64 *)(v27 + 8576), 1uLL);
      }
    }
    else if ( (unsigned int)MiGetPagingFileOffset(v23 + 16) )
    {
      MiLockPageAndSetDirty(v23, 1);
    }
    if ( !(unsigned int)MiSetVaAgeList((__int64)v18, v56, 1u, 8u) )
    {
      MiUnlockPageTableCharges(BugCheckParameter2, 2);
      v48 = *(_QWORD *)(v23 + 40);
      if ( (v48 & 0x200000000000000LL) != 0 )
      {
        MiUnlockPageTableCharges(48 * (v48 & 0xFFFFFFFFFLL) - 0x58000000000LL, 1);
        if ( (*(_DWORD *)(v23 + 16) & 0x400LL) != 0 )
          MiReturnCommit(v27, 1uLL);
      }
      goto LABEL_102;
    }
    EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
    MiLockPageAtDpc(v23);
    MiUpdatePfnPriority(v23, EffectivePagePriorityThread, 0);
    _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _bittestandset64((signed __int64 *)P, v53);
    v12 = v56;
LABEL_26:
    BugCheckParameter2 = ++v53;
    v11 = v61 + 8;
    v61 += 8LL;
    v56 = v12 + 4096;
    v30 = 0;
    if ( v56 <= v7 && (v11 & 0x78) == 0 )
    {
      if ( MiWorkingSetIsContended((__int64)v18) || (unsigned int)MiPageTableLockIsContended((__int64)v18, v17) )
      {
LABEL_29:
        MiUnlockPageTable(v18, v17);
        MiUnlockWorkingSetShared((__int64)v18, v49);
        v17 = 0LL;
        MiLockWorkingSetShared((__int64)v18);
        v12 = v56;
        v19 = v49;
        goto LABEL_10;
      }
      v30 = MiShouldYieldProcessor() != 0;
    }
    v31 = !v30;
    v12 = v56;
    v19 = v49;
    v20 = 0xFFFFF6FB40000000uLL;
    if ( !v31 )
      goto LABEL_29;
  }
  v47 = *(_QWORD *)(v23 + 40);
  if ( (v47 & 0x200000000000000LL) != 0 )
    MiUnlockPageTableCharges(48 * (v47 & 0xFFFFFFFFFLL) - 0x58000000000LL, 1);
LABEL_102:
  v51 = -1073741670;
LABEL_60:
  v38 = v49;
  v39 = v53;
  if ( v17 )
  {
    MiUnlockPageTable(v18, v17);
    v17 = 0LL;
  }
  v40 = v59 + (v53 << 12);
  v41 = (const signed __int64 *)P;
  while ( 2 )
  {
    if ( v39 )
    {
      --v39;
      v40 -= 4096LL;
      if ( _bittest64(v41, v39) == 1 )
      {
        if ( v17 != ((v40 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
        {
          if ( v17 )
            MiUnlockPageTable(v18, v17);
          v17 = ((v40 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
          MiLockPageTable(v18, v17);
        }
        MiUnlockVa((__int64)v18, v40);
      }
      v42 = 0;
      if ( (v39 & 0xF) != 0 )
        goto LABEL_68;
      if ( !MiWorkingSetIsContended((__int64)v18)
        && (!v17 || !(unsigned int)MiPageTableLockIsContended((__int64)v18, v17)) )
      {
        if ( (unsigned int)MiShouldYieldProcessor() )
          v42 = 1;
LABEL_68:
        v31 = v42 == 1;
        v38 = v49;
        if ( !v31 )
          continue;
      }
      if ( v17 )
      {
        MiUnlockPageTable(v18, v17);
        v17 = 0LL;
      }
      v38 = v49;
      MiUnlockWorkingSetShared((__int64)v18, v49);
      MiLockWorkingSetShared((__int64)v18);
      continue;
    }
    break;
  }
  v43 = v51;
  if ( v17 )
    MiUnlockPageTable(v18, v17);
  MiUnlockWorkingSetShared((__int64)v18, v38);
  v10 = P;
  v13 = v62;
LABEL_82:
  MiUnlockVadRange(Object, v59, v13, 0LL);
  if ( (v52 & 2) != 0 )
    KeUnstackDetachProcess(&ApcState);
  ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  ExFreePoolWithTag(v10, 0);
  return v43;
}

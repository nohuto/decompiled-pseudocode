/*
 * XREFs of NtLockVirtualMemory @ 0x14001A570
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiUnlockPageTableCharges @ 0x14001A320 (MiUnlockPageTableCharges.c)
 *     MiGetEffectivePagePriorityThread @ 0x14001AEA8 (MiGetEffectivePagePriorityThread.c)
 *     MiSetVaAgeList @ 0x14003E2D0 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTablePage @ 0x1400403C0 (MiLockPageTablePage.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiVadPureReserve @ 0x140070D20 (MiVadPureReserve.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiUpdatePfnPriority @ 0x140082AA8 (MiUpdatePfnPriority.c)
 *     MiGetNextPageTable @ 0x140084230 (MiGetNextPageTable.c)
 *     MiGetWsleContents @ 0x140085F30 (MiGetWsleContents.c)
 *     MiLockPageAndSetDirty @ 0x140086018 (MiLockPageAndSetDirty.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     MiMakeSystemAddressValid @ 0x140088170 (MiMakeSystemAddressValid.c)
 *     MiPageTableLockIsContended @ 0x140096344 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1400991E0 (MiWorkingSetIsContended.c)
 *     KeShouldYieldProcessor @ 0x1400F9D60 (KeShouldYieldProcessor.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiGetPagingFileOffset @ 0x14010FAA4 (MiGetPagingFileOffset.c)
 *     MiUnlockVa @ 0x14015E1A0 (MiUnlockVa.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiUnlockVadRange @ 0x140605A50 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x140605B60 (MiLockVadRange.c)
 *     MiLockUnlockCommon @ 0x1406A375C (MiLockUnlockCommon.c)
 */

NTSTATUS __stdcall NtLockVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T NumberOfBytesToLock,
        ULONG MapType)
{
  int v5; // ebx
  NTSTATUS result; // eax
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rdi
  PVOID PoolWithTag; // rax
  PVOID v11; // r15
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r10
  __int64 v14; // rdx
  unsigned __int64 Address; // r15
  unsigned __int64 v16; // r8
  unsigned __int64 i; // r9
  __int64 v18; // rsi
  char *v19; // r14
  char v20; // al
  __int64 v21; // rdx
  char v22; // r10
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rdi
  __int64 v26; // r9
  unsigned __int64 v27; // r9
  __int64 v28; // r11
  __int64 v29; // r12
  unsigned __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned int EffectivePagePriorityThread; // r12d
  unsigned __int64 v35; // rax
  char v36; // al
  BOOL v37; // edi
  bool v38; // zf
  __int64 v39; // rdx
  ULONG_PTR v40; // rsi
  __int64 v41; // rdx
  unsigned __int64 v42; // rcx
  _QWORD **v43; // rax
  _QWORD *j; // rcx
  unsigned __int64 v45; // r12
  unsigned __int64 NextPageTable; // rax
  char v47; // r12
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // r15
  const signed __int64 *v50; // rdi
  int v51; // r12d
  NTSTATUS v52; // edi
  unsigned __int64 v53; // rcx
  _QWORD **v54; // rax
  _QWORD *k; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  char v58; // [rsp+40h] [rbp-138h]
  int v59; // [rsp+44h] [rbp-134h]
  int v60; // [rsp+44h] [rbp-134h]
  unsigned __int64 v61; // [rsp+48h] [rbp-130h]
  char v62; // [rsp+50h] [rbp-128h]
  PVOID Object; // [rsp+58h] [rbp-120h] BYREF
  int v64; // [rsp+60h] [rbp-118h]
  ULONG_PTR v65; // [rsp+68h] [rbp-110h]
  unsigned __int64 v66; // [rsp+70h] [rbp-108h]
  PVOID P; // [rsp+78h] [rbp-100h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-F8h]
  unsigned __int64 v69; // [rsp+88h] [rbp-F0h]
  int v70; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v71; // [rsp+98h] [rbp-E0h] BYREF
  unsigned __int64 v72; // [rsp+A0h] [rbp-D8h]
  unsigned __int64 v73; // [rsp+A8h] [rbp-D0h]
  unsigned __int64 v74; // [rsp+B0h] [rbp-C8h]
  char v75[8]; // [rsp+B8h] [rbp-C0h] BYREF
  __int64 v76; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 v77; // [rsp+C8h] [rbp-B0h]
  char *v78; // [rsp+D0h] [rbp-A8h]
  __int64 v79; // [rsp+D8h] [rbp-A0h] BYREF
  __int64 v80; // [rsp+E0h] [rbp-98h]
  struct _KTHREAD *CurrentThread; // [rsp+E8h] [rbp-90h]
  PSIZE_T v82; // [rsp+F0h] [rbp-88h]
  PVOID *v83; // [rsp+F8h] [rbp-80h]
  _BYTE v84[48]; // [rsp+100h] [rbp-78h] BYREF

  v82 = NumberOfBytesToLock;
  v83 = BaseAddress;
  v5 = 0;
  v62 = 0;
  v64 = 0;
  result = MiLockUnlockCommon((ULONG_PTR)ProcessHandle, (__int64)&v71, (__int64)&v76, (__int64)&Object);
  if ( result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  v7 = v71;
  v69 = (v71 + v76 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v8 = v71 & 0xFFFFFFFFFFFFF000uLL;
  v61 = v71 & 0xFFFFFFFFFFFFF000uLL;
  v9 = ((v69 - (v71 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1;
  v66 = 0LL;
  BugCheckParameter2 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * ((v9 >> 6) + ((v9 & 0x3F) != 0)), 0x6B6C6D4Du);
  v11 = PoolWithTag;
  P = PoolWithTag;
  if ( !PoolWithTag )
  {
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    return -1073741670;
  }
  memset(PoolWithTag, 0, 4 * ((v9 >> 5) + ((v9 & 0x1F) != 0)));
  if ( ProcessHandle != (HANDLE)-1LL )
  {
    KiStackAttachProcess((_KPROCESS *)Object, 0LL, (__int64)v84);
    v5 = 2;
    v62 = 2;
    v64 = 2;
  }
  v65 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v72 = v8;
  v12 = v69;
  v77 = ((v69 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = MiLockVadRange(Object, v8, v69, 0LL);
  v74 = v13;
  if ( !v13 )
  {
    v52 = -1073741819;
    goto LABEL_86;
  }
  Address = MiLocateAddress(v8);
  v16 = Address;
  for ( i = 0LL; i < v13; ++i )
  {
    v14 = (unsigned int)(1 << (*(_BYTE *)(v16 + 48) & 7));
    if ( (v14 & 0x15) == 0 )
    {
      v52 = -1073741747;
      goto LABEL_85;
    }
    v42 = v16;
    v43 = *(_QWORD ***)(v16 + 8);
    if ( v43 )
    {
      v16 = *(_QWORD *)(v16 + 8);
      for ( j = *v43; j; j = (_QWORD *)*j )
        v16 = (unsigned __int64)j;
    }
    else
    {
      while ( 1 )
      {
        v16 = *(_QWORD *)(v16 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v16 || *(_QWORD *)v16 == v42 )
          break;
        v42 = v16;
      }
    }
  }
  v59 = MiVadPureReserve(Address, v14, v16);
  v18 = 0LL;
  v19 = (char *)Object + 1280;
  v78 = (char *)Object + 1280;
  v80 = *((_QWORD *)Object + 162);
  v20 = MiLockWorkingSetShared((char *)Object + 1280);
LABEL_9:
  v58 = v20;
  v22 = v20;
LABEL_10:
  v23 = v61;
  v24 = 0xFFFFF6FB40000000uLL;
  while ( 1 )
  {
    if ( v23 > v12 )
    {
      if ( v18 )
      {
        MiUnlockPageTableInternal(v19, v18);
        v22 = v58;
      }
      LOBYTE(v21) = v22;
      MiUnlockWorkingSetShared(v19, v21);
      MiUnlockVadRange(Object, v72, v74, 0LL);
      if ( (v5 & 2) != 0 )
        KiUnstackDetachProcess((__int64)v84, 0LL);
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      ExFreePoolWithTag(P, 0);
      v45 = v7 & 0xFFFFFFFFFFFFF000uLL;
      *v82 = v12 - v45 + 4096;
      *v83 = (PVOID)v45;
      return (v5 & 1) != 0 ? 0x40000019 : 0;
    }
    if ( v23 >> 12 > (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) )
    {
      v53 = Address;
      v54 = *(_QWORD ***)(Address + 8);
      if ( v54 )
      {
        Address = *(_QWORD *)(Address + 8);
        for ( k = *v54; k; k = (_QWORD *)*k )
          Address = (unsigned __int64)k;
      }
      else
      {
        while ( 1 )
        {
          Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !Address || *(_QWORD *)Address == v53 )
            break;
          v53 = Address;
        }
      }
      v59 = MiVadPureReserve(Address, v21, 0xFFFFF6FB40000000uLL);
    }
    v73 = ((v23 >> 18) & 0x3FFFFFF8) + v24;
    if ( v18 != v73 )
    {
      if ( v18 )
      {
        MiUnlockPageTableInternal(v19, v18);
        v18 = 0LL;
        v22 = v58;
      }
      LOBYTE(v23) = v22;
      if ( v59 )
      {
        NextPageTable = MiGetNextPageTable(v65, v77, 0, v23, 0, (__int64)v75);
        if ( NextPageTable )
          v18 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( NextPageTable != v65 )
        {
          v60 = -1073741819;
          goto LABEL_63;
        }
      }
      else
      {
        v40 = v65;
        MiMakeSystemAddressValid(v65, 0);
        v18 = ((v40 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
    }
    if ( (*(_DWORD *)v65 & 1) == 0 )
    {
      MiUnlockPageTableInternal(v19, v18);
      v18 = 0LL;
      v73 = 0LL;
      LOBYTE(v41) = v58;
      MiUnlockWorkingSetShared(v19, v41);
      v20 = MiLockWorkingSetShared(v19);
      v7 = v71;
      goto LABEL_9;
    }
    v79 = MI_READ_PTE_LOCK_FREE(v65);
    v25 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v79) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (MiGetWsleContents(0xFFFFFFFFFLL, v26) & 0xF) == 8 )
    {
      v5 |= 1u;
      v62 = v5;
      v64 = v5;
      v35 = v66;
      goto LABEL_28;
    }
    if ( *((_QWORD *)v19 + 14) <= (unsigned __int64)(*(_QWORD *)(v80 + 32) + 6LL) )
    {
      v60 = -1073741663;
      goto LABEL_63;
    }
    if ( (v28 & *(_QWORD *)(v25 + 40)) != 0 && !(unsigned int)MiLockPageTablePage(v25, 1LL) )
      goto LABEL_106;
    BugCheckParameter2 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v73) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( !(unsigned int)MiLockPageTablePage(BugCheckParameter2, 2LL) )
      break;
    v29 = 0LL;
    if ( (*(_DWORD *)(v25 + 16) & 0x400LL) != 0 )
    {
      v30 = *(_QWORD *)(v25 + 40);
      if ( (v30 & 0x200000000000000LL) != 0 )
      {
        v29 = *(_QWORD *)(qword_14043B808 + 8 * ((v30 >> 40) & 0x3FF));
        if ( !(unsigned int)MiChargeCommit(v29, 1LL, 0LL) )
        {
          MiUnlockPageTableCharges(BugCheckParameter2, 2);
          MiUnlockPageTableCharges(48 * (*(_QWORD *)(v25 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 1);
          v60 = -1073741523;
          goto LABEL_63;
        }
        _InterlockedAdd64((volatile signed __int64 *)(v29 + 7808), 1uLL);
      }
    }
    else if ( (unsigned int)MiGetPagingFileOffset() )
    {
      MiLockPageAndSetDirty(v25, 1LL);
    }
    LOBYTE(v27) = 8;
    if ( !(unsigned int)MiSetVaAgeList(v19, v61, 1LL, v27) )
    {
      MiUnlockPageTableCharges(BugCheckParameter2, 2);
      v57 = *(_QWORD *)(v25 + 40);
      if ( (v57 & 0x200000000000000LL) != 0 )
      {
        MiUnlockPageTableCharges(48 * (v57 & 0xFFFFFFFFFLL) - 0x58000000000LL, 1);
        if ( (*(_DWORD *)(v25 + 16) & 0x400LL) != 0 )
          MiReturnCommit(v29, 1LL);
      }
      goto LABEL_106;
    }
    EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(CurrentThread, v31, v32, v33);
    v70 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v70);
      while ( *(__int64 *)(v25 + 24) < 0 );
    }
    MiUpdatePfnPriority(v25, EffectivePagePriorityThread, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v35 = v66;
    _bittestandset64((signed __int64 *)P, v66);
    v7 = v71;
    v27 = v61;
LABEL_28:
    v66 = v35 + 1;
    BugCheckParameter2 = v35 + 1;
    v36 = v65 + 8;
    v65 += 8LL;
    v23 = v27 + 4096;
    v61 = v23;
    v37 = 0;
    if ( v23 <= v69 && (v36 & 0x78) == 0 )
    {
      if ( (unsigned int)MiWorkingSetIsContended(v19) || (unsigned int)MiPageTableLockIsContended(v19, v18) )
      {
LABEL_31:
        MiUnlockPageTableInternal(v19, v18);
        LOBYTE(v39) = v58;
        MiUnlockWorkingSetShared(v19, v39);
        v18 = 0LL;
        MiLockWorkingSetShared(v19);
        v12 = v69;
        v22 = v58;
        goto LABEL_10;
      }
      v37 = KeShouldYieldProcessor() != 0;
      v23 = v61;
    }
    v38 = !v37;
    v12 = v69;
    v22 = v58;
    v24 = 0xFFFFF6FB40000000uLL;
    if ( !v38 )
      goto LABEL_31;
  }
  v56 = *(_QWORD *)(v25 + 40);
  if ( (v56 & 0x200000000000000LL) != 0 )
    MiUnlockPageTableCharges(48 * (v56 & 0xFFFFFFFFFLL) - 0x58000000000LL, 1);
LABEL_106:
  v60 = -1073741670;
LABEL_63:
  v47 = v58;
  if ( v18 )
  {
    MiUnlockPageTableInternal(v19, v18);
    v18 = 0LL;
  }
  v48 = v66;
  v49 = v72 + (v66 << 12);
  v50 = (const signed __int64 *)P;
  while ( 2 )
  {
    if ( v48 )
    {
      --v48;
      v49 -= 4096LL;
      if ( _bittest64(v50, v48) == 1 )
      {
        if ( v18 != ((v49 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
        {
          if ( v18 )
            MiUnlockPageTableInternal(v19, v18);
          v18 = ((v49 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
          MiLockPageTableInternal(v19, v18, 0LL, v27);
        }
        MiUnlockVa(v19, v49);
      }
      v51 = 0;
      if ( (v48 & 0xF) != 0 )
        goto LABEL_71;
      if ( !(unsigned int)MiWorkingSetIsContended(v19) && (!v18 || !(unsigned int)MiPageTableLockIsContended(v19, v18)) )
      {
        if ( KeShouldYieldProcessor() )
          v51 = 1;
LABEL_71:
        v38 = v51 == 1;
        v47 = v58;
        if ( !v38 )
          continue;
      }
      if ( v18 )
      {
        MiUnlockPageTableInternal(v19, v18);
        v18 = 0LL;
      }
      v47 = v58;
      LOBYTE(v21) = v58;
      MiUnlockWorkingSetShared(v19, v21);
      MiLockWorkingSetShared(v19);
      continue;
    }
    break;
  }
  LOBYTE(v5) = v62;
  v52 = v60;
  if ( v18 )
    MiUnlockPageTableInternal(v19, v18);
  LOBYTE(v21) = v47;
  MiUnlockWorkingSetShared(v19, v21);
  v13 = v74;
LABEL_85:
  v11 = P;
LABEL_86:
  MiUnlockVadRange(Object, v72, v13, 0LL);
  if ( (v5 & 2) != 0 )
    KiUnstackDetachProcess((__int64)v84, 0LL);
  ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  ExFreePoolWithTag(v11, 0);
  return v52;
}

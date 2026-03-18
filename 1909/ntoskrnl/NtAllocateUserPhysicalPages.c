/*
 * XREFs of NtAllocateUserPhysicalPages @ 0x140896680
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14003FA20 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiChargeProcessCommitment @ 0x140052500 (MiChargeProcessCommitment.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140053970 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiReturnProcessCommitment @ 0x1400590E4 (MiReturnProcessCommitment.c)
 *     MiSectionControlArea @ 0x140071A50 (MiSectionControlArea.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     MiAllocatePagesForMdl @ 0x1400DCB14 (MiAllocatePagesForMdl.c)
 *     MiFreePagesFromMdl @ 0x1400DDE94 (MiFreePagesFromMdl.c)
 *     ExGetCallBackBlockRoutine @ 0x14013D6E0 (ExGetCallBackBlockRoutine.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiSortMdlFrames @ 0x1402C2A80 (MiSortMdlFrames.c)
 *     MiLockAwePagesShared @ 0x1402D6BE0 (MiLockAwePagesShared.c)
 *     MiReferenceAweHandle @ 0x1402D7670 (MiReferenceAweHandle.c)
 *     MiUnlockAweVadsShared @ 0x1402D79D0 (MiUnlockAweVadsShared.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 *     MiCreateProcessDefaultAweInfo @ 0x140895BAC (MiCreateProcessDefaultAweInfo.c)
 *     MiGetAweInfoPartition @ 0x140896068 (MiGetAweInfoPartition.c)
 *     MiResizeAweBitMap @ 0x1408963BC (MiResizeAweBitMap.c)
 *     MiChargeProcessPhysicalPages @ 0x140897C40 (MiChargeProcessPhysicalPages.c)
 */

NTSTATUS __stdcall NtAllocateUserPhysicalPages(HANDLE ProcessHandle, PULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rbx
  KPROCESSOR_MODE PreviousMode; // r14
  unsigned __int64 v8; // r12
  NTSTATUS result; // eax
  __int64 v10; // rcx
  _DWORD *v11; // rdi
  _KPROCESS *v12; // r13
  NTSTATUS v13; // edi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  char v19; // bl
  int v20; // eax
  __int64 v21; // r10
  __int64 AweInfoPartition; // r11
  unsigned __int64 v23; // rbx
  unsigned int v24; // r14d
  unsigned __int64 v25; // rcx
  __int16 v26; // ax
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rsi
  unsigned int v29; // r8d
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // rdi
  unsigned int *PagesForMdl; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // r14
  unsigned int *v35; // rsi
  unsigned __int64 v36; // rdi
  __int64 v37; // rbx
  ULONG_PTR v38; // rax
  ULONG_PTR v39; // r8
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int64 v43; // r14
  __int64 v44; // r10
  unsigned int *v45; // rax
  unsigned int *v46; // r11
  unsigned int *v47; // rsi
  unsigned __int64 v48; // rbx
  _QWORD *v49; // rcx
  _QWORD *v50; // r9
  unsigned __int64 v51; // r8
  unsigned __int64 i; // rdx
  unsigned int *v53; // rbx
  _KPROCESS *v54; // rcx
  unsigned int v55; // [rsp+30h] [rbp-148h]
  char v56; // [rsp+40h] [rbp-138h]
  unsigned int v57; // [rsp+48h] [rbp-130h]
  unsigned int *P; // [rsp+50h] [rbp-128h]
  PVOID Object; // [rsp+58h] [rbp-120h] BYREF
  unsigned __int64 v60; // [rsp+60h] [rbp-118h]
  _DWORD *v61; // [rsp+68h] [rbp-110h] BYREF
  unsigned __int64 v62; // [rsp+70h] [rbp-108h]
  _KPROCESS *v63; // [rsp+78h] [rbp-100h] BYREF
  unsigned __int64 v64; // [rsp+80h] [rbp-F8h]
  unsigned int v65; // [rsp+88h] [rbp-F0h]
  unsigned int *v66; // [rsp+90h] [rbp-E8h]
  unsigned __int64 v67; // [rsp+98h] [rbp-E0h]
  unsigned int *v68; // [rsp+A0h] [rbp-D8h]
  __int64 v69; // [rsp+A8h] [rbp-D0h]
  unsigned __int64 v70; // [rsp+B0h] [rbp-C8h]
  unsigned __int64 v71; // [rsp+B8h] [rbp-C0h]
  volatile void *Address; // [rsp+C0h] [rbp-B8h]
  unsigned __int64 v73; // [rsp+C8h] [rbp-B0h]
  unsigned __int64 v74; // [rsp+D0h] [rbp-A8h]
  unsigned __int64 v75; // [rsp+D8h] [rbp-A0h]
  unsigned int *v76; // [rsp+E0h] [rbp-98h]
  struct _KTHREAD *v77; // [rsp+E8h] [rbp-90h]
  unsigned int *v78; // [rsp+F0h] [rbp-88h]
  PULONG_PTR v79; // [rsp+F8h] [rbp-80h]
  unsigned __int64 v80; // [rsp+100h] [rbp-78h]
  _BYTE v81[48]; // [rsp+118h] [rbp-60h] BYREF

  v79 = NumberOfPages;
  Address = UserPfnArray;
  memset(v81, 0, sizeof(v81));
  v65 = 0;
  v73 = 0LL;
  v74 = 0LL;
  v70 = 0LL;
  v75 = 0LL;
  v56 = 0;
  CurrentThread = KeGetCurrentThread();
  v77 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v10 = (__int64)NumberOfPages;
    if ( (unsigned __int64)NumberOfPages >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v10 = *(_QWORD *)v10;
    v8 = *NumberOfPages;
    v67 = v8;
    if ( !v8 )
      return 0;
    if ( v8 > 0x1FFFFFFFFFFFFFFFLL )
      return -1073741584;
    ProbeForWrite(Address, 8 * v8, 8u);
  }
  else
  {
    v8 = *NumberOfPages;
    v67 = v8;
    if ( !v8 )
      return 0;
  }
  v11 = 0LL;
  v61 = 0LL;
  result = MiReferenceAweHandle(ProcessHandle, 2u, PreviousMode, &Object, &v63);
  if ( result >= 0 )
  {
    if ( v63 )
    {
      v11 = *(_DWORD **)(MiSectionControlArea((__int64)v63) + 8);
      v61 = v11;
    }
    else
    {
      v12 = (_KPROCESS *)Object;
      if ( Object )
        goto LABEL_17;
      v56 = 8;
    }
    Object = Process;
    v12 = Process;
LABEL_17:
    if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
    {
      v13 = -1073741727;
LABEL_87:
      if ( v8 )
      {
        if ( (v56 & 2) != 0 )
        {
          LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v12);
          MiReturnProcessCommitment((__int64)v12, v8);
          UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v12);
        }
        if ( (v56 & 4) != 0 )
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)&v12[2].Affinity.Bitmap[11], -(__int64)v8);
          v12 = (_KPROCESS *)Object;
        }
      }
      if ( (v56 & 1) != 0 )
        KiUnstackDetachProcess((struct _KTHREAD *)v81, 0);
      if ( (v56 & 8) == 0 )
      {
        v54 = v63;
        if ( !v63 )
          v54 = v12;
        ObfDereferenceObjectWithTag(v54, 0x68506D4Du);
      }
      return v13;
    }
    if ( v12 != Process )
    {
      KiStackAttachProcess(v12, 0, (__int64)v81);
      v56 |= 1u;
    }
    v60 = 0LL;
    if ( !v11 )
    {
      v13 = MiCreateProcessDefaultAweInfo(&v61);
      if ( v13 < 0 )
        goto LABEL_87;
      v11 = v61;
    }
    v14 = ExGetCallBackBlockRoutine((__int64)v11);
    v62 = v14;
    if ( v14 > 1 )
    {
      v15 = v8 * v14;
      if ( v8 >= v8 * v14 )
      {
        v13 = -1073741584;
        goto LABEL_87;
      }
      v8 *= v14;
      v67 = v15;
    }
    if ( !v63 )
    {
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v12);
      if ( (v12[1].DirectoryTableBase & 0x2000000000LL) != 0 )
      {
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v12);
        v13 = -1073741558;
        goto LABEL_87;
      }
      if ( !(unsigned int)MiChargeProcessPhysicalPages(v12, v8) )
      {
        v17 = (__int64)v12;
        v18 = (__int64)CurrentThread;
LABEL_33:
        UNLOCK_ADDRESS_SPACE_SHARED(v18, v17);
        v13 = -1073741523;
        goto LABEL_87;
      }
      v19 = v56 | 4;
      v56 |= 4u;
      v20 = MiChargeProcessCommitment(v16, v8);
      v17 = (__int64)v12;
      v18 = (__int64)CurrentThread;
      if ( !v20 )
        goto LABEL_33;
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v12);
      v56 = v19 | 2;
    }
    AweInfoPartition = MiGetAweInfoPartition((__int64)v11);
    v69 = AweInfoPartition;
    v23 = *(_QWORD *)(AweInfoPartition + 7880) + 1LL;
    v24 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 192) + 146LL);
    v65 = v24;
    v66 = 0LL;
    v76 = 0LL;
    v25 = v12[1].ActiveProcessors.Bitmap[6];
    if ( v25 )
    {
      v26 = *(_WORD *)(v25 + 8);
      if ( (v26 == 332 || v26 == 452) && v23 > 0x100000000LL )
        v23 = 0x100000000LL;
    }
    v27 = (v23 << 12) - 4096;
    v74 = v27;
    v28 = 0LL;
    v73 = 0LL;
    v29 = (*v11 >> 2) & 1 | 0x80000000;
    v57 = v29;
    v30 = v21 << 12;
    v75 = v21 << 12;
    if ( v21 == 1 )
    {
      v31 = 0LL;
      v70 = 0LL;
    }
    else
    {
      v29 |= 0x30u;
      v57 = v29;
      v31 = v21 << 12;
      v70 = v21 << 12;
    }
    while ( 2 )
    {
      PagesForMdl = 0LL;
      P = 0LL;
      v33 = v8 - v60;
      if ( v8 - v60 > 0xC0000 )
        v33 = 786432LL;
      v64 = v33;
      if ( v33 >= 0x10 && (v56 & 0x10) == 0 )
      {
        PagesForMdl = MiAllocatePagesForMdl(AweInfoPartition, v28, v27, v30, v33 << 12, v61[18], v24, v29 | 0x42);
        P = PagesForMdl;
        v33 = v64;
        v29 = v57;
        AweInfoPartition = v69;
        if ( !PagesForMdl )
          v56 |= 0x10u;
      }
      if ( PagesForMdl )
      {
        v34 = (__int64)v61;
        v35 = P;
      }
      else
      {
        v55 = v24;
        v34 = (__int64)v61;
        v35 = MiAllocatePagesForMdl(AweInfoPartition, v28, v27, v31, v33 << 12, v61[18], v55, v29);
        P = v35;
      }
      if ( v35 )
      {
        MiSortMdlFrames((__int64)v35);
        v68 = v35 + 12;
        v71 = (unsigned __int64)v35[10] >> 12;
        v78 = &v35[2 * v71 + 12];
        v36 = *((_QWORD *)v78 - 1) / v62;
        v64 = v36;
        v37 = (__int64)v77;
        while ( 1 )
        {
          if ( !v63 )
          {
            LOCK_ADDRESS_SPACE_SHARED(v37, (__int64)v12);
            if ( (v12[1].DirectoryTableBase & 0x2000000000LL) != 0 )
            {
              UNLOCK_ADDRESS_SPACE_SHARED(v37, (__int64)v12);
              MiFreePagesFromMdl((ULONG_PTR)v35, 0x80000000);
              ExFreePoolWithTag(v35, 0);
              v13 = -1073741558;
              v48 = v60;
              goto LABEL_73;
            }
          }
          v38 = MiLockAwePagesShared(v34, v37);
          v39 = v38;
          if ( v36 < *(_QWORD *)(v34 + 16) )
            break;
          MiUnlockAweVadsShared(v37, v38);
          if ( !v63 )
            UNLOCK_ADDRESS_SPACE_SHARED(v37, (__int64)v12);
          v13 = MiResizeAweBitMap(v34, v40, v41);
          if ( v13 >= 0 )
          {
            v36 = v64;
          }
          else
          {
            if ( v64 >= *(_QWORD *)(v34 + 16) )
            {
              MiFreePagesFromMdl((ULONG_PTR)v35, 0x80000000);
              ExFreePoolWithTag(v35, 0);
              v48 = v60;
              goto LABEL_73;
            }
            v36 = v64;
          }
        }
        v42 = *(_QWORD *)(v34 + 24);
        v43 = v62;
        v44 = 2 * v62;
        v45 = v68;
        v46 = v78;
        do
        {
          _InterlockedOr(
            (volatile signed __int32 *)(v42 + 4 * ((*(_QWORD *)v45 / v43) >> 5)),
            1 << ((*(_QWORD *)v45 / v43) & 0x1F));
          v45 = &v68[v44];
          v68 = v45;
        }
        while ( v45 != v46 );
        MiUnlockAweVadsShared(v37, v39);
        if ( !v63 )
          UNLOCK_ADDRESS_SPACE_SHARED(v37, (__int64)Object);
        *(_QWORD *)P = v66;
        v47 = P;
        v66 = P;
        v76 = P;
        AweInfoPartition = v69;
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v69 + 8568), v71);
        v48 = v71 + v60;
        v60 = v48;
        v13 = 0;
        v8 = v67;
        v12 = (_KPROCESS *)Object;
        if ( v48 != v67 )
        {
          v24 = v65;
          v28 = v73;
          v27 = v74;
          v31 = v70;
          v30 = v75;
          v29 = v57;
          continue;
        }
      }
      else
      {
        v48 = v60;
        v13 = v60 == 0 ? 0xC000009A : 0;
LABEL_73:
        v47 = v66;
        v43 = v62;
      }
      break;
    }
    if ( (v56 & 1) != 0 )
    {
      KiUnstackDetachProcess((struct _KTHREAD *)v81, 0);
      v56 &= ~1u;
    }
    if ( v13 >= 0 )
      *v79 = v48 / v43;
    v49 = v47;
    v50 = Address;
    while ( v49 )
    {
      v68 = (unsigned int *)(v49 + 6);
      v51 = (unsigned __int64)*((unsigned int *)v49 + 10) >> 12;
      v71 = v51;
      for ( i = 0LL; ; i += v43 )
      {
        v80 = i;
        if ( i >= v51 )
          break;
        *v50++ = v49[i + 6];
        Address = v50;
      }
      v49 = (_QWORD *)*v49;
    }
    while ( v47 )
    {
      v53 = *(unsigned int **)v47;
      ExFreePoolWithTag(v47, 0);
      v47 = v53;
    }
    v8 -= v60;
    v67 = v8;
    CurrentThread = v77;
    goto LABEL_87;
  }
  return result;
}

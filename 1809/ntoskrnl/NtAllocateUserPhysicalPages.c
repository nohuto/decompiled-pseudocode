/*
 * XREFs of NtAllocateUserPhysicalPages @ 0x1408518F0
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocatePagesForMdl @ 0x140011048 (MiAllocatePagesForMdl.c)
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiFreePagesFromMdl @ 0x14002A000 (MiFreePagesFromMdl.c)
 *     MiChargeProcessCommitment @ 0x14004D1C0 (MiChargeProcessCommitment.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400531B0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiReturnProcessCommitment @ 0x140065D14 (MiReturnProcessCommitment.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140075450 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     ExGetCallBackBlockRoutine @ 0x140088BA0 (ExGetCallBackBlockRoutine.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiSortMdlFrames @ 0x1402AA4D0 (MiSortMdlFrames.c)
 *     MiLockAwePagesShared @ 0x1402B14A8 (MiLockAwePagesShared.c)
 *     MiReferenceAweHandle @ 0x1402B1D5C (MiReferenceAweHandle.c)
 *     MiUnlockAweVadsShared @ 0x1402B22D0 (MiUnlockAweVadsShared.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     MiCreateProcessDefaultAweInfo @ 0x140850C6C (MiCreateProcessDefaultAweInfo.c)
 *     MiGetAweInfoPartition @ 0x140851130 (MiGetAweInfoPartition.c)
 *     MiResizeAweBitMap @ 0x140851454 (MiResizeAweBitMap.c)
 *     MiChargeProcessPhysicalPages @ 0x14085CAF0 (MiChargeProcessPhysicalPages.c)
 */

NTSTATUS __stdcall NtAllocateUserPhysicalPages(HANDLE ProcessHandle, PULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  unsigned int v4; // ebx
  struct _KTHREAD *CurrentThread; // r13
  _KPROCESS *Process; // rdi
  KPROCESSOR_MODE PreviousMode; // si
  unsigned __int64 v8; // r12
  NTSTATUS result; // eax
  __int64 v10; // rcx
  __int64 v11; // r14
  _KPROCESS *v12; // r15
  NTSTATUS v13; // r14d
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // r8
  unsigned __int64 AweInfoPartition; // r10
  unsigned __int64 v22; // rdi
  __int16 v23; // r11
  unsigned __int64 v24; // rcx
  __int16 v25; // ax
  unsigned __int64 v26; // rdi
  int v27; // ecx
  unsigned int v28; // r9d
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rax
  unsigned int v31; // edx
  unsigned __int64 v32; // rcx
  unsigned int *PagesForMdl; // rax
  ULONG_PTR v34; // rax
  ULONG_PTR v35; // r9
  __int64 v36; // rdx
  __int64 v37; // r8
  unsigned __int64 v38; // rdi
  __int64 v39; // r8
  unsigned __int64 v40; // rcx
  __int64 v41; // r10
  unsigned int *v42; // rax
  unsigned int *v43; // r11
  __int64 v44; // rax
  unsigned __int64 v45; // r11
  _QWORD *v46; // rcx
  _QWORD *v47; // r9
  unsigned __int64 v48; // r8
  unsigned __int64 i; // rdx
  _QWORD *j; // rax
  _QWORD *v51; // rdi
  _KPROCESS *v52; // rcx
  __int16 v53; // [rsp+42h] [rbp-136h]
  unsigned int *P; // [rsp+48h] [rbp-130h]
  __int64 v55; // [rsp+50h] [rbp-128h]
  PVOID Object; // [rsp+58h] [rbp-120h] BYREF
  unsigned __int64 v57; // [rsp+60h] [rbp-118h]
  unsigned int v58; // [rsp+68h] [rbp-110h]
  unsigned int v59; // [rsp+6Ch] [rbp-10Ch]
  __int64 v60; // [rsp+70h] [rbp-108h] BYREF
  unsigned __int64 v61; // [rsp+78h] [rbp-100h]
  _KPROCESS *v62; // [rsp+80h] [rbp-F8h] BYREF
  unsigned __int64 v63; // [rsp+88h] [rbp-F0h]
  unsigned int *v64; // [rsp+90h] [rbp-E8h]
  PVOID v65; // [rsp+98h] [rbp-E0h]
  unsigned __int64 v66; // [rsp+A0h] [rbp-D8h]
  unsigned __int64 v67; // [rsp+A8h] [rbp-D0h]
  volatile void *Address; // [rsp+B0h] [rbp-C8h]
  unsigned __int64 v69; // [rsp+B8h] [rbp-C0h]
  unsigned int *v70; // [rsp+C0h] [rbp-B8h]
  unsigned __int64 v71; // [rsp+C8h] [rbp-B0h]
  unsigned int *v72; // [rsp+D0h] [rbp-A8h]
  PULONG_PTR v73; // [rsp+D8h] [rbp-A0h]
  unsigned __int64 v74; // [rsp+E0h] [rbp-98h]
  struct _KTHREAD *v75; // [rsp+F0h] [rbp-88h]
  _BYTE v76[32]; // [rsp+100h] [rbp-78h] BYREF
  __int64 v77; // [rsp+120h] [rbp-58h]

  v73 = NumberOfPages;
  Address = UserPfnArray;
  v4 = 0;
  CurrentThread = KeGetCurrentThread();
  v75 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v10 = (__int64)NumberOfPages;
    if ( (unsigned __int64)NumberOfPages >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v10 = *(_QWORD *)v10;
    v8 = *NumberOfPages;
    v63 = v8;
    if ( !v8 )
      return 0;
    if ( v8 > 0x1FFFFFFFFFFFFFFFLL )
      return -1073741584;
    ProbeForWrite(Address, 8 * v8, 8u);
  }
  else
  {
    v8 = *NumberOfPages;
    v63 = v8;
    if ( !v8 )
      return 0;
  }
  v11 = 0LL;
  v60 = 0LL;
  result = MiReferenceAweHandle(ProcessHandle, 2u, PreviousMode, &Object, &v62);
  if ( result >= 0 )
  {
    if ( v62 )
    {
      v11 = *(_QWORD *)(MiSectionControlArea((__int64)v62) + 8);
      v60 = v11;
    }
    else
    {
      v12 = (_KPROCESS *)Object;
      if ( Object )
        goto LABEL_17;
      v4 = 8;
    }
    Object = Process;
    v12 = Process;
LABEL_17:
    if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
    {
      v13 = -1073741727;
LABEL_88:
      if ( v8 )
      {
        if ( (v4 & 2) != 0 )
        {
          LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v12);
          MiReturnProcessCommitment((__int64)v12, v8);
          UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v12);
        }
        if ( (v4 & 4) != 0 )
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)&v12[2].Affinity.Bitmap[7], -(__int64)v8);
          v12 = (_KPROCESS *)Object;
        }
      }
      if ( (v4 & 1) != 0 )
        KiUnstackDetachProcess((__int64)v76, 0LL);
      if ( v4 < 8 )
      {
        v52 = v62;
        if ( !v62 )
          v52 = v12;
        ObfDereferenceObjectWithTag(v52, 0x68506D4Du);
      }
      return v13;
    }
    if ( v12 == Process )
    {
      v77 = 0LL;
    }
    else
    {
      KiStackAttachProcess(v12, 0LL, (__int64)v76);
      v4 |= 1u;
    }
    v55 = 0LL;
    if ( !v11 )
    {
      v13 = MiCreateProcessDefaultAweInfo(&v60);
      if ( v13 < 0 )
        goto LABEL_88;
      v11 = v60;
    }
    v14 = ExGetCallBackBlockRoutine(v11);
    v61 = v14;
    if ( v14 > 1 )
    {
      v15 = v8 * v14;
      if ( v8 >= v8 * v14 )
      {
        v13 = -1073741584;
        goto LABEL_88;
      }
      v8 *= v14;
      v63 = v15;
    }
    if ( !v62 )
    {
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v12);
      if ( (v12[1].DirectoryTableBase & 0x2000000000LL) != 0 )
      {
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v12);
        v13 = -1073741558;
        goto LABEL_88;
      }
      if ( !(unsigned int)MiChargeProcessPhysicalPages(v12, v8) )
      {
        v17 = (__int64)v12;
        v18 = (__int64)CurrentThread;
LABEL_34:
        UNLOCK_ADDRESS_SPACE_SHARED(v18, v17);
        v13 = -1073741523;
        goto LABEL_88;
      }
      v4 |= 4u;
      v19 = MiChargeProcessCommitment(v16, v8);
      v17 = (__int64)v12;
      v18 = (__int64)CurrentThread;
      if ( !v19 )
        goto LABEL_34;
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v12);
      v4 |= 2u;
    }
    AweInfoPartition = MiGetAweInfoPartition(v11);
    v66 = AweInfoPartition;
    v22 = *(_QWORD *)(AweInfoPartition + 7112) + 1LL;
    v23 = *(_WORD *)(*(_QWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 192) + 146LL);
    v53 = v23;
    v65 = 0LL;
    v70 = 0LL;
    v24 = v12[1].ActiveProcessors.Bitmap[7];
    if ( v24 )
    {
      v25 = *(_WORD *)(v24 + 8);
      if ( (v25 == 332 || v25 == 452) && v22 > 0x100000000LL )
        v22 = 0x100000000LL;
    }
    v26 = v22 << 12;
    v27 = *(_DWORD *)v11 & 4;
    v28 = (v27 != 0) + 0x80000000;
    v29 = v20 << 12;
    v30 = 0LL;
    if ( v20 != 1 )
      v30 = v20 << 12;
    v71 = v30;
    if ( v20 != 1 )
      v28 |= 0x30u;
    v59 = v28;
    v31 = (v27 != 0) - 2147483584;
    v58 = v31;
    while ( 2 )
    {
      v32 = v8 - v55;
      if ( v8 - v55 > 0xC0000 )
        v32 = 786432LL;
      v57 = v32;
      if ( v32 >= 0x10 && (v31 & 0x40) != 0 )
      {
        PagesForMdl = MiAllocatePagesForMdl(
                        AweInfoPartition,
                        0LL,
                        v26 - 4096,
                        v29,
                        v32 << 12,
                        *(_DWORD *)(v11 + 72),
                        v23,
                        v31);
        P = PagesForMdl;
        v32 = v57;
        AweInfoPartition = v66;
        v28 = v59;
        v23 = v53;
        if ( PagesForMdl )
          goto LABEL_54;
        v58 &= ~0x40u;
      }
      PagesForMdl = MiAllocatePagesForMdl(
                      AweInfoPartition,
                      0LL,
                      v26 - 4096,
                      v71,
                      v32 << 12,
                      *(_DWORD *)(v11 + 72),
                      v23,
                      v28);
      P = PagesForMdl;
      if ( !PagesForMdl )
      {
        v38 = v55;
        v13 = v55 == 0 ? 0xC000009A : 0;
LABEL_73:
        LODWORD(v57) = v13;
LABEL_74:
        if ( (v4 & 1) != 0 )
        {
          KiUnstackDetachProcess((__int64)v76, 0LL);
          v4 &= ~1u;
        }
        v45 = v61;
        if ( v13 >= 0 )
          *v73 = v38 / v61;
        v46 = v65;
        v47 = Address;
        while ( v46 )
        {
          v64 = (unsigned int *)(v46 + 6);
          v48 = (unsigned __int64)*((unsigned int *)v46 + 10) >> 12;
          v67 = v48;
          for ( i = 0LL; ; i += v45 )
          {
            v74 = i;
            if ( i >= v48 )
              break;
            *v47++ = v46[i + 6];
            Address = v47;
          }
          v46 = (_QWORD *)*v46;
        }
        for ( j = v65; j; j = v51 )
        {
          v51 = (_QWORD *)*j;
          ExFreePoolWithTag(j, 0);
        }
        v8 -= v55;
        v63 = v8;
        goto LABEL_88;
      }
LABEL_54:
      MiSortMdlFrames((__int64)PagesForMdl);
      v64 = P + 12;
      v67 = (unsigned __int64)P[10] >> 12;
      v72 = &P[2 * v67 + 12];
      v69 = *((_QWORD *)v72 - 1) / v61;
      while ( 1 )
      {
        if ( !v62 )
        {
          LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v12);
          if ( (v12[1].DirectoryTableBase & 0x2000000000LL) != 0 )
          {
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v12);
            MiFreePagesFromMdl((ULONG_PTR)P, 0x80000000);
            ExFreePoolWithTag(P, 0);
            v13 = -1073741558;
            v38 = v55;
            goto LABEL_73;
          }
        }
        v34 = MiLockAwePagesShared(v11, (__int64)CurrentThread);
        v35 = v34;
        if ( v69 < *(_QWORD *)(v11 + 16) )
          break;
        MiUnlockAweVadsShared((__int64)CurrentThread, v34);
        if ( !v62 )
          UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v12);
        v13 = MiResizeAweBitMap(v11, v36, v37);
        LODWORD(v57) = v13;
        if ( v13 < 0 && v69 >= *(_QWORD *)(v60 + 16) )
        {
          MiFreePagesFromMdl((ULONG_PTR)P, 0x80000000);
          ExFreePoolWithTag(P, 0);
          v38 = v55;
          goto LABEL_74;
        }
        v11 = v60;
      }
      v39 = *(_QWORD *)(v11 + 24);
      v40 = v61;
      v41 = 2 * v61;
      v42 = v64;
      v43 = v72;
      do
      {
        _InterlockedOr(
          (volatile signed __int32 *)(v39 + 4 * ((*(_QWORD *)v42 / v40) >> 5)),
          1 << ((*(_QWORD *)v42 / v40) & 0x1F));
        v42 = &v64[v41];
        v64 = v42;
        v40 = v61;
      }
      while ( v42 != v43 );
      MiUnlockAweVadsShared((__int64)CurrentThread, v35);
      if ( !v62 )
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Object);
      *(_QWORD *)P = v65;
      v65 = P;
      v70 = P;
      AweInfoPartition = v66;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v66 + 7800), v67);
      v44 = v67 + v55;
      v55 = v44;
      v13 = 0;
      LODWORD(v57) = 0;
      v8 = v63;
      v12 = (_KPROCESS *)Object;
      if ( v44 != v63 )
      {
        v11 = v60;
        v31 = v58;
        v28 = v59;
        v23 = v53;
        continue;
      }
      break;
    }
    v38 = v44;
    goto LABEL_74;
  }
  return result;
}

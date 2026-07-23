/*
 * XREFs of MmQueryVirtualMemory @ 0x1405EF910
 * Callers:
 *     ?SmStCheckResident@?$SMKM_STORE@USM_TRAITS@@@@SA?AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z @ 0x140145CBC (-SmStCheckResident@-$SMKM_STORE@USM_TRAITS@@@@SA-AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z.c)
 *     NtQueryVirtualMemory @ 0x1405EF8E0 (NtQueryVirtualMemory.c)
 *     PfpVirtualQuery @ 0x1408662D8 (PfpVirtualQuery.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiUnlockVadShared @ 0x14001AF48 (MiUnlockVadShared.c)
 *     MiReferenceControlAreaFile @ 0x14001CBB0 (MiReferenceControlAreaFile.c)
 *     MiLocateVadEvent @ 0x140027BCC (MiLocateVadEvent.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400531B0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVad @ 0x140074540 (MiUnlockAndDereferenceVad.c)
 *     MiVadMapsLargeImage @ 0x140074A00 (MiVadMapsLargeImage.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140075450 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140075490 (MiUnlockAndDereferenceVadShared.c)
 *     MiVadDeleted @ 0x140075550 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x140075560 (MiLockVadShared.c)
 *     MiReferenceVad @ 0x140075590 (MiReferenceVad.c)
 *     MiQueryAddressSpan @ 0x140075E90 (MiQueryAddressSpan.c)
 *     MiLockVad @ 0x140076994 (MiLockVad.c)
 *     MiGetWorkingSetInfoList @ 0x140096530 (MiGetWorkingSetInfoList.c)
 *     MiIsSoftwareEnclave @ 0x1401212CC (MiIsSoftwareEnclave.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlCompareMemoryUlong @ 0x1401C5DB0 (RtlCompareMemoryUlong.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     VslQueryVirtualMemory @ 0x14027BC60 (VslQueryVirtualMemory.c)
 *     MiGetWorkingSetInfo @ 0x1402BEEB4 (MiGetWorkingSetInfo.c)
 *     MiWaitForVadDeletion @ 0x1402CB340 (MiWaitForVadDeletion.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     ObQueryNameStringMode @ 0x140662110 (ObQueryNameStringMode.c)
 *     ExRaiseAccessViolation @ 0x1408D7860 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MmQueryVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 a2,
        int a3,
        __int64 *a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        int a7)
{
  unsigned __int64 v7; // r15
  _QWORD *v11; // r9
  ULONG_PTR v12; // rdi
  unsigned __int64 v13; // rsi
  struct _KTHREAD *CurrentThread; // r12
  char PreviousMode; // cl
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  _KPROCESS *Process; // r14
  int v21; // ebx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  bool v25; // zf
  __int64 v26; // r15
  __int64 v27; // r14
  unsigned __int64 v28; // r10
  __int64 v29; // r15
  int v30; // edx
  int v31; // edx
  int v32; // esi
  __int64 v33; // r14
  int v34; // eax
  __int64 v35; // rdx
  int v36; // r10d
  __int64 v37; // rcx
  unsigned __int64 v38; // r8
  int v39; // r10d
  __int64 v40; // r11
  unsigned __int64 v41; // rdx
  PVOID v42; // rsi
  __int64 *v43; // rdx
  __int64 result; // rax
  __int64 AddressSpan; // rax
  __int64 *v46; // rdx
  __int64 v47; // rax
  unsigned __int64 v48; // r12
  __int64 v49; // rax
  unsigned __int64 v50; // r14
  unsigned __int64 v51; // r14
  char v52; // bl
  __int64 *v53; // rdx
  __int64 v54; // rax
  int v55; // ecx
  int v56; // eax
  int v57; // ecx
  __int64 v58; // rax
  int WorkingSetInfoList; // edi
  __int64 v60; // rdx
  unsigned __int64 v61; // rdi
  unsigned __int64 v62; // r8
  unsigned __int64 v63; // rdi
  unsigned __int64 i; // rcx
  __int64 *v65; // rax
  unsigned int NameStringMode; // ebx
  unsigned __int64 v67; // rdi
  __int64 v68; // rdi
  _QWORD *v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 **VadEvent; // rax
  __int64 v74; // r9
  char v75; // [rsp+40h] [rbp-158h]
  char v76; // [rsp+44h] [rbp-154h]
  unsigned int v77; // [rsp+48h] [rbp-150h] BYREF
  _QWORD *v78; // [rsp+50h] [rbp-148h]
  unsigned __int64 v79; // [rsp+58h] [rbp-140h]
  unsigned __int8 v80; // [rsp+60h] [rbp-138h]
  PVOID Object; // [rsp+68h] [rbp-130h]
  PVOID v82; // [rsp+70h] [rbp-128h] BYREF
  __int64 *v83; // [rsp+78h] [rbp-120h]
  __int64 v84; // [rsp+80h] [rbp-118h]
  PVOID v85; // [rsp+88h] [rbp-110h]
  __int128 v86; // [rsp+90h] [rbp-108h]
  __int64 v87; // [rsp+A0h] [rbp-F8h]
  unsigned __int64 v88; // [rsp+A8h] [rbp-F0h]
  _OWORD v89[3]; // [rsp+B0h] [rbp-E8h] BYREF
  __int64 v90; // [rsp+E0h] [rbp-B8h] BYREF
  __int128 Source; // [rsp+F0h] [rbp-A8h] BYREF
  __int128 v92; // [rsp+100h] [rbp-98h]
  __int128 v93; // [rsp+110h] [rbp-88h]
  _BYTE v94[48]; // [rsp+120h] [rbp-78h] BYREF

  v7 = (unsigned __int64)a4;
  v83 = a4;
  v79 = a2;
  v11 = (_QWORD *)a6;
  v78 = (_QWORD *)a6;
  v12 = 0LL;
  v75 = 0;
  v85 = 0LL;
  v88 = 0LL;
  if ( a3 != 6 )
  {
    if ( a3 )
    {
      switch ( a3 )
      {
        case 1:
        case 5:
          v13 = a5;
          if ( a5 < 8 )
            return 3221225476LL;
          goto LABEL_3;
        case 2:
          v13 = a5;
          goto LABEL_3;
        case 3:
          v13 = a5;
          if ( a5 < 0x18 )
            return 3221225476LL;
          goto LABEL_3;
        case 4:
          v13 = a5;
          if ( a5 < 0x10 )
            return 3221225476LL;
          goto LABEL_3;
        case 7:
          v13 = a5;
          if ( a5 < 0x20 )
            return 3221225476LL;
          goto LABEL_3;
        case 8:
          goto LABEL_70;
        default:
          result = 3221225475LL;
          break;
      }
      return result;
    }
LABEL_70:
    v13 = a5;
    if ( a5 >= 0x30 )
      goto LABEL_3;
    return 3221225476LL;
  }
  v13 = a5;
  if ( a5 < 0x18 )
    return 3221225476LL;
LABEL_3:
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v76 = PreviousMode;
  if ( PreviousMode )
  {
    if ( v13 )
    {
      v16 = v7;
      if ( (v7 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = v13 + v7 - 1;
      if ( v7 > v17 || v17 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v18 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v16 = *(_BYTE *)v16;
        v16 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v16 != v18 );
    }
    if ( a6 )
    {
      v19 = a6;
      if ( a6 >= 0x7FFFFFFF0000LL )
        v19 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v19 = *(_QWORD *)v19;
    }
    PreviousMode = v76;
  }
  if ( a2 > 0x7FFFFFFEFFFFLL )
    return 3221225485LL;
  v84 = a2 & 0x7FFFFFFFF000LL;
  if ( a3 != 10 )
    goto LABEL_20;
  Source = *(_OWORD *)v7;
  v92 = *(_OWORD *)(v7 + 16);
  v93 = *(_OWORD *)(v7 + 32);
  v67 = *((_QWORD *)&v92 + 1);
  *((_QWORD *)&v92 + 1) = 0LL;
  if ( RtlCompareMemoryUlong(&Source, 0x30uLL, 0) != 48 || v67 > 0x7FFFFFFF0000LL - a2 )
    return 3221225485LL;
  v88 = (((a2 & 0xFFF) + v67 + 4095) & 0xFFFFFFFFFFFFF000uLL) + v84;
  v11 = v78;
  PreviousMode = v76;
  v12 = 0LL;
LABEL_20:
  if ( BugCheckParameter1 == -1LL )
  {
    Process = CurrentThread->ApcState.Process;
    Object = Process;
    v82 = Process;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(
               BugCheckParameter1,
               4096,
               (__int64)PsProcessType,
               PreviousMode,
               0x6D566D4Du,
               &v82,
               0LL,
               0LL);
    if ( (int)result < 0 )
      return result;
    Process = (_KPROCESS *)v82;
    Object = v82;
    if ( (*((_DWORD *)v82 + 435) & 0x1000) != 0 )
    {
      ObfDereferenceObjectWithTag(v82, 0x6D566D4Du);
      return 3221225506LL;
    }
    v11 = v78;
  }
  switch ( a3 )
  {
    case 4:
      WorkingSetInfoList = MiGetWorkingSetInfoList(v7, v13, Process, a7);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
      if ( WorkingSetInfoList >= 0 )
      {
        if ( v78 )
          *v78 = v13;
        return 0LL;
      }
      return (unsigned int)WorkingSetInfoList;
    case 5:
      v68 = *(_QWORD *)&Process[2].ThreadSeed[2];
      if ( BugCheckParameter1 != -1LL )
      {
        ObfDereferenceObjectWithTag(v82, 0x6D566D4Du);
        v11 = v78;
      }
      *(_QWORD *)v7 = v68;
      if ( v11 )
        *v11 = 8LL;
      return 0LL;
    case 1:
      WorkingSetInfoList = MiGetWorkingSetInfo(v7, &v90, v13, (__int64)Process);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
      if ( WorkingSetInfoList >= 0 )
      {
        if ( v78 )
          *v78 = 8 * v90 + 8;
        return 0LL;
      }
      return (unsigned int)WorkingSetInfoList;
  }
  if ( BugCheckParameter1 == -1LL )
  {
    memset(v94, 0, sizeof(v94));
    v21 = 0;
  }
  else
  {
    KiStackAttachProcess(Process, 0LL, (__int64)v94);
    v21 = 1;
    v75 = 1;
  }
  if ( a3 == 8 && Process->SecureState.SecureHandle && VslQueryVirtualMemory((__int64)Process, v79, v89) >= 0 )
  {
    if ( v21 )
    {
      KiUnstackDetachProcess((__int64)v94, 0LL);
      ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
    }
    *(_OWORD *)v7 = v89[0];
    *(_OWORD *)(v7 + 16) = v89[1];
    *(_OWORD *)(v7 + 32) = v89[2];
    if ( v78 )
      *v78 = 48LL;
    return 0LL;
  }
  while ( 1 )
  {
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Process);
    if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
    {
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Process);
      if ( (v21 & 1) != 0 )
      {
        KiUnstackDetachProcess((__int64)v94, 0LL);
        ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
      }
      return 3221225738LL;
    }
    v22 = 0LL;
    if ( Process[2].Affinity.Bitmap[6] )
    {
      v12 = Process[2].Affinity.Bitmap[4];
      v22 = v79 >> 12;
      while ( v12 )
      {
        v23 = *(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32);
        if ( v22 < v23 )
          goto LABEL_37;
        if ( v22 <= (*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) )
        {
          v21 |= 2u;
          v75 = v21;
          break;
        }
        if ( v22 < v23 )
        {
LABEL_37:
          if ( !*(_QWORD *)v12 )
            break;
          v12 = *(_QWORD *)v12;
        }
        else
        {
          if ( !*(_QWORD *)(v12 + 8) )
            break;
          v12 = *(_QWORD *)(v12 + 8);
        }
      }
    }
    if ( (v21 & 2) == 0 )
    {
      if ( v12 )
      {
        v60 = *(unsigned int *)(v12 + 24);
        if ( (v60 | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32)) >= v22 )
        {
          v61 = (v60 | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32)) << 12;
          goto LABEL_134;
        }
        i = *(_QWORD *)(v12 + 8);
        if ( i )
        {
          v69 = *(_QWORD **)i;
          if ( *(_QWORD *)i )
          {
            do
            {
              i = (unsigned __int64)v69;
              v69 = (_QWORD *)*v69;
            }
            while ( v69 );
          }
        }
        else
        {
          for ( i = *(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
          {
            if ( *(_QWORD *)i == v12 )
              break;
            v12 = i;
          }
        }
        v62 = v79 & 0xFFFFFFFFFFFFF000uLL;
        if ( i )
          v61 = (*(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32)) << 12;
        else
          v61 = 0x7FFFFFFF0000LL;
      }
      else
      {
        v61 = 0x7FFFFFFF0000LL;
LABEL_134:
        v62 = v79 & 0xFFFFFFFFFFFFF000uLL;
      }
      v79 = v62;
      v63 = v61 - v62;
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Process);
      if ( (v21 & 1) != 0 )
      {
        KiUnstackDetachProcess((__int64)v94, 0LL);
        ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
      }
      if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
      {
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_DWORD *)(v7 + 16) = 0;
        *(_QWORD *)v7 = v79;
        *(_QWORD *)(v7 + 24) = v63;
        *(_DWORD *)(v7 + 32) = 0x10000;
        *(_QWORD *)(v7 + 36) = 1LL;
        if ( v78 )
          *v78 = 48LL;
        return 0LL;
      }
      return 3221225793LL;
    }
    MiReferenceVad(v12);
    --CurrentThread->KernelApcDisable;
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Process);
    MiLockVadShared((__int64)CurrentThread, v12);
    v25 = CurrentThread->KernelApcDisable++ == -1;
    if ( v25
      && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery(v24);
    }
    if ( (unsigned int)MiVadDeleted(v12) != 1 )
      break;
    MiUnlockVadShared((__int64)CurrentThread, v12);
    MiLockVad((__int64)CurrentThread, v12);
    MiWaitForVadDeletion(v12, v70, v71, v72);
    MiUnlockAndDereferenceVad((char *)v12);
    v21 &= ~2u;
    v75 = v21;
LABEL_199:
    v12 = 0LL;
  }
  v26 = *(unsigned __int8 *)(v12 + 32);
  v27 = *(unsigned int *)(v12 + 24);
  if ( v22 < (v27 | (unsigned __int64)(v26 << 32))
    || v22 > (*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) )
  {
    MiUnlockAndDereferenceVadShared((char *)v12);
    v21 &= ~2u;
    v75 = v21;
    Process = (_KPROCESS *)Object;
    v7 = (unsigned __int64)v83;
    goto LABEL_199;
  }
  memset(v89, 0, sizeof(v89));
  v28 = v84;
  *(_QWORD *)&v89[0] = v84;
  v29 = (v27 | (v26 << 32)) << 12;
  *((_QWORD *)&v89[0] + 1) = v29;
  v30 = *(_DWORD *)(v12 + 48);
  LODWORD(v79) = MmProtectToValue[(unsigned __int8)v30 >> 3];
  LODWORD(v89[1]) = v79;
  if ( (v30 & 0x4000) != 0 )
  {
    v32 = 0x20000;
    DWORD2(v89[2]) = 0x20000;
    if ( (unsigned int)MiIsSoftwareEnclave(v12) )
    {
      LOBYTE(v21) = v21 | 0x10;
      v75 = v21;
    }
    v58 = *(unsigned int *)(v12 + 52);
    LODWORD(v58) = v58 & 0x7FFFFFFF;
    v33 = (__int64)v85;
    if ( (v58 | ((unsigned __int64)*(unsigned __int8 *)(v12 + 34) << 31)) == 0x7FFFFFFFDLL )
    {
      LOBYTE(v21) = v21 | 0x20;
      v75 = v21;
    }
  }
  else
  {
    v31 = v30 & 7;
    if ( v31 != 2 )
    {
      v32 = 0x40000;
      DWORD2(v89[2]) = 0x40000;
      if ( v31 == 1 )
      {
        LOBYTE(v21) = v21 | 8;
      }
      else
      {
        if ( (a3 != 3 || a5 < 0x20) && a3 != 7 )
          goto LABEL_49;
        v47 = *(_QWORD *)(v12 + 72);
        if ( !*(_QWORD *)(*(_QWORD *)v47 + 64LL) )
        {
          v32 = 0x8000000;
          DWORD2(v89[2]) = 0x8000000;
          goto LABEL_49;
        }
        if ( a3 != 7 || (*(_DWORD *)(*(_QWORD *)v47 + 56LL) & 0x40000000) == 0 )
          goto LABEL_49;
LABEL_210:
        LOBYTE(v21) = v21 | 4;
      }
      v75 = v21;
      goto LABEL_49;
    }
    v32 = 0x1000000;
    DWORD2(v89[2]) = 0x1000000;
    if ( a3 == 7 && (*(_DWORD *)(**(_QWORD **)(v12 + 72) + 56LL) & 0x40000000) != 0 )
      goto LABEL_210;
LABEL_49:
    if ( a3 == 2 )
    {
      v33 = 0LL;
      if ( v31 != 1 )
      {
        v65 = *(__int64 **)(v12 + 72);
        v33 = *(_QWORD *)(*v65 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v33 )
        {
          v33 = MiReferenceControlAreaFile(*v65);
          v28 = v84;
        }
      }
      if ( !v33 )
        v33 = 1LL;
    }
    else
    {
      v33 = (__int64)v85;
    }
  }
  if ( ((a3 - 3) & 0xFFFFFFFB) == 0 )
  {
    v48 = ((*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32))
         - (*(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32))
         + 1) << 12;
    v49 = *(unsigned int *)(v12 + 52);
    LODWORD(v49) = v49 & 0x7FFFFFFF;
    v50 = v49 | ((unsigned __int64)*(unsigned __int8 *)(v12 + 34) << 31);
    if ( v50 >= 0x7FFFFFFFDLL )
      v50 = 0LL;
    MiUnlockAndDereferenceVadShared((char *)v12);
    if ( (v21 & 1) != 0 )
    {
      KiUnstackDetachProcess((__int64)v94, 0LL);
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    }
    v51 = v50 << 12;
    v52 = v21 & 0xFD;
    v53 = v83;
    *v83 = v29;
    *((_DWORD *)v53 + 2) = v79;
    v53[2] = v48;
    if ( a3 == 7 )
    {
      *((_DWORD *)v53 + 3) = 0;
      if ( v32 == 0x20000 )
      {
        v55 = 1;
        *((_DWORD *)v53 + 3) = 1;
      }
      else if ( (v52 & 8) != 0 )
      {
        *((_DWORD *)v53 + 3) = 16;
        v55 = 16;
      }
      else if ( v32 == 0x40000 )
      {
        *((_DWORD *)v53 + 3) = 2;
        v55 = 2;
      }
      else if ( v32 == 0x1000000 )
      {
        *((_DWORD *)v53 + 3) = 4;
        v55 = 4;
      }
      else
      {
        *((_DWORD *)v53 + 3) = 8;
        v55 = 8;
      }
      if ( (*(_DWORD *)(v12 + 48) & 0x40000) != 0 )
      {
        v55 |= 0x80u;
        *((_DWORD *)v53 + 3) = v55;
      }
      v56 = v55 | (8 * (v52 & 4));
      *((_DWORD *)v53 + 3) = v56;
      v57 = v56 | (4 * (v52 & 0x10));
      *((_DWORD *)v53 + 3) = v57;
      *((_DWORD *)v53 + 3) = v57 | (8 * (v52 & 0x20));
    }
    else
    {
      *((_DWORD *)v53 + 3) = v32;
    }
    if ( a5 < 0x20 )
    {
      v54 = 24LL;
    }
    else
    {
      v53[3] = v51;
      v54 = 32LL;
    }
    v77 = v54;
    if ( v78 )
      *v78 = v54;
    return 0LL;
  }
  if ( a3 == 6 )
  {
    v86 = 0uLL;
    v87 = 0LL;
    v34 = *(_DWORD *)(v12 + 48);
    if ( (v34 & 0x4000) != 0 || (v34 & 7) != 2 )
    {
      v42 = Object;
    }
    else
    {
      v35 = ***(_QWORD ***)(v12 + 72);
      *(_QWORD *)&v86 = (*(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32)) << 12;
      *((_QWORD *)&v86 + 1) = _InterlockedCompareExchange64((volatile signed __int64 *)(v35 + 24), -1LL, -1LL);
      v36 = v87 & 0xFFFFFFC3 | (*(unsigned __int8 *)(v35 + 15) >> 2) & 0x3FFFFFFC;
      LODWORD(v87) = v36;
      if ( (*(_DWORD *)(v12 + 48) & 0xF8) == 8 )
        LODWORD(v87) = v36 | 2;
      if ( MiVadMapsLargeImage(v12) )
      {
        VadEvent = MiLocateVadEvent(v37, 16);
        v80 = *((_BYTE *)VadEvent + 8);
        v41 = (unsigned __int64)VadEvent[2];
        *(_QWORD *)&v86 = v74 + ((unsigned __int64)v80 << 16);
      }
      else
      {
        v41 = (*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32))
            - (*(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32))
            + 1;
      }
      if ( (v38 & 0xFFF) == 0 )
        v40 = 0LL;
      LOBYTE(v21) = v75;
      v42 = v82;
      if ( v41 < v40 + (v38 >> 12) )
        LODWORD(v87) = v39 | 1;
    }
    MiUnlockAndDereferenceVadShared((char *)v12);
    if ( (v21 & 1) != 0 )
    {
      KiUnstackDetachProcess((__int64)v94, 0LL);
      ObfDereferenceObjectWithTag(v42, 0x6D566D4Du);
    }
    v77 = 24;
    v43 = v83;
    *(_OWORD *)v83 = v86;
    v43[2] = v87;
    if ( v78 )
      *v78 = 24LL;
    return 0LL;
  }
  if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
  {
    AddressSpan = MiQueryAddressSpan((__int64)v89, v28, v88, v12);
    *((_QWORD *)&v89[1] + 1) = AddressSpan - *(_QWORD *)&v89[0];
  }
  MiUnlockAndDereferenceVadShared((char *)v12);
  if ( (v21 & 1) != 0 )
  {
    KiUnstackDetachProcess((__int64)v94, 0LL);
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  }
  if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
  {
    v46 = v83;
    *(_OWORD *)v83 = v89[0];
    *((_OWORD *)v46 + 1) = v89[1];
    *((_OWORD *)v46 + 2) = v89[2];
    if ( v78 )
      *v78 = 48LL;
    return 0LL;
  }
  if ( !v33 )
    return 3221225793LL;
  if ( v33 == 1 )
    return 3221225624LL;
  if ( (unsigned int)a5 < a5 )
  {
    ObfDereferenceObject((PVOID)v33);
    return 3221225715LL;
  }
  else
  {
    v77 = 0;
    NameStringMode = ObQueryNameStringMode(v33, (_DWORD)v83, a5, (unsigned int)&v77, v76);
    ObfDereferenceObject((PVOID)v33);
    if ( v78 )
      *v78 = v77;
    return NameStringMode;
  }
}

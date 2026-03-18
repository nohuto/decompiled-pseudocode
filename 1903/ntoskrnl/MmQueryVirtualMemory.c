/*
 * XREFs of MmQueryVirtualMemory @ 0x140604960
 * Callers:
 *     ?SmStCheckResident@?$SMKM_STORE@USM_TRAITS@@@@SA?AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z @ 0x140147C04 (-SmStCheckResident@-$SMKM_STORE@USM_TRAITS@@@@SA-AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z.c)
 *     NtQueryVirtualMemory @ 0x140604930 (NtQueryVirtualMemory.c)
 *     PfpVirtualQuery @ 0x1406F7B94 (PfpVirtualQuery.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140009B60 (MiReferenceControlAreaFile.c)
 *     KeStackAttachProcess @ 0x140013AD0 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x14003A6B0 (KeUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14003FCE0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVad @ 0x1400504B0 (MiUnlockAndDereferenceVad.c)
 *     MiGetProcessPartition @ 0x140052438 (MiGetProcessPartition.c)
 *     MiVadMapsLargeImage @ 0x1400538A0 (MiVadMapsLargeImage.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400538D0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x140053910 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiVadDeleted @ 0x140053930 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x140053940 (MiLockVadShared.c)
 *     MiReferenceVad @ 0x140053980 (MiReferenceVad.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140053990 (MiUnlockAndDereferenceVadShared.c)
 *     MiLockVad @ 0x140072FCC (MiLockVad.c)
 *     PsReferencePartitionSafe @ 0x1400A0358 (PsReferencePartitionSafe.c)
 *     PsDereferencePartition @ 0x1400A0388 (PsDereferencePartition.c)
 *     MiGetControlAreaPartition @ 0x1400A9178 (MiGetControlAreaPartition.c)
 *     MiLocateVadEvent @ 0x1400ACF04 (MiLocateVadEvent.c)
 *     MiQueryAddressSpan @ 0x1400B7C60 (MiQueryAddressSpan.c)
 *     MiGetWorkingSetInfoList @ 0x140101184 (MiGetWorkingSetInfoList.c)
 *     MiUnlockVadShared @ 0x140114C44 (MiUnlockVadShared.c)
 *     MiIsSoftwareEnclave @ 0x14011E5B4 (MiIsSoftwareEnclave.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     RtlCompareMemoryUlong @ 0x1401CC270 (RtlCompareMemoryUlong.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     VslQueryVirtualMemory @ 0x1402901D4 (VslQueryVirtualMemory.c)
 *     MiGetAweVadPartition @ 0x1402D6504 (MiGetAweVadPartition.c)
 *     MiGetWorkingSetInfo @ 0x1402D8630 (MiGetWorkingSetInfo.c)
 *     MiGetVadPageSize @ 0x1402E5620 (MiGetVadPageSize.c)
 *     MiWaitForVadDeletion @ 0x1402E5678 (MiWaitForVadDeletion.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F0AB0 (ObReferenceObjectByHandleWithTag.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x14061A178 (MiIsUserQueryVmCallerTrusted.c)
 *     ObQueryNameStringMode @ 0x14062A720 (ObQueryNameStringMode.c)
 */

NTSTATUS __fastcall MmQueryVirtualMemory(
        HANDLE Handle,
        unsigned __int64 a2,
        int a3,
        __int64 *a4,
        SIZE_T Length,
        __int64 *a6,
        int a7)
{
  SIZE_T v11; // rdi
  unsigned int v12; // eax
  struct _KTHREAD *CurrentThread; // r12
  KPROCESSOR_MODE PreviousMode; // cl
  int v15; // esi
  __int64 v16; // rcx
  _KPROCESS *Process; // r13
  int v18; // ebx
  __int64 v19; // rdi
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  __int64 v22; // r12
  __int64 v23; // rdx
  __int64 v24; // r12
  int v25; // eax
  unsigned int v26; // r8d
  __int64 v27; // r10
  void *v28; // r11
  int v29; // r8d
  int v30; // r15d
  __int64 v31; // rsi
  int v32; // eax
  __int64 v33; // rdx
  int v34; // r10d
  __int64 v35; // rcx
  unsigned __int64 v36; // r8
  int v37; // r10d
  __int64 v38; // r11
  unsigned __int64 v39; // rdx
  __int64 *v40; // rdx
  NTSTATUS result; // eax
  unsigned __int64 AddressSpan; // rax
  __int64 *v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // r13
  unsigned __int16 *ProcessPartition; // r8
  void *v48; // r11
  PVOID v49; // rdx
  int v50; // eax
  __int64 *v51; // rax
  int v52; // eax
  unsigned __int64 v53; // r13
  char v54; // bl
  __int64 *v55; // rdx
  __int64 v56; // rax
  int v57; // eax
  int v58; // ecx
  __int64 v59; // rax
  ACCESS_MASK v60; // edx
  __int64 v61; // rdx
  unsigned __int64 v62; // rdi
  unsigned __int64 v63; // r8
  unsigned __int64 v64; // rdi
  int IsUserQueryVmCallerTrusted; // eax
  int WorkingSetInfoList; // edi
  unsigned __int64 i; // rcx
  _QWORD *v68; // rdx
  void *v69; // rax
  __int64 v70; // rcx
  PVOID v71; // rdi
  int NameStringMode; // ebx
  unsigned __int64 v73; // rdi
  __int64 v74; // rdi
  __int64 VadEvent; // rax
  __int64 v76; // r9
  int v77; // [rsp+40h] [rbp-158h]
  int v78; // [rsp+40h] [rbp-158h]
  char v79; // [rsp+44h] [rbp-154h]
  unsigned int v80; // [rsp+48h] [rbp-150h] BYREF
  unsigned __int64 v81; // [rsp+50h] [rbp-148h]
  __int64 *v82; // [rsp+58h] [rbp-140h]
  PVOID v83; // [rsp+60h] [rbp-138h]
  PVOID Object; // [rsp+68h] [rbp-130h] BYREF
  unsigned __int8 v85; // [rsp+70h] [rbp-128h]
  __int64 *v86; // [rsp+78h] [rbp-120h]
  __int128 v87; // [rsp+80h] [rbp-118h]
  __int64 v88; // [rsp+90h] [rbp-108h]
  __int64 v89; // [rsp+98h] [rbp-100h]
  PVOID v90; // [rsp+A0h] [rbp-F8h]
  unsigned __int64 P; // [rsp+A8h] [rbp-F0h] BYREF
  _OWORD v92[3]; // [rsp+B0h] [rbp-E8h] BYREF
  unsigned __int64 v93; // [rsp+E0h] [rbp-B8h]
  struct _KTHREAD *v94; // [rsp+F0h] [rbp-A8h]
  __int128 Source; // [rsp+F8h] [rbp-A0h] BYREF
  __int128 v96; // [rsp+108h] [rbp-90h]
  __int128 v97; // [rsp+118h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+128h] [rbp-70h] BYREF

  v86 = a4;
  v81 = a2;
  v82 = a6;
  memset(v92, 0, sizeof(v92));
  v87 = 0uLL;
  v88 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v77 = 0;
  v83 = 0LL;
  v93 = 0LL;
  if ( a3 != 6 )
  {
    if ( a3 )
    {
      switch ( a3 )
      {
        case 1:
          v11 = Length;
          if ( Length < 8 )
            return -1073741820;
          goto LABEL_141;
        case 2:
          v12 = 0;
          v11 = Length;
          goto LABEL_5;
        case 3:
          v11 = Length;
          if ( Length >= 0x18 )
            goto LABEL_4;
          return -1073741820;
        case 4:
          v11 = Length;
          if ( Length < 0x10 )
            return -1073741820;
LABEL_141:
          v12 = 64;
          v77 = 64;
          goto LABEL_5;
        case 5:
          v11 = Length;
          if ( Length >= 8 )
            goto LABEL_4;
          return -1073741820;
        case 7:
          v11 = Length;
          if ( Length >= 0x20 )
            goto LABEL_4;
          return -1073741820;
        case 8:
          break;
        default:
          return -1073741821;
      }
    }
    v11 = Length;
    if ( Length >= 0x30 )
    {
LABEL_4:
      v12 = 0;
      goto LABEL_5;
    }
    return -1073741820;
  }
  v12 = 0;
  v11 = Length;
  if ( Length < 0x18 )
    return -1073741820;
LABEL_5:
  CurrentThread = KeGetCurrentThread();
  v94 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v79 = PreviousMode;
  if ( v12 < 0x40
    || !PreviousMode
    || (IsUserQueryVmCallerTrusted = MiIsUserQueryVmCallerTrusted(CurrentThread),
        PreviousMode = v79,
        IsUserQueryVmCallerTrusted) )
  {
    v15 = a7;
  }
  else
  {
    v15 = a7 | 0x40000000;
  }
  if ( PreviousMode )
  {
    ProbeForWrite(a4, v11, 8u);
    if ( v82 )
    {
      v16 = (__int64)v82;
      if ( (unsigned __int64)v82 >= 0x7FFFFFFF0000LL )
        v16 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v16 = *(_QWORD *)v16;
    }
    PreviousMode = v79;
  }
  if ( a2 > 0x7FFFFFFEFFFFLL )
    return -1073741811;
  v89 = a2 & 0x7FFFFFFFF000LL;
  if ( a3 != 10 )
    goto LABEL_15;
  Source = *(_OWORD *)a4;
  v96 = *((_OWORD *)a4 + 1);
  v97 = *((_OWORD *)a4 + 2);
  v73 = *((_QWORD *)&v96 + 1);
  *((_QWORD *)&v96 + 1) = 0LL;
  if ( RtlCompareMemoryUlong(&Source, 0x30uLL, 0) != 48 || v73 > 0x7FFFFFFF0000LL - a2 )
    return -1073741811;
  v93 = (((a2 & 0xFFF) + v73 + 4095) & 0xFFFFFFFFFFFFF000uLL) + v89;
  v11 = Length;
  PreviousMode = v79;
LABEL_15:
  if ( Handle == (HANDLE)-1LL )
  {
    Process = CurrentThread->ApcState.Process;
    v90 = Process;
    Object = Process;
  }
  else
  {
    v60 = 4096;
    if ( (v15 & 0x40000000) != 0 )
      v60 = 1024;
    result = ObReferenceObjectByHandleWithTag(
               Handle,
               v60,
               (POBJECT_TYPE)PsProcessType,
               PreviousMode,
               0x6D566D4Du,
               &Object,
               0LL);
    if ( result < 0 )
      return result;
    Process = (_KPROCESS *)Object;
    v90 = Object;
    if ( (*((_DWORD *)Object + 447) & 0x1000) != 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      return -1073741790;
    }
  }
  switch ( a3 )
  {
    case 4:
      WorkingSetInfoList = MiGetWorkingSetInfoList(Process, v15, (unsigned __int64)a4, v11);
      if ( Handle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
      if ( WorkingSetInfoList >= 0 )
      {
        if ( v82 )
          *v82 = Length;
        return 0;
      }
      return WorkingSetInfoList;
    case 1:
      WorkingSetInfoList = MiGetWorkingSetInfo((__int64)Process, v15, (__int64)a4, v11, &P);
      if ( Handle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
      if ( WorkingSetInfoList >= 0 )
      {
        if ( v82 )
          *v82 = 8 * P + 8;
        return 0;
      }
      return WorkingSetInfoList;
    case 5:
      v74 = *(_QWORD *)&Process[2].ThreadSeed[18];
      if ( Handle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      *a4 = v74;
      if ( v82 )
        *v82 = 8LL;
      return 0;
  }
  if ( Handle == (HANDLE)-1LL )
  {
    v18 = v77;
  }
  else
  {
    KeStackAttachProcess(Process, &ApcState);
    v18 = v77 | 1;
    LOBYTE(v77) = v77 | 1;
  }
  if ( a3 == 8 && Process->SecureState.SecureHandle && VslQueryVirtualMemory((__int64)Process, v81, v92) >= 0 )
  {
    if ( (v18 & 1) != 0 )
    {
      KeUnstackDetachProcess(&ApcState);
      ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
    }
    *(_OWORD *)a4 = v92[0];
    *((_OWORD *)a4 + 1) = v92[1];
    *((_OWORD *)a4 + 2) = v92[2];
    if ( v82 )
      *v82 = 48LL;
    return 0;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Process);
      if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
      {
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Process);
        if ( (v18 & 1) != 0 )
        {
          KeUnstackDetachProcess(&ApcState);
          ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
        }
        return -1073741558;
      }
      v19 = 0LL;
      v20 = 0LL;
      if ( Process[2].Affinity.Bitmap[10] )
      {
        v19 = Process[2].Affinity.Bitmap[8];
        v20 = v81 >> 12;
        while ( v19 )
        {
          v21 = *(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32);
          if ( v20 < v21 )
            goto LABEL_32;
          if ( v20 <= (*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32)) )
          {
            v18 |= 2u;
            LOBYTE(v77) = v18;
            break;
          }
          if ( v20 < v21 )
          {
LABEL_32:
            if ( !*(_QWORD *)v19 )
              break;
            v19 = *(_QWORD *)v19;
          }
          else
          {
            if ( !*(_QWORD *)(v19 + 8) )
              break;
            v19 = *(_QWORD *)(v19 + 8);
          }
        }
      }
      if ( (v18 & 2) == 0 )
      {
        if ( v19 )
        {
          v61 = *(unsigned int *)(v19 + 24);
          if ( (v61 | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32)) >= v20 )
          {
            v62 = (v61 | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32)) << 12;
            goto LABEL_130;
          }
          i = *(_QWORD *)(v19 + 8);
          if ( i )
          {
            v68 = *(_QWORD **)i;
            if ( *(_QWORD *)i )
            {
              do
              {
                i = (unsigned __int64)v68;
                v68 = (_QWORD *)*v68;
              }
              while ( v68 );
            }
          }
          else
          {
            for ( i = *(_QWORD *)(v19 + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
            {
              if ( *(_QWORD *)i == v19 )
                break;
              v19 = i;
            }
          }
          v63 = v81 & 0xFFFFFFFFFFFFF000uLL;
          v81 &= 0xFFFFFFFFFFFFF000uLL;
          if ( i )
            v62 = (*(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32)) << 12;
          else
            v62 = 0x7FFFFFFF0000LL;
        }
        else
        {
          v62 = 0x7FFFFFFF0000LL;
LABEL_130:
          v63 = v81 & 0xFFFFFFFFFFFFF000uLL;
          v81 &= 0xFFFFFFFFFFFFF000uLL;
        }
        v64 = v62 - v63;
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Process);
        if ( (v18 & 1) != 0 )
        {
          KeUnstackDetachProcess(&ApcState);
          ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
        }
        if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
        {
          a4[1] = 0LL;
          *((_DWORD *)a4 + 4) = 0;
          *a4 = v81;
          a4[3] = v64;
          *((_DWORD *)a4 + 8) = 0x10000;
          *(__int64 *)((char *)a4 + 36) = 1LL;
          if ( v82 )
            *v82 = 48LL;
          return 0;
        }
        return -1073741503;
      }
      MiReferenceVad(v19);
      --CurrentThread->KernelApcDisable;
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Process);
      MiLockVadShared((__int64)CurrentThread, v19);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( (unsigned int)MiVadDeleted(v19) != 1 )
        break;
      MiUnlockVadShared((__int64)CurrentThread, v19);
      MiLockVad((__int64)CurrentThread, v19);
      MiWaitForVadDeletion(v19);
      MiUnlockAndDereferenceVad((char *)v19);
      v18 &= ~2u;
      LOBYTE(v77) = v18;
    }
    v22 = *(unsigned __int8 *)(v19 + 32);
    v23 = *(unsigned int *)(v19 + 24);
    if ( v20 >= (v23 | (unsigned __int64)(v22 << 32))
      && v20 <= (*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32)) )
    {
      break;
    }
    MiUnlockAndDereferenceVadShared((char *)v19);
    v18 &= ~2u;
    LOBYTE(v77) = v18;
    CurrentThread = v94;
  }
  *(_OWORD *)((char *)&v92[1] + 4) = 0LL;
  DWORD1(v92[2]) = 0;
  HIDWORD(v92[2]) = 0;
  *(_QWORD *)&v92[0] = v89;
  v24 = (v23 | (v22 << 32)) << 12;
  *((_QWORD *)&v92[0] + 1) = v24;
  v25 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(v19);
  LODWORD(v81) = MmProtectToValue[(v26 >> 7) & 0x1F] | v25;
  LODWORD(v92[1]) = v81;
  if ( (v26 & 0x100000) == 0 )
  {
    v29 = v26 & 0x70;
    if ( v29 == 32 )
    {
      v30 = 0x1000000;
      DWORD2(v92[2]) = 0x1000000;
      if ( a3 != 7 || (*(_DWORD *)(**(_QWORD **)(v19 + 72) + 56LL) & 0x40000000) == 0 )
        goto LABEL_42;
    }
    else
    {
      v30 = 0x40000;
      DWORD2(v92[2]) = 0x40000;
      if ( v29 == 16 )
      {
        LOBYTE(v18) = v18 | 8;
LABEL_220:
        LOBYTE(v77) = v18;
        goto LABEL_42;
      }
      if ( (a3 != 3 || Length < 0x28) && a3 != 7 )
        goto LABEL_42;
      v44 = *(_QWORD *)(v19 + 72);
      if ( *(void **)(*(_QWORD *)v44 + 64LL) == v28 )
      {
        v30 = 0x8000000;
        DWORD2(v92[2]) = 0x8000000;
LABEL_42:
        if ( a3 != 2 )
          goto LABEL_43;
        v69 = v28;
        v83 = v28;
        if ( v29 != 16 )
        {
          v70 = **(_QWORD **)(v19 + 72);
          v69 = (void *)(*(_QWORD *)(v70 + 64) & 0xFFFFFFFFFFFFFFF0uLL);
          v83 = v69;
          if ( v69 )
          {
            v69 = (void *)MiReferenceControlAreaFile(v70);
            v83 = v69;
            v27 = v89;
            v28 = 0LL;
          }
        }
        if ( v69 )
        {
LABEL_43:
          v31 = 1LL;
        }
        else
        {
          v31 = 1LL;
          v83 = (PVOID)1;
        }
        goto LABEL_44;
      }
      if ( a3 != 7 || (*(_DWORD *)(*(_QWORD *)v44 + 56LL) & 0x40000000) == 0 )
        goto LABEL_42;
    }
    LOBYTE(v18) = v18 | 4;
    goto LABEL_220;
  }
  v30 = 0x20000;
  DWORD2(v92[2]) = 0x20000;
  if ( (unsigned int)MiIsSoftwareEnclave(v19) )
  {
    LOBYTE(v18) = v18 | 0x10;
    LOBYTE(v77) = v18;
  }
  v59 = *(unsigned int *)(v19 + 52);
  LODWORD(v59) = v59 & 0x7FFFFFFF;
  v31 = 1LL;
  if ( (v59 | ((unsigned __int64)*(unsigned __int8 *)(v19 + 34) << 31)) == 0x7FFFFFFFDLL )
  {
    LOBYTE(v18) = v18 | 0x20;
    LOBYTE(v77) = v18;
  }
LABEL_44:
  if ( ((a3 - 3) & 0xFFFFFFFB) == 0 )
  {
    v78 = (int)v28;
    P = ((*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32))
       - (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32))
       + 1) << 12;
    v45 = *(unsigned int *)(v19 + 52);
    LODWORD(v45) = v45 & 0x7FFFFFFF;
    v46 = v45 | ((unsigned __int64)*(unsigned __int8 *)(v19 + 34) << 31);
    if ( v46 >= 0x7FFFFFFFDLL )
      v46 = (unsigned __int64)v28;
    ProcessPartition = (unsigned __int16 *)MiGetProcessPartition((__int64)v90);
    v49 = v48;
    v83 = v48;
    v50 = *(_DWORD *)(v19 + 48);
    if ( (v50 & 0x100000) == 0 )
    {
      v51 = *(__int64 **)(v19 + 72);
      if ( v51 && *v51 )
      {
        ProcessPartition = (unsigned __int16 *)MiGetControlAreaPartition(*v51);
        v52 = (int)v48;
        v49 = v48;
        goto LABEL_89;
      }
      goto LABEL_177;
    }
    if ( (v50 & 0x70) == 0x30 )
    {
      ProcessPartition = (unsigned __int16 *)MiGetAweVadPartition(v19);
      v52 = v78;
      LODWORD(v48) = 0;
    }
    else
    {
      if ( (v50 & 0x400000) == 0 && (v50 & 0xC0000u) < 0x80000 )
      {
LABEL_177:
        v52 = (int)v48;
        goto LABEL_89;
      }
      v49 = *(PVOID *)(MiLocateVadEvent(v19, 16LL) + 24);
      v83 = v49;
      if ( !v49 )
      {
        v52 = (int)v48;
        goto LABEL_89;
      }
      if ( !PsReferencePartitionSafe((__int64)v49) )
      {
        v52 = -1073740640;
        v78 = -1073740640;
        v49 = v48;
        goto LABEL_89;
      }
      v52 = (int)v48;
    }
    v49 = v83;
LABEL_89:
    if ( v52 < 0 )
      LODWORD(Object) = (_DWORD)v48;
    else
      LODWORD(Object) = *ProcessPartition;
    if ( v49 )
      PsDereferencePartition((__int64)v49);
    MiUnlockAndDereferenceVadShared((char *)v19);
    if ( (v18 & 1) != 0 )
    {
      KeUnstackDetachProcess(&ApcState);
      ObfDereferenceObjectWithTag(v90, 0x6D566D4Du);
    }
    result = v78;
    if ( v78 >= 0 )
    {
      v53 = v46 << 12;
      v54 = v18 & 0xFD;
      v55 = v86;
      *v86 = v24;
      *((_DWORD *)v55 + 2) = v81;
      v55[2] = P;
      if ( a3 == 7 )
      {
        *((_DWORD *)v55 + 3) = 0;
        if ( v30 == 0x20000 )
        {
          *((_DWORD *)v55 + 3) = 1;
        }
        else if ( (v54 & 8) != 0 )
        {
          *((_DWORD *)v55 + 3) = 16;
          LODWORD(v31) = 16;
        }
        else if ( v30 == 0x40000 )
        {
          *((_DWORD *)v55 + 3) = 2;
          LODWORD(v31) = 2;
        }
        else if ( v30 == 0x1000000 )
        {
          *((_DWORD *)v55 + 3) = 4;
          LODWORD(v31) = 4;
        }
        else
        {
          *((_DWORD *)v55 + 3) = 8;
          LODWORD(v31) = 8;
        }
        if ( MiGetVadPageSize(v19) == 16 )
        {
          LODWORD(v31) = v31 | 0x80;
          *((_DWORD *)v55 + 3) = v31;
        }
        v57 = v31 | (8 * (v54 & 4));
        *((_DWORD *)v55 + 3) = v57;
        v58 = v57 | (4 * (v54 & 0x10));
        *((_DWORD *)v55 + 3) = v58;
        *((_DWORD *)v55 + 3) = v58 | (8 * (v54 & 0x20));
      }
      else
      {
        *((_DWORD *)v55 + 3) = v30;
      }
      v56 = 24LL;
      v80 = 24;
      if ( Length >= 0x20 )
      {
        v55[3] = v53;
        v56 = 32LL;
        v80 = 32;
      }
      if ( Length >= 0x28 )
      {
        v55[4] = (unsigned __int16)Object;
        v56 = 40LL;
        v80 = 40;
      }
      if ( v82 )
        *v82 = v56;
      return 0;
    }
    return result;
  }
  if ( a3 == 6 )
  {
    v87 = 0uLL;
    v88 = 0LL;
    v32 = *(_DWORD *)(v19 + 48);
    if ( (v32 & 0x100000) == 0 && (v32 & 0x70) == 0x20 )
    {
      v33 = ***(_QWORD ***)(v19 + 72);
      *(_QWORD *)&v87 = (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32)) << 12;
      *((_QWORD *)&v87 + 1) = _InterlockedCompareExchange64((volatile signed __int64 *)(v33 + 24), -1LL, -1LL);
      v34 = v88 & 0xFFFFFFC3 | (*(unsigned __int8 *)(v33 + 15) >> 2) & 0x3FFFFFFC;
      LODWORD(v88) = v34;
      if ( (*(_DWORD *)(v19 + 48) & 0xF80) == 0x80 )
        LODWORD(v88) = v34 | 2;
      if ( MiVadMapsLargeImage(v19) )
      {
        VadEvent = MiLocateVadEvent(v35, 16LL);
        v85 = *(_BYTE *)(VadEvent + 8);
        v39 = *(_QWORD *)(VadEvent + 16);
        *(_QWORD *)&v87 = v76 + ((unsigned __int64)v85 << 16);
      }
      else
      {
        v39 = (*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32))
            - (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32))
            + 1;
      }
      if ( (v36 & 0xFFF) == 0 )
        v31 = v38;
      LOBYTE(v18) = v77;
      Process = (_KPROCESS *)Object;
      if ( v39 < v31 + (v36 >> 12) )
        LODWORD(v88) = v37 | 1;
    }
    MiUnlockAndDereferenceVadShared((char *)v19);
    if ( (v18 & 1) != 0 )
    {
      KeUnstackDetachProcess(&ApcState);
      ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
    }
    v80 = 24;
    v40 = v86;
    *(_OWORD *)v86 = v87;
    v40[2] = v88;
    if ( v82 )
      *v82 = 24LL;
    return 0;
  }
  if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
  {
    AddressSpan = MiQueryAddressSpan((__int64)v92, v27, v93, v19);
    *((_QWORD *)&v92[1] + 1) = AddressSpan - *(_QWORD *)&v92[0];
  }
  MiUnlockAndDereferenceVadShared((char *)v19);
  if ( (v18 & 1) != 0 )
  {
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
  }
  if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
  {
    v43 = v86;
    *(_OWORD *)v86 = v92[0];
    *((_OWORD *)v43 + 1) = v92[1];
    *((_OWORD *)v43 + 2) = v92[2];
    if ( v82 )
      *v82 = 48LL;
    return 0;
  }
  v71 = v83;
  if ( !v83 )
    return -1073741503;
  if ( v83 == (PVOID)1 )
    return -1073741672;
  if ( (unsigned int)Length < Length )
  {
    ObfDereferenceObject(v83);
    return -1073741581;
  }
  else
  {
    v80 = 0;
    NameStringMode = ObQueryNameStringMode((_DWORD)v83, (_DWORD)v86, Length, (unsigned int)&v80, v79);
    ObfDereferenceObject(v71);
    if ( v82 )
      *v82 = v80;
    return NameStringMode;
  }
}

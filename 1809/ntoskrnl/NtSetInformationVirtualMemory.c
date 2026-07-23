/*
 * XREFs of NtSetInformationVirtualMemory @ 0x1405F7680
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiGetEffectivePagePriorityThread @ 0x14001AEA8 (MiGetEffectivePagePriorityThread.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     PsGetIoPriorityThread @ 0x1400B6A80 (PsGetIoPriorityThread.c)
 *     MiPrefetchVirtualMemory @ 0x1400EA1C0 (MiPrefetchVirtualMemory.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     MiCfgMarkValidEntries @ 0x1405F731C (MiCfgMarkValidEntries.c)
 *     MiValidateMemoryRangeEntries @ 0x1405F7D18 (MiValidateMemoryRangeEntries.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     MiProcessVaRangesInfoClass @ 0x1406BDED8 (MiProcessVaRangesInfoClass.c)
 *     MiSetImageHotPatchAllowed @ 0x140859224 (MiSetImageHotPatchAllowed.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetInformationVirtualMemory(
        HANDLE ProcessHandle,
        VIRTUAL_MEMORY_INFORMATION_CLASS VmInformationClass,
        ULONG_PTR NumberOfEntries,
        PMEMORY_RANGE_ENTRY VirtualAddresses,
        PVOID VmInformation,
        ULONG VmInformationLength)
{
  char v7; // dl
  int v8; // ebx
  NTSTATUS valid; // edi
  ULONG v10; // r12d
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rcx
  LONG *p_LockNV; // rax
  char PreviousMode; // cl
  ULONG_PTR v15; // rax
  char *v16; // rdx
  unsigned int v17; // r12d
  unsigned __int64 v18; // rdx
  unsigned __int64 *PoolWithTag; // r15
  int v20; // r8d
  __int32 v21; // r14d
  __int32 v22; // r14d
  _BYTE *v23; // r14
  HANDLE v24; // r12
  __int64 v25; // r9
  int IoPriorityThread; // eax
  int v27; // r8d
  int v28; // r9d
  NTSTATUS v29; // eax
  __int64 v30; // r9
  __int64 v31; // r8
  __int32 v32; // r14d
  KPROCESSOR_MODE AccessMode; // [rsp+50h] [rbp-318h]
  _BYTE *v34; // [rsp+58h] [rbp-310h]
  unsigned int v36; // [rsp+6Ch] [rbp-2FCh]
  char v37; // [rsp+74h] [rbp-2F4h]
  PVOID Object; // [rsp+80h] [rbp-2E8h] BYREF
  PVOID P; // [rsp+88h] [rbp-2E0h]
  __int64 v41; // [rsp+90h] [rbp-2D8h] BYREF
  struct _KTHREAD *v42; // [rsp+98h] [rbp-2D0h]
  PVOID v43; // [rsp+A0h] [rbp-2C8h]
  _BYTE Address[40]; // [rsp+A8h] [rbp-2C0h] BYREF
  void *Src; // [rsp+D0h] [rbp-298h]
  HANDLE v46; // [rsp+D8h] [rbp-290h]
  PVOID v47; // [rsp+E0h] [rbp-288h] BYREF
  _BYTE v48[56]; // [rsp+F8h] [rbp-270h] BYREF
  _BYTE v49[256]; // [rsp+130h] [rbp-238h] BYREF
  _BYTE v50[256]; // [rsp+230h] [rbp-138h] BYREF

  Src = VirtualAddresses;
  v46 = ProcessHandle;
  v43 = 0LL;
  v7 = 0;
  v37 = 0;
  v8 = 0;
  v34 = v49;
  valid = 0;
  v36 = 0;
  if ( VmInformationClass < VmPrefetchInformation )
    return -1073741584;
  if ( VmInformationClass > VmPagePriorityInformation )
  {
    if ( VmInformationClass == VmCfgCallTargetInformation )
    {
      v10 = VmInformationLength;
      if ( VmInformationLength == 40 )
        goto LABEL_11;
      return -1073741580;
    }
    if ( VmInformationClass > VmImageHotPatchInformation )
      return -1073741584;
  }
  if ( !VmInformation )
    return -1073741581;
  v10 = VmInformationLength;
  if ( VmInformationLength != 4 )
    return -1073741580;
  if ( VmInformationClass == VmImageHotPatchInformation )
  {
    if ( !MiUserHotPatchReserveSize )
      return -1073741637;
    if ( NumberOfEntries != 1 )
      return -1073741583;
  }
LABEL_11:
  if ( NumberOfEntries - 1 > 0xFFFFFFFFFFFFFFELL )
    return -1073741583;
  CurrentThread = KeGetCurrentThread();
  v42 = CurrentThread;
  p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
  P = p_LockNV;
  if ( VmInformationClass == VmCfgCallTargetInformation && (p_LockNV[520] & 0x100) != 0 )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x40000) == 0 )
      v7 = 1;
    v37 = v7;
  }
  memset(Address, 0, sizeof(Address));
  PreviousMode = v42->PreviousMode;
  AccessMode = PreviousMode;
  if ( PreviousMode )
  {
    v15 = 16 * NumberOfEntries;
    if ( 16 * NumberOfEntries )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)Src + v15 > 0x7FFFFFFF0000LL || (char *)Src + v15 < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( VmInformationClass == VmCfgCallTargetInformation )
    {
      if ( v10 )
      {
        if ( ((unsigned __int8)VmInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v16 = (char *)VmInformation + v10;
        if ( (unsigned __int64)v16 > 0x7FFFFFFF0000LL || v16 < VmInformation )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      *(_OWORD *)Address = *(_OWORD *)VmInformation;
      *(_OWORD *)&Address[16] = *((_OWORD *)VmInformation + 1);
      *(_QWORD *)&Address[32] = *((_QWORD *)VmInformation + 4);
      v17 = _mm_cvtsi128_si32(*(__m128i *)Address);
      if ( !v17 || *(_DWORD *)&Address[4] )
        return -1073741581;
      ProbeForWrite(*(volatile void **)&Address[8], 4uLL, 4u);
      if ( (Address[16] & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = *(_QWORD *)&Address[16] + 16LL * v17;
      if ( v18 > 0x7FFFFFFF0000LL || v18 < *(_QWORD *)&Address[16] )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      if ( ((unsigned __int8)VmInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v36 = *(_DWORD *)VmInformation;
      v17 = *(_DWORD *)Address;
    }
    PreviousMode = AccessMode;
    goto LABEL_41;
  }
  if ( VmInformationClass != VmCfgCallTargetInformation )
  {
    v36 = *(_DWORD *)VmInformation;
    v17 = *(_DWORD *)Address;
    goto LABEL_41;
  }
  *(_OWORD *)Address = *(_OWORD *)VmInformation;
  *(_OWORD *)&Address[16] = *((_OWORD *)VmInformation + 1);
  *(_QWORD *)&Address[32] = *((_QWORD *)VmInformation + 4);
  v17 = _mm_cvtsi128_si32(*(__m128i *)Address);
  if ( !v17 || *(_DWORD *)&Address[4] )
    return -1073741581;
LABEL_41:
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    Object = P;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)ProcessHandle,
               8,
               (__int64)PsProcessType,
               PreviousMode,
               0x66506D4Du,
               &Object,
               0LL,
               0LL);
    valid = result;
    if ( result < 0 )
      return result;
  }
  PoolWithTag = (unsigned __int64 *)v50;
  P = v50;
  if ( NumberOfEntries > 0x10 )
  {
    PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 16 * NumberOfEntries, 0x724D6D4Du);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      PoolWithTag = (unsigned __int64 *)v50;
      valid = -1073741670;
      v23 = v49;
      goto LABEL_79;
    }
  }
  if ( VmInformationClass == VmCfgCallTargetInformation )
  {
    if ( v17 > 0x10 )
    {
      v34 = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v17, 0x724D6D4Du);
      if ( !v34 )
      {
        v23 = v49;
        valid = -1073741670;
        goto LABEL_79;
      }
    }
    if ( *(_QWORD *)&Address[24] )
    {
      valid = ObReferenceObjectByHandle(*(HANDLE *)&Address[24], 1u, MmSectionObjectType, AccessMode, &v47, 0LL);
      v43 = v47;
      if ( valid < 0 )
        goto LABEL_78;
    }
  }
  memmove(PoolWithTag, Src, 16 * NumberOfEntries);
  if ( VmInformationClass == VmCfgCallTargetInformation )
    memmove(v34, *(const void **)&Address[16], 16LL * v17);
  if ( v42->ApcState.Process != Object )
  {
    if ( (unsigned int)(VmInformationClass - 3) <= 1 )
    {
      valid = -1073741585;
      goto LABEL_78;
    }
    KiStackAttachProcess((_KPROCESS *)Object, 0LL, (__int64)v48);
    v8 = 1;
  }
  if ( !(unsigned int)MiValidateMemoryRangeEntries(PoolWithTag, NumberOfEntries, 0LL) )
    goto LABEL_102;
  if ( VmInformationClass == VmPrefetchInformation )
  {
    if ( v36 == v20 )
    {
      MiGetEffectivePagePriorityThread((__int64)v42);
      IoPriorityThread = PsGetIoPriorityThread(v25);
      v28 = 17408;
      if ( IoPriorityThread > 1 )
        v28 = 0x4000;
      v29 = MiPrefetchVirtualMemory(
              NumberOfEntries,
              (__int64)PoolWithTag,
              (__int64)Object + 1280,
              v27 | (unsigned int)v28);
      goto LABEL_77;
    }
    goto LABEL_85;
  }
  v21 = VmInformationClass - 1;
  if ( !v21 )
  {
    if ( v36 > 5 )
      goto LABEL_85;
    v30 = v36;
    v31 = 1LL;
    goto LABEL_84;
  }
  v22 = v21 - 1;
  if ( v22 )
  {
    v32 = v22 - 1;
    if ( v32 )
    {
      if ( v32 != 1 )
        goto LABEL_78;
      if ( v36 == 1 )
      {
        if ( PoolWithTag[1] == 4096 )
        {
          v29 = MiSetImageHotPatchAllowed(*PoolWithTag);
          goto LABEL_77;
        }
LABEL_102:
        valid = -1073741582;
        goto LABEL_78;
      }
LABEL_85:
      valid = -1073741581;
      goto LABEL_78;
    }
    if ( v36 != v20 )
      goto LABEL_85;
    if ( (*((_DWORD *)Object + 193) & 0x10) == 0 )
    {
      valid = -1073741637;
      goto LABEL_78;
    }
    v30 = 0LL;
    v31 = 3LL;
LABEL_84:
    v29 = MiProcessVaRangesInfoClass(NumberOfEntries, PoolWithTag, v31, v30);
LABEL_77:
    valid = v29;
LABEL_78:
    v23 = v34;
    goto LABEL_79;
  }
  v23 = v34;
  if ( NumberOfEntries == 1 )
  {
    valid = MiCfgMarkValidEntries(
              (__int64)Object,
              *PoolWithTag,
              PoolWithTag[1],
              v34,
              v17,
              &v41,
              v37,
              (__int64)v43,
              *(__int64 *)&Address[32]);
    if ( v8 )
    {
      KiUnstackDetachProcess((__int64)v48, 0LL);
      LOBYTE(v8) = 0;
    }
    **(_DWORD **)&Address[8] = v41;
    v24 = ProcessHandle;
    goto LABEL_58;
  }
  valid = -1073741582;
LABEL_79:
  v24 = ProcessHandle;
LABEL_58:
  if ( (v8 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v48, 0LL);
  if ( v43 )
    ObfDereferenceObject(v43);
  if ( v24 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(Object, 0x66506D4Du);
  if ( PoolWithTag != (unsigned __int64 *)v50 )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v23 != v49 )
    ExFreePoolWithTag(v23, 0);
  return valid;
}

/*
 * XREFs of NtSetInformationVirtualMemory @ 0x1405E9E10
 * Callers:
 *     <none>
 * Callees:
 *     KeStackAttachProcess @ 0x140013D00 (KeStackAttachProcess.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeUnstackDetachProcess @ 0x1400437D0 (KeUnstackDetachProcess.c)
 *     PsGetIoPriorityThread @ 0x14005A5C0 (PsGetIoPriorityThread.c)
 *     MiPrefetchVirtualMemory @ 0x1400C7FA0 (MiPrefetchVirtualMemory.c)
 *     MiGetEffectivePagePriorityThread @ 0x1400CAEEC (MiGetEffectivePagePriorityThread.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiValidateMemoryRangeEntries @ 0x1405EA4C0 (MiValidateMemoryRangeEntries.c)
 *     MiCfgMarkValidEntries @ 0x1405ECB7C (MiCfgMarkValidEntries.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F13C0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     MiProcessVaRangesInfoClass @ 0x1406E18AC (MiProcessVaRangesInfoClass.c)
 *     MiSetImageHotPatchAllowed @ 0x140891400 (MiSetImageHotPatchAllowed.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetInformationVirtualMemory(
        HANDLE ProcessHandle,
        VIRTUAL_MEMORY_INFORMATION_CLASS VmInformationClass,
        ULONG_PTR NumberOfEntries,
        PMEMORY_RANGE_ENTRY VirtualAddresses,
        PVOID VmInformation,
        ULONG VmInformationLength)
{
  unsigned __int64 v6; // r13
  char v8; // dl
  int valid; // ebx
  ULONG v10; // r12d
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rcx
  _KPROCESS *Process; // rax
  KPROCESSOR_MODE PreviousMode; // cl
  __int64 v15; // rax
  char *v16; // rcx
  unsigned int v17; // r12d
  unsigned __int64 v18; // rdx
  _QWORD *PoolWithTag; // r14
  int v20; // r8d
  __int32 v21; // edi
  __int32 v22; // edi
  _BYTE *v23; // rdi
  HANDLE v24; // r12
  __int64 v25; // r8
  int v26; // r10d
  int v27; // eax
  __int64 v28; // r9
  __int64 v29; // r8
  __int32 v30; // edi
  KPROCESSOR_MODE AccessMode; // [rsp+50h] [rbp-318h]
  _BYTE *P; // [rsp+58h] [rbp-310h]
  unsigned int v34; // [rsp+6Ch] [rbp-2FCh]
  char v35; // [rsp+70h] [rbp-2F8h]
  char v36; // [rsp+74h] [rbp-2F4h]
  PVOID Object; // [rsp+78h] [rbp-2F0h] BYREF
  PVOID v38; // [rsp+80h] [rbp-2E8h]
  int v39; // [rsp+88h] [rbp-2E0h] BYREF
  struct _KTHREAD *v40; // [rsp+90h] [rbp-2D8h]
  PVOID v41; // [rsp+98h] [rbp-2D0h]
  _BYTE Address[40]; // [rsp+A0h] [rbp-2C8h] BYREF
  void *Src; // [rsp+C8h] [rbp-2A0h]
  HANDLE v44; // [rsp+D0h] [rbp-298h]
  int v45; // [rsp+D8h] [rbp-290h]
  _KPROCESS *v46; // [rsp+E0h] [rbp-288h]
  PVOID v47; // [rsp+E8h] [rbp-280h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+100h] [rbp-268h] BYREF
  _BYTE v49[256]; // [rsp+130h] [rbp-238h] BYREF
  _BYTE v50[256]; // [rsp+230h] [rbp-138h] BYREF

  Src = VirtualAddresses;
  v6 = NumberOfEntries;
  v38 = (PVOID)NumberOfEntries;
  v44 = ProcessHandle;
  memset(&ApcState, 0, sizeof(ApcState));
  v45 = 0;
  v41 = 0LL;
  v8 = 0;
  v36 = 0;
  v35 = 0;
  P = v49;
  valid = 0;
  v34 = 0;
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
    if ( v6 != 1 )
      return -1073741583;
  }
LABEL_11:
  if ( v6 - 1 > 0xFFFFFFFFFFFFFFELL )
    return -1073741583;
  CurrentThread = KeGetCurrentThread();
  v40 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  v46 = Process;
  if ( VmInformationClass == VmCfgCallTargetInformation && (*(_DWORD *)&Process[2].Spare2[7] & 0x100) != 0 )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x40000) == 0 )
      v8 = 1;
    v36 = v8;
  }
  memset(Address, 0, sizeof(Address));
  PreviousMode = v40->PreviousMode;
  AccessMode = PreviousMode;
  if ( PreviousMode )
  {
    v15 = 16 * v6;
    if ( 16 * v6 )
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
      v34 = *(_DWORD *)VmInformation;
      v17 = *(_DWORD *)Address;
    }
    v6 = (unsigned __int64)v38;
    PreviousMode = AccessMode;
    goto LABEL_41;
  }
  if ( VmInformationClass == VmCfgCallTargetInformation )
  {
    *(_OWORD *)Address = *(_OWORD *)VmInformation;
    *(_OWORD *)&Address[16] = *((_OWORD *)VmInformation + 1);
    *(_QWORD *)&Address[32] = *((_QWORD *)VmInformation + 4);
    v17 = _mm_cvtsi128_si32(*(__m128i *)Address);
    if ( v17 && !*(_DWORD *)&Address[4] )
      goto LABEL_41;
    return -1073741581;
  }
  v34 = *(_DWORD *)VmInformation;
  v17 = *(_DWORD *)Address;
LABEL_41:
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    Object = v46;
  }
  else
  {
    result = ObReferenceObjectByHandleWithTag(
               ProcessHandle,
               8u,
               (POBJECT_TYPE)PsProcessType,
               PreviousMode,
               0x66506D4Du,
               &Object,
               0LL);
    valid = result;
    if ( result < 0 )
      return result;
  }
  PoolWithTag = v50;
  v38 = v50;
  if ( v6 > 0x10 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * v6, 0x724D6D4Du);
    v38 = PoolWithTag;
    if ( !PoolWithTag )
    {
      PoolWithTag = v50;
      valid = -1073741670;
      v23 = v49;
      goto LABEL_81;
    }
  }
  if ( VmInformationClass == VmCfgCallTargetInformation )
  {
    if ( v17 > 0x10 )
    {
      P = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v17, 0x724D6D4Du);
      if ( !P )
      {
        v23 = v49;
        valid = -1073741670;
        goto LABEL_81;
      }
    }
    if ( *(_QWORD *)&Address[24] )
    {
      valid = ObReferenceObjectByHandle(*(HANDLE *)&Address[24], 1u, MmSectionObjectType, AccessMode, &v47, 0LL);
      v41 = v47;
      if ( valid < 0 )
        goto LABEL_80;
    }
  }
  memmove(PoolWithTag, Src, 16 * v6);
  if ( VmInformationClass == VmCfgCallTargetInformation )
    memmove(P, *(const void **)&Address[16], 16LL * v17);
  if ( v40->ApcState.Process != Object )
  {
    if ( (unsigned int)(VmInformationClass - 3) <= 1 )
    {
      valid = -1073741585;
      goto LABEL_80;
    }
    KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
    v35 = 1;
  }
  if ( !(unsigned int)MiValidateMemoryRangeEntries(PoolWithTag, v6, 0LL) )
    goto LABEL_102;
  if ( VmInformationClass == VmPrefetchInformation )
  {
    if ( v34 == v20 )
    {
      MiGetEffectivePagePriorityThread((__int64)v40);
      if ( (int)PsGetIoPriorityThread(v25) <= 1 )
        v26 |= 0x400u;
      v27 = MiPrefetchVirtualMemory(v6, (__int64)PoolWithTag, (__int64)Object + 1280, v26);
      goto LABEL_79;
    }
    goto LABEL_87;
  }
  v21 = VmInformationClass - 1;
  if ( !v21 )
  {
    if ( v34 > 5 )
      goto LABEL_87;
    v28 = v34;
    v29 = 1LL;
    goto LABEL_84;
  }
  v22 = v21 - 1;
  if ( v22 )
  {
    v30 = v22 - 1;
    if ( v30 )
    {
      if ( v30 != 1 )
        goto LABEL_80;
      if ( v34 == 1 )
      {
        if ( PoolWithTag[1] == 4096LL )
        {
          v27 = MiSetImageHotPatchAllowed(*PoolWithTag);
          goto LABEL_79;
        }
LABEL_102:
        valid = -1073741582;
        goto LABEL_80;
      }
LABEL_87:
      valid = -1073741581;
      goto LABEL_80;
    }
    if ( v34 != v20 )
      goto LABEL_87;
    if ( (*((_DWORD *)Object + 195) & 0x10) == 0 )
    {
      valid = -1073741637;
      goto LABEL_80;
    }
    v28 = 0LL;
    v29 = 3LL;
LABEL_84:
    v27 = MiProcessVaRangesInfoClass(v6, PoolWithTag, v29, v28);
LABEL_79:
    valid = v27;
LABEL_80:
    v23 = P;
    goto LABEL_81;
  }
  v23 = P;
  if ( v6 == 1 )
  {
    valid = MiCfgMarkValidEntries(
              (_DWORD)Object,
              *PoolWithTag,
              PoolWithTag[1],
              (_DWORD)P,
              v17,
              (__int64)&v39,
              v36,
              (__int64)v41,
              *(__int64 *)&Address[32]);
    if ( (v35 & 1) != 0 )
    {
      KeUnstackDetachProcess(&ApcState);
      v35 &= ~1u;
    }
    **(_DWORD **)&Address[8] = v39;
    v24 = ProcessHandle;
    goto LABEL_58;
  }
  valid = -1073741582;
LABEL_81:
  v24 = ProcessHandle;
LABEL_58:
  if ( (v35 & 1) != 0 )
    KeUnstackDetachProcess(&ApcState);
  if ( v41 )
    ObfDereferenceObject(v41);
  if ( v24 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(Object, 0x66506D4Du);
  if ( PoolWithTag != (_QWORD *)v50 )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v23 != v49 )
    ExFreePoolWithTag(v23, 0);
  return valid;
}

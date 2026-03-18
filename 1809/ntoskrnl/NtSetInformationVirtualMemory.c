/*
 * XREFs of NtSetInformationVirtualMemory @ 0x1405F6680
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiGetEffectivePagePriorityThread @ 0x14001AEA8 (MiGetEffectivePagePriorityThread.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     PsGetIoPriorityThread @ 0x1400B6B20 (PsGetIoPriorityThread.c)
 *     MiPrefetchVirtualMemory @ 0x1400EA120 (MiPrefetchVirtualMemory.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E8390 (ObpReferenceObjectByHandleWithTag.c)
 *     MiCfgMarkValidEntries @ 0x1405F631C (MiCfgMarkValidEntries.c)
 *     MiValidateMemoryRangeEntries @ 0x1405F6D18 (MiValidateMemoryRangeEntries.c)
 *     ProbeForWrite @ 0x140629A60 (ProbeForWrite.c)
 *     MiProcessVaRangesInfoClass @ 0x1406BCC58 (MiProcessVaRangesInfoClass.c)
 *     MiSetImageHotPatchAllowed @ 0x140857FE4 (MiSetImageHotPatchAllowed.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D65E0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtSetInformationVirtualMemory(
        ULONG_PTR a1,
        int a2,
        unsigned __int64 a3,
        void *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  char v7; // dl
  int v8; // ebx
  int valid; // edi
  unsigned int v10; // r12d
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rcx
  LONG *p_LockNV; // rax
  char PreviousMode; // cl
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned int v17; // r12d
  unsigned __int64 v18; // rdx
  unsigned __int64 *PoolWithTag; // r15
  int v20; // r8d
  int v21; // r14d
  int v22; // r14d
  _BYTE *v23; // r14
  ULONG_PTR v24; // r12
  __int64 v25; // r9
  int IoPriorityThread; // eax
  int v27; // r8d
  int v28; // r9d
  int v29; // eax
  __int64 v30; // r9
  __int64 v31; // r8
  int v32; // r14d
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
  ULONG_PTR v46; // [rsp+D8h] [rbp-290h]
  PVOID v47; // [rsp+E0h] [rbp-288h] BYREF
  _BYTE v48[56]; // [rsp+F8h] [rbp-270h] BYREF
  _BYTE v49[256]; // [rsp+130h] [rbp-238h] BYREF
  _BYTE v50[256]; // [rsp+230h] [rbp-138h] BYREF

  Src = a4;
  v46 = a1;
  v43 = 0LL;
  v7 = 0;
  v37 = 0;
  v8 = 0;
  v34 = v49;
  valid = 0;
  v36 = 0;
  if ( a2 < 0 )
    return 3221225712LL;
  if ( a2 > 1 )
  {
    if ( a2 == 2 )
    {
      v10 = a6;
      if ( a6 == 40 )
        goto LABEL_11;
      return 3221225716LL;
    }
    if ( a2 > 4 )
      return 3221225712LL;
  }
  if ( !a5 )
    return 3221225715LL;
  v10 = a6;
  if ( a6 != 4 )
    return 3221225716LL;
  if ( a2 == 4 )
  {
    if ( !MiUserHotPatchReserveSize )
      return 3221225659LL;
    if ( a3 != 1 )
      return 3221225713LL;
  }
LABEL_11:
  if ( a3 - 1 > 0xFFFFFFFFFFFFFFELL )
    return 3221225713LL;
  CurrentThread = KeGetCurrentThread();
  v42 = CurrentThread;
  p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
  P = p_LockNV;
  if ( a2 == 2 && (p_LockNV[520] & 0x100) != 0 )
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
    v15 = 16 * a3;
    if ( 16 * a3 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)Src + v15 > 0x7FFFFFFF0000LL || (char *)Src + v15 < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( a2 == 2 )
    {
      if ( v10 )
      {
        if ( (a5 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v16 = a5 + v10;
        if ( v16 > 0x7FFFFFFF0000LL || v16 < a5 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      *(_OWORD *)Address = *(_OWORD *)a5;
      *(_OWORD *)&Address[16] = *(_OWORD *)(a5 + 16);
      *(_QWORD *)&Address[32] = *(_QWORD *)(a5 + 32);
      v17 = _mm_cvtsi128_si32(*(__m128i *)Address);
      if ( !v17 || *(_DWORD *)&Address[4] )
        return 3221225715LL;
      ProbeForWrite(*(volatile void **)&Address[8], 4uLL, 4u);
      if ( (Address[16] & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = *(_QWORD *)&Address[16] + 16LL * v17;
      if ( v18 > 0x7FFFFFFF0000LL || v18 < *(_QWORD *)&Address[16] )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v36 = *(_DWORD *)a5;
      v17 = *(_DWORD *)Address;
    }
    PreviousMode = AccessMode;
    goto LABEL_41;
  }
  if ( a2 != 2 )
  {
    v36 = *(_DWORD *)a5;
    v17 = *(_DWORD *)Address;
    goto LABEL_41;
  }
  *(_OWORD *)Address = *(_OWORD *)a5;
  *(_OWORD *)&Address[16] = *(_OWORD *)(a5 + 16);
  *(_QWORD *)&Address[32] = *(_QWORD *)(a5 + 32);
  v17 = _mm_cvtsi128_si32(*(__m128i *)Address);
  if ( !v17 || *(_DWORD *)&Address[4] )
    return 3221225715LL;
LABEL_41:
  if ( a1 == -1LL )
  {
    Object = P;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(
               a1,
               8,
               (__int64)PsProcessType,
               PreviousMode,
               0x66506D4Du,
               &Object,
               0LL,
               0LL);
    valid = result;
    if ( (int)result < 0 )
      return result;
  }
  PoolWithTag = (unsigned __int64 *)v50;
  P = v50;
  if ( a3 > 0x10 )
  {
    PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 16 * a3, 0x724D6D4Du);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      PoolWithTag = (unsigned __int64 *)v50;
      valid = -1073741670;
      v23 = v49;
      goto LABEL_79;
    }
  }
  if ( a2 == 2 )
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
  memmove(PoolWithTag, Src, 16 * a3);
  if ( a2 == 2 )
    memmove(v34, *(const void **)&Address[16], 16LL * v17);
  if ( v42->ApcState.Process != Object )
  {
    if ( (unsigned int)(a2 - 3) <= 1 )
    {
      valid = -1073741585;
      goto LABEL_78;
    }
    KiStackAttachProcess((_KPROCESS *)Object, 0LL, (__int64)v48);
    v8 = 1;
  }
  if ( !(unsigned int)MiValidateMemoryRangeEntries(PoolWithTag, a3, 0LL) )
    goto LABEL_102;
  if ( !a2 )
  {
    if ( v36 == v20 )
    {
      MiGetEffectivePagePriorityThread((__int64)v42);
      IoPriorityThread = PsGetIoPriorityThread(v25);
      v28 = 17408;
      if ( IoPriorityThread > 1 )
        v28 = 0x4000;
      v29 = MiPrefetchVirtualMemory(a3, (__int64)PoolWithTag, (__int64)Object + 1280, v27 | (unsigned int)v28);
      goto LABEL_77;
    }
    goto LABEL_85;
  }
  v21 = a2 - 1;
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
    v29 = MiProcessVaRangesInfoClass(a3, PoolWithTag, v31, v30);
LABEL_77:
    valid = v29;
LABEL_78:
    v23 = v34;
    goto LABEL_79;
  }
  v23 = v34;
  if ( a3 == 1 )
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
    v24 = a1;
    goto LABEL_58;
  }
  valid = -1073741582;
LABEL_79:
  v24 = a1;
LABEL_58:
  if ( (v8 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v48, 0LL);
  if ( v43 )
    ObfDereferenceObject(v43);
  if ( v24 != -1LL )
    ObfDereferenceObjectWithTag(Object, 0x66506D4Du);
  if ( PoolWithTag != (unsigned __int64 *)v50 )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v23 != v49 )
    ExFreePoolWithTag(v23, 0);
  return (unsigned int)valid;
}

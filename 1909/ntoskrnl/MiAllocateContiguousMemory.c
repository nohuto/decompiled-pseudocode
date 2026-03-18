/*
 * XREFs of MiAllocateContiguousMemory @ 0x1400F5D4C
 * Callers:
 *     MmAllocateContiguousNodeMemory @ 0x1400F5CB0 (MmAllocateContiguousNodeMemory.c)
 *     MmAllocateContiguousMemory @ 0x1402C0980 (MmAllocateContiguousMemory.c)
 * Callees:
 *     EtwWriteEx @ 0x1400366F0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     MiProtectionToCacheAttribute @ 0x14009739C (MiProtectionToCacheAttribute.c)
 *     MiFindContiguousPages @ 0x1400B9E60 (MiFindContiguousPages.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiFreeContiguousPages @ 0x1400F4FD4 (MiFreeContiguousPages.c)
 *     MmUnmapIoSpace @ 0x1400F5130 (MmUnmapIoSpace.c)
 *     ExAllocateContiguousHeapPool @ 0x1400F6154 (ExAllocateContiguousHeapPool.c)
 *     ExInsertPoolTag @ 0x1400F6404 (ExInsertPoolTag.c)
 *     MiMapContiguousMemory @ 0x1400F6C14 (MiMapContiguousMemory.c)
 *     MmGetPhysicalAddress @ 0x140124C70 (MmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1402C08C0 (MiLogPerfMemoryRangeEvent.c)
 *     EtwpGetDurationSince @ 0x14032E78C (EtwpGetDurationSince.c)
 */

unsigned __int64 __fastcall MiAllocateContiguousMemory(
        unsigned __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  ULONG_PTR v8; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v10; // r9d
  PHYSICAL_ADDRESS PhysicalAddress; // rdi
  LARGE_INTEGER v12; // rsi
  unsigned __int64 ContiguousHeapPool; // r15
  unsigned __int64 v14; // r12
  int v15; // r14d
  int v16; // r8d
  char v17; // r9
  ULONG_PTR v18; // r10
  int v19; // r11d
  unsigned int v20; // r13d
  unsigned int v21; // ebx
  _DWORD *v22; // r14
  __int64 v23; // rax
  unsigned int *v24; // rbx
  int i; // eax
  ULONG_PTR v26; // r14
  BOOL v27; // r13d
  __int64 v28; // rax
  int v29; // ecx
  unsigned __int64 v30; // r14
  unsigned __int64 v31; // r13
  __int64 v32; // rbx
  unsigned __int8 v33; // al
  __int64 v34; // rax
  SIZE_T v36; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v38; // [rsp+60h] [rbp-A0h]
  unsigned int v39; // [rsp+64h] [rbp-9Ch]
  unsigned int v40; // [rsp+68h] [rbp-98h]
  int v42; // [rsp+78h] [rbp-88h]
  int v43; // [rsp+7Ch] [rbp-84h]
  ULONG_PTR v45; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v46; // [rsp+90h] [rbp-70h]
  __int64 v47; // [rsp+98h] [rbp-68h]
  BOOL v48; // [rsp+A0h] [rbp-60h]
  unsigned int *v49; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v50; // [rsp+B0h] [rbp-50h]
  LARGE_INTEGER v51; // [rsp+B8h] [rbp-48h]
  _QWORD v52[10]; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+110h] [rbp+10h] BYREF

  v50 = a1;
  v46 = a4;
  v8 = a2;
  v39 = a5;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v10 = a5;
  PhysicalAddress.QuadPart = -1LL;
  v51 = PerformanceCounter;
  v12 = PerformanceCounter;
  v45 = -1LL;
  v48 = MmProtectFreedNonPagedPool != 0;
  ContiguousHeapPool = 0LL;
  v14 = (a1 >> 12) + ((a1 & 0xFFF) != 0);
  if ( (a5 & 2) != 0 && (MiFlags & 0x10000) != 0 )
  {
    v10 = a5 & 0xFFFFFFFD;
    v39 = a5 & 0xFFFFFFFD;
  }
  if ( !a4 || (v15 = 0, v14 <= a4) )
  {
    v15 = 0;
    if ( v8 <= a3 && v8 + v14 > v8 && v8 + v14 - 1 <= a3 )
    {
      v19 = MiProtectionToCacheAttribute(v10);
      v20 = a6;
      v43 = v19;
      if ( (unsigned __int16)KeNumberNodes <= 1u )
        v20 = 0;
      v40 = v20;
      if ( v20 == 0x80000000 )
      {
        v21 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 146LL);
      }
      else
      {
        v21 = v20;
        if ( v20 >= (unsigned __int16)KeNumberNodes )
          goto LABEL_34;
      }
      v22 = (_DWORD *)(qword_140465750 + 4LL * v21 * (unsigned __int16)KeNumberNodes);
      if ( v20 == 0x80000000 )
        v23 = (unsigned __int16)KeNumberNodes;
      else
        v23 = 1LL;
      v49 = &v22[v23];
      v47 = 512LL;
      if ( (v17 & 2) != 0 )
      {
        LODWORD(v47) = 0;
      }
      else if ( !v16 && v19 == 1 && !MmProtectFreedNonPagedPool && v14 <= 0x200 )
      {
        while ( 1 )
        {
          ContiguousHeapPool = ExAllocateContiguousHeapPool(a2, v18, v46, v50, *v22);
          if ( ContiguousHeapPool )
            break;
          v18 = a3;
          if ( ++v22 == v49 )
          {
            v19 = v43;
            goto LABEL_20;
          }
        }
        v15 = 1;
        goto LABEL_34;
      }
LABEL_20:
      v42 = 135266304;
      v24 = (unsigned int *)(qword_140465750 + 4LL * v21 * (unsigned __int16)KeNumberNodes);
      for ( i = MiFindContiguousPages(
                  (__int64)&MiSystemPartition,
                  a2,
                  v18,
                  v46,
                  v14,
                  v19,
                  *v24,
                  0x80000000,
                  135266304,
                  0LL,
                  (__int64 *)&v45);
            i < 0;
            i = MiFindContiguousPages(
                  (__int64)&MiSystemPartition,
                  a2,
                  a3,
                  v46,
                  v14,
                  v43,
                  *v24,
                  0x80000000,
                  v42,
                  0LL,
                  (__int64 *)&v45) )
      {
        if ( ++v24 == v49 )
          goto LABEL_56;
        v42 &= ~0x8000000u;
      }
      v26 = v45;
      v27 = v48;
      v28 = MiMapContiguousMemory(v45 << 12, v14 << 12, v39, v48);
      ContiguousHeapPool = v28;
      if ( v28 && !(unsigned int)ExInsertPoolTag(v29, v28, (_DWORD)v14 << 12, v47, v27) )
      {
        v36 = (v14 << 12) + 4096;
        if ( !v27 )
          v36 = v14 << 12;
        MmUnmapIoSpace((PVOID)ContiguousHeapPool, v36);
        ContiguousHeapPool = 0LL;
      }
      v30 = 48 * v26 - 0x58000000000LL;
      v31 = v30 + 48 * v14;
      if ( ContiguousHeapPool )
        v32 = ((ContiguousHeapPool >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      else
        v32 = 0LL;
      do
      {
        *(_QWORD *)(v30 + 40) = *(_QWORD *)(v30 + 40) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFDLL;
        v33 = MiLockPageInline(v30);
        v38 = v33;
        *(_QWORD *)(v30 + 8) = v32;
        _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v33 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v33 = v38;
        }
        __writecr8(v33);
        v34 = v32;
        v30 += 48LL;
        v32 += 8LL;
        if ( !v34 )
          v32 = 0LL;
      }
      while ( v30 < v31 );
      v12 = v51;
      if ( ContiguousHeapPool )
      {
        if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
          MiLogPerfMemoryRangeEvent(ContiguousHeapPool, 0LL, 13LL, v14);
        v15 = 0;
        v20 = v40;
        goto LABEL_34;
      }
      v20 = v40;
LABEL_56:
      v15 = 0;
      if ( v45 != -1LL )
      {
        MiFreeContiguousPages(v45, v14);
        v15 = 0;
      }
LABEL_34:
      v8 = a2;
      goto LABEL_35;
    }
  }
  v20 = a6;
LABEL_35:
  memset(v52, 0, 0x44uLL);
  if ( EtwEventEnabled(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_CONT_ALLOCATION) )
  {
    if ( ContiguousHeapPool )
      PhysicalAddress = MmGetPhysicalAddress((PVOID)ContiguousHeapPool);
    v52[0] = ((__int64 (__fastcall *)(_QWORD))EtwpGetDurationSince)((LARGE_INTEGER)v12.QuadPart);
    v52[3] = a3 << 12;
    v52[4] = v46 << 12;
    v52[1] = v50;
    UserData.Ptr = (ULONGLONG)v52;
    v52[6] = ContiguousHeapPool;
    v52[5] = PhysicalAddress.QuadPart;
    v52[2] = v8 << 12;
    v52[7] = __PAIR64__(v39, v15);
    LODWORD(v52[8]) = v20;
    *(_QWORD *)&UserData.Size = 68LL;
    EtwWriteEx(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_CONT_ALLOCATION, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
  }
  return ContiguousHeapPool;
}

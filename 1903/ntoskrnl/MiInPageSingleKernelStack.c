/*
 * XREFs of MiInPageSingleKernelStack @ 0x1400E3774
 * Callers:
 *     KiInSwapKernelStacks @ 0x1400E31F8 (KiInSwapKernelStacks.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     MiReleaseWsSwapReservationPfn @ 0x1400E3B98 (MiReleaseWsSwapReservationPfn.c)
 *     MiSetPfnKernelStack @ 0x1400E3BD8 (MiSetPfnKernelStack.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiPrefetchVirtualMemory @ 0x1400F5100 (MiPrefetchVirtualMemory.c)
 *     MiKernelStackVaToStackNode @ 0x140164A04 (MiKernelStackVaToStackNode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiFlushAllFilesystemPages @ 0x1402C3C00 (MiFlushAllFilesystemPages.c)
 *     MiDeleteKernelStackNode @ 0x1402C430C (MiDeleteKernelStackNode.c)
 *     MiLogKernelStackEvent @ 0x1402D1A70 (MiLogKernelStackEvent.c)
 */

void *__fastcall MiInPageSingleKernelStack(ULONG_PTR BugCheckParameter3, _QWORD *a2)
{
  ULONG_PTR v3; // r15
  __int64 v4; // r8
  unsigned __int64 v5; // r13
  ULONG_PTR v6; // r14
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // r12
  __int64 v12; // rsi
  __int64 v13; // r10
  unsigned __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // r9
  _QWORD *v17; // r10
  __int64 v18; // r11
  unsigned int v19; // ebx
  ULONG_PTR v20; // r12
  signed __int64 v21; // rsi
  ULONG_PTR v22; // r9
  __int64 v23; // r10
  __int64 v24; // rbx
  unsigned __int64 v25; // r15
  unsigned __int8 v26; // r13
  unsigned __int64 v27; // rbx
  _QWORD *v28; // rbx
  void *result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v31; // rcx
  unsigned __int16 v32; // [rsp+30h] [rbp-D0h]
  __int64 v34; // [rsp+40h] [rbp-C0h]
  PVOID P; // [rsp+48h] [rbp-B8h]
  _BOOL8 BugCheckParameter1; // [rsp+50h] [rbp-B0h]
  __int64 v37; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR *v38; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v39; // [rsp+68h] [rbp-98h]
  unsigned __int64 v40; // [rsp+70h] [rbp-90h]
  _QWORD *v41; // [rsp+78h] [rbp-88h]
  _QWORD v42[11]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v43[36]; // [rsp+E0h] [rbp-20h] BYREF

  v41 = a2;
  v3 = BugCheckParameter3;
  memset(v42, 0, sizeof(v42));
  v32 = *(_WORD *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(v3 + 588)] + 192) + 146LL);
  v4 = *a2;
  v5 = ((a2[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v39 = v5;
  v6 = (((unsigned __int64)(v4 - 4096) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = (((unsigned __int64)(a2[2] - 8LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 0LL;
  v38 = *(ULONG_PTR **)(qword_140466188 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v3 + 544) + 1454LL));
  if ( v38 == &MiSystemPartition )
  {
    P = 0LL;
  }
  else
  {
    result = (void *)MiKernelStackVaToStackNode(v4 - 1);
    P = result;
    if ( !result )
      return result;
  }
  MI_READ_PTE_LOCK_FREE(v7);
  v9 = MiSwizzleInvalidPte(128LL);
  BugCheckParameter1 = 0LL;
  if ( v10 != v9 )
    BugCheckParameter1 = (v10 & 0x800) == 0;
  v11 = MiSwizzleInvalidPte(768LL);
  v12 = MiSwizzleInvalidPte(992LL);
  v14 = v5;
  if ( v5 <= v6 )
  {
    do
    {
      v15 = MI_READ_PTE_LOCK_FREE(v14);
      if ( v15 != v12 && v15 != v18 && v15 != v11 && (v15 & 0x800) == 0 )
      {
        ++v8;
        *v17 = 4096LL;
        *(v17 - 1) = v16 << 25 >> 16;
        if ( v8 == 18 )
          break;
      }
      v14 = v16 + 8;
    }
    while ( v14 <= v6 );
    v3 = BugCheckParameter3;
    if ( v8 > 1 )
      MiPrefetchVirtualMemory(v8, v43, 1LL);
    v13 = 1LL;
  }
  v19 = 0;
  v34 = 0LL;
  v20 = ((v13 + v32) << 57) | 2;
  v21 = (__int64)(v6 << 25) >> 16;
  v43[1] = 4096LL;
  v40 = v13 | (unsigned __int64)v42;
  while ( v6 >= v5 )
  {
    if ( (MI_READ_PTE_LOCK_FREE(v6) & 0x3E0) != 0x3E0 )
      KeBugCheckEx(0x1Au, 0x3451uLL, v6, v3, 0LL);
    v42[3] = 0LL;
    v42[4] = 0LL;
    v42[1] = v43;
    v43[0] = v21;
    LOWORD(v42[0]) = 4;
    v42[2] = v23;
    v42[5] = v3;
    MmAccessFault(v20, v21, 0, v22);
    if ( (*(_BYTE *)v6 & 1) != 0 )
    {
      while ( 1 )
      {
        v37 = MI_READ_PTE_LOCK_FREE(v6);
        v24 = v37;
        v25 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v37) >> 12) & 0xFFFFFFFFFLL)
            - 0x58000000000LL;
        v26 = MiLockPageInline(v25);
        if ( v24 == MI_READ_PTE_LOCK_FREE(v6) )
          break;
        _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v26 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v26);
      }
      MiSetPfnKernelStack(v25, BugCheckParameter3);
      *(_QWORD *)(v25 + 40) = *(_QWORD *)(v25 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x80000000000000LL;
      *(_BYTE *)(v25 + 35) = *(_BYTE *)(v25 + 35) & 0xF8 | 5;
      v27 = MiReleaseWsSwapReservationPfn(v25);
      _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v26 < 2u )
      {
        v31 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v31->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v31);
      }
      __writecr8(v26);
      if ( v27 )
        MiReleasePageFileInfo((__int64)v38, v27, 0);
      v6 -= 8LL;
      v3 = BugCheckParameter3;
      v21 -= 4096LL;
      v5 = v39;
      v19 = ++v34;
    }
  }
  if ( P )
    MiDeleteKernelStackNode(P);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogKernelStackEvent(v21 + 4096, v19, 1LL);
  v28 = v41;
  result = (void *)v41[2];
  if ( *((_QWORD *)result - 1) != v3 )
  {
    MiFlushAllFilesystemPages(1LL);
    KeBugCheckEx(0x77u, BugCheckParameter1, *(_QWORD *)(v28[2] - 8LL), 0LL, v28[2]);
  }
  return result;
}

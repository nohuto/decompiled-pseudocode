/*
 * XREFs of MiInPageSingleKernelStack @ 0x14008F9F4
 * Callers:
 *     KiInSwapKernelStacks @ 0x14008F478 (KiInSwapKernelStacks.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MiReleasePageFileInfo @ 0x14008A250 (MiReleasePageFileInfo.c)
 *     MiReleaseWsSwapReservationPfn @ 0x14008FE18 (MiReleaseWsSwapReservationPfn.c)
 *     MiSetPfnKernelStack @ 0x14008FE58 (MiSetPfnKernelStack.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x1400AA630 (MmAccessFault.c)
 *     MiPrefetchVirtualMemory @ 0x1400C7FA0 (MiPrefetchVirtualMemory.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiKernelStackVaToStackNode @ 0x140164454 (MiKernelStackVaToStackNode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiFlushAllFilesystemPages @ 0x1402C3960 (MiFlushAllFilesystemPages.c)
 *     MiDeleteKernelStackNode @ 0x1402C406C (MiDeleteKernelStackNode.c)
 *     MiLogKernelStackEvent @ 0x1402D17D0 (MiLogKernelStackEvent.c)
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
  ULONG_PTR v14; // r9
  __int64 v15; // rax
  __int64 v16; // r9
  _QWORD *v17; // r10
  __int64 v18; // r11
  unsigned int v19; // ebx
  ULONG_PTR v20; // r12
  ULONG_PTR v21; // rsi
  __int64 v22; // r10
  __int64 v23; // rbx
  unsigned __int64 v24; // r15
  unsigned __int8 v25; // r13
  unsigned __int64 v26; // rbx
  _QWORD *v27; // rbx
  void *result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v30; // rcx
  unsigned __int16 v31; // [rsp+30h] [rbp-D0h]
  __int64 v33; // [rsp+40h] [rbp-C0h]
  PVOID P; // [rsp+48h] [rbp-B8h]
  _BOOL8 BugCheckParameter1; // [rsp+50h] [rbp-B0h]
  __int64 v36; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR *v37; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v38; // [rsp+68h] [rbp-98h]
  unsigned __int64 v39; // [rsp+70h] [rbp-90h]
  _QWORD *v40; // [rsp+78h] [rbp-88h]
  _QWORD v41[11]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v42[36]; // [rsp+E0h] [rbp-20h] BYREF

  v40 = a2;
  v3 = BugCheckParameter3;
  memset(v41, 0, sizeof(v41));
  v31 = *(_WORD *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(v3 + 588)] + 192) + 146LL);
  v4 = *a2;
  v5 = ((a2[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v38 = v5;
  v6 = (((unsigned __int64)(v4 - 4096) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = (((unsigned __int64)(a2[2] - 8LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 0LL;
  v37 = *(ULONG_PTR **)(qword_140465E88 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v3 + 544) + 1454LL));
  if ( v37 == &MiSystemPartition )
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
      MiPrefetchVirtualMemory(v8, v42, 1LL);
    v13 = 1LL;
  }
  v19 = 0;
  v33 = 0LL;
  v20 = ((v13 + v31) << 57) | 2;
  v21 = (__int64)(v6 << 25) >> 16;
  v42[1] = 4096LL;
  v39 = v13 | (unsigned __int64)v41;
  while ( v6 >= v5 )
  {
    if ( (MI_READ_PTE_LOCK_FREE(v6) & 0x3E0) != 0x3E0 )
      KeBugCheckEx(0x1Au, 0x3451uLL, v6, v3, 0LL);
    v41[3] = 0LL;
    v41[4] = 0LL;
    v41[1] = v42;
    v42[0] = v21;
    LOWORD(v41[0]) = 4;
    v41[2] = v22;
    v41[5] = v3;
    MmAccessFault(v20, v21);
    if ( (*(_BYTE *)v6 & 1) != 0 )
    {
      while ( 1 )
      {
        v36 = MI_READ_PTE_LOCK_FREE(v6);
        v23 = v36;
        v24 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v36) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v25 = MiLockPageInline(v24);
        if ( v23 == MI_READ_PTE_LOCK_FREE(v6) )
          break;
        _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v25 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v25);
      }
      MiSetPfnKernelStack(v24, BugCheckParameter3);
      *(_QWORD *)(v24 + 40) = *(_QWORD *)(v24 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x80000000000000LL;
      *(_BYTE *)(v24 + 35) = *(_BYTE *)(v24 + 35) & 0xF8 | 5;
      v26 = MiReleaseWsSwapReservationPfn(v24);
      _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v25 < 2u )
      {
        v30 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v30->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v30);
      }
      __writecr8(v25);
      if ( v26 )
        MiReleasePageFileInfo((__int64)v37, v26, 0);
      v6 -= 8LL;
      v3 = BugCheckParameter3;
      v21 -= 4096LL;
      v5 = v38;
      v19 = ++v33;
    }
  }
  if ( P )
    MiDeleteKernelStackNode(P);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogKernelStackEvent(v21 + 4096, v19, 1LL);
  v27 = v40;
  result = (void *)v40[2];
  if ( *((_QWORD *)result - 1) != v3 )
  {
    MiFlushAllFilesystemPages(1LL);
    KeBugCheckEx(0x77u, BugCheckParameter1, *(_QWORD *)(v27[2] - 8LL), 0LL, v27[2]);
  }
  return result;
}

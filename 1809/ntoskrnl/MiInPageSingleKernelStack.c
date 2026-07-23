/*
 * XREFs of MiInPageSingleKernelStack @ 0x14013D5A0
 * Callers:
 *     KeSwapProcessOrStack @ 0x14017FEE0 (KeSwapProcessOrStack.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiPrefetchVirtualMemory @ 0x1400EA1C0 (MiPrefetchVirtualMemory.c)
 *     MiReleaseWsSwapReservationPfn @ 0x14013D9B0 (MiReleaseWsSwapReservationPfn.c)
 *     MiSetPfnKernelStack @ 0x14013DA00 (MiSetPfnKernelStack.c)
 *     MiKernelStackVaToStackNode @ 0x140155BC0 (MiKernelStackVaToStackNode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x1402AB1E0 (MiFlushAllFilesystemPages.c)
 *     MiDeleteKernelStackNode @ 0x1402AB7F4 (MiDeleteKernelStackNode.c)
 *     MiLogKernelStackEvent @ 0x1402BB954 (MiLogKernelStackEvent.c)
 */

void *__fastcall MiInPageSingleKernelStack(ULONG_PTR BugCheckParameter3, _QWORD *a2)
{
  ULONG_PTR v2; // r15
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // r8
  unsigned __int64 v6; // r12
  ULONG_PTR v7; // r14
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  void *v10; // r13
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rsi
  unsigned __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // r9
  _QWORD *v17; // r10
  __int64 v18; // r11
  unsigned int v19; // ebx
  signed __int64 v20; // rsi
  ULONG_PTR v21; // r9
  ULONG_PTR v22; // r10
  __int64 v23; // rbx
  __int64 v24; // r15
  unsigned __int8 v25; // r12
  unsigned __int64 v26; // rbx
  _QWORD *v27; // rbx
  void *result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v30; // rcx
  unsigned __int16 v31; // [rsp+30h] [rbp-D0h]
  __int64 v32; // [rsp+38h] [rbp-C8h]
  __int64 v33; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v35; // [rsp+48h] [rbp-B8h]
  _BOOL8 BugCheckParameter1; // [rsp+50h] [rbp-B0h]
  __int64 v37; // [rsp+58h] [rbp-A8h] BYREF
  struct _KEVENT *v38; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v39; // [rsp+68h] [rbp-98h]
  char *v40; // [rsp+70h] [rbp-90h]
  _QWORD *v41; // [rsp+78h] [rbp-88h]
  __int16 v42; // [rsp+80h] [rbp-80h] BYREF
  _QWORD *v43; // [rsp+88h] [rbp-78h]
  __int64 v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  __int64 v46; // [rsp+A0h] [rbp-60h]
  ULONG_PTR v47; // [rsp+A8h] [rbp-58h]
  _QWORD v48[36]; // [rsp+E0h] [rbp-20h] BYREF

  v2 = BugCheckParameter3;
  v3 = a2[1];
  v4 = KiProcessorBlock[*(unsigned int *)(BugCheckParameter3 + 588)];
  v41 = a2;
  v31 = *(_WORD *)(*(_QWORD *)(v4 + 192) + 146LL);
  v5 = *a2;
  v6 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v35 = v6;
  v7 = (((unsigned __int64)(*a2 - 4096LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = (((unsigned __int64)(a2[2] - 8LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = 0LL;
  v38 = *(struct _KEVENT **)(qword_14043B808
                           + 8LL * *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter3 + 544) + 1454LL));
  if ( v38 == (struct _KEVENT *)&MiSystemPartition )
  {
    v10 = 0LL;
  }
  else
  {
    result = (void *)MiKernelStackVaToStackNode(v5 - 1);
    v10 = result;
    if ( !result )
      return result;
  }
  MI_READ_PTE_LOCK_FREE(v8);
  v11 = MiSwizzleInvalidPte(128LL);
  BugCheckParameter1 = 0LL;
  if ( v12 != v11 )
    BugCheckParameter1 = (v12 & 0x800) == 0;
  v32 = MiSwizzleInvalidPte(768LL);
  v13 = MiSwizzleInvalidPte(992LL);
  v14 = v6;
  if ( v6 <= v7 )
  {
    do
    {
      v15 = MI_READ_PTE_LOCK_FREE(v14);
      if ( v15 != v13 && v15 != v18 && v15 != v32 && (v15 & 0x800) == 0 )
      {
        ++v9;
        *v17 = 4096LL;
        *(v17 - 1) = v16 << 25 >> 16;
        if ( v9 == 18 )
          break;
      }
      v14 = v16 + 8;
    }
    while ( v14 <= v7 );
    v2 = BugCheckParameter3;
    if ( v9 > 1 )
      MiPrefetchVirtualMemory(v9, (__int64)v48, 1LL, 45);
  }
  v19 = 0;
  v33 = 0LL;
  v20 = (__int64)(v7 << 25) >> 16;
  v39 = ((unsigned __int64)v31 << 57) | 2;
  v40 = (char *)&v42 + 1;
  v48[1] = 4096LL;
  while ( v7 >= v6 )
  {
    if ( (MI_READ_PTE_LOCK_FREE(v7) & 0x3E0) != 0x3E0 )
      KeBugCheckEx(0x1Au, 0x3451uLL, v7, v2, 0LL);
    v45 = 0LL;
    v46 = 0LL;
    v43 = v48;
    v48[0] = v20;
    v42 = 4;
    v44 = 1LL;
    v47 = v2;
    MmAccessFault(v22, v20, 0LL, v21);
    if ( (*(_BYTE *)v7 & 1) != 0 )
    {
      while ( 1 )
      {
        v37 = MI_READ_PTE_LOCK_FREE(v7);
        v23 = v37;
        v24 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v37) >> 12) & 0xFFFFFFFFFLL)
            - 0x58000000000LL;
        v25 = MiLockPageInline(v24);
        if ( v23 == MI_READ_PTE_LOCK_FREE(v7) )
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
        MiReleasePageFileInfo(v38, v26, 0);
      v7 -= 8LL;
      v2 = BugCheckParameter3;
      v20 -= 4096LL;
      v6 = v35;
      v19 = ++v33;
    }
  }
  if ( v10 )
    MiDeleteKernelStackNode(v10);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogKernelStackEvent(v20 + 4096, v19, 1LL);
  v27 = v41;
  result = (void *)v41[2];
  if ( *((_QWORD *)result - 1) != v2 )
  {
    MiFlushAllFilesystemPages(1LL);
    KeBugCheckEx(0x77u, BugCheckParameter1, *(_QWORD *)(v27[2] - 8LL), 0LL, v27[2]);
  }
  return result;
}

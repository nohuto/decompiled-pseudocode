/*
 * XREFs of EtwpTraceLastBranchRecord @ 0x140318048
 * Callers:
 *     EtwpLogKernelEvent @ 0x1400C7110 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x14017C82C (EtwpLogSystemEventUnsafe.c)
 *     EtwpLogContextSwapEvent @ 0x14017CB50 (EtwpLogContextSwapEvent.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400C7110 (EtwpLogKernelEvent.c)
 *     KeQueryCurrentStackInformation @ 0x1400CAC30 (KeQueryCurrentStackInformation.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeGetCurrentStackPointer @ 0x1401BC400 (KeGetCurrentStackPointer.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 *     _alloca_probe @ 0x1401C5F20 (_alloca_probe.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

void __fastcall EtwpTraceLastBranchRecord(__int64 a1, __int64 *a2, _KTHREAD *a3, int a4)
{
  _KTHREAD *CurrentThread; // rcx
  _KTHREAD *v7; // rsi
  int v9; // ecx
  char v10; // r14
  __int64 v11; // rdi
  PSLIST_ENTRY v12; // rax
  unsigned int *v13; // rbx
  __int64 v14; // rax
  void *v15; // rsp
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // ecx
  unsigned int v19; // r8d
  unsigned int v20; // [rsp+28h] [rbp-8h]
  unsigned int v21; // [rsp+30h] [rbp+0h] BYREF
  int v22; // [rsp+34h] [rbp+4h] BYREF
  char *v23; // [rsp+38h] [rbp+8h] BYREF
  unsigned __int64 v24; // [rsp+40h] [rbp+10h] BYREF
  __int64 v25; // [rsp+48h] [rbp+18h] BYREF
  int CycleTime; // [rsp+50h] [rbp+20h]
  unsigned int CurrentRunTime; // [rsp+54h] [rbp+24h]
  int v28; // [rsp+58h] [rbp+28h]
  __int64 *v29; // [rsp+78h] [rbp+48h] BYREF
  int v30; // [rsp+80h] [rbp+50h]
  int v31; // [rsp+84h] [rbp+54h]
  unsigned int *v32; // [rsp+88h] [rbp+58h]
  int v33; // [rsp+90h] [rbp+60h]
  int v34; // [rsp+94h] [rbp+64h]

  CurrentThread = KeGetCurrentThread();
  v7 = a3;
  if ( KeGetCurrentPrcb()->IdleThread != CurrentThread && (a4 & 0x1800) != 0 )
  {
    if ( !a3 )
      v7 = CurrentThread;
    if ( KeQueryCurrentStackInformation(&v21, &v23, &v24) )
    {
      if ( v21 > 9 || (v9 = 929, !_bittest(&v9, v21)) )
      {
        v10 = 0;
        v11 = (unsigned int)(24 * EtwpLastBranchStackSize);
        v12 = RtlpInterlockedPopEntrySList(&EtwpLastBranchLookAsideList);
        if ( !v12 || (v13 = (unsigned int *)&v12[1], v12 == (PSLIST_ENTRY)-16LL) )
        {
          if ( KeGetCurrentStackPointer() - v23 <= (unsigned __int64)(v11 + 3632) )
            return;
          v14 = v11 + 15;
          if ( v11 + 15 <= (unsigned __int64)(unsigned int)v11 )
            v14 = 0xFFFFFFFFFFFFFF0LL;
          v15 = alloca(v14 & 0xFFFFFFFFFFFFFFF0uLL);
          v10 = 1;
          v13 = &v21;
        }
        if ( ((int (__fastcall *)(_QWORD, unsigned int *, int *))off_1403FF6C8[0])((unsigned int)v11, v13, &v22) >= 0
          && v22 )
        {
          v16 = *(_QWORD *)(a1 + 1080);
          CycleTime = v7[1].CycleTime;
          CurrentRunTime = v7[1].CurrentRunTime;
          v25 = *a2;
          v17 = *(_QWORD *)(a1 + 1008);
          v20 = a4 & 0xFFFFE600 | 2;
          v18 = *(_DWORD *)(v17 + 4);
          v31 = 0;
          v34 = 0;
          v29 = &v25;
          v28 = v18;
          v33 = v22;
          v19 = *(_DWORD *)a1;
          v30 = 24;
          v32 = v13;
          EtwpLogKernelEvent((__int64)&v29, v16, v19, 2u, 0xC20u, v20);
        }
        if ( !v10 )
          RtlpInterlockedPushEntrySList(&EtwpLastBranchLookAsideList, (PSLIST_ENTRY)v13 - 1);
      }
    }
  }
}

/*
 * XREFs of EtwpTraceLastBranchRecord @ 0x1403362E4
 * Callers:
 *     EtwpLogKernelEvent @ 0x1400A2990 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x14014753C (EtwpLogSystemEventUnsafe.c)
 *     EtwpLogContextSwapEvent @ 0x140147860 (EtwpLogContextSwapEvent.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x14001BBD0 (KeQueryCurrentStackInformation.c)
 *     EtwpLogKernelEvent @ 0x1400A2990 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeGetCurrentStackPointer @ 0x1401C4D80 (KeGetCurrentStackPointer.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CC570 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 *     _alloca_probe @ 0x1401CD060 (_alloca_probe.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __fastcall EtwpTraceLastBranchRecord(__int64 a1, _QWORD *a2, _KTHREAD *a3, int a4)
{
  _KTHREAD *CurrentThread; // rcx
  int v9; // ecx
  char v10; // si
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
  __int64 v23; // [rsp+38h] [rbp+8h] BYREF
  _BYTE v24[8]; // [rsp+40h] [rbp+10h] BYREF
  _QWORD v25[6]; // [rsp+48h] [rbp+18h] BYREF
  _QWORD *v26; // [rsp+78h] [rbp+48h] BYREF
  int v27; // [rsp+80h] [rbp+50h]
  int v28; // [rsp+84h] [rbp+54h]
  unsigned int *v29; // [rsp+88h] [rbp+58h]
  int v30; // [rsp+90h] [rbp+60h]
  int v31; // [rsp+94h] [rbp+64h]

  memset(v25, 0, sizeof(v25));
  CurrentThread = KeGetCurrentThread();
  if ( KeGetCurrentPrcb()->IdleThread != CurrentThread && (a4 & 0x1800) != 0 )
  {
    if ( !a3 )
      a3 = CurrentThread;
    if ( (unsigned __int8)KeQueryCurrentStackInformation((__int64)&v21, (__int64)&v23, (__int64)v24) )
    {
      if ( v21 > 9 || (v9 = 929, !_bittest(&v9, v21)) )
      {
        v10 = 0;
        v11 = (unsigned int)(24 * EtwpLastBranchStackSize);
        v12 = RtlpInterlockedPopEntrySList(&EtwpLastBranchLookAsideList);
        if ( !v12 || (v13 = (unsigned int *)&v12[1], v12 == (PSLIST_ENTRY)-16LL) )
        {
          if ( (unsigned __int64)&KeGetCurrentStackPointer()[-v23] <= v11 + 3632 )
            return;
          v14 = v11 + 15;
          if ( v11 + 15 <= (unsigned __int64)(unsigned int)v11 )
            v14 = 0xFFFFFFFFFFFFFF0LL;
          v15 = alloca(v14 & 0xFFFFFFFFFFFFFFF0uLL);
          v10 = 1;
          v13 = &v21;
        }
        if ( ((int (__fastcall *)(_QWORD, unsigned int *, int *))off_1404246C8[0])((unsigned int)v11, v13, &v22) >= 0
          && v22 )
        {
          v16 = *(_QWORD *)(a1 + 1080);
          LODWORD(v25[1]) = a3[1].CycleTime;
          HIDWORD(v25[1]) = a3[1].CurrentRunTime;
          v25[0] = *a2;
          v17 = *(_QWORD *)(a1 + 1008);
          v20 = a4 & 0xFFFFE600 | 2;
          v18 = *(_DWORD *)(v17 + 4);
          v28 = 0;
          v31 = 0;
          v26 = v25;
          LODWORD(v25[2]) = v18;
          v30 = v22;
          v19 = *(_DWORD *)a1;
          v27 = 24;
          v29 = v13;
          EtwpLogKernelEvent((__int64)&v26, v16, v19, 2u, 0xC20u, v20);
        }
        if ( !v10 )
          RtlpInterlockedPushEntrySList(&EtwpLastBranchLookAsideList, (PSLIST_ENTRY)v13 - 1);
      }
    }
  }
}

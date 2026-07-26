/*
 * XREFs of ndisPeriodicReceivesTimer @ 0x1C001FB40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

void __fastcall ndisPeriodicReceivesTimer(
        PVOID SystemSpecific1,
        PVOID FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  _QWORD *v4; // rbx
  char *v5; // rdi
  __int64 *v6; // rax
  __int64 v7; // rax
  LARGE_INTEGER v8; // rdx
  __int64 *v9; // rax
  _QWORD v10[6]; // [rsp+28h] [rbp-19h] BYREF
  _QWORD WnodeEventItem[8]; // [rsp+58h] [rbp+17h] BYREF

  v4 = 0LL;
  v5 = (char *)WPP_MAIN_CB.Dpc.DeferredRoutine + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v5 + 2);
  v6 = *(__int64 **)v5;
  if ( *(char **)v5 == v5 )
    goto LABEL_5;
  v4 = *(_QWORD **)v5;
  if ( (char *)v6[1] != v5 )
    goto LABEL_18;
  v7 = *v6;
  if ( *(_QWORD **)(v7 + 8) != v4 )
    goto LABEL_18;
  *(_QWORD *)v5 = v7;
  *(_QWORD *)(v7 + 8) = v5;
  v4[1] = 0LL;
  *v4 = 0LL;
  --*((_DWORD *)v5 + 6);
  if ( *(char **)v5 == v5 )
  {
LABEL_5:
    *(_DWORD *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 4LL * KeGetPcr()->Prcb.Number) = 0;
  }
  else
  {
    v8 = *(LARGE_INTEGER *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong;
    if ( !*(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong )
      v8.QuadPart = -1LL;
    KeSetTimer(
      (PKTIMER)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[16 * (unsigned __int64)KeGetPcr()->Prcb.Number],
      v8,
      (PKDPC)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[16 * (unsigned __int64)KeGetPcr()->Prcb.Number + 8]);
  }
  if ( v4 != (_QWORD *)((char *)ndisPerCpuPoisonPills + 32 * KeGetPcr()->Prcb.Number) )
    goto LABEL_7;
  v9 = *(__int64 **)v5;
  if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 )
LABEL_18:
    __fastfail(3u);
  *v4 = v9;
  v4[1] = v5;
  v9[1] = (__int64)v4;
  *(_QWORD *)v5 = v4;
  ++*((_DWORD *)v5 + 6);
  v4 = 0LL;
LABEL_7:
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v5 + 2);
  if ( v4 )
  {
    if ( (_BYTE)word_1C00E809C )
    {
      memset((char *)WnodeEventItem + 2, 0, 0x36uLL);
      HIDWORD(WnodeEventItem[5]) = 0x20000;
      LOWORD(WnodeEventItem[0]) = 56;
      WnodeEventItem[1] = qword_1C00E8090;
      *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
      BYTE4(WnodeEventItem[0]) = 22;
      LOBYTE(WnodeEventItem[6]) = 1;
      IoWMIWriteEvent(WnodeEventItem);
    }
    ((void (__fastcall *)(_QWORD))v4[2])(v4[3]);
    if ( (_BYTE)word_1C00E809C )
    {
      memset((char *)v10 + 2, 0, 0x2EuLL);
      HIDWORD(v10[5]) = 0x20000;
      LOWORD(v10[0]) = 48;
      v10[1] = qword_1C00E8090;
      *(GUID *)&v10[3] = EtwGuidNdisReceive;
      BYTE4(v10[0]) = 23;
      IoWMIWriteEvent(v10);
    }
  }
}

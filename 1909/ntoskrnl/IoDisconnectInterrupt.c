/*
 * XREFs of IoDisconnectInterrupt @ 0x140742F80
 * Callers:
 *     IoDisconnectInterruptEx @ 0x140742F00 (IoDisconnectInterruptEx.c)
 *     IopConnectMessageBasedInterrupt @ 0x14077CF08 (IopConnectMessageBasedInterrupt.c)
 *     IopConnectLineBasedInterrupt @ 0x140783848 (IopConnectLineBasedInterrupt.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeRemoveQueueDpc @ 0x1400FD530 (KeRemoveQueueDpc.c)
 *     KeFreeInterrupt @ 0x14017C1D8 (KeFreeInterrupt.c)
 *     KeDisconnectInterrupt @ 0x14017C200 (KeDisconnectInterrupt.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopDestroyActiveConnectBlock @ 0x1407437B0 (IopDestroyActiveConnectBlock.c)
 *     PnpTraceInterruptConnection @ 0x1407438B0 (PnpTraceInterruptConnection.c)
 *     IopInitializeActiveConnectBlock @ 0x1407438F8 (IopInitializeActiveConnectBlock.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x14077E5C8 (IopAcquireReleaseConnectLockInternal.c)
 *     IopDestroyPassiveInterruptBlock @ 0x140861148 (IopDestroyPassiveInterruptBlock.c)
 */

void __stdcall IoDisconnectInterrupt(PKINTERRUPT InterruptObject)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rbx
  PSLIST_ENTRY *p_Number; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v7; // r10
  char v8; // dl
  unsigned int *v9; // r8
  unsigned __int64 v10; // r9
  __int64 v11; // rax
  _QWORD v12[10]; // [rsp+30h] [rbp-68h] BYREF

  memset(v12, 0, sizeof(v12));
  KeRemoveQueueDpc((PRKDPC)&InterruptObject[1].MessageServiceRoutine);
  IopInitializeActiveConnectBlock(&InterruptObject[-1].ConnectionData, v12);
  v2 = (unsigned __int64)InterruptObject[-1].ServiceThread
     - (((unsigned __int64)InterruptObject[-1].ServiceThread >> 1) & 0x5555555555555555LL);
  v3 = v2 & 0x3333333333333333LL;
  v4 = (0x101010101010101LL
      * (((v2 & 0x3333333333333333LL)
        + ((v2 >> 2) & 0x3333333333333333LL)
        + (((v2 & 0x3333333333333333LL) + ((v2 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  if ( v12[3] )
  {
    LOBYTE(v3) = 1;
    IopAcquireReleaseConnectLockInternal(v12, v3, 0LL);
  }
  p_Number = (PSLIST_ENTRY *)&InterruptObject[1].Number;
  LOBYTE(v3) = v4;
  KeDisconnectInterrupt((__int64 *)&InterruptObject[1].Number, v3, (__int64)&InterruptObject[-1].ConnectionData);
  if ( v12[3] )
    IopAcquireReleaseConnectLockInternal(v12, 0LL, 0LL);
  if ( LOBYTE(InterruptObject[1].Type) )
    IopDestroyPassiveInterruptBlock(HIDWORD(InterruptObject[-1].IntTrackEntry));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( LOBYTE(InterruptObject[1].Type) )
  {
    v7 = KeGetCurrentThread();
    v8 = 0;
    if ( (char)v4 <= 0 )
      goto LABEL_17;
    v9 = &InterruptObject[1].Number;
    v10 = v4;
    do
    {
      v11 = *(_QWORD *)v9;
      v9 += 2;
      if ( *(struct _KTHREAD **)(v11 + 152) == v7 )
        v8 = 1;
      --v10;
    }
    while ( v10 );
    if ( !v8 )
LABEL_17:
      KeWaitForSingleObject(&InterruptObject[1].InterruptListEntry, Executive, 0, 0, 0LL);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( (char)v4 > 0 )
  {
    do
    {
      KeFreeInterrupt(*p_Number++);
      --v4;
    }
    while ( v4 );
  }
  IopDestroyActiveConnectBlock(v12);
  ExFreePoolWithTag(&InterruptObject[-1].DisconnectData, 0);
  PnpTraceInterruptConnection(0LL);
}

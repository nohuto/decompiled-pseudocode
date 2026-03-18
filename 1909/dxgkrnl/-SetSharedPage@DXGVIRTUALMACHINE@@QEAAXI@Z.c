/*
 * XREFs of ?SetSharedPage@DXGVIRTUALMACHINE@@QEAAXI@Z @ 0x1C025F77C
 * Callers:
 *     ?VmBusSetIoSpaceRegion@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0229270 (-VmBusSetIoSpaceRegion@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     MapGpadl @ 0x1C022B6D0 (MapGpadl.c)
 */

void __fastcall DXGVIRTUALMACHINE::SetSharedPage(DXGVIRTUALMACHINE *this, unsigned int a2)
{
  char *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _MDL *v8; // rcx
  PVOID MappedSystemVa; // rax
  __int64 v10; // rax

  DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALMACHINE *)((char *)this + 64));
  v4 = (char *)this + 224;
  if ( !*((_QWORD *)this + 28) )
  {
    if ( (int)MapGpadl(*((_QWORD *)this + 7), a2, 0x1000uLL) < 0 )
    {
      v10 = WdLogNewEntry5_WdError(v6, v5, v7);
      *(_QWORD *)(v10 + 24) = 5439LL;
      goto LABEL_10;
    }
    v8 = *(struct _MDL **)v4;
    if ( (*(_BYTE *)(*(_QWORD *)v4 + 10LL) & 5) != 0 )
      MappedSystemVa = v8->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(v8, 0, MmCached, 0LL, 0, 0x40000010u);
    *((_QWORD *)this + 29) = MappedSystemVa;
    if ( !MappedSystemVa )
    {
      v10 = WdLogNewEntry5_WdError(v8, v5, v7);
      *(_QWORD *)(v10 + 24) = 5430LL;
LABEL_10:
      WdLogEvent5_WdError(v10);
      goto LABEL_11;
    }
    *((_DWORD *)this + 54) = a2;
  }
LABEL_11:
  *((_QWORD *)this + 9) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 64, 0LL);
  KeLeaveCriticalRegion();
}

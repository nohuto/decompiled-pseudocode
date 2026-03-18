/*
 * XREFs of ?ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C006E53C
 * Callers:
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C006E4F0 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ?SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z @ 0x1C006E608 (-SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z.c)
 *     ?ReleaseChannelHandle@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C006EB54 (-ReleaseChannelHandle@CConnection@DirectComposition@@QEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CApplicationChannel::ReturnProcessedBatch(
        DirectComposition::CApplicationChannel *this,
        DWORD *a2)
{
  __int64 v4; // rcx
  LARGE_INTEGER *v5; // rbx

  DirectComposition::CBatch::SetSynchronizationObject((DirectComposition::CBatch *)a2, 0LL);
  if ( a2[5] == 6 )
  {
    DirectComposition::CConnection::ReleaseChannelHandle(
      *((DirectComposition::CConnection **)this + 5),
      *((_DWORD *)this + 7));
    Win32FreePool((__int64)a2);
    (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, __int64))(*(_QWORD *)this + 32LL))(this, 1LL);
  }
  else
  {
    v4 = *((_QWORD *)this + 45);
    *((_DWORD *)this + 95) = a2[4];
    if ( v4 && !*((_QWORD *)this + 46) )
      KeSetEvent(*(PRKEVENT *)(v4 + 8), 1, 0);
    if ( (a2[8] & 8) != 0 )
      *((_BYTE *)this + 242) = 0;
    if ( (*((_BYTE *)this + 241) & 4) != 0 )
    {
      v5 = (LARGE_INTEGER *)*((_QWORD *)this + 90);
      v5[8].LowPart = a2[4];
      v5[7] = KeQueryPerformanceCounter(0LL);
    }
    ExpInterlockedPushEntrySList((PSLIST_HEADER)this + 12, (PSLIST_ENTRY)a2);
    KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 27) + 8LL), 1, 0);
  }
}

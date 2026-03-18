/*
 * XREFs of ?ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C005A030
 * Callers:
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C0059FE4 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ?SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z @ 0x1C005A0FC (-SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z.c)
 *     ?ReleaseChannelHandle@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C005A664 (-ReleaseChannelHandle@CConnection@DirectComposition@@QEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
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
      *((_BYTE *)this + 240) &= ~0x80u;
    if ( (*((_BYTE *)this + 241) & 0x10) != 0 )
    {
      v5 = (LARGE_INTEGER *)*((_QWORD *)this + 90);
      v5[9].LowPart = a2[4];
      v5[8] = KeQueryPerformanceCounter(0LL);
    }
    ExpInterlockedPushEntrySList((PSLIST_HEADER)this + 12, (PSLIST_ENTRY)a2);
    KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 27) + 8LL), 1, 0);
  }
}

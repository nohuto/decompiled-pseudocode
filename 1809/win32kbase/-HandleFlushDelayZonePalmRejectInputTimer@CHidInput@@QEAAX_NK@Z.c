/*
 * XREFs of ?HandleFlushDelayZonePalmRejectInputTimer@CHidInput@@QEAAX_NK@Z @ 0x1C014C800
 * Callers:
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x1C014FCD8 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 * Callees:
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C007AE84 (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 */

void __fastcall CHidInput::HandleFlushDelayZonePalmRejectInputTimer(CHidInput *this)
{
  void *DispatcherHandleByName; // rax
  union _LARGE_INTEGER DueTime; // [rsp+50h] [rbp+8h] BYREF

  DueTime.QuadPart = (LONGLONG)this;
  DispatcherHandleByName = (void *)CRIMBase::GetDispatcherHandleByName(
                                     *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
                                     6LL,
                                     1LL);
  DueTime.QuadPart = -160000LL;
  ZwSetTimer(DispatcherHandleByName, &DueTime, 0LL, 0LL, 0, 0, 0LL);
}

/*
 * XREFs of ?HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z @ 0x1C014C77C
 * Callers:
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x1C014FCD8 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C014FED0 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C007AE84 (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 */

void __fastcall CHidInput::HandleDelayZonePalmRejectionTimer(CHidInput *this, char a2, int a3)
{
  __int64 v4; // rdi
  void *DispatcherHandleByName; // rax
  union _LARGE_INTEGER DueTime; // [rsp+50h] [rbp+8h] BYREF

  DueTime.QuadPart = (LONGLONG)this;
  v4 = a3;
  DispatcherHandleByName = (void *)CRIMBase::GetDispatcherHandleByName(
                                     *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
                                     5LL,
                                     1LL);
  if ( a2 )
  {
    ZwCancelTimer(DispatcherHandleByName, 0LL);
  }
  else
  {
    DueTime.QuadPart = -10000 * v4;
    ZwSetTimer(DispatcherHandleByName, &DueTime, 0LL, 0LL, 0, 0, 0LL);
  }
}

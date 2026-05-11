/*
 * XREFs of ?IoQueueThread@CSidebandDevice@@AEAAXXZ @ 0x1C000B7C4
 * Callers:
 *     ?staticIoQueueThread@CSidebandDevice@@SAXPEAX@Z @ 0x1C000BB10 (-staticIoQueueThread@CSidebandDevice@@SAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000B27C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?EmptyAndCancelIrpsInQueue@CSidebandDevice@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x1C000BA4C (-EmptyAndCancelIrpsInQueue@CSidebandDevice@@AEAAJPEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall CSidebandDevice::IoQueueThread(struct _LIST_ENTRY *this, __int64 a2)
{
  struct _IRP *v3; // rdi
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF

  Object[0] = &this[12].Blink;
  Object[1] = &this[11];
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      9u,
      0xA1u,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
  while ( 1 )
  {
    v4 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
    if ( v4 )
      break;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v5,
        9u,
        0xA2u,
        (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
    v3 = IoCsqRemoveNextIrp((PIO_CSQ)&this[2].Blink[10], &this[4]);
    if ( v3 )
    {
      KeWaitForSingleObject(&this[2].Blink[2].Blink, Executive, 0, 0, 0LL);
      CSidebandDevice::SidebandApi((CSidebandDevice *)this, v3);
      KeReleaseMutex((PRKMUTEX)&this[2].Blink[2].Blink, 0);
    }
  }
  if ( v4 == 1 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v5,
      9u,
      0xA3u,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
    CSidebandDevice::EmptyAndCancelIrpsInQueue((CSidebandDevice *)this, this + 4);
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      9u,
      0xA4u,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
    CSidebandDevice::EmptyAndCancelIrpsInQueue((CSidebandDevice *)this, this + 5);
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v7,
      9u,
      0xA5u,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
    CSidebandDevice::EmptyAndCancelIrpsInQueue((CSidebandDevice *)this, this + 6);
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v8,
      9u,
      0xA6u,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
    CSidebandDevice::EmptyAndCancelIrpsInQueue((CSidebandDevice *)this, this + 7);
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v9,
      9u,
      0xA7u,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
    CSidebandDevice::EmptyAndCancelIrpsInQueue((CSidebandDevice *)this, this + 8);
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v10,
      9u,
      0xA8u,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
    CSidebandDevice::EmptyAndCancelIrpsInQueue((CSidebandDevice *)this, this + 9);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v5,
      9u,
      0xA9u,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
  PsTerminateSystemThread(0);
}

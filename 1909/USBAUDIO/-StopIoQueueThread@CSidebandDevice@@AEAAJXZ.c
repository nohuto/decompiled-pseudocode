/*
 * XREFs of ?StopIoQueueThread@CSidebandDevice@@AEAAJXZ @ 0x1C0008574
 * Callers:
 *     ?InitializeIoQueue@CSidebandDevice@@UEAAJXZ @ 0x1C0008210 (-InitializeIoQueue@CSidebandDevice@@UEAAJXZ.c)
 *     ?DeInitIoQueue@CSidebandDevice@@UEAAJXZ @ 0x1C00084D0 (-DeInitIoQueue@CSidebandDevice@@UEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall CSidebandDevice::StopIoQueueThread(CSidebandDevice *this, __int64 a2)
{
  __int64 v3; // rdx

  if ( *((_QWORD *)this + 21) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        a2,
        9u,
        0x12u,
        (__int64)&WPP_d153e64821bc3364f2117226f130d99d_Traceguids);
    KeSetEvent((PRKEVENT)((char *)this + 176), 0, 0);
    KeWaitForSingleObject(*((PVOID *)this + 21), Executive, 0, 0, 0LL);
    ObfDereferenceObject(*((PVOID *)this + 21));
    *((_QWORD *)this + 21) = 0LL;
    KeClearEvent((PRKEVENT)((char *)this + 176));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v3,
        9u,
        0x13u,
        (__int64)&WPP_d153e64821bc3364f2117226f130d99d_Traceguids);
  }
  return 0LL;
}

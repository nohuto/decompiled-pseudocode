/*
 * XREFs of ?EmptyAndCancelIrpsInQueue@CSidebandDevice@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x1C000C524
 * Callers:
 *     ?IoQueueThread@CSidebandDevice@@AEAAXXZ @ 0x1C000C284 (-IoQueueThread@CSidebandDevice@@AEAAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall CSidebandDevice::EmptyAndCancelIrpsInQueue(CSidebandDevice *this, struct _LIST_ENTRY *a2)
{
  PIRP i; // rax
  __int64 v5; // rdx
  IRP *v6; // rbx

  for ( i = IoCsqRemoveNextIrp((PIO_CSQ)(*((_QWORD *)this + 5) + 160LL), a2);
        ;
        i = IoCsqRemoveNextIrp((PIO_CSQ)(*((_QWORD *)this + 5) + 160LL), a2) )
  {
    v6 = i;
    if ( !i )
      break;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v5,
        9u,
        0xADu,
        (__int64)&WPP_d153e64821bc3364f2117226f130d99d_Traceguids);
    v6->IoStatus.Status = -1073741536;
    v6->IoStatus.Information = 0LL;
    IofCompleteRequest(v6, 0);
  }
  return 0LL;
}

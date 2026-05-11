/*
 * XREFs of ?EmptyAndCancelIrpsInQueue@CSidebandDevice@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x1C000BA4C
 * Callers:
 *     ?IoQueueThread@CSidebandDevice@@AEAAXXZ @ 0x1C000B7C4 (-IoQueueThread@CSidebandDevice@@AEAAXXZ.c)
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
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v5,
        9u,
        0xAAu,
        (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
    v6->IoStatus.Status = -1073741536;
    v6->IoStatus.Information = 0LL;
    IofCompleteRequest(v6, 0);
  }
  return 0LL;
}

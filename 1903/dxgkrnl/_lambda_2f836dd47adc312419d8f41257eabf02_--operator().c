/*
 * XREFs of _lambda_2f836dd47adc312419d8f41257eabf02_::operator() @ 0x1C0276844
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C0154800 (DpiFdoHandleDevicePower.c)
 *     DpiFdoHandleStopDevice @ 0x1C02A0D00 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStopAdapter @ 0x1C02A2680 (DpiFdoStopAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 */

void __fastcall lambda_2f836dd47adc312419d8f41257eabf02_::operator()(__int64 a1, __int64 a2)
{
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 18512) )
    {
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(*(PRKPROCESS *)(a2 + 18624), &ApcState);
      _InterlockedIncrement(*(volatile signed __int32 **)(a2 + 18512));
      KeUnstackDetachProcess(&ApcState);
    }
  }
}

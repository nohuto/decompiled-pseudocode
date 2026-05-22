/*
 * XREFs of ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800B13B0
 * Callers:
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x180017000 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z.c)
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800B3CE8 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800B72E8 (-TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@.c)
 * Callees:
 *     atexit @ 0x18002BC68 (atexit.c)
 *     _Init_thread_footer @ 0x18002CD10 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18002CD78 (_Init_thread_header.c)
 *     wil::init_once_nothrow__lambda_15c18fd34087e847390382b1ce5907ca___ @ 0x1800B1290 (wil--init_once_nothrow__lambda_15c18fd34087e847390382b1ce5907ca___.c)
 */

struct LampArrayTelemetry *LampArrayTelemetry::GetInstance(void)
{
  if ( dword_1801E1908 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_1801E1908);
    if ( dword_1801E1908 == -1 )
    {
      atexit(LampArrayTelemetry::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__);
      Init_thread_footer(&dword_1801E1908);
    }
  }
  wil::init_once_nothrow__lambda_15c18fd34087e847390382b1ce5907ca___();
  return qword_1801E1378;
}

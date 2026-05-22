/*
 * XREFs of ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800B1500
 * Callers:
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x1800174E0 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z.c)
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800B3E38 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800B7438 (-TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@.c)
 * Callees:
 *     atexit @ 0x18002BFE8 (atexit.c)
 *     _Init_thread_footer @ 0x18002D090 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18002D0F8 (_Init_thread_header.c)
 *     wil::init_once_nothrow__lambda_15c18fd34087e847390382b1ce5907ca___ @ 0x1800B13E0 (wil--init_once_nothrow__lambda_15c18fd34087e847390382b1ce5907ca___.c)
 */

struct LampArrayTelemetry *LampArrayTelemetry::GetInstance(void)
{
  if ( dword_1801E190C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_1801E190C);
    if ( dword_1801E190C == -1 )
    {
      atexit(LampArrayTelemetry::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__);
      Init_thread_footer(&dword_1801E190C);
    }
  }
  wil::init_once_nothrow__lambda_15c18fd34087e847390382b1ce5907ca___();
  return qword_1801E1378;
}

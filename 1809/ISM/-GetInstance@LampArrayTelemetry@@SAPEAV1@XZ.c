/*
 * XREFs of ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x180078FDC
 * Callers:
 *     ?ParseHardwareIdStrings@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x180073B90 (-ParseHardwareIdStrings@PnpDevice@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x180079740 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x18007E9E0 (-TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800035C4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     atexit @ 0x18012B9E8 (atexit.c)
 *     _Init_thread_footer @ 0x18012CB60 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18012CBC8 (_Init_thread_header.c)
 */

struct LampArrayTelemetry *LampArrayTelemetry::GetInstance(void)
{
  const char *v0; // r9
  _QWORD *v1; // rax
  DWORD v2; // edx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  WINBOOL fPending; // [rsp+48h] [rbp+10h] BYREF

  if ( dword_180193D50 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180193D50);
    if ( dword_180193D50 == -1 )
    {
      atexit(LampArrayTelemetry::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__);
      Init_thread_footer(&dword_180193D50);
    }
  }
  fPending = 0;
  if ( InitOnceBeginInitialize(&InitOnce, 0, &fPending, 0LL) )
  {
    if ( fPending )
    {
      qword_180193D48 = 0LL;
      v1 = malloc(0x10uLL);
      if ( v1 )
      {
        v1[1] = 0LL;
        *v1 = &RefCountedObject::`vftable';
        *((_DWORD *)v1 + 2) = 1;
        *v1 = &RefCountedObject::`vftable';
        qword_180193D48 = (__int64)v1;
        v2 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x19,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraytelemetry.cpp",
          (const char *)0x8007000ELL);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraytelemetry.cpp",
          (const char *)0x8007000ELL);
        wil::details::in1diag3::Return_Hr(retaddr, (void *)0x1FB, (__int64)"wil", (const char *)0x8007000ELL);
        v2 = 4;
      }
      InitOnceComplete(&InitOnce, v2, 0LL);
    }
  }
  else
  {
    wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0x1F6, (__int64)"wil", v0);
  }
  return (struct LampArrayTelemetry *)qword_180193D48;
}

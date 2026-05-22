/*
 * XREFs of ?NotifyInputReportCallback@ConsumerControlNexusDevice@@CAJPEAX@Z @ 0x1800B0980
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??_GInputReportEventArgs@ConsumerControlNexusDevice@@QEAAPEAXI@Z @ 0x1800AFE0C (--_GInputReportEventArgs@ConsumerControlNexusDevice@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::NotifyInputReportCallback(
        ConsumerControlNexusDevice::InputReportEventArgs *this)
{
  __int64 v3; // rcx
  const struct std::nothrow_t *v4; // rdx
  int v5; // eax
  const struct std::nothrow_t *v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !this )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v3 = *(_QWORD *)this;
  if ( !v3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)0x80070057LL);
    ConsumerControlNexusDevice::InputReportEventArgs::`scalar deleting destructor'(this, v4);
    return 2147942487LL;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, *((_QWORD *)this + 1));
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      426LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)(unsigned int)v5);
  ConsumerControlNexusDevice::InputReportEventArgs::`scalar deleting destructor'(this, v6);
  return 0LL;
}

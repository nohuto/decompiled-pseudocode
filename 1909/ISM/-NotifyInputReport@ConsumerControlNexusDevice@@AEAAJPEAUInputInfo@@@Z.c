/*
 * XREFs of ?NotifyInputReport@ConsumerControlNexusDevice@@AEAAJPEAUInputInfo@@@Z @ 0x1800B0884
 * Callers:
 *     ?ProcessInput@ConsumerControlNexusDevice@@QEAAJXZ @ 0x1800B0A34 (-ProcessInput@ConsumerControlNexusDevice@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C548 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002EE94 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@PEBUInputInfo@@@Z @ 0x1800A868C (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@PEBUInputInfo@@@Z.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::NotifyInputReport(
        ConsumerControlNexusDevice *this,
        struct InputInfo *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  void *v7; // rax
  __int64 v8; // r8
  const char *v9; // r9
  __int64 *v10; // rbx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !a2 )
  {
    v4 = -2147024809;
    v5 = 401LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)v4);
    return v4;
  }
  v7 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = (__int64 *)v7;
  if ( v7 )
  {
    *(_QWORD *)v7 = 0LL;
    VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>((void **)v7 + 1, (int *)a2, v8, v9);
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
  {
    v4 = -2147024882;
    v5 = 404LL;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<IRawInputClient>::operator=(v10, (__int64 *)this + 14);
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(ConsumerControlNexusDevice::InputReportEventArgs *), __int64 *, __int64))(**((_QWORD **)this + 15) + 136LL))(
          *((_QWORD *)this + 15),
          ConsumerControlNexusDevice::NotifyInputReportCallback,
          v10,
          4LL);
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      411LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)(unsigned int)v11);
  return 0LL;
}

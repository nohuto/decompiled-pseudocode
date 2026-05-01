/*
 * XREFs of ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1801D3C54
 * Callers:
 *     _lambda_6c4b80bdf74632827428df2b58c2a770_::_lambda_6c4b80bdf74632827428df2b58c2a770_ @ 0x1801D395C (_lambda_6c4b80bdf74632827428df2b58c2a770_--_lambda_6c4b80bdf74632827428df2b58c2a770_.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800414F4 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ??4?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1801D5E40 (--4-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsPro.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        __int64 a2)
{
  *(_QWORD *)a1 = &wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    0LL,
    1);
  *((_QWORD *)a1 + 6) = (char *)a1 + 56;
  *((_DWORD *)a1 + 14) = 0;
  *((_BYTE *)a1 + 60) = 0;
  *((_DWORD *)a1 + 24) = 0;
  *((_QWORD *)a1 + 13) = 0LL;
  *((_QWORD *)a1 + 14) = 0LL;
  *((_BYTE *)a1 + 120) = 0;
  *((_DWORD *)a1 + 33) = 0;
  *((_DWORD *)a1 + 32) = 1;
  *((_QWORD *)a1 + 35) = 0LL;
  *((_QWORD *)a1 + 36) = 0LL;
  memset_0((char *)a1 + 136, 0, 0x90uLL);
  *((_QWORD *)a1 + 37) = 0LL;
  *((_QWORD *)a1 + 38) = 0LL;
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>::operator=(
    a1,
    a2);
  return a1;
}

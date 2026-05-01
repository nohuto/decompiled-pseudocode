/*
 * XREFs of ??1CopiedToClipboard@ScreenClippingCommonTelemetry@@QEAA@XZ @ 0x18037B42C
 * Callers:
 *     ?CopyToClipboard@ScreenClippingBrokerImpl@@CAJPEAUHBITMAP__@@@Z @ 0x18037B5BC (-CopyToClipboard@ScreenClippingBrokerImpl@@CAJPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18037BA74 (-Destroy@-$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Para.c)
 */

void __fastcall ScreenClippingCommonTelemetry::CopiedToClipboard::~CopiedToClipboard(
        ScreenClippingCommonTelemetry::CopiedToClipboard *this)
{
  *(_QWORD *)this = &ScreenClippingCommonTelemetry::CopiedToClipboard::`vftable';
  wil::ActivityBase<ShellScreenClippingLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ShellScreenClippingLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ShellScreenClippingLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

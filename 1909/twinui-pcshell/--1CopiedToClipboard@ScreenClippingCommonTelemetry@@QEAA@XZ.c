/*
 * XREFs of ??1CopiedToClipboard@ScreenClippingCommonTelemetry@@QEAA@XZ @ 0x1804008BC
 * Callers:
 *     ?CopyToClipboard@ScreenClippingBrokerImpl@@CAJPEAUHBITMAP__@@@Z @ 0x180400A4C (-CopyToClipboard@ScreenClippingBrokerImpl@@CAJPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180400F04 (-Destroy@-$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_.c)
 */

void __fastcall ScreenClippingCommonTelemetry::CopiedToClipboard::~CopiedToClipboard(
        ScreenClippingCommonTelemetry::CopiedToClipboard *this)
{
  *(_QWORD *)this = &ScreenClippingCommonTelemetry::CopiedToClipboard::`vftable';
  wil::ActivityBase<ShellScreenClippingLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ShellScreenClippingLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ShellScreenClippingLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

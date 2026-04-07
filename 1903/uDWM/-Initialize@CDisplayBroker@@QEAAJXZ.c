/*
 * XREFs of ?Initialize@CDisplayBroker@@QEAAJXZ @ 0x180043888
 * Callers:
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x180043608 (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18003BC3C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UISessionBrokerInstance@DispBrokerDesktop@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UISessionBrokerInstance@DispBrokerDesktop@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180043970 (--$ActivateInstance@V-$ComPtr@UISessionBrokerInstance@DispBrokerDesktop@@@WRL@Microsoft@@@Founda.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplayBroker::Initialize(CDisplayBroker *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  void *v6; // [rsp+28h] [rbp-40h]
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+48h] [rbp-20h]

  v8 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"DispBrokerDesktop.SessionBrokerInstance",
    0x28u,
    0x27u);
  v2 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<DispBrokerDesktop::ISessionBrokerInstance>>(
         v8,
         this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x1Bu, v6);
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 48LL))(*(_QWORD *)this);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x1Cu, v6);
  }
  return v3;
}

/*
 * XREFs of ??1InputConfigContextProvider@@MEAA@XZ @ 0x1800D2C6C
 * Callers:
 *     ??_EInputConfigContextProvider@@MEAAPEAXI@Z @ 0x1800D2D08 (--_EInputConfigContextProvider@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ClearConfigs@InputConfigContextProvider@@IEAAXAEAV?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@@Z @ 0x180011D18 (-ClearConfigs@InputConfigContextProvider@@IEAAXAEAV-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@U.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180026E8C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x1800285C4 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ?_Tidy@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ @ 0x1800D2D6C (-_Tidy@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall InputConfigContextProvider::~InputConfigContextProvider(InputConfigContextProvider *this)
{
  char *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rdx

  *(_QWORD *)this = &InputConfigContextProvider::`vftable'{for `ISystemContextProvider'};
  v2 = (char *)this + 224;
  *((_QWORD *)this + 1) = &InputConfigContextProvider::`vftable'{for `RefCountedObject'};
  InputConfigContextProvider::ClearConfigs((__int64)this, (InputConfigContextProvider *)((char *)this + 224));
  InputConfigContextProvider::ClearConfigs(v3, (InputConfigContextProvider *)((char *)this + 248));
  std::vector<INPUT_SPACE_PAYLOAD>::_Tidy((char *)this + 248);
  std::vector<INPUT_SPACE_PAYLOAD>::_Tidy(v2);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)this + 160, v4);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 13,
    0LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 11);
  SystemContextProvider::~SystemContextProvider(this);
}

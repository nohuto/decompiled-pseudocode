/*
 * XREFs of ?Initialize@CCompositionSwapchainStatistics@@IEAAJPEAX@Z @ 0x1801DBBD8
 * Callers:
 *     ?Create@CCompositionSwapchainStatistics@@SAJPEAXPEAPEAV1@@Z @ 0x1801DBA04 (-Create@CCompositionSwapchainStatistics@@SAJPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180063A40 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSwapchainStatistics::Initialize(CCompositionSwapchainStatistics *this, void *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  HANDLE hObject; // [rsp+40h] [rbp+8h] BYREF

  hObject = 0LL;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &hObject,
    0LL);
  v4 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = OpenFlipConsumer(a2, (char *)this + 48, &hObject);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x24u);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  return v7;
}

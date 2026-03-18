/*
 * XREFs of ?Initialize@CCompositionSwapchainStatistics@@IEAAJPEAX@Z @ 0x180263BF0
 * Callers:
 *     ?Create@CCompositionSwapchainStatistics@@SAJPEAXPEAPEAV1@@Z @ 0x180263A14 (-Create@CCompositionSwapchainStatistics@@SAJPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800DFAE0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSwapchainStatistics::Initialize(CCompositionSwapchainStatistics *this, void *a2)
{
  __int64 v4; // rcx
  signed int v5; // eax
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
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x22u, 0LL);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  return v7;
}

/*
 * XREFs of ?RuntimeClassInitialize@ViewManagerBridge@@QEAAJPEAVViewEventDispatcher@@@Z @ 0x180289C14
 * Callers:
 *     ??$MakeAndInitialize@VViewManagerBridge@@V1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAVViewManagerBridge@@$$QEAPEAVViewEventDispatcher@@@Z @ 0x180267564 (--$MakeAndInitialize@VViewManagerBridge@@V1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801017C8 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180104D80 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?InternalRelease@?$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@IEAAKXZ @ 0x18026C500 (-InternalRelease@-$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@QEAAAEAV012@PEAVViewEventDispatcher@@@Z @ 0x180284D60 (--4-$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@QEAAAEAV012@PEAVViewEventDispatcher@@@Z.c)
 */

__int64 __fastcall ViewManagerBridge::RuntimeClassInitialize(ViewManagerBridge *this, struct ViewEventDispatcher *a2)
{
  unsigned int LastError; // ebx
  __int64 v4; // rdx
  wil::details *v5; // rcx
  wil::details *Event; // rsi
  __int64 v7; // r8
  const char *v8; // r9
  signed int LastErrorFailHr; // esi
  __int64 v10; // rdx
  __int64 v12; // rdx
  wil::details *v13; // rcx
  wil::details *v14; // rsi
  __int64 v15; // r8
  const char *v16; // r9
  const char *v17; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  ViewManagerBridge *v19; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<ViewEventDispatcher>::operator=((__int64 *)this + 10, (__int64)a2);
  LastError = 0;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (wil::details **)this + 16,
      Event);
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v5, v4, v7, v8);
  }
  if ( LastErrorFailHr < 0 )
  {
    v10 = 30LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)LastErrorFailHr);
    return (unsigned int)LastErrorFailHr;
  }
  v14 = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( v14 )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (wil::details **)this + 17,
      v14);
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v13, v12, v15, v16);
  }
  if ( LastErrorFailHr < 0 )
  {
    v10 = 32LL;
    goto LABEL_6;
  }
  v19 = this;
  if ( this )
    _InterlockedIncrement((volatile signed __int32 *)this + 19);
  if ( SHCreateThread(
         (LPTHREAD_START_ROUTINE)lambda_f2f8653dbdef2d27cb8873abae1874da_::_lambda_invoker_cdecl_,
         this,
         0x1000u,
         0LL) )
  {
    v19 = 0LL;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x30,
                  (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
                  v17);
  }
  Microsoft::WRL::ComPtr<ViewManagerBridge>::InternalRelease((__int64 *)&v19);
  return LastError;
}

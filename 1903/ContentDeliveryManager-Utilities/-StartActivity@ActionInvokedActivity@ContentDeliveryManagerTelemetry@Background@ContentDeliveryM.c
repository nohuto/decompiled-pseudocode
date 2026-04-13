/*
 * XREFs of ?StartActivity@ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG00@Z @ 0x18004CCF0
 * Callers:
 *     _lambda_b7df6605325939df64e4896ead66165a_::operator() @ 0x18004F428 (_lambda_b7df6605325939df64e4896ead66165a_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001F98C (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180023E84 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180050B58 (-zInternalStart@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDel_ea_180050B58.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity::StartActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  const struct _TlgProvider_t *v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  bool v11; // zf
  int v12; // eax
  __int64 v13; // rax
  bool v14; // zf
  __int64 v15; // r8
  const GUID *v16; // r9
  DWORD CurrentThreadId; // [rsp+30h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  __int64 *v19; // [rsp+60h] [rbp-29h]
  __int64 v20; // [rsp+68h] [rbp-21h]
  DWORD *p_CurrentThreadId; // [rsp+70h] [rbp-19h]
  __int64 v22; // [rsp+78h] [rbp-11h]
  const unsigned __int16 *v23; // [rsp+80h] [rbp-9h]
  int v24; // [rsp+88h] [rbp-1h]
  int v25; // [rsp+8Ch] [rbp+3h]
  const unsigned __int16 *v26; // [rsp+90h] [rbp+7h]
  int v27; // [rsp+98h] [rbp+Fh]
  int v28; // [rsp+9Ch] [rbp+13h]
  const unsigned __int16 *v29; // [rsp+A0h] [rbp+17h]
  int v30; // [rsp+A8h] [rbp+1Fh]
  int v31; // [rsp+ACh] [rbp+23h]

  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v8 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  if ( *(_DWORD *)v8 > 5u
    && (*((_QWORD *)v8 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v8 + 3) & 0x400000000000LL) == *((_QWORD *)v8 + 3) )
  {
    v20 = 8LL;
    v19 = &`CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v22 = 4LL;
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    LODWORD(v9) = 0;
    if ( a2 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( a2[v9] );
    }
    v25 = 0;
    v24 = 2 * v9 + 2;
    if ( !a2 )
      a2 = &Src;
    LODWORD(v10) = 0;
    v23 = a2;
    v11 = a3 == 0LL;
    if ( a3 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( a3[v10] );
      v11 = a3 == 0LL;
    }
    v12 = 2 * v10 + 2;
    v28 = 0;
    if ( v11 )
      a3 = &Src;
    v27 = v12;
    v26 = a3;
    LODWORD(v13) = 0;
    v14 = a4 == 0LL;
    if ( a4 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a4[v13] );
      v14 = a4 == 0LL;
    }
    if ( v14 )
      a4 = &Src;
    v31 = 0;
    v29 = a4;
    v30 = 2 * v13 + 2;
    v15 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v15 + 4)
      || (v16 = (const GUID *)(v15 + 24), !*(_DWORD *)(v15 + 24))
      && !*(_DWORD *)(v15 + 28)
      && !*(_DWORD *)(v15 + 32)
      && !*(_DWORD *)(v15 + 36) )
    {
      v16 = 0LL;
    }
    TlgWrite(v8, &unk_18016CF19, (LPCGUID)(v15 + 8), v16, 7u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity *)((char *)this + 8));
}

/*
 * XREFs of ?StartActivity@ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG00@Z @ 0x18004BC68
 * Callers:
 *     _lambda_b7df6605325939df64e4896ead66165a_::operator() @ 0x18004E178 (_lambda_b7df6605325939df64e4896ead66165a_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001F80C (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180023D54 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18004F82C (-zInternalStart@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDel_ea_18004F82C.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
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
  DWORD CurrentThreadId; // [rsp+30h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+60h] [rbp-19h]
  __int64 v20; // [rsp+68h] [rbp-11h]
  const unsigned __int16 *v21; // [rsp+70h] [rbp-9h]
  int v22; // [rsp+78h] [rbp-1h]
  int v23; // [rsp+7Ch] [rbp+3h]
  const unsigned __int16 *v24; // [rsp+80h] [rbp+7h]
  int v25; // [rsp+88h] [rbp+Fh]
  int v26; // [rsp+8Ch] [rbp+13h]
  const unsigned __int16 *v27; // [rsp+90h] [rbp+17h]
  int v28; // [rsp+98h] [rbp+1Fh]
  int v29; // [rsp+9Ch] [rbp+23h]

  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v8 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  if ( *(_DWORD *)v8 > 5u
    && (*((_QWORD *)v8 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v8 + 3) & 0x400000000000LL) == *((_QWORD *)v8 + 3) )
  {
    v20 = 4LL;
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
    v23 = 0;
    v22 = 2 * v9 + 2;
    if ( !a2 )
      a2 = &Src;
    LODWORD(v10) = 0;
    v21 = a2;
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
    v26 = 0;
    if ( v11 )
      a3 = &Src;
    v25 = v12;
    v24 = a3;
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
    v29 = 0;
    v27 = a4;
    v28 = 2 * v13 + 2;
    v15 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v15 + 4)
      || (v16 = (const GUID *)(v15 + 24), !*(_DWORD *)(v15 + 24))
      && !*(_DWORD *)(v15 + 28)
      && !*(_DWORD *)(v15 + 32)
      && !*(_DWORD *)(v15 + 36) )
    {
      v16 = 0LL;
    }
    TlgWrite(v8, &unk_180163B93, (LPCGUID)(v15 + 8), v16, 6u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity *)((char *)this + 8));
}

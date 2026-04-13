/*
 * XREFs of _lambda_b7df6605325939df64e4896ead66165a_::operator() @ 0x18004F428
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_b7df6605325939df64e4896ead66165a__Windows::Internal::CNoResult_::Run @ 0x180052120 (Windows--Internal--COperationLambdaVar_0__lambda_b7df6605325939df64e4896ead66165a__Windows--Inte.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x1800333A0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     ?StartActivity@ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG00@Z @ 0x18004CCF0 (-StartActivity@ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryM.c)
 *     ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18004E6B0 (--1-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAA.c)
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180050A54 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0E.c)
 *     ?Stop@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800511EC (-Stop@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAA.c)
 *     ??A?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@QEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV21@@Z @ 0x180051600 (--A-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@U-$less@V-$basic_stri.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CB119 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall lambda_b7df6605325939df64e4896ead66165a_::operator()(__int64 *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  const unsigned __int16 *v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rax
  const unsigned __int16 *v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rax
  const unsigned __int16 *v10; // rdi
  const char *v11; // r9
  __int64 result; // rax
  unsigned int v13; // [rsp+20h] [rbp-1E8h]
  void *v14[2]; // [rsp+30h] [rbp-1D8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-1C8h]
  unsigned __int64 v16; // [rsp+48h] [rbp-1C0h]
  void *v17[2]; // [rsp+50h] [rbp-1B8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-1A8h]
  unsigned __int64 v19; // [rsp+68h] [rbp-1A0h]
  void *v20[2]; // [rsp+70h] [rbp-198h] BYREF
  __int64 v21; // [rsp+80h] [rbp-188h]
  unsigned __int64 v22; // [rsp+88h] [rbp-180h]
  _QWORD v23[4]; // [rsp+90h] [rbp-178h] BYREF
  int v24; // [rsp+B0h] [rbp-158h]
  int *v25; // [rsp+B8h] [rbp-150h]
  int *v26; // [rsp+C0h] [rbp-148h]
  int v27; // [rsp+C8h] [rbp-140h] BYREF
  char v28; // [rsp+CCh] [rbp-13Ch]
  int v29; // [rsp+F0h] [rbp-118h] BYREF
  const char *v30; // [rsp+F8h] [rbp-110h]
  __int64 v31; // [rsp+100h] [rbp-108h]
  char v32; // [rsp+108h] [rbp-100h]
  __int64 v33; // [rsp+110h] [rbp-F8h]
  _BYTE v34[144]; // [rsp+118h] [rbp-F0h] BYREF
  __int64 v35; // [rsp+1A8h] [rbp-60h]
  __int64 v36; // [rsp+1B0h] [rbp-58h]
  __int64 v37; // [rsp+1B8h] [rbp-50h]
  __int64 v38; // [rsp+1C0h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+0h]

  v2 = *a1;
  v22 = 7LL;
  v21 = 0LL;
  LOWORD(v20[0]) = 0;
  std::wstring::assign(v20, (char *)L"ctx.creativeId", aCtxCreativeid[0] != 0 ? 0xE : 0);
  v3 = std::map<std::wstring,std::wstring>::operator[](v2 + 88, v20);
  v4 = (const unsigned __int16 *)v3;
  if ( *(_QWORD *)(v3 + 24) >= 8uLL )
    v4 = *(const unsigned __int16 **)v3;
  v5 = *a1;
  v19 = 7LL;
  v18 = 0LL;
  LOWORD(v17[0]) = 0;
  std::wstring::assign(v17, (char *)L"ctx.placementId", aCtxPlacementid[0] != 0 ? 0xF : 0);
  v6 = std::map<std::wstring,std::wstring>::operator[](v5 + 88, v17);
  v7 = (const unsigned __int16 *)v6;
  if ( *(_QWORD *)(v6 + 24) >= 8uLL )
    v7 = *(const unsigned __int16 **)v6;
  v8 = *a1;
  v16 = 7LL;
  v15 = 0LL;
  LOWORD(v14[0]) = 0;
  std::wstring::assign(v14, (char *)L"ctx.action", aCtxAction[0] != 0 ? 0xA : 0);
  v9 = std::map<std::wstring,std::wstring>::operator[](v8 + 88, v14);
  v10 = (const unsigned __int16 *)v9;
  if ( *(_QWORD *)(v9 + 24) >= 8uLL )
    v10 = *(const unsigned __int16 **)v9;
  v23[1] = 0LL;
  v23[2] = v23;
  v23[3] = 0LL;
  v24 = 0;
  v25 = &v29;
  v26 = &v27;
  v27 = 0;
  v28 = 0;
  v32 = 0;
  v29 = 0;
  v30 = "ActionInvokedActivity";
  v31 = 0LL;
  v33 = 1LL;
  v35 = 0LL;
  memset_0(v34, 0, sizeof(v34));
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v23[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity::StartActivity(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity *)v23,
    v10,
    v7,
    v4);
  if ( v16 >= 8 )
    operator delete(v14[0]);
  v16 = 7LL;
  v15 = 0LL;
  LOWORD(v14[0]) = 0;
  if ( v19 >= 8 )
    operator delete(v17[0]);
  v19 = 7LL;
  v18 = 0LL;
  LOWORD(v17[0]) = 0;
  if ( v22 >= 8 )
    operator delete(v20[0]);
  try
  {
    v22 = 7LL;
    v21 = 0LL;
    LOWORD(v20[0]) = 0;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 72) + 8LL))(*(_QWORD *)(*a1 + 72));
    wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v23);
    v23[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity::`vftable';
    wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v23);
    wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v23);
    result = 0LL;
  }
  catch ( ... )
  {
    v13 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x69,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
            v11);
    v23[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity::`vftable';
    wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v23);
    wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v23);
    return v13;
  }
  return result;
}

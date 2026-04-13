/*
 * XREFs of ?MakePinToStartService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180084F10
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetOptionalParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800824E0 (--$GetOptionalParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180082620 (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VPinToStartService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W_N@std@@YA?AV?$shared_ptr@VPinToStartService@Actions@CreativeFramework@@@0@$$QEAPEB_W00$$QEA_N@Z @ 0x180086EDC (--$make_shared@VPinToStartService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W_N@std@@YA-AV-$share.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall CreativeFramework::Actions::MakePinToStartService(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  const WCHAR *v5; // rax
  _QWORD *v6; // rax
  void **v7; // rax
  void **v8; // rax
  _QWORD *started; // rax
  volatile signed __int32 *v10; // rbx
  bool v12[8]; // [rsp+38h] [rbp-79h] BYREF
  _QWORD *v13; // [rsp+40h] [rbp-71h] BYREF
  void **v14; // [rsp+48h] [rbp-69h] BYREF
  _QWORD v15[2]; // [rsp+50h] [rbp-61h] BYREF
  char v16; // [rsp+60h] [rbp-51h] BYREF
  volatile signed __int32 *v17; // [rsp+68h] [rbp-49h]
  void *v18[3]; // [rsp+70h] [rbp-41h] BYREF
  unsigned __int64 v19; // [rsp+88h] [rbp-29h]
  void *v20[3]; // [rsp+90h] [rbp-21h] BYREF
  unsigned __int64 v21; // [rsp+A8h] [rbp-9h]
  void *v22[3]; // [rsp+B0h] [rbp-1h] BYREF
  unsigned __int64 v23; // [rsp+C8h] [rbp+17h]
  void *v24[4]; // [rsp+D0h] [rbp+1Fh] BYREF

  v15[1] = -2LL;
  v5 = (const WCHAR *)CreativeFramework::Actions::GetOptionalParameter<std::wstring>(
                        v24,
                        a3,
                        (char *)L"useExistingTile");
  if ( *((_QWORD *)v5 + 3) >= 8uLL )
    v5 = *(const WCHAR **)v5;
  v12[0] = CompareStringOrdinal(v5, -1, L"true", -1, 1) == 2;
  v6 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v22, a3, (char *)L"pinnedTileSize");
  if ( v6[3] >= 8uLL )
    v6 = (_QWORD *)*v6;
  v13 = v6;
  v7 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v20, a3, (char *)L"packageRelativeAppId");
  if ( (unsigned __int64)v7[3] >= 8 )
    v7 = (void **)*v7;
  v14 = v7;
  v8 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v18, a3, (char *)L"packageFamilyName");
  if ( (unsigned __int64)v8[3] >= 8 )
    v8 = (void **)*v8;
  v15[0] = v8;
  started = (_QWORD *)std::make_shared<CreativeFramework::Actions::PinToStartService,wchar_t const *,wchar_t const *,wchar_t const *,bool>(
                        (unsigned int)&v16,
                        (unsigned int)v15,
                        (unsigned int)&v14,
                        (unsigned int)&v13,
                        (__int64)v12);
  *a1 = *started;
  a1[1] = started[1];
  *started = 0LL;
  started[1] = 0LL;
  v10 = v17;
  if ( v17 )
  {
    if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  if ( v19 >= 8 )
    operator delete(v18[0]);
  v19 = 7LL;
  v18[2] = 0LL;
  LOWORD(v18[0]) = 0;
  if ( v21 >= 8 )
    operator delete(v20[0]);
  v21 = 7LL;
  v20[2] = 0LL;
  LOWORD(v20[0]) = 0;
  if ( v23 >= 8 )
    operator delete(v22[0]);
  v23 = 7LL;
  v22[2] = 0LL;
  LOWORD(v22[0]) = 0;
  if ( v24[3] >= (void *)8 )
    operator delete(v24[0]);
  return a1;
}

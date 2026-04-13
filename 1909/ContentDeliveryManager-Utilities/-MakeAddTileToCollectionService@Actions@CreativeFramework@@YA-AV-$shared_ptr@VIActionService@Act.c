/*
 * XREFs of ?MakeAddTileToCollectionService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800882D0
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180067F1C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??$GetOptionalParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800843A0 (--$GetOptionalParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800844E4 (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VAddTileToCollectionService@Actions@CreativeFramework@@PEB_WAEAUPinToStartProperties@23@@std@@YA?AV?$shared_ptr@VAddTileToCollectionService@Actions@CreativeFramework@@@0@$$QEAPEB_WAEAUPinToStartProperties@Actions@CreativeFramework@@@Z @ 0x1800894C4 (--$make_shared@VAddTileToCollectionService@Actions@CreativeFramework@@PEB_WAEAUPinToStartPropert.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
_QWORD *__fastcall CreativeFramework::Actions::MakeAddTileToCollectionService(_QWORD *a1, __int64 a2, void ***a3)
{
  void **v5; // rax
  bool v6; // bl
  void **v7; // rax
  bool v8; // di
  int v9; // r15d
  __int64 v10; // rax
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  unsigned __int64 v13; // r8
  void **v14; // rax
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  unsigned __int64 v19; // r8
  _QWORD *v20; // rax
  _QWORD *started; // rax
  volatile signed __int32 *v22; // rbx
  _QWORD v24[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-C0h] BYREF
  volatile signed __int32 *v26; // [rsp+50h] [rbp-B8h]
  void *v27[3]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v28; // [rsp+70h] [rbp-98h]
  void *v29; // [rsp+78h] [rbp-90h] BYREF
  __int64 v30; // [rsp+88h] [rbp-80h]
  unsigned __int64 v31; // [rsp+90h] [rbp-78h]
  void *v32; // [rsp+98h] [rbp-70h] BYREF
  __int64 v33; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v34; // [rsp+B0h] [rbp-58h]
  void *v35; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v36; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v37; // [rsp+D0h] [rbp-38h]
  void *v38; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v39; // [rsp+E8h] [rbp-20h]
  unsigned __int64 v40; // [rsp+F0h] [rbp-18h]
  int v41; // [rsp+F8h] [rbp-10h]
  int v42[2]; // [rsp+108h] [rbp+0h] BYREF
  __int64 v43; // [rsp+118h] [rbp+10h]
  unsigned __int64 v44; // [rsp+120h] [rbp+18h]
  int v45[2]; // [rsp+128h] [rbp+20h] BYREF
  __int64 v46; // [rsp+138h] [rbp+30h]
  unsigned __int64 v47; // [rsp+140h] [rbp+38h]
  void *v48[3]; // [rsp+148h] [rbp+40h] BYREF
  unsigned __int64 v49; // [rsp+160h] [rbp+58h]
  int v50[2]; // [rsp+168h] [rbp+60h] BYREF
  __int64 v51; // [rsp+178h] [rbp+70h]
  unsigned __int64 v52; // [rsp+180h] [rbp+78h]
  int v53[2]; // [rsp+188h] [rbp+80h] BYREF
  __int64 v54; // [rsp+198h] [rbp+90h]
  unsigned __int64 v55; // [rsp+1A0h] [rbp+98h]
  void *v56[4]; // [rsp+1A8h] [rbp+A0h] BYREF
  void *v57[4]; // [rsp+1C8h] [rbp+C0h] BYREF
  int v58[2]; // [rsp+1E8h] [rbp+E0h] BYREF
  unsigned __int64 v59; // [rsp+200h] [rbp+F8h]

  v24[1] = -2LL;
  v24[0] = a1;
  v5 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v56, a3, (char *)L"createIfNeeded");
  if ( (unsigned __int64)v5[3] >= 8 )
    v5 = (void **)*v5;
  v6 = CompareStringOrdinal((LPCWCH)v5, -1, L"true", -1, 1) == 2;
  if ( v56[3] >= (void *)8 )
    operator delete(v56[0]);
  v7 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v57, a3, (char *)L"keepOnRevert");
  if ( (unsigned __int64)v7[3] >= 8 )
    v7 = (void **)*v7;
  v8 = CompareStringOrdinal((LPCWCH)v7, -1, L"true", -1, 1) == 2;
  if ( v57[3] >= (void *)8 )
    operator delete(v57[0]);
  v9 = v6 | 2;
  if ( !v8 )
    v9 = v6;
  v10 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v42, a3, (char *)L"collectionId");
  if ( *(_QWORD *)(v10 + 24) >= 8uLL )
    v10 = *(_QWORD *)v10;
  v28 = 7LL;
  v27[2] = 0LL;
  LOWORD(v27[0]) = 0;
  if ( *(_WORD *)v10 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( *(_WORD *)(v10 + 2 * v11) );
  }
  else
  {
    v11 = 0LL;
  }
  std::wstring::assign(v27, (char *)v10, v11);
  if ( v44 >= 8 )
    operator delete(*(void **)v42);
  v44 = 7LL;
  v43 = 0LL;
  LOWORD(v42[0]) = 0;
  v12 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v45, a3, (char *)L"templateType");
  if ( *(_QWORD *)(v12 + 24) >= 8uLL )
    v12 = *(_QWORD *)v12;
  v31 = 7LL;
  v30 = 0LL;
  LOWORD(v29) = 0;
  if ( *(_WORD *)v12 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_WORD *)(v12 + 2 * v13) );
  }
  else
  {
    v13 = 0LL;
  }
  std::wstring::assign(&v29, (char *)v12, v13);
  if ( v47 >= 8 )
    operator delete(*(void **)v45);
  v47 = 7LL;
  v46 = 0LL;
  LOWORD(v45[0]) = 0;
  v14 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v48, a3, (char *)L"displayName");
  if ( (unsigned __int64)v14[3] >= 8 )
    v14 = (void **)*v14;
  v34 = 7LL;
  v33 = 0LL;
  LOWORD(v32) = 0;
  if ( *(_WORD *)v14 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *((_WORD *)v14 + v15) );
  }
  else
  {
    v15 = 0LL;
  }
  std::wstring::assign(&v32, (char *)v14, v15);
  if ( v49 >= 8 )
    operator delete(v48[0]);
  v49 = 7LL;
  v48[2] = 0LL;
  LOWORD(v48[0]) = 0;
  v16 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v50, a3, (char *)L"ctx.contentId");
  if ( *(_QWORD *)(v16 + 24) >= 8uLL )
    v16 = *(_QWORD *)v16;
  v37 = 7LL;
  v36 = 0LL;
  LOWORD(v35) = 0;
  if ( *(_WORD *)v16 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_WORD *)(v16 + 2 * v17) );
  }
  else
  {
    v17 = 0LL;
  }
  std::wstring::assign(&v35, (char *)v16, v17);
  if ( v52 >= 8 )
    operator delete(*(void **)v50);
  v52 = 7LL;
  v51 = 0LL;
  LOWORD(v50[0]) = 0;
  v18 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v58, a3, (char *)L"ctx.containerPath");
  if ( *(_QWORD *)(v18 + 24) >= 8uLL )
    v18 = *(_QWORD *)v18;
  v40 = 7LL;
  v39 = 0LL;
  LOWORD(v38) = 0;
  if ( *(_WORD *)v18 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_WORD *)(v18 + 2 * v19) );
  }
  else
  {
    v19 = 0LL;
  }
  std::wstring::assign(&v38, (char *)v18, v19);
  if ( v59 >= 8 )
    operator delete(*(void **)v58);
  v41 = v9;
  v20 = (_QWORD *)CreativeFramework::Actions::GetRequiredParameter<std::wstring>(
                    (__int64)v53,
                    a3,
                    (char *)L"ctx.placementId");
  if ( v20[3] >= 8uLL )
    v20 = (_QWORD *)*v20;
  v24[0] = v20;
  started = (_QWORD *)std::make_shared<CreativeFramework::Actions::AddTileToCollectionService,wchar_t const *,CreativeFramework::Actions::PinToStartProperties &>(
                        &v25,
                        v24,
                        v27);
  *a1 = *started;
  a1[1] = started[1];
  *started = 0LL;
  started[1] = 0LL;
  v22 = v26;
  if ( v26 )
  {
    if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
      if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
    }
  }
  if ( v55 >= 8 )
    operator delete(*(void **)v53);
  v55 = 7LL;
  v54 = 0LL;
  LOWORD(v53[0]) = 0;
  if ( v40 >= 8 )
    operator delete(v38);
  v40 = 7LL;
  v39 = 0LL;
  LOWORD(v38) = 0;
  if ( v37 >= 8 )
    operator delete(v35);
  v37 = 7LL;
  v36 = 0LL;
  LOWORD(v35) = 0;
  if ( v34 >= 8 )
    operator delete(v32);
  v34 = 7LL;
  v33 = 0LL;
  LOWORD(v32) = 0;
  if ( v31 >= 8 )
    operator delete(v29);
  v31 = 7LL;
  v30 = 0LL;
  LOWORD(v29) = 0;
  if ( v28 >= 8 )
    operator delete(v27[0]);
  return a1;
}

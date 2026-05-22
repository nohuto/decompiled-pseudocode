/*
 * XREFs of ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x1800242A0
 * Callers:
 *     ??$CreateServer@VInputSystemServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVInputSystemServerConnection@@@Z @ 0x180023DC4 (--$CreateServer@VInputSystemServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessag.c)
 *     ??$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVMPCManagerConnection@@@Z @ 0x180023EDC (--$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSessio.c)
 *     ??$CreateClient@VAnimationDataProviderConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVAnimationDataProviderConnection@@@Z @ 0x1800240E0 (--$CreateClient@VAnimationDataProviderConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMe.c)
 *     ??$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVMPCManagerClientConnection@@@Z @ 0x18010EBA4 (--$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessage.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180024964 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18002A8F0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C41C (--2@YAPEAX_K@Z.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x18002DD78 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::Join(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        _OWORD *a4,
        _WORD *a5,
        char a6)
{
  _DWORD *v8; // rax
  Microsoft::BamoImpl::BamoImplObject *v9; // rdi
  __int64 v10; // rcx
  _WORD *v11; // rdx
  int v12; // esi
  __int64 v13; // rax
  __int64 v14; // r13
  wil::details *v15; // rbx
  __int64 v16; // rax
  wil::details *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  char *v20; // rax
  __int64 v21; // r8
  char *v22; // r9
  __int16 v23; // cx
  __int64 v24; // rax
  __int64 (__fastcall *v25)(__int64 *, wil::details *, _WORD *, __int64); // rsi
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  int ConversationHost; // eax
  __int64 v30; // rax
  int v31; // eax
  int v32; // eax
  void *v33; // rdx
  __int64 v34; // rcx
  Microsoft::BamoImpl::BamoImplObject *v35; // rcx
  __int64 (__fastcall *v37)(__int64 *, wil::details *, int *, char *); // rsi
  int v38; // eax
  unsigned __int64 v39; // r9
  __int64 v40; // rdx
  int *v41; // [rsp+20h] [rbp-B9h]
  int v42; // [rsp+68h] [rbp-71h] BYREF
  __int64 v43; // [rsp+70h] [rbp-69h] BYREF
  _OWORD *v44; // [rsp+78h] [rbp-61h]
  char *v45; // [rsp+80h] [rbp-59h]
  _DWORD *v46; // [rsp+88h] [rbp-51h]
  _DWORD *v47; // [rsp+90h] [rbp-49h]
  wil::details *v48; // [rsp+98h] [rbp-41h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-39h]
  _WORD *v50; // [rsp+A8h] [rbp-31h]
  __int64 v51; // [rsp+B0h] [rbp-29h]
  int v52[4]; // [rsp+C0h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+4Fh]

  v51 = -2LL;
  v44 = a4;
  v49 = a3;
  v50 = a5;
  v8 = operator new(0x20uLL);
  v47 = v8;
  v8[2] = 1;
  *(_QWORD *)v8 = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `Microsoft::BamoImpl::BamoImplObject'};
  v45 = (char *)(v8 + 4);
  *((_QWORD *)v8 + 2) = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `IMessageConversationHost'};
  *((_QWORD *)v8 + 3) = 0LL;
  v9 = (Microsoft::BamoImpl::BamoImplObject *)v8;
  v46 = v8;
  *(_QWORD *)v52 = *(_QWORD *)L"_BAMO";
  v52[2] = *(_DWORD *)L"O";
  if ( a5 )
  {
    v10 = 0x7FFFFFFFLL;
    v11 = a5;
    v12 = 0;
    do
    {
      if ( !*v11 )
        break;
      ++v11;
      --v10;
    }
    while ( v10 );
    if ( v10 )
    {
      v13 = 0x7FFFFFFF - v10;
      goto LABEL_7;
    }
    v13 = 0LL;
  }
  else
  {
    v13 = (__int64)v47;
  }
  v12 = -2147024809;
LABEL_7:
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x115,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)(unsigned int)v12);
    goto LABEL_42;
  }
  v14 = v13 + 6;
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void wil::details::FreeProcessHeap(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &v48,
    a5,
    v13 + 6);
  v15 = v48;
  if ( !v48 )
  {
    v12 = -2147024882;
    v40 = 281LL;
LABEL_60:
    v39 = (unsigned int)v12;
    goto LABEL_61;
  }
  v12 = 0;
  if ( (unsigned __int64)(v14 - 1) > 0x7FFFFFFE )
    v12 = -2147024809;
  if ( v12 < 0 )
    goto LABEL_53;
  v16 = v14;
  v17 = v48;
  v12 = 0;
  if ( !v14 )
    goto LABEL_52;
  do
  {
    if ( !*(_WORD *)v17 )
      break;
    v17 = (wil::details *)((char *)v17 + 2);
    --v16;
  }
  while ( v16 );
  if ( !v16 )
  {
LABEL_52:
    v12 = -2147024809;
LABEL_53:
    v18 = 0LL;
    goto LABEL_17;
  }
  v18 = v14 - v16;
LABEL_17:
  if ( v12 < 0 )
    goto LABEL_59;
  v19 = v14 - v18;
  v20 = (char *)v48 + 2 * v18;
  v12 = 0;
  if ( v14 == v18 )
    goto LABEL_54;
  v21 = 2147483646LL;
  v22 = (char *)((char *)v52 - v20);
  do
  {
    if ( !v21 )
      break;
    v23 = *(_WORD *)&v22[(_QWORD)v20];
    if ( !v23 )
      break;
    *(_WORD *)v20 = v23;
    v20 += 2;
    --v21;
    --v19;
  }
  while ( v19 );
  if ( !v19 )
  {
LABEL_54:
    v20 -= 2;
    v12 = -2147024774;
  }
  *(_WORD *)v20 = 0;
  if ( v12 < 0 )
  {
LABEL_59:
    v40 = 283LL;
    goto LABEL_60;
  }
  v24 = *a2;
  if ( a6 )
  {
    v25 = *(__int64 (__fastcall **)(__int64 *, wil::details *, _WORD *, __int64))(v24 + 272);
    *(_OWORD *)v52 = *v44;
    v41 = v52;
    v26 = v25(a2, v15, v50, v49);
    v12 = v26;
    if ( v26 < 0 )
    {
      v39 = (unsigned int)v26;
      v40 = 302LL;
      goto LABEL_61;
    }
  }
  else
  {
    v37 = *(__int64 (__fastcall **)(__int64 *, wil::details *, int *, char *))(v24 + 288);
    *(_OWORD *)v52 = *v44;
    v41 = &v42;
    v38 = v37(a2, v15, v52, v45);
    v12 = v38;
    if ( v38 < 0 )
    {
      v39 = (unsigned int)v38;
      v40 = 311LL;
      goto LABEL_61;
    }
  }
  v27 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = 0LL;
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  v28 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  ConversationHost = CoreUICallCreateConversationHost(a2, 0LL, a1 + 48, a1 + 56);
  v12 = ConversationHost;
  if ( ConversationHost >= 0 )
  {
    v30 = *a2;
    v43 = 0LL;
    v31 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v30 + 40))(a2, &v43);
    if ( v31 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x14C,
        (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        (const char *)(unsigned int)v31,
        (int)v41);
      __debugbreak();
    }
    v32 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v43 + 80LL))(v43, a1 + 24);
    if ( v32 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x14E,
        (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        (const char *)(unsigned int)v32,
        (int)v41);
      __debugbreak();
    }
    *(_DWORD *)(a1 + 28) = v42;
    v34 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 40) = 0LL;
    if ( v34 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    v9 = 0LL;
    v46 = 0LL;
    v35 = *(Microsoft::BamoImpl::BamoImplObject **)(a1 + 64);
    *(_QWORD *)(a1 + 64) = v47;
    if ( v35 )
      Microsoft::BamoImpl::BamoImplObject::Release(v35);
    *(_QWORD *)(*(_QWORD *)(a1 + 64) + 24LL) = a1;
    v12 = 0;
    if ( v43 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
    goto LABEL_40;
  }
  v39 = (unsigned int)ConversationHost;
  v40 = 323LL;
LABEL_61:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v40,
    (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
    (const char *)v39);
LABEL_40:
  if ( v15 )
    wil::details::FreeProcessHeap(v15, v33);
LABEL_42:
  if ( v9 )
    Microsoft::BamoImpl::BamoImplObject::Release(v9);
  return (unsigned int)v12;
}

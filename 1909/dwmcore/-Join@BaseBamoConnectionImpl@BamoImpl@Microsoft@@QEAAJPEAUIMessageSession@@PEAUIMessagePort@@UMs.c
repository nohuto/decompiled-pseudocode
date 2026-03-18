/*
 * XREFs of ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x1800E2228
 * Callers:
 *     ??$CreateServer@VDiagnosticCallbacksManager@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDiagnosticCallbacksManager@@@Z @ 0x1800E1C6C (--$CreateServer@VDiagnosticCallbacksManager@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessage.c)
 *     ??$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDataProviderRegistrarConnection@@@Z @ 0x1800E20E0 (--$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMe.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1800B2B1C (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800D8438 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800E24E8 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800E3930 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180187DB0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::Join(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int128 *a4,
        _WORD *a5)
{
  Microsoft::BamoImpl::BamoImplObject *v7; // rax
  Microsoft::BamoImpl::BamoImplObject *v8; // r14
  Microsoft::BamoImpl::BamoImplObject *v9; // rdi
  _WORD *v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rsi
  wil::details *v15; // rbx
  int ConversationHost; // eax
  __int128 v17; // xmm0
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  void *v23; // rdx
  __int64 v24; // rcx
  Microsoft::BamoImpl::BamoImplObject *v25; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // r9
  unsigned __int16 *v30; // [rsp+20h] [rbp-89h]
  int v31; // [rsp+68h] [rbp-41h]
  __int64 v32; // [rsp+70h] [rbp-39h] BYREF
  wil::details *v33; // [rsp+78h] [rbp-31h] BYREF
  __int64 v34; // [rsp+80h] [rbp-29h]
  __int128 *v35; // [rsp+88h] [rbp-21h]
  unsigned __int16 v36[8]; // [rsp+90h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+4Fh]

  v35 = a4;
  v34 = a3;
  v7 = (Microsoft::BamoImpl::BamoImplObject *)operator new(0x20uLL);
  v8 = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 2) = 1;
    *(_QWORD *)v7 = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `Microsoft::BamoImpl::BamoImplObject'};
    *((_QWORD *)v7 + 2) = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `IMessageConversationHost'};
    *((_QWORD *)v7 + 3) = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  v9 = v8;
  if ( !v8 )
  {
    v12 = -2147024882;
    v27 = 259LL;
LABEL_37:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)v12,
      (int)v30);
    goto LABEL_29;
  }
  *(_QWORD *)v36 = *(_QWORD *)L"_BAMO";
  *(_DWORD *)&v36[4] = *(_DWORD *)L"O";
  if ( a5 )
  {
    v10 = a5;
    v11 = 0x7FFFFFFFLL;
    do
    {
      if ( !*v10 )
        break;
      ++v10;
      --v11;
    }
    while ( v11 );
    v12 = v11 == 0 ? 0x80070057 : 0;
    if ( v11 )
      v13 = 0x7FFFFFFF - v11;
    else
      v13 = 0LL;
  }
  else
  {
    v13 = v34;
    v12 = -2147024809;
  }
  if ( (v12 & 0x80000000) != 0 )
  {
    v27 = 277LL;
    goto LABEL_37;
  }
  v14 = v13 + 6;
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void wil::details::FreeProcessHeap(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &v33,
    a5,
    v13 + 6);
  v15 = v33;
  if ( v33 )
  {
    ConversationHost = StringCchCatW((unsigned __int16 *)v33, v14, (size_t *)v36);
    v12 = ConversationHost;
    if ( ConversationHost < 0 )
    {
      v28 = 283LL;
    }
    else
    {
      v17 = *v35;
      v33 = *(wil::details **)(*a2 + 272);
      *(_OWORD *)v36 = v17;
      v30 = v36;
      ConversationHost = ((__int64 (__fastcall *)(__int64 *, wil::details *, _WORD *, __int64))v33)(a2, v15, a5, v34);
      v12 = ConversationHost;
      if ( ConversationHost < 0 )
      {
        v28 = 302LL;
      }
      else
      {
        v18 = *(_QWORD *)(a1 + 56);
        *(_QWORD *)(a1 + 56) = 0LL;
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        v19 = *(_QWORD *)(a1 + 48);
        *(_QWORD *)(a1 + 48) = 0LL;
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        ConversationHost = CoreUICallCreateConversationHost(a2, 0LL, a1 + 48, a1 + 56);
        v12 = ConversationHost;
        if ( ConversationHost >= 0 )
        {
          v20 = *a2;
          v32 = 0LL;
          v21 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v20 + 40))(a2, &v32);
          if ( v21 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x14C,
              (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
              (const char *)(unsigned int)v21,
              (int)v36);
            __debugbreak();
          }
          v22 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 80LL))(v32, a1 + 24);
          if ( v22 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x14E,
              (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
              (const char *)(unsigned int)v22,
              (int)v36);
            __debugbreak();
          }
          *(_DWORD *)(a1 + 28) = v31;
          v24 = *(_QWORD *)(a1 + 40);
          *(_QWORD *)(a1 + 40) = 0LL;
          if ( v24 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          v25 = *(Microsoft::BamoImpl::BamoImplObject **)(a1 + 64);
          v9 = 0LL;
          *(_QWORD *)(a1 + 64) = v8;
          if ( v25 )
          {
            Microsoft::BamoImpl::BamoImplObject::Release(v25);
            v8 = *(Microsoft::BamoImpl::BamoImplObject **)(a1 + 64);
          }
          *((_QWORD *)v8 + 3) = a1;
          v12 = 0;
          if ( v32 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
          goto LABEL_27;
        }
        v28 = 323LL;
      }
    }
    v29 = (unsigned int)ConversationHost;
  }
  else
  {
    v12 = -2147024882;
    v28 = 281LL;
    v29 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v28,
    (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
    (const char *)v29,
    (int)v30);
LABEL_27:
  if ( v15 )
    wil::details::FreeProcessHeap(v15, v23);
LABEL_29:
  if ( v9 )
    Microsoft::BamoImpl::BamoImplObject::Release(v9);
  return v12;
}

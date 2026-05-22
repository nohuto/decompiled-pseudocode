/*
 * XREFs of ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x180010FFC
 * Callers:
 *     ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x18001741C (-Create@InputSystemServerConnection@@SA-AV-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@.c)
 *     ??$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVMPCManagerConnection@@@Z @ 0x18003D2CC (--$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSessio.c)
 *     ??$CreateClient@VAnimationDataProviderConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVAnimationDataProviderConnection@@@Z @ 0x18009C170 (--$CreateClient@VAnimationDataProviderConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMe.c)
 *     ??$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVMPCManagerClientConnection@@@Z @ 0x1800DB264 (--$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessage.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180001E00 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?make_process_heap_string_nothrow@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG_K@Z @ 0x18001B140 (-make_process_heap_string_nothrow@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::Join(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        _WORD *a5,
        char a6)
{
  _DWORD *v9; // rax
  _DWORD *v10; // rdi
  __int64 v11; // rcx
  _WORD *v12; // rdx
  unsigned int v13; // esi
  __int64 v14; // rax
  const char *v15; // r9
  __int64 v16; // rsi
  void *v17; // rbx
  __int64 v18; // r9
  __int64 v19; // rdx
  int ConversationHost; // eax
  __int128 v21; // xmm0
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  wil::details::in1diag3 *v26; // rcx
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  volatile signed __int32 *v31; // rcx
  signed __int32 v32; // edx
  bool v33; // sf
  __int64 v34; // rdx
  HANDLE ProcessHeap; // rax
  int v36; // eax
  __int64 v38; // [rsp+60h] [rbp-89h] BYREF
  int v39; // [rsp+68h] [rbp-81h] BYREF
  _QWORD *v40; // [rsp+70h] [rbp-79h]
  LPVOID lpMem; // [rsp+78h] [rbp-71h] BYREF
  __int64 v42; // [rsp+80h] [rbp-69h] BYREF
  char *v43; // [rsp+88h] [rbp-61h]
  __int64 v44; // [rsp+90h] [rbp-59h]
  __int128 v45; // [rsp+A0h] [rbp-49h] BYREF
  _DWORD *v46; // [rsp+B0h] [rbp-39h]
  __int64 v47; // [rsp+B8h] [rbp-31h]
  int v48[4]; // [rsp+C0h] [rbp-29h] BYREF
  unsigned __int16 v49[4]; // [rsp+D0h] [rbp-19h] BYREF
  int v50; // [rsp+D8h] [rbp-11h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+4Fh]

  v47 = -2LL;
  *(_QWORD *)&v45 = a3;
  v38 = 0LL;
  v9 = operator new(0x20uLL);
  v46 = v9;
  v9[2] = 1;
  *(_QWORD *)v9 = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `Microsoft::BamoImpl::BamoImplObject'};
  v43 = (char *)(v9 + 4);
  *((_QWORD *)v9 + 2) = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `IMessageConversationHost'};
  *((_QWORD *)v9 + 3) = 0LL;
  v10 = v9;
  v40 = v9;
  *(_QWORD *)v49 = *(_QWORD *)L"_BAMO";
  v50 = *(_DWORD *)L"O";
  if ( a5 )
  {
    v11 = 0x7FFFFFFFLL;
    v12 = a5;
    v13 = 0;
    do
    {
      if ( !*v12 )
        break;
      ++v12;
      --v11;
    }
    while ( v11 );
    if ( v11 )
    {
      v14 = 0x7FFFFFFF - v11;
    }
    else
    {
      v13 = -2147024809;
      v14 = 0LL;
    }
    v44 = v14;
  }
  else
  {
    v13 = -2147024809;
    v14 = v44;
  }
  if ( (v13 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x115,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)v13);
    goto LABEL_46;
  }
  v16 = v14 + 6;
  wil::make_process_heap_string_nothrow(&lpMem, a5, v14 + 6);
  v17 = lpMem;
  if ( lpMem )
  {
    ConversationHost = StringCchCatW((unsigned __int16 *)lpMem, v16, (char *)v49);
    v13 = ConversationHost;
    if ( ConversationHost < 0 )
    {
      v19 = 283LL;
LABEL_31:
      v18 = (unsigned int)ConversationHost;
      goto LABEL_32;
    }
    v21 = *a4;
    v22 = v38;
    v38 = 0LL;
    if ( a6 )
    {
      *(_OWORD *)v48 = v21;
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      ConversationHost = (*(__int64 (__fastcall **)(__int64, void *, _WORD *, _QWORD, int *, int, int, _DWORD, char *, int *, __int64 *))(*(_QWORD *)a2 + 304LL))(
                           a2,
                           v17,
                           a5,
                           v45,
                           v48,
                           3,
                           2,
                           0,
                           v43,
                           &v39,
                           &v38);
      v13 = ConversationHost;
      if ( ConversationHost < 0 )
      {
        v19 = 302LL;
        goto LABEL_31;
      }
    }
    else
    {
      v45 = v21;
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      ConversationHost = (*(__int64 (__fastcall **)(__int64, void *, __int128 *, char *, int *, __int64 *))(*(_QWORD *)a2 + 320LL))(
                           a2,
                           v17,
                           &v45,
                           v43,
                           &v39,
                           &v38);
      v13 = ConversationHost;
      if ( ConversationHost < 0 )
      {
        v19 = 311LL;
        goto LABEL_31;
      }
    }
    v23 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 56) = 0LL;
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    v24 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 48) = 0LL;
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    ConversationHost = CoreUICallCreateConversationHost(a2, v38, a1 + 48, a1 + 56);
    v13 = ConversationHost;
    if ( ConversationHost >= 0 )
    {
      v42 = 0LL;
      v25 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 40LL))(a2, &v42);
      v26 = retaddr;
      if ( v25 < 0 )
        goto LABEL_54;
      v27 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v42 + 120LL))(v42, a1 + 24);
      if ( v27 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x14E,
          (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
          (const char *)(unsigned int)v27);
        __debugbreak();
      }
      *(_DWORD *)(a1 + 28) = v39;
      v29 = v38;
      v38 = 0LL;
      v30 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 40) = v29;
      if ( v30 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      v10 = 0LL;
      v40 = 0LL;
      v31 = *(volatile signed __int32 **)(a1 + 64);
      *(_QWORD *)(a1 + 64) = v46;
      if ( v31 )
      {
        v32 = _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF);
        v33 = v32 - 1 < 0;
        v34 = (unsigned int)(v32 - 1);
        v15 = (const char *)retaddr;
        if ( v33 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x33,
            (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
            (const char *)retaddr);
          JUMPOUT(0x180011457LL);
        }
        if ( !(_DWORD)v34 )
          (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, wil::details::in1diag3 *))(*(_QWORD *)v31 + 16LL))(
            v31,
            v34,
            v28,
            retaddr);
        v17 = lpMem;
        v10 = v40;
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 24LL) = a1;
      v13 = 0;
      if ( v42 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
      goto LABEL_44;
    }
    v19 = 323LL;
    goto LABEL_31;
  }
  v13 = -2147024882;
  v18 = 2147942414LL;
  v19 = 281LL;
LABEL_32:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
    (const char *)v18);
LABEL_44:
  if ( v17 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v17);
  }
LABEL_46:
  if ( v38 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  if ( v10 )
  {
    v36 = _InterlockedDecrement(v10 + 2);
    if ( v36 >= 0 )
    {
      if ( !v36 )
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*v40 + 16LL))(v40, *v40);
      return v13;
    }
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x33,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
      v15);
LABEL_54:
    wil::details::in1diag3::FailFast_Hr(
      v26,
      (void *)0x14C,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)(unsigned int)v25);
    __debugbreak();
  }
  return v13;
}

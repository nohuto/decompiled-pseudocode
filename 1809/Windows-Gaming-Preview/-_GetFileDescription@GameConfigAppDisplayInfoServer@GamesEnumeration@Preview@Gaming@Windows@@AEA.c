/*
 * XREFs of ?_GetFileDescription@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEBV?$ComPtr@UIStorageItemProperties@Storage@Windows@@@WRL@Microsoft@@PEAPEAUHSTRING__@@@Z @ 0x180012714
 * Callers:
 *     _lambda_931f9b9c69a2973d02abbf46bb0d2b79_::operator() @ 0x180012240 (_lambda_931f9b9c69a2973d02abbf46bb0d2b79_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000B190 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVector@PEAVGam.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180011808 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@U?$IIterable@PEAUHSTRING__@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180012C90 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_180012C90.c)
 *     ??0?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUHSTRING__@@@1234@Upermission@01234@@Z @ 0x1800141A8 (--0-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foun.c)
 *     ?InsertAtInternal@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUHSTRING__@@_N@Z @ 0x180014280 (-InsertAtInternal@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@C.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180014BEC (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAU-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collecti.c)
 *     __security_check_cookie @ 0x180042370 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042DEC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::_GetFileDescription(
        __int64 a1,
        _QWORD *a2,
        HSTRING *a3)
{
  HRESULT v5; // eax
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  volatile signed __int64 *v9; // rbx
  void *v10; // rax
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rcx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  HSTRING v19; // rcx
  __int64 v20; // rcx
  __int64 (__fastcall ***v21)(_QWORD, GUID *, _QWORD *); // rcx
  HSTRING v22; // rcx
  __int64 v23; // rcx
  __int64 (__fastcall ***v24)(_QWORD, GUID *, _QWORD *); // rcx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  __int64 v28; // r9
  __int64 v29; // rdx
  int v30; // eax
  __int64 (__fastcall ***v31)(_QWORD, GUID *, _QWORD *); // rbx
  int v32; // eax
  __int64 v33; // r9
  __int64 v34; // rdx
  HSTRING v35; // rax
  __int64 (__fastcall ***v36)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v37; // rcx
  __int64 (__fastcall ***v38)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v39; // rcx
  _QWORD *v40; // rcx
  HSTRING v42; // [rsp+20h] [rbp-60h] BYREF
  __int64 v43; // [rsp+28h] [rbp-58h] BYREF
  __int64 (__fastcall ***v44)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v45; // [rsp+38h] [rbp-48h] BYREF
  __int64 (__fastcall ***v46)(_QWORD, GUID *, _QWORD *); // [rsp+40h] [rbp-40h] BYREF
  __int64 v47; // [rsp+48h] [rbp-38h]
  __int64 v48; // [rsp+50h] [rbp-30h]
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  HSTRING string; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v48 = -2LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(L"System.FileDescription", 0x16u, &hstringHeader, &string);
  if ( v5 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
    JUMPOUT(0x180012C05LL);
  }
  v45 = 0LL;
  v44 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)*a2 + 96LL))(
         *a2,
         &v44);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x148,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v6);
LABEL_27:
    v21 = v44;
    if ( !v44 )
      goto LABEL_66;
    v44 = 0LL;
    goto LABEL_65;
  }
  v43 = 0LL;
  v8 = (**v44)(v44, &GUID_c54361b2_54cd_432b_bdbc_4b19c4b470d7, &v43);
  v7 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14B,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v8);
LABEL_25:
    v20 = v43;
    if ( v43 )
    {
      v43 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    goto LABEL_27;
  }
  v9 = 0LL;
  v47 = 0LL;
  v10 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = 0LL;
  if ( v10 )
    v12 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>(v10);
  v7 = v12 == 0 ? 0x8007000E : 0;
  v13 = v12;
  if ( v12 )
  {
    v9 = (volatile signed __int64 *)v12;
    v47 = v12;
    v13 = 0LL;
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( !v12 )
  {
    v14 = v7;
    v15 = 334LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)v14);
LABEL_23:
    if ( v9 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::IIterable<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Microsoft::WRL::FtmBase>::Release(v9);
    goto LABEL_25;
  }
  LOBYTE(v11) = 1;
  v16 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::InsertAtInternal(
          v9,
          0LL,
          string,
          v11);
  v7 = v16;
  if ( v16 < 0 )
  {
    v14 = (unsigned int)v16;
    v15 = 336LL;
    goto LABEL_16;
  }
  v42 = 0LL;
  v17 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>,Microsoft::WRL::FtmBase>::QueryInterface(
          v9,
          &GUID_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e,
          &v42);
  v7 = v17;
  if ( v17 < 0 )
  {
    v18 = 339LL;
    goto LABEL_21;
  }
  v17 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD **))(*(_QWORD *)v43 + 48LL))(v43, v42, &v45);
  v7 = v17;
  if ( v17 < 0 )
  {
    v18 = 345LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v17);
    v19 = v42;
    if ( v42 )
    {
      v42 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v19 + 16LL))(v19);
    }
    goto LABEL_23;
  }
  v22 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v22 + 16LL))(v22);
  }
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::IIterable<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Microsoft::WRL::FtmBase>::Release(v9);
  v23 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  v24 = v44;
  if ( v44 )
  {
    v44 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v24)[2])(v24);
  }
  v25 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> *> *>(v45);
  v7 = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x161,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v25);
    goto LABEL_66;
  }
  v46 = 0LL;
  v26 = (*(__int64 (__fastcall **)(_QWORD *, __int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *)))(*v45 + 64LL))(
          v45,
          &v46);
  v7 = v26;
  if ( v26 >= 0 )
  {
    v43 = 0LL;
    v27 = (*v46)[6](v46, (GUID *)string, &v43);
    v7 = v27;
    if ( v27 >= 0 )
    {
      if ( v43 )
      {
        v44 = 0LL;
        v30 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD))v43)(
                v43,
                &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62,
                &v44);
        v7 = v30;
        if ( v30 >= 0 )
        {
          v42 = 0LL;
          v31 = v44;
          WindowsDeleteString(0LL);
          v42 = 0LL;
          v32 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), HSTRING *))(*v31)[19])(
                  v31,
                  &v42);
          v7 = v32;
          if ( v32 >= 0 )
          {
            if ( v42 && !WindowsIsStringEmpty(v42) )
            {
              v35 = v42;
              v42 = 0LL;
              *a3 = v35;
              WindowsDeleteString(0LL);
              v42 = 0LL;
              v36 = v44;
              if ( v44 )
              {
                v44 = 0LL;
                ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v36)[2])(v36);
              }
              v37 = v43;
              if ( v43 )
              {
                v43 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
              }
              v7 = 0;
              goto LABEL_63;
            }
            v7 = -2147467259;
            v33 = 2147500037LL;
            v34 = 373LL;
          }
          else
          {
            v33 = (unsigned int)v32;
            v34 = 371LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v34,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
            (const char *)v33);
          WindowsDeleteString(v42);
          v42 = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x170,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
            (const char *)(unsigned int)v30);
        }
        v38 = v44;
        if ( v44 )
        {
          v44 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v38)[2])(v38);
        }
        goto LABEL_61;
      }
      v7 = -2147467259;
      v28 = 2147500037LL;
      v29 = 364LL;
    }
    else
    {
      v28 = (unsigned int)v27;
      v29 = 360LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)v28);
LABEL_61:
    v39 = v43;
    if ( v43 )
    {
      v43 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
    }
    goto LABEL_63;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x164,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
    (const char *)(unsigned int)v26);
LABEL_63:
  v21 = v46;
  if ( !v46 )
    goto LABEL_66;
  v46 = 0LL;
LABEL_65:
  ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v21)[2])(v21);
LABEL_66:
  v40 = v45;
  if ( v45 )
  {
    v45 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v40 + 16LL))(v40, *v40);
  }
  return v7;
}

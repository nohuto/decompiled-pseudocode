/*
 * XREFs of ?_InitializeCategoryFromStateRepository@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180026F74
 * Callers:
 *     ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800275B8 (-_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180011808 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025340 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x180042370 (__security_check_cookie.c)
 *     atexit @ 0x180042A64 (atexit.c)
 *     _Init_thread_footer @ 0x180042C30 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180042C98 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategoryFromStateRepository(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  HRESULT v6; // eax
  int ActivationFactory; // eax
  int v8; // eax
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  int v12; // eax
  HRESULT v13; // eax
  int v14; // eax
  int v15; // eax
  HRESULT v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  _QWORD *v31; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  char v35[8]; // [rsp+48h] [rbp-39h] BYREF
  __int64 v36; // [rsp+50h] [rbp-31h] BYREF
  __int64 v37; // [rsp+58h] [rbp-29h] BYREF
  __int64 v38; // [rsp+60h] [rbp-21h] BYREF
  __int64 v39; // [rsp+68h] [rbp-19h] BYREF
  __int64 v40; // [rsp+70h] [rbp-11h] BYREF
  __int64 v41; // [rsp+78h] [rbp-9h] BYREF
  __int64 v42; // [rsp+80h] [rbp-1h] BYREF
  HSTRING v43; // [rsp+88h] [rbp+7h] BYREF
  _QWORD *v44; // [rsp+90h] [rbp+Fh] BYREF
  int v45; // [rsp+98h] [rbp+17h] BYREF
  __int64 v46; // [rsp+A0h] [rbp+1Fh]
  HSTRING_HEADER hstringHeader; // [rsp+A8h] [rbp+27h] BYREF
  HSTRING string; // [rsp+C0h] [rbp+3Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v46 = -2LL;
  v44 = 0LL;
  v2 = *((_QWORD *)this + 32);
  if ( !v2 )
    goto LABEL_55;
  if ( (*(int (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v2 + 104LL))(v2, &v44) < 0 )
    goto LABEL_55;
  v3 = v44;
  if ( !v44 )
    goto LABEL_55;
  v43 = 0LL;
  WindowsDeleteString(0LL);
  v43 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD *, HSTRING *))(*v3 + 56LL))(v3, &v43);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v38 = 0LL;
    string = 0LL;
    v6 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.Application", 0x2Cu, &hstringHeader, &string);
    if ( v6 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
    }
    else
    {
      ActivationFactory = RoGetActivationFactory(string, &GUID_d81e96f1_a89c_417e_9335_59531026309d, &v38);
      v5 = ActivationFactory;
      if ( ActivationFactory < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x135,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)(unsigned int)ActivationFactory);
LABEL_63:
        v34 = v38;
        if ( v38 )
        {
          v38 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
        }
        goto LABEL_65;
      }
      v39 = 0LL;
      v8 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v38 + 264LL))(v38, v43, &v39);
      v5 = v8;
      if ( v8 < 0 )
      {
        v9 = (unsigned int)v8;
        v10 = 314LL;
LABEL_60:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)v9);
LABEL_61:
        v33 = v39;
        if ( v39 )
        {
          v39 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
        }
        goto LABEL_63;
      }
      if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v39 + 56LL))(v39, &v45) < 0 || !v45 )
      {
        v5 = -2147418113;
        v9 = 2147549183LL;
        v10 = 317LL;
        goto LABEL_60;
      }
      v42 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v39 + 48LL))(v39, 0LL, &v42);
      v5 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x142,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)(unsigned int)v11);
LABEL_36:
        v23 = v42;
        if ( v42 )
        {
          v42 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        }
        goto LABEL_61;
      }
      v41 = 0LL;
      v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v42 + 96LL))(v42, &v41);
      v5 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x145,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)(unsigned int)v12);
LABEL_34:
        v22 = v41;
        if ( v41 )
        {
          v41 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        }
        goto LABEL_36;
      }
      v37 = 0LL;
      string = 0LL;
      v13 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.User", 0x25u, &hstringHeader, &string);
      if ( v13 >= 0 )
      {
        v14 = RoGetActivationFactory(string, &GUID_b07904dd_31f6_452c_a738_fa5a2fda337b, &v37);
        v5 = v14;
        if ( v14 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x14E,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v14);
LABEL_32:
          v21 = v37;
          if ( v37 )
          {
            v37 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          }
          goto LABEL_34;
        }
        v40 = 0LL;
        v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v37 + 112LL))(v37, &v40);
        v5 = v15;
        if ( v15 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x151,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v15);
LABEL_30:
          v20 = v40;
          if ( v40 )
          {
            v40 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
          }
          goto LABEL_32;
        }
        v36 = 0LL;
        string = 0LL;
        v16 = WindowsCreateStringReference(
                L"Windows.Internal.StateRepository.PackagePolicy",
                0x2Eu,
                &hstringHeader,
                &string);
        if ( v16 >= 0 )
        {
          v17 = RoGetActivationFactory(string, &GUID_f7a88ec3_6f33_46bf_83b8_78aaf94ac396, &v36);
          v5 = v17;
          if ( v17 < 0 )
          {
            v18 = 342LL;
            goto LABEL_28;
          }
          if ( dword_18005CF30 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                             + (unsigned int)tls_index)
                                           + 4LL) )
          {
            Init_thread_header(&dword_18005CF30);
            if ( dword_18005CF30 == -1 )
            {
              Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                (__int64)&unk_18005CF38,
                (const WCHAR **)&off_18004BEF8);
              atexit(Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategoryFromStateRepository_::_5_::_dynamic_atexit_destructor_for__appCategoryString__);
              Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                (__int64)&unk_18005CF58,
                (const WCHAR **)off_18004BEF0);
              atexit(Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategoryFromStateRepository_::_5_::_dynamic_atexit_destructor_for__gameString__);
              Init_thread_footer(&dword_18005CF30);
            }
          }
          v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, char *))(*(_QWORD *)v36 + 264LL))(
                  v36,
                  v40,
                  v41,
                  qword_18005CF50,
                  *(_QWORD *)&qword_18005CF70,
                  v35);
          v5 = v17;
          if ( v17 < 0 )
          {
            v18 = 353LL;
LABEL_28:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v18,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
              (const char *)(unsigned int)v17);
            v19 = v36;
            if ( v36 )
            {
              v36 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
            }
            goto LABEL_30;
          }
          if ( v35[0] )
            *((_DWORD *)this + 36) = 1;
          v24 = v36;
          if ( v36 )
          {
            v36 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          }
          v25 = v40;
          if ( v40 )
          {
            v40 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
          }
          v26 = v37;
          if ( v37 )
          {
            v37 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
          }
          v27 = v41;
          if ( v41 )
          {
            v41 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
          }
          v28 = v42;
          if ( v42 )
          {
            v42 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
          }
          v29 = v39;
          if ( v39 )
          {
            v39 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
          }
          v30 = v38;
          if ( v38 )
          {
            v38 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
          }
          WindowsDeleteString(v43);
LABEL_55:
          v5 = 0;
          goto LABEL_56;
        }
LABEL_70:
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16);
        JUMPOUT(0x1800275AFLL);
      }
    }
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
    goto LABEL_70;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12C,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)(unsigned int)v4);
LABEL_65:
  WindowsDeleteString(v43);
LABEL_56:
  v31 = v44;
  if ( v44 )
  {
    v44 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v31 + 16LL))(v31, *v31);
  }
  return v5;
}

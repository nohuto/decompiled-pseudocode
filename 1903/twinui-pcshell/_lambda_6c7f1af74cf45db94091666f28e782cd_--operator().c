/*
 * XREFs of _lambda_6c7f1af74cf45db94091666f28e782cd_::operator() @ 0x18005B560
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_22e17ec653bc6962fee654e3b6f7bce0___::Run @ 0x18005B4E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_22e17ec653bc6962fee654e3b6f7bce0___--Run.c)
 * Callees:
 *     ?IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEAPEAG@Z @ 0x18002B8D4 (-IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImm.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?GetAppChromeData@@YA?AV?$optional@UAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@std@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18008D364 (-GetAppChromeData@@YA-AV-$optional@UAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@std@@PEAUIViewWrapper.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0APPLICATION_FRAME_CHROME_CHANGE_DATA@@QEAA@AEBU0@@Z @ 0x18010D5E8 (--0APPLICATION_FRAME_CHROME_CHANGE_DATA@@QEAA@AEBU0@@Z.c)
 *     ?value@?$optional@UAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@std@@QEGAAAEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@XZ @ 0x18012087C (-value@-$optional@UAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@std@@QEGAAAEAUAPPLICATION_FRAME_CHROME.c)
 *     ?value@?$optional@UAppTitlebarConfiguration@@@std@@QEGAAAEAUAppTitlebarConfiguration@@XZ @ 0x1801208C8 (-value@-$optional@UAppTitlebarConfiguration@@@std@@QEGAAAEAUAppTitlebarConfiguration@@XZ.c)
 */

// Hidden C++ exception states: #wind=15
void __fastcall lambda_6c7f1af74cf45db94091666f28e782cd_::operator()(struct IImmersiveApplication **a1)
{
  struct IImmersiveApplicationManagerSafeForSyncCallouts *v2; // rdx
  unsigned __int64 v3; // rdi
  int NormalDisplayNameWithTitleSafe; // eax
  PVOID Reserved1; // rsi
  char v6; // bl
  __int64 v7; // r8
  HSTRING_HEADER *v8; // rcx
  RTL_SRWLOCK *v9; // rbx
  __int64 v10; // rsi
  int (__fastcall *v11)(__int64, GUID *, _QWORD *); // r15
  __int64 v12; // rcx
  __int64 v13; // rsi
  int (__fastcall *v14)(__int64, HSTRING, HSTRING_HEADER **); // r15
  HRESULT v15; // eax
  char v16; // al
  __int64 v17; // rcx
  struct IImmersiveApplication *v18; // rsi
  __int64 (__fastcall *v19)(struct IImmersiveApplication *, __int64); // rdi
  __int64 v20; // rax
  int v21; // eax
  struct IImmersiveApplication *v22; // rsi
  __int64 (__fastcall *v23)(struct IImmersiveApplication *, APPLICATION_FRAME_CHROME_CHANGE_DATA *); // rdi
  const struct APPLICATION_FRAME_CHROME_CHANGE_DATA *v24; // rax
  APPLICATION_FRAME_CHROME_CHANGE_DATA *v25; // rax
  int v26; // eax
  int v27; // [rsp+28h] [rbp-69h] BYREF
  HSTRING_HEADER *p_pv; // [rsp+30h] [rbp-61h] BYREF
  __int64 v29; // [rsp+38h] [rbp-59h] BYREF
  _QWORD v30[4]; // [rsp+40h] [rbp-51h] BYREF
  _BYTE v31[8]; // [rsp+60h] [rbp-31h] BYREF
  _BYTE v32[32]; // [rsp+68h] [rbp-29h] BYREF
  char v33; // [rsp+88h] [rbp-9h]
  HSTRING_HEADER pv; // [rsp+90h] [rbp-1h] BYREF
  HSTRING string; // [rsp+A8h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v30[2] = -2LL;
  v29 = 0LL;
  v3 = -1LL;
  if ( (*(int (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)*a1 + 15) + 144LL))(*((_QWORD *)*a1 + 15), &v29) >= 0 )
  {
    pv.Reserved.Reserved1 = 0LL;
    *(_QWORD *)&pv.Reserved.Reserved2[8] = -1LL;
    *(_QWORD *)&pv.Reserved.Reserved2[16] = -1LL;
    NormalDisplayNameWithTitleSafe = IImmersiveApplication_GetNormalDisplayNameWithTitleSafe(
                                       a1[1],
                                       v2,
                                       (unsigned __int16 **)&pv);
    Reserved1 = pv.Reserved.Reserved1;
    if ( NormalDisplayNameWithTitleSafe >= 0 )
      (*(void (__fastcall **)(__int64, PVOID))(*(_QWORD *)v29 + 24LL))(v29, pv.Reserved.Reserved1);
    p_pv = 0LL;
    if ( (**(int (__fastcall ***)(struct IImmersiveApplication *, GUID *, HSTRING_HEADER **))a1[1])(
           a1[1],
           &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
           &p_pv) >= 0 )
    {
      AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      v6 = (*((__int64 (__fastcall **)(HSTRING_HEADER *))p_pv->Reserved.Reserved1 + 27))(p_pv);
      ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      if ( v6 )
        v7 = 128LL;
      else
        v7 = 0LL;
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v29 + 104LL))(v29, 128LL, v7);
    }
    v8 = p_pv;
    if ( p_pv )
    {
      p_pv = 0LL;
      (*((void (__fastcall **)(HSTRING_HEADER *))v8->Reserved.Reserved1 + 2))(v8);
    }
    if ( Reserved1 )
    {
      CoTaskMemFree(Reserved1);
      pv.Reserved.Reserved1 = 0LL;
    }
    *(_OWORD *)&pv.Reserved.Reserved2[8] = 0uLL;
  }
  v30[0] = 0LL;
  v9 = CApplicationManagerUtility::g_pIAMGlobals;
  v30[3] = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v10 = **((_QWORD **)*a1 + 13);
  if ( v10 )
  {
    v11 = *(int (__fastcall **)(__int64, GUID *, _QWORD *))(*(_QWORD *)v10 + 40LL);
    v12 = v30[0];
    v30[0] = 0LL;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v11(v10, &GUID_f4a53d68_890b_4931_bdbf_71158377eece, v30) >= 0 )
    {
      v13 = v30[0];
      if ( v30[0] )
      {
        v14 = *(int (__fastcall **)(__int64, HSTRING, HSTRING_HEADER **))(*(_QWORD *)v30[0] + 408LL);
        string = 0LL;
        do
          ++v3;
        while ( aTitlebarvisibl[v3] );
        if ( v3 > 0xFFFFFFFF )
        {
          RaiseException(0x80070216, 1u, 0, 0LL);
          JUMPOUT(0x1800ED196LL);
        }
        if ( (int)v3 + 1 < (unsigned int)v3 )
        {
          RaiseException(0x80070216, 1u, 0, 0LL);
          JUMPOUT(0x1800ED093LL);
        }
        v15 = WindowsCreateStringReference(L"TitleBarVisible", v3, &pv, &string);
        if ( v15 < 0 )
        {
          RaiseException(v15, 1u, 0, 0LL);
        }
        else if ( v14(v13, string, &p_pv) < 0 )
        {
          v16 = 0;
LABEL_25:
          string = 0LL;
          if ( v16 )
          {
            LOBYTE(p_pv) = (_DWORD)p_pv == 1;
            BYTE1(p_pv) = (_BYTE)p_pv;
            LOWORD(v27) = (_WORD)p_pv;
            BYTE2(v27) = 1;
            v18 = *a1;
            v19 = *(__int64 (__fastcall **)(struct IImmersiveApplication *, __int64))(*(_QWORD *)*a1 + 176LL);
            v20 = std::optional<AppTitlebarConfiguration>::value(&v27);
            v21 = v19(v18, v20);
            if ( v21 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x637,
                (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
                (const char *)(unsigned int)v21,
                v27);
          }
          else
          {
            LOWORD(v27) = 0;
            BYTE2(v27) = 0;
          }
          GetAppChromeData((APPLICATION_FRAME_CHROME_CHANGE_DATA *)v31);
          if ( v33 )
          {
            v22 = *a1;
            v23 = *(__int64 (__fastcall **)(struct IImmersiveApplication *, APPLICATION_FRAME_CHROME_CHANGE_DATA *))(*(_QWORD *)*a1 + 160LL);
            p_pv = &pv;
            v24 = (const struct APPLICATION_FRAME_CHROME_CHANGE_DATA *)std::optional<APPLICATION_FRAME_CHROME_CHANGE_DATA>::value(v31);
            v25 = APPLICATION_FRAME_CHROME_CHANGE_DATA::APPLICATION_FRAME_CHROME_CHANGE_DATA(
                    (APPLICATION_FRAME_CHROME_CHANGE_DATA *)&pv,
                    v24);
            v26 = v23(v22, v25);
            if ( v26 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x63D,
                (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
                (const char *)(unsigned int)v26,
                v27);
          }
          if ( v33 )
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v32);
          goto LABEL_30;
        }
        v16 = 1;
        goto LABEL_25;
      }
    }
  }
LABEL_30:
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
  if ( v30[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v30[0] + 16LL))(v30[0]);
  v17 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
}

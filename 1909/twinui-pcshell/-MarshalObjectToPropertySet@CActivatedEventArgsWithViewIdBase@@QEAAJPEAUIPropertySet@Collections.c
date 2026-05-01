/*
 * XREFs of ?MarshalObjectToPropertySet@CActivatedEventArgsWithViewIdBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800618E4
 * Callers:
 *     ?MarshalObjectToPropertySet@CActivatedEventArgsWithPrelaunchAndViewIdBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180061750 (-MarshalObjectToPropertySet@CActivatedEventArgsWithPrelaunchAndViewIdBase@@QEAAJPEAUIPropertySet.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MarshalObjectToPropertySet@CActivatedEventArgsBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180061BF0 (-MarshalObjectToPropertySet@CActivatedEventArgsBase@@QEAAJPEAUIPropertySet@Collections@Foundatio.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180062354 (--$GetActivationFactory@V-$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Fo.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CActivatedEventArgsWithViewIdBase::MarshalObjectToPropertySet(
        CActivatedEventArgsWithViewIdBase *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rdx
  int v30; // [rsp+20h] [rbp-49h]
  _BYTE v31[8]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v32; // [rsp+38h] [rbp-31h] BYREF
  unsigned int v33; // [rsp+40h] [rbp-29h] BYREF
  __int64 v34; // [rsp+48h] [rbp-21h] BYREF
  __int64 v35; // [rsp+50h] [rbp-19h] BYREF
  __int64 v36; // [rsp+58h] [rbp-11h] BYREF
  __int64 v37; // [rsp+60h] [rbp-9h] BYREF
  __int64 v38; // [rsp+68h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+7h] BYREF
  __int64 v40; // [rsp+88h] [rbp+1Fh]
  __int64 v41; // [rsp+90h] [rbp+27h] BYREF
  char v42; // [rsp+98h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v4 = CActivatedEventArgsBase::MarshalObjectToPropertySet(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20E,
      (unsigned int)"onecoreuap\\shell\\lib\\activationevents\\activatedeventargsbase.cpp",
      (const char *)(unsigned int)v4,
      v30);
    return v5;
  }
  v32 = 0LL;
  v34 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
  v6 = (**(__int64 (__fastcall ***)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *))a2)(
         a2,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v32);
  v5 = v6;
  if ( v6 < 0 )
  {
    v24 = 531LL;
  }
  else
  {
    v40 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.PropertyValue",
      0x21u,
      0x20u);
    v6 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValueStatics>>(
           v40,
           &v34);
    v5 = v6;
    if ( v6 < 0 )
    {
      v24 = 532LL;
    }
    else
    {
      v33 = 0;
      v6 = (*(__int64 (__fastcall **)(char *, unsigned int *))(*((_QWORD *)this + 16) + 48LL))((char *)this + 128, &v33);
      v5 = v6;
      if ( v6 >= 0 )
      {
        v38 = 0LL;
        v7 = (*(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)this + 17) + 48LL))((char *)this + 136, &v38);
        v5 = v7;
        if ( v7 < 0 )
        {
          v25 = 538LL;
        }
        else
        {
          v7 = (*(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)this + 18) + 64LL))((char *)this + 144, &v41);
          v5 = v7;
          if ( v7 >= 0 )
          {
            v8 = v34;
            v37 = 0LL;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
            v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v8 + 80LL))(v8, v33, &v37);
            v5 = v9;
            if ( v9 < 0 )
            {
              v26 = 545LL;
            }
            else
            {
              v10 = v32;
              v11 = v37;
              v31[0] = 0;
              v40 = 0LL;
              Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                &hstringHeader,
                L"CurrentlyShownApplicationViewId",
                0x20u,
                0x1Fu);
              v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v10 + 80LL))(
                     v10,
                     v40,
                     v11,
                     v31);
              v5 = v9;
              if ( v9 >= 0 )
              {
                v12 = v38;
                if ( v38 )
                {
                  v27 = v32;
                  v40 = 0LL;
                  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                    &hstringHeader,
                    L"ViewSwitcher",
                    0xDu,
                    0xCu);
                  v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v27 + 80LL))(
                         v27,
                         v40,
                         v12,
                         v31);
                  v5 = v9;
                  if ( v9 < 0 )
                  {
                    v26 = 551LL;
                    goto LABEL_34;
                  }
                }
                v13 = v34;
                v36 = 0LL;
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
                v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v13 + 104LL))(v13, v41, &v36);
                v5 = v14;
                if ( v14 < 0 )
                {
                  v28 = 555LL;
                }
                else
                {
                  v15 = v32;
                  v16 = v36;
                  v40 = 0LL;
                  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                    &hstringHeader,
                    L"AamActivationId",
                    0x10u,
                    0xFu);
                  v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v15 + 80LL))(
                          v15,
                          v40,
                          v16,
                          v31);
                  v5 = v14;
                  if ( v14 >= 0 )
                  {
                    v17 = v34;
                    v35 = 0LL;
                    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
                    LOBYTE(v18) = v42;
                    v19 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v17 + 136LL))(
                            v17,
                            v18,
                            &v35);
                    v5 = v19;
                    if ( v19 < 0 )
                    {
                      v29 = 559LL;
                    }
                    else
                    {
                      v20 = v32;
                      v21 = v35;
                      v40 = 0LL;
                      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                        &hstringHeader,
                        L"IsApplicationMultiviewActivationPolicyEnabled",
                        0x2Eu,
                        0x2Du);
                      v19 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v20 + 80LL))(
                              v20,
                              v40,
                              v21,
                              v31);
                      v5 = v19;
                      if ( v19 >= 0 )
                      {
                        v5 = 0;
LABEL_15:
                        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
LABEL_16:
                        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
LABEL_17:
                        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
                        goto LABEL_18;
                      }
                      v29 = 560LL;
                    }
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)v29,
                      (unsigned int)"onecoreuap\\shell\\lib\\activationevents\\activatedeventargsbase.cpp",
                      (const char *)(unsigned int)v19,
                      v30);
                    goto LABEL_15;
                  }
                  v28 = 556LL;
                }
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v28,
                  (unsigned int)"onecoreuap\\shell\\lib\\activationevents\\activatedeventargsbase.cpp",
                  (const char *)(unsigned int)v14,
                  v30);
                goto LABEL_16;
              }
              v26 = 547LL;
            }
LABEL_34:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v26,
              (unsigned int)"onecoreuap\\shell\\lib\\activationevents\\activatedeventargsbase.cpp",
              (const char *)(unsigned int)v9,
              v30);
            goto LABEL_17;
          }
          v25 = 541LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v25,
          (unsigned int)"onecoreuap\\shell\\lib\\activationevents\\activatedeventargsbase.cpp",
          (const char *)(unsigned int)v7,
          v30);
LABEL_18:
        v22 = v38;
        if ( v38 )
        {
          v38 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        }
        goto LABEL_20;
      }
      v24 = 535LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v24,
    (unsigned int)"onecoreuap\\shell\\lib\\activationevents\\activatedeventargsbase.cpp",
    (const char *)(unsigned int)v6,
    v30);
LABEL_20:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
  return v5;
}

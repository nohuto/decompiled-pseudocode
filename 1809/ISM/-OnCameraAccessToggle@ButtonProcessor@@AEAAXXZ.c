/*
 * XREFs of ?OnCameraAccessToggle@ButtonProcessor@@AEAAXXZ @ 0x1800EB1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B58C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180051ED8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005AA30 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800EA394 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall ButtonProcessor::OnCameraAccessToggle(ButtonProcessor *this)
{
  DWORD CurrentProcessId; // eax
  BOOL v2; // eax
  void *v3; // rdx
  __int64 v4; // r8
  const char *v5; // r9
  HRESULT v6; // eax
  HSTRING v7; // rbx
  __int64 v8; // rcx
  int ActivationFactory; // eax
  wil::details::in1diag3 *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdi
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  int v19; // ecx
  __int64 v20; // rbx
  __int64 v21; // rcx
  int v22; // eax
  wil::details::in1diag3 *v23; // rcx
  int v24; // eax
  wil::details::in1diag3 *v25; // rcx
  int v26; // eax
  wil::details::in1diag3 *v27; // rcx
  int v28; // eax
  const char *v29; // r9
  wil::details::in1diag3 *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // [rsp+30h] [rbp-68h] BYREF
  __int64 v35; // [rsp+38h] [rbp-60h] BYREF
  __int64 v36; // [rsp+40h] [rbp-58h] BYREF
  DWORD pSessionId; // [rsp+48h] [rbp-50h] BYREF
  __int64 v38; // [rsp+50h] [rbp-48h] BYREF
  BOOL v39; // [rsp+58h] [rbp-40h] BYREF
  __int64 v40; // [rsp+60h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-30h] BYREF
  HSTRING string; // [rsp+80h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v40 = -2LL;
  v38 = 0LL;
  v36 = 0LL;
  v34 = 1;
  pSessionId = 0;
  CurrentProcessId = GetCurrentProcessId();
  v2 = ProcessIdToSessionId(CurrentProcessId, &pSessionId);
  try
  {
    if ( v2 )
    {
      string = 0LL;
      v6 = WindowsCreateStringReference(
             L"Windows.Internal.CapabilityAccess.Management.CapabilityConsentManager",
             0x45u,
             &hstringHeader,
             &string);
      if ( v6 >= 0 )
      {
        v7 = string;
        v8 = v38;
        if ( v38 )
        {
          v38 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
        ActivationFactory = RoGetActivationFactory(v7, &GUID_ef1a89c8_29b1_4ab0_94a7_851b33527a2e, &v38);
        v10 = retaddr;
        if ( ActivationFactory >= 0 )
        {
          v11 = v38;
          v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                  (__int64)&hstringHeader,
                  (const WCHAR **)&off_1801452E0);
          v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 48LL))(
                  v11,
                  *(_QWORD *)(v12 + 24),
                  &v36);
          v14 = retaddr;
          if ( v13 >= 0 )
          {
            v35 = 0LL;
            v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v36 + 48LL))(v36, &v35);
            v16 = retaddr;
            if ( v15 >= 0 )
            {
              v17 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v35 + 80LL))(v35, &v34);
              v18 = retaddr;
              if ( v17 >= 0 )
              {
                v19 = v34;
                if ( v34 != 1 )
                  goto LABEL_17;
                v20 = v36;
                v21 = v35;
                if ( v35 )
                {
                  v35 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
                }
                v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v20 + 80LL))(
                        v20,
                        pSessionId,
                        &v35);
                v23 = retaddr;
                if ( v22 >= 0 )
                {
                  v24 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v35 + 80LL))(v35, &v34);
                  v25 = retaddr;
                  if ( v24 >= 0 )
                  {
                    v34 = (v34 == 1) + 1;
                    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v36 + 136LL))(v36, pSessionId);
                    v27 = retaddr;
                    if ( v26 >= 0 )
                    {
                      v19 = v34;
LABEL_17:
                      v39 = v19 == 1;
                      v28 = RtlPublishWnfStateData(WNF_KSV_CAMERAPRIVACY, 0LL, &v39, 4LL, 0LL) | 0x10000000;
                      v30 = retaddr;
                      if ( v28 >= 0 )
                      {
                        v31 = v35;
                        if ( v35 )
                        {
                          v35 = 0LL;
                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
                        }
                        v32 = v36;
                        if ( v36 )
                        {
                          v36 = 0LL;
                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
                        }
                        v33 = v38;
                        if ( v38 )
                        {
                          v38 = 0LL;
                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
                        }
                        return;
                      }
LABEL_33:
                      wil::details::in1diag3::_Throw_Hr(
                        v30,
                        (void *)0x1787,
                        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
                        (const char *)(unsigned int)v28);
                      JUMPOUT(0x1800EB568LL);
                    }
LABEL_32:
                    wil::details::in1diag3::_Throw_Hr(
                      v27,
                      (void *)0x1FA,
                      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
                      (const char *)(unsigned int)v26);
                    goto LABEL_33;
                  }
LABEL_31:
                  wil::details::in1diag3::_Throw_Hr(
                    v25,
                    (void *)0x1EF,
                    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
                    (const char *)(unsigned int)v24);
                  goto LABEL_32;
                }
LABEL_30:
                wil::details::in1diag3::_Throw_Hr(
                  v23,
                  (void *)0x1EE,
                  (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
                  (const char *)(unsigned int)v22);
                goto LABEL_31;
              }
LABEL_29:
              wil::details::in1diag3::_Throw_Hr(
                v18,
                (void *)0x1EB,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
                (const char *)(unsigned int)v17);
              goto LABEL_30;
            }
LABEL_28:
            wil::details::in1diag3::_Throw_Hr(
              v16,
              (void *)0x1EA,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
              (const char *)(unsigned int)v15);
            goto LABEL_29;
          }
LABEL_27:
          wil::details::in1diag3::_Throw_Hr(
            v14,
            (void *)0x1E4,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
            (const char *)(unsigned int)v13);
          goto LABEL_28;
        }
LABEL_26:
        wil::details::in1diag3::_Throw_Hr(
          v10,
          (void *)0x1E0,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
          (const char *)(unsigned int)ActivationFactory);
        goto LABEL_27;
      }
    }
    else
    {
      wil::details::in1diag3::_Throw_GetLastError(retaddr, v3, v4, v5);
    }
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
    goto LABEL_26;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x202,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
      v29);
  }
}

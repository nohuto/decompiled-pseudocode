/*
 * XREFs of ?IsDolbyOEMLicensePresent@DolbyOEMLicenseCheck@@QEAA_NXZ @ 0x180016934
 * Callers:
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180016870 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800095D0 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CF0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800F7988 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$As@U?$IIterable@PEAUHSTRING__@@@Collections@Foundation@Windows@@@?$ComPtr@V?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IIterable@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180135EC4 (--$As@U-$IIterable@PEAUHSTRING__@@@Collections@Foundation@Windows@@@-$ComPtr@V-$AgileVector@PEAU.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVDeviceInformation@Enumeration@Devices@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVDeviceInformation@Enumeration@Devices@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVDeviceInformation@Enumeration@Devices@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1801366A8 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVDeviceInformation@Enumeration@Device.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVDeviceInformationCollection@Enumeration@Devices@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVDeviceInformationCollection@Enumeration@Devices@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVDeviceInformationCollection@Enumeration@Devices@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180136858 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVDeviceInformationCollection@Enumerat.c)
 *     ??0?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUHSTRING__@@@1234@Upermission@01234@@Z @ 0x1801371E0 (--0-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foun.c)
 *     ?CheckSignature@CRSABCrypt@@QEAAJPEBEK0K@Z @ 0x180138144 (-CheckSignature@CRSABCrypt@@QEAAJPEBEK0K@Z.c)
 *     ?Initialize@CRSABCrypt@@QEAAJXZ @ 0x180139EDC (-Initialize@CRSABCrypt@@QEAAJXZ.c)
 *     ?InsertAtInternal@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUHSTRING__@@_N@Z @ 0x18013A0E0 (-InsertAtInternal@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@C.c)
 *     ?InternalRelease@?$ComPtr@V?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18013A288 (-InternalRelease@-$ComPtr@V-$AgileVector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING_.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@U?$IIterable@PEAUHSTRING__@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18013B8D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IV_ea_18013B8D0.c)
 */

// Hidden C++ exception states: #wind=12
char __fastcall DolbyOEMLicenseCheck::IsDolbyOEMLicensePresent(DolbyOEMLicenseCheck *this)
{
  char v1; // r12
  void *v2; // r13
  unsigned int *v3; // r15
  __int64 v5; // rbx
  HRESULT v6; // eax
  HRESULT v7; // eax
  LSTATUS v8; // eax
  bool v9; // sf
  unsigned int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v16; // rdi
  void *v17; // rax
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rdi
  unsigned int v23; // eax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned int *v26; // rax
  unsigned int v27; // esi
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rdi
  int v35; // edi
  DWORD i; // edi
  LSTATUS v37; // eax
  bool v38; // sf
  signed int LastError; // eax
  bool v40; // sf
  unsigned int v41; // edi
  unsigned int j; // ecx
  HSTRING *v43; // r14
  unsigned int v44; // r12d
  unsigned int v45; // esi
  PCWSTR StringRawBuffer; // rax
  unsigned int v47; // edi
  HSTRING *v48; // rsi
  __int64 v49; // r14
  char v50; // [rsp+48h] [rbp-C0h]
  unsigned int v51; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v52; // [rsp+50h] [rbp-B8h] BYREF
  DWORD Type[2]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v54[2]; // [rsp+60h] [rbp-A8h] BYREF
  DWORD cbData[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v56; // [rsp+70h] [rbp-98h] BYREF
  __int64 v57; // [rsp+78h] [rbp-90h] BYREF
  __int64 v58; // [rsp+80h] [rbp-88h] BYREF
  HSTRING v59; // [rsp+88h] [rbp-80h] BYREF
  __int64 v60; // [rsp+90h] [rbp-78h] BYREF
  __int64 v61; // [rsp+98h] [rbp-70h] BYREF
  HKEY hKey; // [rsp+A0h] [rbp-68h] BYREF
  HSTRING v63; // [rsp+A8h] [rbp-60h] BYREF
  CRSABCrypt *v64; // [rsp+B0h] [rbp-58h]
  __int64 v65; // [rsp+B8h] [rbp-50h]
  __int64 v66; // [rsp+C0h] [rbp-48h]
  HSTRING_HEADER hstringHeader; // [rsp+C8h] [rbp-40h] BYREF
  HSTRING string; // [rsp+E0h] [rbp-28h] BYREF
  HSTRING_HEADER v69; // [rsp+E8h] [rbp-20h] BYREF
  HSTRING v70; // [rsp+100h] [rbp-8h] BYREF
  HSTRING_HEADER v71; // [rsp+108h] [rbp+0h] BYREF
  __int64 v72; // [rsp+120h] [rbp+18h]
  BYTE Data[512]; // [rsp+128h] [rbp+20h] BYREF
  CHAR MultiByteStr[528]; // [rsp+328h] [rbp+220h] BYREF
  WCHAR ValueName[520]; // [rsp+538h] [rbp+430h] BYREF

  v65 = -2LL;
  v64 = this;
  v58 = 0LL;
  v57 = 0LL;
  v56 = 0LL;
  v5 = 0LL;
  v61 = 0LL;
  v60 = 0LL;
  v63 = 0LL;
  string = 0LL;
  v6 = WindowsCreateStringReference(L"System.Devices.HardwareIds", 0x1Au, &hstringHeader, &string);
  if ( v6 < 0 )
  {
    RaiseException(v6, 1u, 0, 0LL);
  }
  else
  {
    v70 = 0LL;
    v7 = WindowsCreateStringReference(L"System.Devices.DeviceInstanceId", 0x1Fu, &v69, &v70);
    if ( v7 >= 0 )
    {
      v2 = 0LL;
      v3 = 0LL;
      v51 = 0;
      hKey = 0LL;
      v1 = 0;
      v50 = 0;
      v8 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Dolby\\AtmosOEM", 0, 1u, &hKey);
      v9 = v8 < 0;
      if ( v8 )
      {
        if ( v8 > 0 )
          v9 = 1;
        if ( v9 )
          goto LABEL_7;
      }
      goto LABEL_29;
    }
  }
  RaiseException(v7, 1u, 0, 0LL);
LABEL_29:
  if ( (int)CRSABCrypt::Initialize(this) >= 0 )
  {
    v72 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v71,
      L"Windows.Devices.Enumeration.DeviceInformation",
      0x2Eu,
      0x2Du);
    v16 = v72;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v58);
    if ( (int)RoGetActivationFactory(v16, &GUID_493b4f34_a84f_45fd_9167_15d1cb1bd1f9, &v58) >= 0
      && WindowsCreateString(
           L"System.Devices.InterfaceClassGuid:=\"{6994ad04-93ef-11d0-a3cc-00a0c9223196}\" AND System.Devices.InterfaceEna"
            "bled:=System.StructuredQueryType.Boolean#True",
           0x98u,
           &v63) >= 0 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::AgileVector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0>>::InternalRelease(&v61);
      v5 = 0LL;
      v61 = 0LL;
      v17 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
      v19 = 0LL;
      if ( v17 )
        v19 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>(v17);
      v20 = v19;
      if ( v19 )
      {
        v5 = v19;
        v61 = v19;
        v20 = 0LL;
      }
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      if ( v19 )
      {
        LOBYTE(v18) = 1;
        if ( (int)Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::InsertAtInternal(
                    v5,
                    0LL,
                    string,
                    v18) >= 0
          && (int)Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::AgileVector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0>>::As<Windows::Foundation::Collections::IIterable<HSTRING__ *>>(
                    &v61,
                    &v60) >= 0 )
        {
          v21 = v58;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v57);
          if ( (*(int (__fastcall **)(__int64, HSTRING, __int64, __int64, __int64 *))(*(_QWORD *)v21 + 64LL))(
                 v21,
                 v63,
                 v60,
                 1LL,
                 &v57) >= 0
            && (int)WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Devices::Enumeration::DeviceInformationCollection *>,Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection *>>(v57) >= 0 )
          {
            v22 = v57;
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v56);
            if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 64LL))(v22, &v56) >= 0
              && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v56 + 56LL))(v56, &v51) >= 0 )
            {
              v23 = v51;
              if ( v51 )
              {
                v24 = 8LL * v51;
                if ( !is_mul_ok(v51, 8uLL) )
                  v24 = -1LL;
                v2 = operator new[](v24, (const struct std::nothrow_t *)&std::nothrow);
                v25 = 4LL * v51;
                if ( !is_mul_ok(v51, 4uLL) )
                  v25 = -1LL;
                v26 = (unsigned int *)operator new[](v25, (const struct std::nothrow_t *)&std::nothrow);
                v3 = v26;
                if ( !v2 || !v26 )
                  goto LABEL_7;
                memset_0(v2, 0, 8LL * v51);
                memset_0(v3, 0, 4LL * v51);
                v23 = v51;
              }
              v27 = 0;
              if ( v23 )
              {
                v66 = 0LL;
                while ( 1 )
                {
                  *(_QWORD *)cbData = 0LL;
                  v52 = 0LL;
                  *(_QWORD *)Type = 0LL;
                  *(_QWORD *)v54 = 0LL;
                  v28 = v56;
                  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v52);
                  if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v28 + 48LL))(v28, v27, &v52) < 0 )
                    break;
                  v29 = v52;
                  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)Type);
                  if ( (*(int (__fastcall **)(__int64, DWORD *))(*(_QWORD *)v29 + 88LL))(v29, Type) < 0 )
                    break;
                  v30 = *(_QWORD *)Type;
                  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v54);
                  if ( (*(int (__fastcall **)(__int64, HSTRING, unsigned int *))(*(_QWORD *)v30 + 48LL))(v30, v70, v54) < 0 )
                    break;
                  if ( (*(int (__fastcall **)(_QWORD, HSTRING *))(**(_QWORD **)v54 + 152LL))(*(_QWORD *)v54, &v59) < 0 )
                    break;
                  v31 = v58;
                  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)cbData);
                  LODWORD(v31) = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, __int64, DWORD *))(*(_QWORD *)v31 + 56LL))(
                                   v31,
                                   v59,
                                   v60,
                                   3LL,
                                   cbData);
                  WindowsDeleteString(v59);
                  if ( (int)v31 < 0 )
                    break;
                  if ( (int)WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Devices::Enumeration::DeviceInformation *>,Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation *>>(*(_QWORD *)cbData) < 0 )
                    break;
                  v32 = *(_QWORD *)cbData;
                  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v52);
                  if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v32 + 64LL))(v32, &v52) < 0 )
                    break;
                  v33 = v52;
                  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)Type);
                  if ( (*(int (__fastcall **)(__int64, DWORD *))(*(_QWORD *)v33 + 88LL))(v33, Type) < 0 )
                    break;
                  v34 = *(_QWORD *)Type;
                  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v54);
                  if ( (*(int (__fastcall **)(__int64, HSTRING, unsigned int *))(*(_QWORD *)v34 + 48LL))(
                         v34,
                         string,
                         v54) < 0 )
                    break;
                  v35 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, __int64))(**(_QWORD **)v54 + 296LL))(
                          *(_QWORD *)v54,
                          &v3[v27],
                          (__int64)v2 + 8 * v27);
                  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v54);
                  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)Type);
                  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v52);
                  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)cbData);
                  if ( v35 < 0 )
                    goto LABEL_7;
                  if ( ++v27 >= v51 )
                    goto LABEL_66;
                }
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v54);
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)Type);
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v52);
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)cbData);
              }
              else
              {
LABEL_66:
                for ( i = 0; ; i = v52 + 1 )
                {
                  LODWORD(v52) = i;
                  memset_0(ValueName, 0, sizeof(ValueName));
                  LODWORD(v59) = 520;
                  Type[0] = 3;
                  memset_0(Data, 0, sizeof(Data));
                  cbData[0] = 512;
                  memset_0(MultiByteStr, 0, 0x208uLL);
                  v37 = RegEnumValueW(hKey, i, ValueName, (LPDWORD)&v59, 0LL, Type, Data, cbData);
                  v38 = v37 < 0;
                  if ( v37 )
                  {
                    if ( v37 > 0 )
                      v38 = 1;
                    if ( v38 )
                      break;
                  }
                  v54[0] = WideCharToMultiByte(0, 0, ValueName, (int)v59, MultiByteStr, 260, 0LL, 0LL);
                  if ( !v54[0] )
                  {
                    LastError = GetLastError();
                    v40 = LastError < 0;
                    if ( LastError > 0 )
                      v40 = 1;
                    if ( v40 )
                      break;
                  }
                  v41 = 0;
                  for ( j = v51; v41 < j; ++v41 )
                  {
                    v43 = (HSTRING *)*((_QWORD *)v2 + v41);
                    v44 = v3[v41];
                    v45 = 0;
                    if ( v44 )
                    {
                      do
                      {
                        StringRawBuffer = WindowsGetStringRawBuffer(*v43, 0LL);
                        if ( !(unsigned int)_o__wcsicmp(ValueName, StringRawBuffer)
                          && CRSABCrypt::CheckSignature(
                               v64,
                               (const unsigned __int8 *)MultiByteStr,
                               v54[0],
                               Data,
                               cbData[0]) >= 0 )
                        {
                          v1 = 1;
                          goto LABEL_7;
                        }
                        ++v45;
                        ++v43;
                      }
                      while ( v45 < v44 );
                      j = v51;
                    }
                  }
                }
                v1 = v50;
              }
            }
          }
        }
      }
    }
  }
LABEL_7:
  if ( hKey )
    RegCloseKey(hKey);
  if ( v63 )
    WindowsDeleteString(v63);
  v10 = v51;
  if ( v51 )
  {
    if ( !v2 )
      goto LABEL_14;
    if ( v3 )
    {
      v47 = 0;
      do
      {
        v48 = (HSTRING *)*((_QWORD *)v2 + v47);
        if ( v3[v47] )
        {
          v49 = v3[v47];
          do
          {
            if ( *v48 )
              WindowsDeleteString(*v48);
            ++v48;
            --v49;
          }
          while ( v49 );
          v10 = v51;
        }
        ++v47;
      }
      while ( v47 < v10 );
    }
  }
  if ( v2 )
    operator delete(v2);
LABEL_14:
  if ( v3 )
    operator delete(v3);
  v70 = 0LL;
  string = 0LL;
  v11 = v60;
  if ( v60 )
  {
    v60 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>,Microsoft::WRL::FtmBase>::Release(v5);
  v12 = v56;
  if ( v56 )
  {
    v56 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = v57;
  if ( v57 )
  {
    v57 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = v58;
  if ( v58 )
  {
    v58 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v1;
}

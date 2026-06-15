/*
 * XREFs of ?CapabilityAccessCheck@CAudioSessionManager@@CAJPEBGKPEA_N@Z @ 0x1800C7A9C
 * Callers:
 *     ?RevokeSessionsWithoutDataFlowAccess@CAudioSessionManager@@QEAAJPEBG0W4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800C9448 (-RevokeSessionsWithoutDataFlowAccess@CAudioSessionManager@@QEAAJPEBG0W4AudioServerSessionDisconn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManager::CapabilityAccessCheck(PCWSTR sourceString, unsigned int a2, bool *a3)
{
  unsigned int v6; // ebx
  HSTRING v7; // rbx
  int ActivationFactory; // eax
  __int64 v9; // r13
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  UINT32 v12; // edi
  HSTRING v13; // rsi
  UINT32 v14; // edi
  int v15; // eax
  __int64 v16; // rdx
  int v18; // [rsp+48h] [rbp-49h] BYREF
  __int64 v19; // [rsp+50h] [rbp-41h] BYREF
  __int64 v20[2]; // [rsp+58h] [rbp-39h] BYREF
  HSTRING string; // [rsp+68h] [rbp-29h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-21h] BYREF
  HSTRING v23; // [rsp+88h] [rbp-9h] BYREF
  HSTRING_HEADER v24; // [rsp+90h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v20[1] = -2LL;
  if ( a2 )
  {
    v20[0] = 0LL;
    if ( WindowsCreateStringReference(
           L"Windows.Internal.CapabilityAccess.CapabilityAccess",
           0x32u,
           &hstringHeader,
           &string) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    v7 = string;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v20);
    ActivationFactory = RoGetActivationFactory(v7, &GUID_518f3880_4e5c_4524_ab03_cd01336b2178, v20);
    v6 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        1646LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)ActivationFactory);
LABEL_24:
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v20);
      return v6;
    }
    v19 = 0LL;
    v9 = v20[0];
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v19);
    v10 = -1LL;
    v11 = -1LL;
    do
      ++v11;
    while ( aMicrophone[v11] );
    v12 = -1;
    if ( v11 > 0xFFFFFFFF )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    else
      v12 = v11;
    WindowsCreateStringReference(L"microphone", v12, &hstringHeader, &string);
    v13 = string;
    do
      ++v10;
    while ( sourceString[v10] );
    v14 = -1;
    if ( v10 > 0xFFFFFFFF )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    else
      v14 = v10;
    WindowsCreateStringReference(sourceString, v14, &v24, &v23);
    v15 = (*(__int64 (__fastcall **)(__int64, HSTRING, HSTRING, _QWORD, _DWORD, __int64 *))(*(_QWORD *)v9 + 56LL))(
            v9,
            v23,
            v13,
            a2,
            0,
            &v19);
    v6 = v15;
    if ( v15 >= 0 )
    {
      v18 = 3;
      v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 128LL))(v19, &v18);
      v6 = v15;
      if ( v15 >= 0 )
      {
        *a3 = v18 == 3;
        v6 = 0;
        goto LABEL_23;
      }
      v16 = 1657LL;
    }
    else
    {
      v16 = 1654LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v16,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v15);
LABEL_23:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v19);
    goto LABEL_24;
  }
  v6 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    1642LL,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
    (const char *)0x80070057LL);
  return v6;
}

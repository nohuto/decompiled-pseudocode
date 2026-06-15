/*
 * XREFs of ?RpcCheckDataFlowAccess@CProcess@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@K@Z @ 0x1800121A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017BC0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800342C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcess::RpcCheckDataFlowAccess(
        CProcess *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        int a3)
{
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v7; // r14
  HRESULT v8; // eax
  void *v9; // rdx
  unsigned int v10; // r8d
  int ActivationFactory; // eax
  unsigned int v12; // ebx
  __int64 v13; // r12
  unsigned __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // [rsp+20h] [rbp-60h]
  __int64 v22; // [rsp+40h] [rbp-40h] BYREF
  __int64 v23; // [rsp+48h] [rbp-38h] BYREF
  int v24; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+58h] [rbp-28h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v3 = a2;
  if ( a2 )
  {
    if ( a2 != eCapture )
      return 2147942487LL;
    v7 = 1LL;
  }
  else
  {
    *((_DWORD *)this + 58) = 0;
    v7 = 0LL;
  }
  result = *((unsigned int *)this + v7 + 58);
  if ( (_DWORD)result == -2147023728 )
  {
    v8 = CoInitializeEx(0LL, 0);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(retaddr, v9, v10, (const char *)(unsigned int)v8, v21);
      JUMPOUT(0x180012438LL);
    }
    v22 = 0LL;
    if ( WindowsCreateStringReference(
           L"Windows.Internal.CapabilityAccess.CapabilityAccess",
           0x32u,
           &hstringHeader,
           &string) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    ActivationFactory = RoGetActivationFactory(string, &GUID_518f3880_4e5c_4524_ab03_cd01336b2178, &v22);
    v12 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBBE,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)(unsigned int)ActivationFactory);
LABEL_22:
      v18 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      CoUninitialize();
      return v12;
    }
    v13 = v22;
    v14 = -1LL;
    v23 = 0LL;
    do
      ++v14;
    while ( aMicrophone[v14] );
    if ( v14 > 0xFFFFFFFF )
    {
      LODWORD(v14) = -1;
      RaiseException(0xC000000D, 1u, 0, 0LL);
    }
    WindowsCreateStringReference(L"microphone", v14, &hstringHeader, &string);
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, HSTRING, _QWORD, int, __int64 *))(*(_QWORD *)v13 + 56LL))(
            v13,
            0LL,
            string,
            *((unsigned int *)this + 44),
            a3,
            &v23);
    v12 = v15;
    if ( v15 < 0 )
    {
      v16 = 3014LL;
      goto LABEL_20;
    }
    v24 = 3;
    v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 136LL))(v23, &v24);
    v12 = v15;
    if ( v15 < 0 )
    {
      v16 = 3017LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)(unsigned int)v15);
      v17 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      goto LABEL_22;
    }
    *((_DWORD *)this + v3 + 58) = v24 != 3 ? 0x887C0076 : 0;
    v19 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v20 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    CoUninitialize();
    return *((unsigned int *)this + v7 + 58);
  }
  return result;
}

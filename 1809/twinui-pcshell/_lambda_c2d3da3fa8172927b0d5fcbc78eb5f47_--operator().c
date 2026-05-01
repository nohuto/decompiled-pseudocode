/*
 * XREFs of _lambda_c2d3da3fa8172927b0d5fcbc78eb5f47_::operator() @ 0x1801A7C94
 * Callers:
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_c2d3da3fa8172927b0d5fcbc78eb5f47____Windows::Internal::CMarshaledInterfaceResult_Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults___::Run @ 0x1801AAFF0 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_c2d3da3fa817292.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@UIGetCurrentActivityForViewOperationResultsFactory@Activities@Data@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIGetCurrentActivityForViewOperationResultsFactory@Activities@Data@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1801A63FC (--$GetActivationFactory@UIGetCurrentActivityForViewOperationResultsFactory@Activities@Data@Inter.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_c2d3da3fa8172927b0d5fcbc78eb5f47_::operator()(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rdi
  const char *v6; // r9
  __int64 v7; // rcx
  __int64 result; // rax
  _QWORD v9[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v10; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v12; // [rsp+80h] [rbp+18h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  v9[1] = -2LL;
  try
  {
    wil::GetActivationFactory<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResultsFactory>((const WCHAR *)v9);
    v10 = *(_OWORD *)(a1 + 8);
    v13 = 0LL;
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *, __int64, _QWORD, __int64 *))(*(_QWORD *)v9[0] + 48LL))(
           v9[0],
           *(_QWORD *)a1,
           &v10,
           1LL,
           0LL,
           &v13);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        352LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v4);
    v5 = v13;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a2 + 16));
    if ( v5 )
    {
      v12 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      if ( (int)RoGetAgileReference(0LL, &GUID_570e20d1_ca8a_454c_92d3_3d2a5d160fcc, v5, &v12) >= 0 )
      {
        v7 = *(_QWORD *)(a2 + 16);
        *(_QWORD *)(a2 + 16) = v12;
        v12 = v7;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v9[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9[0] + 16LL))(v9[0]);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x165,
                           (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
                           v6);
  }
  return result;
}

/*
 * XREFs of _lambda_48084b1ec6f75312154089ee08312ce7_::operator() @ 0x1801F009C
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_48084b1ec6f75312154089ee08312ce7__Windows::Internal::CMarshaledInterfaceResult_Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults___::Run @ 0x1801F5310 (Windows--Internal--COperationLambdaVar_0__lambda_48084b1ec6f75312154089ee08312ce7___ea_1801F5310.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x18006E08C (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@UIGetCurrentActivityForViewOperationResultsFactory@Activities@Data@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIGetCurrentActivityForViewOperationResultsFactory@Activities@Data@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1801EDCB4 (--$GetActivationFactory@UIGetCurrentActivityForViewOperationResultsFactory@Activities@Data@Inter.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_48084b1ec6f75312154089ee08312ce7_::operator()(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rdi
  __int64 *v7; // rax
  __int64 *v8; // rbx
  const char *v9; // r9
  __int64 result; // rax
  __int64 *v11[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v12; // [rsp+50h] [rbp-28h] BYREF
  __int64 v13; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v15; // [rsp+90h] [rbp+18h] BYREF
  __int64 *v16; // [rsp+98h] [rbp+20h] BYREF

  v13 = -2LL;
  try
  {
    wil::GetActivationFactory<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResultsFactory>((const WCHAR *)&v16);
    v15 = 0LL;
    v4 = *v16;
    v12 = *(_OWORD *)(a1 + 8);
    v15 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int128 *, __int64, _QWORD, __int64 *))(v4 + 48))(
           v16,
           *(_QWORD *)a1,
           &v12,
           1LL,
           0LL,
           &v15);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        315LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v5);
    v6 = v15;
    v11[0] = (__int64 *)(a2 + 16);
    v7 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(v11);
    v8 = v7;
    if ( v6 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v7);
      RoGetAgileReference(0LL, &GUID_570e20d1_ca8a_454c_92d3_3d2a5d160fcc, v6, v8);
    }
    else
    {
      *(_QWORD *)&v12 = 0LL;
      v11[0] = (__int64 *)*v7;
      *v7 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v11);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    }
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v16 )
      (*(void (__fastcall **)(__int64 *))(*v16 + 16))(v16);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x140,
                           (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
                           v9);
  }
  return result;
}

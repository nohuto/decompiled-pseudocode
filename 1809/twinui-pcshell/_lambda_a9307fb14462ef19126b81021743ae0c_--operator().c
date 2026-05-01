/*
 * XREFs of _lambda_a9307fb14462ef19126b81021743ae0c_::operator() @ 0x18005A070
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a9307fb14462ef19126b81021743ae0c___::Run @ 0x18005A060 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a9307fb14462ef19126b81021743ae0c___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_a9307fb14462ef19126b81021743ae0c_::operator()(_QWORD *a1)
{
  PCWSTR StringRawBuffer; // rdi
  int v3; // edx
  int v4; // edx
  int v5; // esi
  int v7; // [rsp+20h] [rbp-20h]
  __int64 v8; // [rsp+60h] [rbp+20h] BYREF
  __int64 v9; // [rsp+68h] [rbp+28h] BYREF
  PSRWLOCK SRWLock; // [rsp+70h] [rbp+30h] BYREF

  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*a1 + 280LL) + 168LL))(*(_QWORD *)(*a1 + 280LL), &v8);
  if ( v8 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*a1 + 304LL), 0LL);
    v9 = -1LL;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*a1 + 8LL) + 632LL))(*a1 + 8LL, &v9);
    v3 = *((_DWORD *)a1 + 6);
    if ( !v3 )
    {
      (*(void (__fastcall **)(__int64, PCWSTR, __int64, _QWORD, _DWORD))(*(_QWORD *)v8 + 24LL))(
        v8,
        StringRawBuffer,
        v9,
        a1[2],
        0);
      goto LABEL_5;
    }
    v4 = v3 - 1;
    if ( !v4 )
    {
      v7 = 1;
LABEL_8:
      (*(void (__fastcall **)(__int64, PCWSTR, __int64, _QWORD, int))(*(_QWORD *)v8 + 24LL))(
        v8,
        StringRawBuffer,
        v9,
        a1[2],
        v7);
      return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v8);
    }
    if ( v4 == 1 )
    {
LABEL_5:
      (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(*a1 + 280LL) + 192LL))(
        *(_QWORD *)(*a1 + 280LL),
        &SRWLock);
      v5 = ((*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 128LL))(*a1) - 4 > 1) + 2;
      if ( SRWLock )
        ReleaseSRWLockShared(SRWLock);
      v7 = v5;
      goto LABEL_8;
    }
  }
  return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v8);
}

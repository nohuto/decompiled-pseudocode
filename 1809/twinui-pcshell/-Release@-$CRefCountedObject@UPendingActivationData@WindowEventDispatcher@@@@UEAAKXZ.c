/*
 * XREFs of ?Release@?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@UEAAKXZ @ 0x180081080
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CRefCountedObject<WindowEventDispatcher::PendingActivationData>::Release(void *a1)
{
  unsigned __int32 v2; // edi
  HSTRING v4; // rcx

  v2 = _InterlockedDecrement((volatile signed __int32 *)a1 + 10);
  if ( !v2 && a1 )
  {
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)a1 + 4);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)a1 + 3);
    v4 = (HSTRING)*((_QWORD *)a1 + 2);
    if ( v4 )
      WindowsDeleteString(v4);
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  }
  return v2;
}

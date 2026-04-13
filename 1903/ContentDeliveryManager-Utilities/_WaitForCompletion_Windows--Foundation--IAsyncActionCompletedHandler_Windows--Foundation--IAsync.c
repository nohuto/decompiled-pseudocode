/*
 * XREFs of _WaitForCompletion_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Foundation::IAsyncAction__::_2_::FTMEventDelegate::_scalar_deleting_destructor_ @ 0x180016980
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall WaitForCompletion_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Foundation::IAsyncAction__::_2_::FTMEventDelegate::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)a1 = off_1800D8410;
  *((_QWORD *)a1 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  CloseHandle(*((HANDLE *)a1 + 7));
  *((_DWORD *)a1 + 11) = -1073741823;
  v4 = *((_QWORD *)a1 + 4);
  if ( v4 )
  {
    *((_QWORD *)a1 + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}

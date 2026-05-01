/*
 * XREFs of DllGetActivationFactory @ 0x180006840
 * Callers:
 *     <none>
 * Callees:
 *     _Init_thread_footer @ 0x180009314 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180009384 (_Init_thread_header.c)
 *     atexit @ 0x1800094C0 (atexit.c)
 */

__int64 __fastcall DllGetActivationFactory(HSTRING a1, _QWORD *a2)
{
  __int64 v4; // rdx

  v4 = 4LL;
  if ( __TSS0__1__Create___Module__00V__DefaultModule__00_Details_WRL_Microsoft___WRL_Microsoft__SAAEAV__DefaultModule__00_Details_34_XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 4LL) )
  {
    Init_thread_header(&__TSS0__1__Create___Module__00V__DefaultModule__00_Details_WRL_Microsoft___WRL_Microsoft__SAAEAV__DefaultModule__00_Details_34_XZ_4HA);
    if ( __TSS0__1__Create___Module__00V__DefaultModule__00_Details_WRL_Microsoft___WRL_Microsoft__SAAEAV__DefaultModule__00_Details_34_XZ_4HA == -1 )
    {
      Microsoft::WRL::Details::ModuleBase::module_ = (struct Microsoft::WRL::Details::ModuleBase *)&`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::moduleSingleton;
      `Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::moduleSingleton = (__int64)&Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::`vftable';
      atexit(`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::`dynamic atexit destructor for 'moduleSingleton'');
      Init_thread_footer(&__TSS0__1__Create___Module__00V__DefaultModule__00_Details_WRL_Microsoft___WRL_Microsoft__SAAEAV__DefaultModule__00_Details_34_XZ_4HA);
    }
  }
  return Microsoft::WRL::Details::GetActivationFactory<1>(
           (__int64)&`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::moduleSingleton,
           v4,
           a1,
           a2);
}

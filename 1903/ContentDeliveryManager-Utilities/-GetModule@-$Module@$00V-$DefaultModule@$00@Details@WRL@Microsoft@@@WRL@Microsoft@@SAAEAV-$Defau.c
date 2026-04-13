/*
 * XREFs of ?GetModule@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x180020248
 * Callers:
 *     DllCanUnloadNow @ 0x18001FF70 (DllCanUnloadNow.c)
 *     DllGetClassObject @ 0x18001FFB0 (DllGetClassObject.c)
 *     DllGetActivationFactory @ 0x180020080 (DllGetActivationFactory.c)
 * Callees:
 *     atexit @ 0x1800CAD84 (atexit.c)
 *     _Init_thread_footer @ 0x1800CAF08 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800CAF78 (_Init_thread_header.c)
 */

__int64 *Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::GetModule()
{
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
  return &`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::moduleSingleton;
}

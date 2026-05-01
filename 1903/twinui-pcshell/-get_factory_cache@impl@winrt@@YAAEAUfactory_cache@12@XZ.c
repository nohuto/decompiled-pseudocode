/*
 * XREFs of ?get_factory_cache@impl@winrt@@YAAEAUfactory_cache@12@XZ @ 0x18009718C
 * Callers:
 *     ??$call@AEAV_lambda_f42f65653c13c4ca9c04beaf1720b2f0_@@@?$factory_cache_entry@UAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@QEAA?AUAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@2@AEAV_lambda_f42f65653c13c4ca9c04beaf1720b2f0_@@@Z @ 0x1800941AC (--$call@AEAV_lambda_f42f65653c13c4ca9c04beaf1720b2f0_@@@-$factory_cache_entry@UAppInstallManager.c)
 * Callees:
 *     _Init_thread_footer @ 0x180086D88 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180086DF0 (_Init_thread_header.c)
 *     InitializeSListHead_0 @ 0x180088022 (InitializeSListHead_0.c)
 */

union _SLIST_HEADER *__fastcall winrt::impl::get_factory_cache(winrt::impl *this)
{
  if ( __TSS0__1__get_factory_cache_impl_winrt__YAAEAUfactory_cache_23_XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                                            + (unsigned int)tls_index)
                                                                                          + 4LL) )
  {
    Init_thread_header(&__TSS0__1__get_factory_cache_impl_winrt__YAAEAUfactory_cache_23_XZ_4HA);
    if ( __TSS0__1__get_factory_cache_impl_winrt__YAAEAUfactory_cache_23_XZ_4HA == -1 )
    {
      InitializeSListHead_0(&`winrt::impl::get_factory_cache'::`2'::cache);
      Init_thread_footer(&__TSS0__1__get_factory_cache_impl_winrt__YAAEAUfactory_cache_23_XZ_4HA);
    }
  }
  return &`winrt::impl::get_factory_cache'::`2'::cache;
}

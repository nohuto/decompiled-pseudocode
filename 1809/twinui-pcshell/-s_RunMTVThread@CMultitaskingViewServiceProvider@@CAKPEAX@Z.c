/*
 * XREFs of ?s_RunMTVThread@CMultitaskingViewServiceProvider@@CAKPEAX@Z @ 0x1802E1730
 * Callers:
 *     <none>
 * Callees:
 *     ?s_RunMessageLoop@LockScreenDirectorServiceProviderImpl@@CAXPEAX@Z @ 0x180193580 (-s_RunMessageLoop@LockScreenDirectorServiceProviderImpl@@CAXPEAX@Z.c)
 *     ??_GINIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAAPEAXI@Z @ 0x1802DEC98 (--_GINIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAAPEAXI@Z.c)
 *     ?s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z @ 0x1802E0EB0 (-s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z.c)
 */

__int64 __fastcall CMultitaskingViewServiceProvider::s_RunMTVThread(
        struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *Parameter)
{
  int MTVManager; // eax
  void *v3; // rsi
  int v4; // ebx

  MTVManager = CMultitaskingViewServiceProvider::s_CreateMTVManager(Parameter);
  v3 = (void *)*((_QWORD *)Parameter + 23);
  v4 = MTVManager;
  CMultitaskingViewServiceProvider::INIT_THREAD_DATA::`scalar deleting destructor'(Parameter);
  if ( v4 >= 0 )
    LockScreenDirectorServiceProviderImpl::s_RunMessageLoop(v3);
  return 0LL;
}

/*
 * XREFs of ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x18002CB58
 * Callers:
 *     ?SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z @ 0x180004684 (-SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z.c)
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x18002A6CC (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x18002BBC4 (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x18002CAD8 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     wistd::__function::__func__lambda_1fe009015b5481886de644cd00cd9360__void___cdecl(void)_::operator() @ 0x1800795C0 (wistd--__function--__func__lambda_1fe009015b5481886de644cd00cd9360__void___cdecl(void)_--operato.c)
 *     wistd::__function::__func__lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__void___cdecl(void)_::operator() @ 0x1800795E0 (wistd--__function--__func__lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__void___cdecl(void)_--operato.c)
 *     ?SetExclusiveView@CAnalogCompositorManager@@SAJI@Z @ 0x180079F84 (-SetExclusiveView@CAnalogCompositorManager@@SAJI@Z.c)
 * Callees:
 *     ??0CAnalogCompositorManager@@AEAA@XZ @ 0x1800412C0 (--0CAnalogCompositorManager@@AEAA@XZ.c)
 *     atexit @ 0x18004E32C (atexit.c)
 *     _Init_thread_footer @ 0x18004E35C (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18004E3CC (_Init_thread_header.c)
 */

struct CAnalogCompositorManager *CAnalogCompositorManager::GetInstance(void)
{
  CAnalogCompositorManager *v1; // rcx

  if ( dword_1800DEA10 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800DEA10);
    if ( dword_1800DEA10 == -1 )
    {
      CAnalogCompositorManager::CAnalogCompositorManager(v1);
      atexit(CAnalogCompositorManager::GetInstance_::_2_::_dynamic_atexit_destructor_for__singletonAnalogCompositorManager__);
      Init_thread_footer(&dword_1800DEA10);
    }
  }
  return (struct CAnalogCompositorManager *)&qword_1800DEB20;
}

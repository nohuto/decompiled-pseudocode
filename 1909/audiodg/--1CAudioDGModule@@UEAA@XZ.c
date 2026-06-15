/*
 * XREFs of ??1CAudioDGModule@@UEAA@XZ @ 0x140015A2C
 * Callers:
 *     _dynamic_atexit_destructor_for___AtlModule__ @ 0x14001B850 (_dynamic_atexit_destructor_for___AtlModule__.c)
 *     ??_GCAudioDGModule@@UEAAPEAXI@Z @ 0x14002A2E0 (--_GCAudioDGModule@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x140026760 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x14002A6A0 (-ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z.c)
 *     ?Term@CAtlComModule@ATL@@QEAAXXZ @ 0x14002BA80 (-Term@CAtlComModule@ATL@@QEAAXXZ.c)
 *     ?Term@CAtlModule@ATL@@QEAAXXZ @ 0x14002BAFC (-Term@CAtlModule@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CAudioDGModule::~CAudioDGModule(CAudioDGModule *this, void *a2)
{
  wil::details *v3; // rcx
  char *v4; // rcx
  wil::details *v5; // rcx
  wil::details *v6; // rcx
  ATL::CAtlComModule *v7; // rcx

  *(_QWORD *)this = &CAudioDGModule::`vftable'{for `ATL::CAtlExeModuleT<CAudioDGModule>'};
  *((_QWORD *)this + 13) = &CAudioDGModule::`vftable'{for `IAudioHealthMonitor'};
  if ( g_fEventTracingEnabled )
  {
    EtwUnregisterTraceGuids(qword_140061020);
    qword_140061020 = 0LL;
    g_hAEWMITraceHandle = 0LL;
  }
  g_SysFxUtilTlp = 0LL;
  v3 = (wil::details *)*((_QWORD *)this + 19);
  if ( v3 )
    wil::details::CloseHandle(v3, a2);
  v4 = (char *)*((_QWORD *)this + 17);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  v5 = (wil::details *)*((_QWORD *)this + 16);
  if ( v5 )
    wil::details::CloseHandle(v5, a2);
  v6 = (wil::details *)*((_QWORD *)this + 15);
  if ( v6 )
    wil::details::CloseHandle(v6, a2);
  ATL::CAtlComModule::ExecuteObjectMain(v6, 0);
  ATL::CAtlModule::Term(this);
  ATL::CAtlComModule::Term(v7);
  if ( *((_BYTE *)this + 98) )
    CoUninitialize();
  ATL::CAtlModule::Term(this);
}

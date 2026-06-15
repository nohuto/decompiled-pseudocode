/*
 * XREFs of ??1CAudioDGModule@@UEAA@XZ @ 0x14001B7D4
 * Callers:
 *     _dynamic_atexit_destructor_for___AtlModule__ @ 0x140021330 (_dynamic_atexit_destructor_for___AtlModule__.c)
 *     ??_GCAudioDGModule@@UEAAPEAXI@Z @ 0x140031890 (--_GCAudioDGModule@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x14001A3E8 (-ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x14002E520 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Term@CAtlComModule@ATL@@QEAAXXZ @ 0x140032610 (-Term@CAtlComModule@ATL@@QEAAXXZ.c)
 *     ?Term@CAtlModule@ATL@@QEAAXXZ @ 0x14003268C (-Term@CAtlModule@ATL@@QEAAXXZ.c)
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
    EtwUnregisterTraceGuids(qword_140063020);
    qword_140063020 = 0LL;
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

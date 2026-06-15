/*
 * XREFs of ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x14002995C
 * Callers:
 *     ??0CAudioDGModule@@QEAA@XZ @ 0x1400151B0 (--0CAudioDGModule@@QEAA@XZ.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140010CA8 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x1400168B6 (memset_0.c)
 *     ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x14002A770 (-ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z.c)
 */

__int64 *ATL::CAtlExeModuleT<CAudioDGModule>::CAtlExeModuleT<CAudioDGModule>()
{
  DWORD CurrentThreadId; // eax
  HRESULT v1; // eax
  ATL::CAtlComModule *v2; // rcx

  memset_0(&stru_140086F88, 0, sizeof(stru_140086F88));
  dword_140086F78 = 0;
  qword_140086F80 = 0LL;
  dword_140086F7C = 0;
  qword_140086FB0 = 0LL;
  ATL::_pAtlModule = (struct ATL::CAtlModule *)&_AtlModule;
  if ( (int)ATL::CComCriticalSection::Init(&stru_140086F88) >= 0 )
    dword_140086F78 = 56;
  else
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  ATL::CAtlModule::m_libid = LIBID_PolicyServerLib;
  CurrentThreadId = GetCurrentThreadId();
  qword_140086FC0 = 0LL;
  dword_140086FB8 = CurrentThreadId;
  dword_140086FC8 = 5000;
  dword_140086FCC = 1000;
  byte_140086FD0 = 1;
  byte_140086FD2 = 0;
  v1 = CoInitializeEx(0LL, 0);
  if ( v1 >= 0 )
  {
    byte_140086FD2 = 1;
LABEL_9:
    ATL::CAtlComModule::ExecuteObjectMain(v2, 1);
    return &_AtlModule;
  }
  if ( v1 == -2147417850 && GetModuleHandleW(L"Mscoree.dll") )
    goto LABEL_9;
  ATL::CAtlBaseModule::m_bInitFailed = 1;
  return &_AtlModule;
}

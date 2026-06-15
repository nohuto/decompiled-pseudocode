/*
 * XREFs of ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x14002988C
 * Callers:
 *     ??0CAudioDGModule@@QEAA@XZ @ 0x1400155C0 (--0CAudioDGModule@@QEAA@XZ.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140010C3C (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x140016CC6 (memset_0.c)
 *     ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x14002A6A0 (-ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z.c)
 */

__int64 *ATL::CAtlExeModuleT<CAudioDGModule>::CAtlExeModuleT<CAudioDGModule>()
{
  DWORD CurrentThreadId; // eax
  HRESULT v1; // eax
  ATL::CAtlComModule *v2; // rcx

  memset_0(&stru_140085F88, 0, sizeof(stru_140085F88));
  dword_140085F78 = 0;
  qword_140085F80 = 0LL;
  dword_140085F7C = 0;
  qword_140085FB0 = 0LL;
  ATL::_pAtlModule = (struct ATL::CAtlModule *)&_AtlModule;
  if ( (int)ATL::CComCriticalSection::Init(&stru_140085F88) >= 0 )
    dword_140085F78 = 56;
  else
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  ATL::CAtlModule::m_libid = LIBID_PolicyServerLib;
  CurrentThreadId = GetCurrentThreadId();
  qword_140085FC0 = 0LL;
  dword_140085FB8 = CurrentThreadId;
  dword_140085FC8 = 5000;
  dword_140085FCC = 1000;
  byte_140085FD0 = 1;
  byte_140085FD2 = 0;
  v1 = CoInitializeEx(0LL, 0);
  if ( v1 >= 0 )
  {
    byte_140085FD2 = 1;
LABEL_9:
    ATL::CAtlComModule::ExecuteObjectMain(v2, 1);
    return &_AtlModule;
  }
  if ( v1 == -2147417850 && GetModuleHandleW(L"Mscoree.dll") )
    goto LABEL_9;
  ATL::CAtlBaseModule::m_bInitFailed = 1;
  return &_AtlModule;
}

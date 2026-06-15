/*
 * XREFs of ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x14001A310
 * Callers:
 *     ??0CAudioDGModule@@QEAA@XZ @ 0x14001A1F0 (--0CAudioDGModule@@QEAA@XZ.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x14000456C (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x14001A3E8 (-ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z.c)
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 */

__int64 *ATL::CAtlExeModuleT<CAudioDGModule>::CAtlExeModuleT<CAudioDGModule>()
{
  DWORD CurrentThreadId; // eax
  HRESULT v1; // eax
  ATL::CAtlComModule *v2; // rcx

  memset_0(&stru_140088E38, 0, sizeof(stru_140088E38));
  dword_140088E28 = 0;
  qword_140088E30 = 0LL;
  dword_140088E2C = 0;
  qword_140088E60 = 0LL;
  ATL::_pAtlModule = (struct ATL::CAtlModule *)&_AtlModule;
  if ( (int)ATL::CComCriticalSection::Init(&stru_140088E38) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  else
    dword_140088E28 = 56;
  ATL::CAtlModule::m_libid = LIBID_PolicyServerLib;
  CurrentThreadId = GetCurrentThreadId();
  qword_140088E70 = 0LL;
  dword_140088E68 = CurrentThreadId;
  dword_140088E78 = 5000;
  dword_140088E7C = 1000;
  byte_140088E80 = 1;
  byte_140088E82 = 0;
  v1 = CoInitializeEx(0LL, 0);
  if ( v1 < 0 )
  {
    if ( v1 != -2147417850 || !GetModuleHandleW(L"Mscoree.dll") )
    {
      ATL::CAtlBaseModule::m_bInitFailed = 1;
      return &_AtlModule;
    }
  }
  else
  {
    byte_140088E82 = 1;
  }
  ATL::CAtlComModule::ExecuteObjectMain(v2, 1);
  return &_AtlModule;
}

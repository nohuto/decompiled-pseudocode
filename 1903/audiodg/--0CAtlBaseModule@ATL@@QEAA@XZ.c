/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x14001509C
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x140001200 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140010CA8 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x1400168B6 (memset_0.c)
 */

int *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  int v1; // eax
  char v2; // cl
  bool v3; // sf
  int *result; // rax

  memset_0(&stru_140087168, 0, sizeof(stru_140087168));
  qword_140087190 = 0LL;
  dword_140087198 = 0;
  dword_14008719C = 0;
  qword_140087150 = (__int64)&_ImageBase;
  hModule = &_ImageBase;
  qword_140087160 = (__int64)&GUID_ATLVer70;
  ATL::_AtlBaseModule = 96;
  byte_140087158 = 1;
  dword_14008715C = 2048;
  v1 = ATL::CComCriticalSection::Init(&stru_140087168);
  v2 = ATL::CAtlBaseModule::m_bInitFailed;
  v3 = v1 < 0;
  result = &ATL::_AtlBaseModule;
  if ( v3 )
    v2 = 1;
  ATL::CAtlBaseModule::m_bInitFailed = v2;
  return result;
}

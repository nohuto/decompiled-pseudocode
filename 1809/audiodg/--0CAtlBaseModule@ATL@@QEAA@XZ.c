/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x14001AD14
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x140001200 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x14000456C (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 */

int *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  int v1; // eax
  char v2; // cl
  bool v3; // sf
  int *result; // rax

  memset_0(&stru_140089158, 0, sizeof(stru_140089158));
  qword_140089180 = 0LL;
  dword_140089188 = 0;
  dword_14008918C = 0;
  qword_140089140 = (__int64)&_ImageBase;
  hModule = &_ImageBase;
  qword_140089150 = (__int64)&GUID_ATLVer70;
  ATL::_AtlBaseModule = 96;
  byte_140089148 = 1;
  dword_14008914C = 2048;
  v1 = ATL::CComCriticalSection::Init(&stru_140089158);
  v2 = ATL::CAtlBaseModule::m_bInitFailed;
  v3 = v1 < 0;
  result = &ATL::_AtlBaseModule;
  if ( v3 )
    v2 = 1;
  ATL::CAtlBaseModule::m_bInitFailed = v2;
  return result;
}

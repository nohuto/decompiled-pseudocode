/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x1400154AC
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x140001200 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140010C3C (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x140016CC6 (memset_0.c)
 */

int *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  int v1; // eax
  char v2; // cl
  bool v3; // sf
  int *result; // rax

  memset_0(&stru_140086168, 0, sizeof(stru_140086168));
  qword_140086190 = 0LL;
  dword_140086198 = 0;
  dword_14008619C = 0;
  qword_140086150 = (__int64)&_ImageBase;
  hModule = &_ImageBase;
  qword_140086160 = (__int64)&GUID_ATLVer70;
  ATL::_AtlBaseModule = 96;
  byte_140086158 = 1;
  dword_14008615C = 2048;
  v1 = ATL::CComCriticalSection::Init(&stru_140086168);
  v2 = ATL::CAtlBaseModule::m_bInitFailed;
  v3 = v1 < 0;
  result = &ATL::_AtlBaseModule;
  if ( v3 )
    v2 = 1;
  ATL::CAtlBaseModule::m_bInitFailed = v2;
  return result;
}

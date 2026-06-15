/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x180048E5C
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180001430 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x18002D888 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 */

int *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  int v1; // eax
  char v2; // cl
  bool v3; // sf
  int *result; // rax

  memset_0(&stru_1801B4528, 0, sizeof(stru_1801B4528));
  Block = 0LL;
  dword_1801B4558 = 0;
  dword_1801B455C = 0;
  qword_1801B4510 = (__int64)&_ImageBase;
  qword_1801B4508 = (__int64)&_ImageBase;
  qword_1801B4520 = (__int64)&GUID_ATLVer70;
  ATL::_AtlBaseModule = 96;
  byte_1801B4518 = 1;
  dword_1801B451C = 2048;
  v1 = ATL::CComCriticalSection::Init(&stru_1801B4528);
  v2 = ATL::CAtlBaseModule::m_bInitFailed;
  v3 = v1 < 0;
  result = &ATL::_AtlBaseModule;
  if ( v3 )
    v2 = 1;
  ATL::CAtlBaseModule::m_bInitFailed = v2;
  return result;
}

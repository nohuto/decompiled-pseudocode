/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x18004F5C0
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x1800014A0 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180026DD0 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 */

int *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  int v1; // eax
  char v2; // cl
  bool v3; // sf
  int *result; // rax

  memset_0(&stru_1801B95D8, 0, sizeof(stru_1801B95D8));
  Block = 0LL;
  dword_1801B9608 = 0;
  dword_1801B960C = 0;
  qword_1801B95C0 = (__int64)&_ImageBase;
  qword_1801B95B8 = (__int64)&_ImageBase;
  qword_1801B95D0 = (__int64)&GUID_ATLVer70;
  ATL::_AtlBaseModule = 96;
  byte_1801B95C8 = 1;
  dword_1801B95CC = 2048;
  v1 = ATL::CComCriticalSection::Init(&stru_1801B95D8);
  v2 = ATL::CAtlBaseModule::m_bInitFailed;
  v3 = v1 < 0;
  result = &ATL::_AtlBaseModule;
  if ( v3 )
    v2 = 1;
  ATL::CAtlBaseModule::m_bInitFailed = v2;
  return result;
}

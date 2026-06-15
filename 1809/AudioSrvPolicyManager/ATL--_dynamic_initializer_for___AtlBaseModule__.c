/*
 * XREFs of ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180001520
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x18002DB4C (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x18003769E (memset_0.c)
 */

int ATL::_dynamic_initializer_for___AtlBaseModule__()
{
  memset_0(&stru_18004FDA8, 0, sizeof(stru_18004FDA8));
  ATL::_AtlBaseModule = 96;
  Block = 0LL;
  qword_18004FDD8 = 0LL;
  qword_18004FD90 = (__int64)&_ImageBase;
  qword_18004FD88 = (__int64)&_ImageBase;
  qword_18004FDA0 = (__int64)&GUID_ATLVer70;
  byte_18004FD98 = 1;
  dword_18004FD9C = 2048;
  ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&stru_18004FDA8);
  return atexit((void (__cdecl *)())ATL::_dynamic_atexit_destructor_for___AtlBaseModule__);
}

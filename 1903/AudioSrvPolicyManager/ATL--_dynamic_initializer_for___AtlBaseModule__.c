/*
 * XREFs of ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x1800013D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x18002A5BC (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x18003508E (memset_0.c)
 */

int ATL::_dynamic_initializer_for___AtlBaseModule__()
{
  memset_0(&stru_18004DCD8, 0, sizeof(stru_18004DCD8));
  ATL::_AtlBaseModule = 96;
  Block = 0LL;
  qword_18004DD08 = 0LL;
  qword_18004DCC0 = (__int64)&_ImageBase;
  qword_18004DCB8 = (__int64)&_ImageBase;
  qword_18004DCD0 = (__int64)&GUID_ATLVer70;
  byte_18004DCC8 = 1;
  dword_18004DCCC = 2048;
  ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&stru_18004DCD8);
  return atexit((void (__cdecl *)())ATL::_dynamic_atexit_destructor_for___AtlBaseModule__);
}

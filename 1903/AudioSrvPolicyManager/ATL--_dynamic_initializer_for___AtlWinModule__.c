/*
 * XREFs of ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x180001460
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x18002A5BC (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x18003508E (memset_0.c)
 */

int ATL::_dynamic_initializer_for___AtlWinModule__()
{
  int v0; // eax
  int v1; // ecx

  memset_0(&stru_18004DD18, 0, sizeof(stru_18004DD18));
  ATL::_AtlWinModule = 72;
  qword_18004DD48 = 0LL;
  qword_18004DD50 = 0LL;
  qword_18004DD40 = 0LL;
  v0 = ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&stru_18004DD18);
  v1 = ATL::_AtlWinModule;
  if ( v0 < 0 )
    v1 = 0;
  ATL::_AtlWinModule = v1;
  return atexit((void (__cdecl *)())ATL::_dynamic_atexit_destructor_for___AtlWinModule__);
}

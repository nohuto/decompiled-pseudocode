/*
 * XREFs of ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x1800015B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x18002DB4C (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x18003769E (memset_0.c)
 */

int ATL::_dynamic_initializer_for___AtlWinModule__()
{
  int v0; // eax
  int v1; // ecx

  memset_0(&stru_18004FDE8, 0, sizeof(stru_18004FDE8));
  ATL::_AtlWinModule = 72;
  qword_18004FE18 = 0LL;
  qword_18004FE20 = 0LL;
  qword_18004FE10 = 0LL;
  v0 = ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&stru_18004FDE8);
  v1 = ATL::_AtlWinModule;
  if ( v0 < 0 )
    v1 = 0;
  ATL::_AtlWinModule = v1;
  return atexit((void (__cdecl *)())ATL::_dynamic_atexit_destructor_for___AtlWinModule__);
}

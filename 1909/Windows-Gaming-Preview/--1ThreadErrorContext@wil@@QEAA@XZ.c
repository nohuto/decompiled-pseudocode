/*
 * XREFs of ??1ThreadErrorContext@wil@@QEAA@XZ @ 0x180010F10
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_Start_::_1_::dtor$25 @ 0x18004474B (_Windows--Gaming--Preview--GamesEnumeration--FindAllOperation--_Start_--_1_--dtor$25.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ThreadErrorContext::~ThreadErrorContext(wil::ThreadErrorContext *this)
{
  if ( *(_QWORD *)this )
    *(_DWORD *)(*(_QWORD *)this + 16LL) = *((_DWORD *)this + 3);
}

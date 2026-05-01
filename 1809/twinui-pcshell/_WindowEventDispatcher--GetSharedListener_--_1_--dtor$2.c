/*
 * XREFs of _WindowEventDispatcher::GetSharedListener_::_1_::dtor$2 @ 0x1800AB940
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAA@XZ @ 0x1801384AC (--1-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall WindowEventDispatcher::GetSharedListener_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::shared_ptr<PeoplePaneViewInfo>::~shared_ptr<PeoplePaneViewInfo>(*(_QWORD *)(a2 + 104));
  }
  return result;
}

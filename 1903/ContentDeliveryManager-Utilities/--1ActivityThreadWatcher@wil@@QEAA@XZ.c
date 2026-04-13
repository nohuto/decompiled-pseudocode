/*
 * XREFs of ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x180061870
 * Callers:
 *     __lambda_b59dbdfd0007f2d89c20db91cc7697cd_::operator()_::_1_::dtor$1 @ 0x1800CFDA1 (__lambda_b59dbdfd0007f2d89c20db91cc7697cd_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180023E18 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 */

void __fastcall wil::ActivityThreadWatcher::~ActivityThreadWatcher(LPVOID *this)
{
  HANDLE ProcessHeap; // rax

  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(this + 4));
  if ( *((_BYTE *)this + 24) )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this[2]);
    *((_BYTE *)this + 24) = 0;
  }
  this[2] = 0LL;
}

/*
 * XREFs of ??0CGlobalInputManager@@IEAA@PEAVCComposition@@@Z @ 0x1800E0FEC
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800E1210 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

CGlobalInputManager *__fastcall CGlobalInputManager::CGlobalInputManager(
        CGlobalInputManager *this,
        struct CComposition *a2)
{
  CGlobalInputManager *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CGlobalInputManager::`vftable';
  result = this;
  *((_QWORD *)this + 3) = a2;
  *(_QWORD *)((char *)this + 68) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *(_QWORD *)((char *)this + 60) = 0LL;
  *((_DWORD *)this + 9) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 48) = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 52) = 0;
  *((_DWORD *)this + 56) = 0;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  CGlobalInputManager::s_pInputManager = this;
  return result;
}

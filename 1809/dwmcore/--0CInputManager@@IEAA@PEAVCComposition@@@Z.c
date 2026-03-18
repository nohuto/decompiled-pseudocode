/*
 * XREFs of ??0CInputManager@@IEAA@PEAVCComposition@@@Z @ 0x180062B58
 * Callers:
 *     ?Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800628D0 (-Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CHitTestContext@@QEAA@PEAVCComposition@@@Z @ 0x180062BBC (--0CHitTestContext@@QEAA@PEAVCComposition@@@Z.c)
 */

CInputManager *__fastcall CInputManager::CInputManager(CInputManager *this, struct CComposition *a2)
{
  CInputManager *v2; // r8
  __int64 v3; // r9
  CInputManager *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CInputManager::`vftable';
  CHitTestContext::CHitTestContext((CInputManager *)((char *)this + 24), a2);
  *((_QWORD *)v2 + 30) = v3;
  result = v2;
  *((_QWORD *)v2 + 31) = v3;
  *((_QWORD *)v2 + 32) = v3;
  *((_QWORD *)v2 + 33) = v3;
  *((_QWORD *)v2 + 34) = v3;
  *((_QWORD *)v2 + 35) = v3;
  CInputManager::s_pInputManager = v2;
  return result;
}

/*
 * XREFs of ??0CIAMGlobals@@QEAA@XZ @ 0x18012CC5C
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x180136378 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 * Callees:
 *     ??0CReportWindowVisibilityChange@@QEAA@XZ @ 0x18012CD98 (--0CReportWindowVisibilityChange@@QEAA@XZ.c)
 */

CIAMGlobals *__fastcall CIAMGlobals::CIAMGlobals(CIAMGlobals *this)
{
  __int64 v2; // rcx
  int UniqueContext; // eax
  __int64 v4; // rcx

  *(_QWORD *)this = 0LL;
  CReportWindowVisibilityChange::CReportWindowVisibilityChange((CIAMGlobals *)((char *)this + 8));
  *((_DWORD *)this + 22) = GetCurrentThreadId();
  *((_DWORD *)this + 23) = GetCurrentProcessId();
  *((_QWORD *)this + 12) = GetShellWindow();
  UniqueContext = SHTaskPoolGetUniqueContext(v2);
  *((_WORD *)this + 54) = 0;
  *((_DWORD *)this + 26) = UniqueContext;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = SHTaskPoolGetUniqueContext(v4);
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_WORD *)this + 55) = GlobalAddAtomW(L"IAMWindowPropertyIndexBehaviorFlags");
  return this;
}

/*
 * XREFs of ?CleanupInputDestHwndRefsForDesktopThreadExit@CTouchProcessor@@QEAAXXZ @ 0x1C00AD2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 */

void __fastcall CTouchProcessor::CleanupInputDestHwndRefsForDesktopThreadExit(CTouchProcessor *this)
{
  char *v1; // rdi
  char *i; // rbx
  __int64 v3; // rbp
  unsigned int j; // esi

  v1 = (char *)this + 72;
  for ( i = (char *)*((_QWORD *)this + 9); i != v1; i = *(char **)i )
  {
    v3 = *((_QWORD *)i + 13);
    for ( j = 0; j < *((_DWORD *)i + 10); ++j )
      CInputDest::SetEmpty((CInputDest *)(v3 + 224LL * j + 16));
  }
}

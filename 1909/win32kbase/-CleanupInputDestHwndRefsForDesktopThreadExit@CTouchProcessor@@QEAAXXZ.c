/*
 * XREFs of ?CleanupInputDestHwndRefsForDesktopThreadExit@CTouchProcessor@@QEAAXXZ @ 0x1C00BD610
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 */

void __fastcall CTouchProcessor::CleanupInputDestHwndRefsForDesktopThreadExit(
        CTouchProcessor *this,
        __int64 a2,
        __int64 a3)
{
  char *v3; // rdi
  char *i; // rbx
  __int64 v5; // rbp
  unsigned int j; // esi

  v3 = (char *)this + 104;
  for ( i = (char *)*((_QWORD *)this + 13); i != v3; i = *(char **)i )
  {
    v5 = *((_QWORD *)i + 16);
    for ( j = 0; j < *((_DWORD *)i + 10); ++j )
      CInputDest::SetEmpty((CInputDest *)(v5 + 168LL * j + 16), a2, a3);
  }
}

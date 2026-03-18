/*
 * XREFs of ??0CHitTestContext@@QEAA@PEAVCComposition@@@Z @ 0x180062BBC
 * Callers:
 *     ??0CInputManager@@IEAA@PEAVCComposition@@@Z @ 0x180062B58 (--0CInputManager@@IEAA@PEAVCComposition@@@Z.c)
 *     ?HitTest@CRedirectedVisualContent@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1801D9D00 (-HitTest@CRedirectedVisualContent@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

CHitTestContext *__fastcall CHitTestContext::CHitTestContext(CHitTestContext *this, struct CComposition *a2)
{
  *(_QWORD *)this = a2;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 16) = 0;
  *(_QWORD *)((char *)this + 36) = 0LL;
  *((_DWORD *)this + 3) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_WORD *)this + 92) = 0;
  return this;
}

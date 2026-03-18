/*
 * XREFs of ??0CTouchProcessor@@QEAA@XZ @ 0x1C005DE30
 * Callers:
 *     InputInitialize @ 0x1C00A8EAC (InputInitialize.c)
 *     ??0CPTPProcessor@@AEAA@XZ @ 0x1C0177B68 (--0CPTPProcessor@@AEAA@XZ.c)
 * Callees:
 *     ??0CSpatialProcessor@@QEAA@XZ @ 0x1C005DDE0 (--0CSpatialProcessor@@QEAA@XZ.c)
 *     ?Initialize@CInpLockGuard@@QEAAHXZ @ 0x1C005EAF8 (-Initialize@CInpLockGuard@@QEAAHXZ.c)
 */

CTouchProcessor *__fastcall CTouchProcessor::CTouchProcessor(CTouchProcessor *this)
{
  CSpatialProcessor::CSpatialProcessor(this);
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  *((_QWORD *)this + 14) = (char *)this + 104;
  *((_QWORD *)this + 13) = (char *)this + 104;
  *((_QWORD *)this + 16) = (char *)this + 120;
  *((_QWORD *)this + 15) = (char *)this + 120;
  *((_QWORD *)this + 18) = (char *)this + 136;
  *((_QWORD *)this + 17) = (char *)this + 136;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_WORD *)this + 76) = 2;
  CInpLockGuard::Initialize((CTouchProcessor *)((char *)this + 48));
  return this;
}

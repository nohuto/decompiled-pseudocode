/*
 * XREFs of ??0CTouchProcessor@@QEAA@XZ @ 0x1C00064AC
 * Callers:
 *     InputInitialize @ 0x1C0005874 (InputInitialize.c)
 *     ??0CPTPProcessor@@AEAA@XZ @ 0x1C014A348 (--0CPTPProcessor@@AEAA@XZ.c)
 * Callees:
 *     ??0CSpatialProcessor@@QEAA@XZ @ 0x1C00065BC (--0CSpatialProcessor@@QEAA@XZ.c)
 *     ?InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z @ 0x1C0006A44 (-InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z.c)
 *     ?Initialize@CInpLockGuard@@QEAAHXZ @ 0x1C0006B5C (-Initialize@CInpLockGuard@@QEAAHXZ.c)
 */

CTouchProcessor *__fastcall CTouchProcessor::CTouchProcessor(CTouchProcessor *this)
{
  CSpatialProcessor::CSpatialProcessor(this);
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  CBaseProcessor::InitRecorderLog(this, L"CTouchProcessor");
  *((_QWORD *)this + 10) = (char *)this + 72;
  *((_QWORD *)this + 9) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 88;
  *((_QWORD *)this + 11) = (char *)this + 88;
  *((_QWORD *)this + 14) = (char *)this + 104;
  *((_QWORD *)this + 13) = (char *)this + 104;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_WORD *)this + 60) = 2;
  CInpLockGuard::Initialize((CTouchProcessor *)((char *)this + 56));
  return this;
}

/*
 * XREFs of ??0CTouchProcessor@@QEAA@XZ @ 0x1C005CCC4
 * Callers:
 *     InputInitialize @ 0x1C0060B14 (InputInitialize.c)
 *     ??0CPTPProcessor@@AEAA@XZ @ 0x1C0179D58 (--0CPTPProcessor@@AEAA@XZ.c)
 * Callees:
 *     ?Initialize@CInpLockGuard@@QEAAHXZ @ 0x1C005B320 (-Initialize@CInpLockGuard@@QEAAHXZ.c)
 *     ??0CSpatialProcessor@@QEAA@XZ @ 0x1C005CD7C (--0CSpatialProcessor@@QEAA@XZ.c)
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

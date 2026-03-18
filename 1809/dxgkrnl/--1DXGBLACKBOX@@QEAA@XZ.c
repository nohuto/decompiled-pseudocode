/*
 * XREFs of ??1DXGBLACKBOX@@QEAA@XZ @ 0x1C025FF78
 * Callers:
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C020D74C (--1DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00103D4 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 */

void __fastcall DXGBLACKBOX::~DXGBLACKBOX(void **this)
{
  operator delete(this[6]);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGFASTMUTEX *)(this + 1));
}

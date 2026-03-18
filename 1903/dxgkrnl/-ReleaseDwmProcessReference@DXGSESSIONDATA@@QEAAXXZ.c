/*
 * XREFs of ?ReleaseDwmProcessReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C001B6CC
 * Callers:
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x1C00F5684 (--1DXGPROCESS@@MEAA@XZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGSESSIONDATA::ReleaseDwmProcessReference(DXGSESSIONDATA *this)
{
  void *v2; // rcx
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v3, (DXGSESSIONDATA *)((char *)this + 18640), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v3);
  v2 = (void *)*((_QWORD *)this + 2335);
  if ( v2 )
  {
    ObfDereferenceObject(v2);
    *((_QWORD *)this + 2335) = 0LL;
  }
  if ( v3[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v3);
}

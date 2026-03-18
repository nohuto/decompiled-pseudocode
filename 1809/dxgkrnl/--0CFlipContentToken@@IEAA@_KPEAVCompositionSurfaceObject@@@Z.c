/*
 * XREFs of ??0CFlipContentToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x1C005D960
 * Callers:
 *     ?CreateCompleted@CFlipContentToken@@SAJ_KPEAVCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1C005DA74 (-CreateCompleted@CFlipContentToken@@SAJ_KPEAVCompositionSurfaceObject@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x1C0008698 (--0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

CFlipContentToken *__fastcall CFlipContentToken::CFlipContentToken(
        CFlipContentToken *this,
        __int64 a2,
        struct CompositionSurfaceObject *a3)
{
  CToken::CToken(this, a2, a3);
  *((_DWORD *)this + 37) = 1;
  *(_QWORD *)this = &CFlipContentToken::`vftable';
  *((_QWORD *)this + 19) = 3LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_BYTE *)this + 120) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_BYTE *)this + 136) = 0;
  *((_DWORD *)this + 44) = 0;
  *(_WORD *)((char *)this + 121) = 0;
  *(_QWORD *)((char *)this + 140) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  memset((char *)this + 180, 0, 0x48uLL);
  return this;
}

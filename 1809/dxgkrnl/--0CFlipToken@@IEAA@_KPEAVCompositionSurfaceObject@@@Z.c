/*
 * XREFs of ??0CFlipToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x1C0008604
 * Callers:
 *     ?CreateCompleted@CFlipToken@@SAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C00086FC (-CreateCompleted@CFlipToken@@SAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHIS.c)
 *     ?CreateCloned@CFlipToken@@SAJ_K0PEAVCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData@@PEAPEAV1@@Z @ 0x1C00544C0 (-CreateCloned@CFlipToken@@SAJ_K0PEAVCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData@@PEA.c)
 * Callees:
 *     ??0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x1C0008698 (--0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z.c)
 */

CFlipToken *__fastcall CFlipToken::CFlipToken(
        CFlipToken *this,
        unsigned __int64 a2,
        struct CompositionSurfaceObject *a3)
{
  CFlipToken *result; // rax

  CToken::CToken(this, a2, a3);
  *((_DWORD *)this + 139) = 0x1000000;
  *((_WORD *)this + 44) = 0;
  *(_QWORD *)this = &CFlipToken::`vftable';
  result = this;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *(_QWORD *)((char *)this + 148) = 0LL;
  *(_QWORD *)((char *)this + 156) = 0LL;
  *(_QWORD *)((char *)this + 164) = 0LL;
  *(_QWORD *)((char *)this + 172) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *(_QWORD *)((char *)this + 188) = 1065353216LL;
  *((_DWORD *)this + 49) = 0;
  *((_QWORD *)this + 25) = 1065353216LL;
  *((_DWORD *)this + 52) = 0;
  return result;
}

/*
 * XREFs of ??0CLightStack@@QEAA@XZ @ 0x180025398
 * Callers:
 *     ??0COcclusionContext@@AEAA@PEAVCComposition@@@Z @ 0x1800249EC (--0COcclusionContext@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CDrawingContext@@AEAA@PEAVCComposition@@@Z @ 0x180024F88 (--0CDrawingContext@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CPreComputeContext@@IEAA@PEAVCComposition@@PEAVCVisualTree@@@Z @ 0x1800EE39C (--0CPreComputeContext@@IEAA@PEAVCComposition@@PEAVCVisualTree@@@Z.c)
 * Callees:
 *     <none>
 */

CLightStack *__fastcall CLightStack::CLightStack(CLightStack *this)
{
  *(_QWORD *)this = (char *)this + 32;
  *((_QWORD *)this + 1) = (char *)this + 32;
  *((_DWORD *)this + 4) = 4;
  *(_QWORD *)((char *)this + 20) = 4LL;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *((_QWORD *)this + 23) = (char *)this + 216;
  *((_QWORD *)this + 24) = (char *)this + 216;
  *((_DWORD *)this + 50) = 3;
  *(_QWORD *)((char *)this + 204) = 3LL;
  return this;
}

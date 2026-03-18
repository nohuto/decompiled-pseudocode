/*
 * XREFs of ??0CCompositionCubeMap@@QEAA@PEAVCComposition@@@Z @ 0x1801CE57C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x1800A560C (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 */

CCompositionCubeMap *__fastcall CCompositionCubeMap::CCompositionCubeMap(
        CCompositionCubeMap *this,
        struct CComposition *a2,
        __int64 a3,
        __int64 a4)
{
  CCompositionCubeMap *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CCompositionCubeMap::`vftable'{for `CPropertyChangeResource'};
  *((_QWORD *)this + 9) = &CCompositionCubeMap::`vftable'{for `ICompositionSurfaceInfoListener'};
  DynArrayImpl<1>::DynArrayImpl<1>((__int64)this + 80, 0LL, 0, a4, 32);
  *((_DWORD *)this + 28) = -1;
  result = this;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  return result;
}

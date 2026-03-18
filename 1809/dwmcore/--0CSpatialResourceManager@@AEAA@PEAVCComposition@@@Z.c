/*
 * XREFs of ??0CSpatialResourceManager@@AEAA@PEAVCComposition@@@Z @ 0x180061564
 * Callers:
 *     ?Create@CSpatialResourceManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180061500 (-Create@CSpatialResourceManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

CSpatialResourceManager *__fastcall CSpatialResourceManager::CSpatialResourceManager(
        CSpatialResourceManager *this,
        struct CComposition *a2)
{
  __int64 v3; // rax
  CSpatialResourceManager *result; // rax

  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = &CSpatialResourceManager::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *(_QWORD *)v3 = v3;
  *(_QWORD *)(v3 + 8) = v3;
  *(_QWORD *)(v3 + 16) = v3;
  *(_WORD *)(v3 + 24) = 257;
  *((_QWORD *)this + 7) = v3;
  result = this;
  *((_BYTE *)this + 72) = 0;
  return result;
}

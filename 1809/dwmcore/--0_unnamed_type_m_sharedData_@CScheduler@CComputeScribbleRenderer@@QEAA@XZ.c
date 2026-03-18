/*
 * XREFs of ??0_unnamed_type_m_sharedData_@CScheduler@CComputeScribbleRenderer@@QEAA@XZ @ 0x18022EB24
 * Callers:
 *     ??0CScheduler@CComputeScribbleRenderer@@AEAA@PEAUID3D12CommandQueue@@@Z @ 0x18022EB84 (--0CScheduler@CComputeScribbleRenderer@@AEAA@PEAUID3D12CommandQueue@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

CComputeScribbleRenderer::CScheduler::_unnamed_type_m_sharedData_ *__fastcall CComputeScribbleRenderer::CScheduler::_unnamed_type_m_sharedData_::_unnamed_type_m_sharedData_(
        CComputeScribbleRenderer::CScheduler::_unnamed_type_m_sharedData_ *this)
{
  _QWORD *v1; // rbx
  _OWORD *v3; // rax

  v1 = (_QWORD *)((char *)this + 24);
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v3 = (_OWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  *v1 = v3;
  *v3 = 0LL;
  *(_QWORD *)*v1 = v1;
  return this;
}

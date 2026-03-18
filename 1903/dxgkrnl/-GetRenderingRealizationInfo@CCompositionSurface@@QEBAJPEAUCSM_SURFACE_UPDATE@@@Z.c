/*
 * XREFs of ?GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0010BCC
 * Callers:
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x1C00108D0 (NtQueryCompositionSurfaceRenderingRealization.c)
 * Callees:
 *     ?GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C0010CEC (-GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1C0010E1C (-OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::GetRenderingRealizationInfo(
        CCompositionSurface *this,
        struct CSM_SURFACE_UPDATE *a2)
{
  int v4; // esi
  struct CCompositionBuffer *RenderingBuffer; // rax
  struct CCompositionBuffer *v6; // rbx
  CBufferRealization *v7; // rcx
  CBufferRealization *v9; // [rsp+38h] [rbp+10h] BYREF

  *(_DWORD *)a2 = 200;
  v4 = -1073741823;
  RenderingBuffer = CCompositionSurface::GetRenderingBuffer(this);
  v6 = RenderingBuffer;
  if ( RenderingBuffer )
  {
    v4 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *, CBufferRealization **))(*(_QWORD *)RenderingBuffer
                                                                                       + 216LL))(
           RenderingBuffer,
           &v9);
    if ( v4 >= 0 )
    {
      *(_QWORD *)((char *)a2 + 4) = *((_QWORD *)this - 2);
      *((_QWORD *)a2 + 2) = *((_QWORD *)v6 + 2);
      v7 = v9;
      *((_DWORD *)a2 + 6) = *((_DWORD *)v9 + 7);
      *((_DWORD *)a2 + 7) = *((_DWORD *)v6 + 61);
      CBufferRealization::OpenLifetimeDirtyRegion(v7, (HRGN *)a2 + 4);
      *((_DWORD *)a2 + 10) = 0;
      *(_OWORD *)((char *)a2 + 72) = *((_OWORD *)v6 + 3);
      *(_OWORD *)((char *)a2 + 88) = *((_OWORD *)v6 + 4);
      *(_OWORD *)((char *)a2 + 104) = *((_OWORD *)v6 + 5);
      *(_OWORD *)((char *)a2 + 120) = *((_OWORD *)v6 + 6);
      *(_OWORD *)((char *)a2 + 136) = *((_OWORD *)v6 + 7);
      *(_OWORD *)((char *)a2 + 152) = *((_OWORD *)v6 + 8);
      *(_OWORD *)((char *)a2 + 168) = *((_OWORD *)v6 + 9);
      *((_QWORD *)a2 + 23) = *((_QWORD *)v6 + 20);
      *((_DWORD *)a2 + 48) = (*(__int64 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v6 + 176LL))(v6);
    }
  }
  else
  {
    *((_QWORD *)a2 + 2) = 0LL;
  }
  return (unsigned int)v4;
}

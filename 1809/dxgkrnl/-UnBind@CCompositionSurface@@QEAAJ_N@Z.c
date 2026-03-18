/*
 * XREFs of ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C00073E8
 * Callers:
 *     NtUnBindCompositionSurface @ 0x1C0007260 (NtUnBindCompositionSurface.c)
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z @ 0x1C0008DB0 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z.c)
 *     NtBindCompositionSurface @ 0x1C0009760 (NtBindCompositionSurface.c)
 *     ?PairedUnBind@CCompositionSurface@@UEAAJ_N@Z @ 0x1C00554D0 (-PairedUnBind@CCompositionSurface@@UEAAJ_N@Z.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJAEBUCSM_BUFFER_INFO@@@Z @ 0x1C005C8D4 (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJAEBUCSM_BUFFER_INFO@@@Z.c)
 * Callees:
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C000973C (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x1C00173AC (-ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ.c)
 *     ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x1C001A4CC (-DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z @ 0x1C00555C0 (-FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z.c)
 */

__int64 __fastcall CCompositionSurface::UnBind(CCompositionSurface *this, __int64 a2)
{
  char v3; // bl
  __int64 v4; // rcx
  struct CCompositionBuffer *ActiveBuffer; // rax
  struct CCompositionBuffer *v6; // rbx
  CFlipExBuffer *v8; // rax

  v3 = a2;
  v4 = *((_QWORD *)this + 12);
  if ( v4 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, a2);
  if ( v3 )
  {
    ActiveBuffer = CCompositionSurface::GetActiveBuffer(this);
    v6 = ActiveBuffer;
    if ( ActiveBuffer )
    {
      if ( *((_QWORD *)this + 12)
        && (*(unsigned int (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)ActiveBuffer + 8LL))(ActiveBuffer) == 2 )
      {
        v8 = CFlipExBuffer::FromBuffer(v6);
        CFlipExBuffer::DisableCascadedSignaling(v8);
      }
      *((_BYTE *)v6 + 40) = 0;
    }
  }
  else
  {
    CCompositionSurface::ReleaseAllBuffers(this);
  }
  return 0LL;
}

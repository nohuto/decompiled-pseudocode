/*
 * XREFs of ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C0012FB4
 * Callers:
 *     NtUnBindCompositionSurface @ 0x1C00101A0 (NtUnBindCompositionSurface.c)
 *     NtBindCompositionSurface @ 0x1C0010600 (NtBindCompositionSurface.c)
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z @ 0x1C0012548 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z.c)
 *     ?PairedUnBind@CCompositionSurface@@UEAAJ_N@Z @ 0x1C005C310 (-PairedUnBind@CCompositionSurface@@UEAAJ_N@Z.c)
 *     ??1CContentResource@@UEAA@XZ @ 0x1C0063874 (--1CContentResource@@UEAA@XZ.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJAEBUCSM_BUFFER_INFO@@@Z @ 0x1C0063B8C (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJAEBUCSM_BUFFER_INFO@@@Z.c)
 * Callees:
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C0012EB0 (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x1C00137BC (-ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ.c)
 *     ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x1C001406C (-DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z @ 0x1C005C48C (-FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z.c)
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

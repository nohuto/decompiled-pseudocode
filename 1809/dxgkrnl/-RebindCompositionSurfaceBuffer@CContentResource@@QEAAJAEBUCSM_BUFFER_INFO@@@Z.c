/*
 * XREFs of ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJAEBUCSM_BUFFER_INFO@@@Z @ 0x1C005C8D4
 * Callers:
 *     ?PrepareUpdateTokensForDwm@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@AEAU_LIST_ENTRY@@@Z @ 0x1C005BECC (-PrepareUpdateTokensForDwm@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@AEAU_LIST_.c)
 * Callees:
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C00073E8 (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z @ 0x1C0008DB0 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C000ADC4 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C000B6B0 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 */

__int64 __fastcall CContentResource::RebindCompositionSurfaceBuffer(
        CContentResource *this,
        const struct CSM_BUFFER_INFO *a2)
{
  int v3; // ebx
  char *v4; // rcx
  __int64 v6; // r9
  CCompositionSurface *v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v4 = (char *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    v8 = 0LL;
    v3 = CompositionSurfaceObject::LockForWrite(v4, &v8);
    if ( v3 >= 0 )
    {
      v3 = CCompositionSurface::UnBind(v8, 0LL);
      if ( v3 >= 0 )
      {
        LOBYTE(v6) = 1;
        v3 = CCompositionSurface::Bind(v8, a2, 0, v6, (unsigned __int64 *)this + 7);
      }
    }
    if ( v8 )
      CCompositionSurface::UnlockAndRelease(v8);
  }
  return (unsigned int)v3;
}

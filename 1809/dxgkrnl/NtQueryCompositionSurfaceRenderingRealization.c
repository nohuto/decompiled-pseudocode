/*
 * XREFs of NtQueryCompositionSurfaceRenderingRealization @ 0x1C000AC00
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C000ADC4 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C000AE30 (-GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C000B938 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0015D90 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceRenderingRealization(void *a1, _OWORD *a2)
{
  struct DXGGLOBAL *Global; // rax
  char v5; // r8
  int v6; // ebx
  _OWORD *v7; // rdi
  CCompositionSurface *v9; // [rsp+28h] [rbp-100h] BYREF
  PVOID Object; // [rsp+30h] [rbp-F8h] BYREF
  _OWORD v11[13]; // [rsp+40h] [rbp-E8h] BYREF

  Object = 0LL;
  memset(v11, 0, 0xC8uLL);
  KeEnterCriticalRegion();
  Global = DXGGLOBAL::GetGlobal();
  if ( (*(unsigned int (**)(void))(*((_QWORD *)Global + 2541) + 256LL))() )
  {
    v6 = CompositionSurfaceObject::ResolveHandle(a1, 1u, v5, (struct CompositionSurfaceObject **)&Object);
    if ( v6 >= 0 )
    {
      v9 = 0LL;
      v6 = CompositionSurfaceObject::LockForRead(Object, &v9);
      if ( v6 >= 0 )
      {
        CCompositionSurface::GetRenderingRealizationInfo(v9, (struct CSM_SURFACE_UPDATE *)v11);
        CCompositionSurface::UnlockAndRelease(v9);
      }
      ObfDereferenceObject(Object);
    }
  }
  else
  {
    v6 = -1073741790;
  }
  if ( a2 )
  {
    if ( (_OWORD *)((char *)a2 + 200) < a2 || (unsigned __int64)a2 + 200 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v11[0];
    a2[1] = v11[1];
    a2[2] = v11[2];
    a2[3] = v11[3];
    a2[4] = v11[4];
    a2[5] = v11[5];
    a2[6] = v11[6];
    v7 = a2 + 8;
    *(v7 - 1) = v11[7];
    *v7 = v11[8];
    v7[1] = v11[9];
    v7[2] = v11[10];
    v7[3] = v11[11];
    *((_QWORD *)v7 + 8) = *(_QWORD *)&v11[12];
  }
  else
  {
    v6 = -1073741811;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}

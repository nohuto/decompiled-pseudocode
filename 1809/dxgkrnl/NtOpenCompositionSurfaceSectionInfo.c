/*
 * XREFs of NtOpenCompositionSurfaceSectionInfo @ 0x1C0054E30
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C000ADC4 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C000B938 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0015D90 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?OpenSectionInfo@CCompositionSurface@@QEBAJ_KAEBUCSM_SYSMEM_REALIZATION@@PEAUCSM_SYSMEM_SECTION_INFO@@@Z @ 0x1C0055690 (-OpenSectionInfo@CCompositionSurface@@QEBAJ_KAEBUCSM_SYSMEM_REALIZATION@@PEAUCSM_SYSMEM_SECTION_.c)
 */

__int64 __fastcall NtOpenCompositionSurfaceSectionInfo(
        void *a1,
        unsigned __int64 *a2,
        __int64 *a3,
        unsigned __int64 a4)
{
  int v6; // ebx
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // r8
  PVOID Object; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v13; // [rsp+30h] [rbp-48h]
  __int64 v14; // [rsp+38h] [rbp-40h] BYREF
  __int128 v15; // [rsp+40h] [rbp-38h] BYREF
  __int64 v16; // [rsp+50h] [rbp-28h]
  CCompositionSurface *v17; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v18; // [rsp+98h] [rbp+20h]

  v18 = a4;
  v6 = 0;
  Object = 0LL;
  v7 = 0LL;
  v13 = 0LL;
  v15 = 0uLL;
  v16 = 0LL;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v7 = *a2;
    v13 = *a2;
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      a3 = (__int64 *)MmUserProbeAddress;
    v14 = *a3;
  }
  else
  {
    v6 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v6 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v8);
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Global + 2541) + 256LL))(*((_QWORD *)Global + 2541)) )
    {
      v6 = CompositionSurfaceObject::ResolveHandle(a1, 1u, v10, (struct CompositionSurfaceObject **)&Object);
      if ( v6 >= 0 )
      {
        v17 = 0LL;
        v6 = CompositionSurfaceObject::LockForRead((char *)Object, &v17);
        if ( v6 >= 0 )
        {
          v6 = CCompositionSurface::OpenSectionInfo(
                 v17,
                 v7,
                 (const struct CSM_SYSMEM_REALIZATION *)&v14,
                 (struct CSM_SYSMEM_SECTION_INFO *)&v15);
          CCompositionSurface::UnlockAndRelease(v17);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      v6 = -1073741790;
    }
  }
  if ( a4 )
  {
    if ( a4 + 24 < a4 || a4 + 24 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)a4 = v15;
    *(_QWORD *)(a4 + 16) = v16;
  }
  else
  {
    v6 = -1073741811;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}

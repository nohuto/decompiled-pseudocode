/*
 * XREFs of NtOpenCompositionSurfaceDirtyRegion @ 0x1C0010DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C0011300 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C00114F8 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1C00115BC (-OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ?FindRealization@CCompositionBuffer@@QEBAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@Z @ 0x1C0011654 (-FindRealization@CCompositionBuffer@@QEBAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C00123B0 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C00172E0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

__int64 __fastcall NtOpenCompositionSurfaceDirtyRegion(void *a1, unsigned __int64 *a2, __int128 *a3, HRGN *a4)
{
  int Buffer; // ebx
  unsigned __int64 v9; // r15
  __int64 v10; // rdx
  ULONG64 v11; // rcx
  struct DXGGLOBAL *Global; // rax
  char v13; // r8
  struct DXGGLOBAL *v15; // rax
  CCompositionSurface *v16; // [rsp+28h] [rbp-90h] BYREF
  PVOID Object; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-80h]
  struct CCompositionBuffer *v19; // [rsp+40h] [rbp-78h] BYREF
  CBufferRealization *v20; // [rsp+48h] [rbp-70h] BYREF
  _OWORD v21[2]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v22; // [rsp+70h] [rbp-48h]
  __int128 v23; // [rsp+80h] [rbp-38h]
  HRGN v24; // [rsp+C8h] [rbp+10h] BYREF
  HRGN *v25; // [rsp+D8h] [rbp+20h]

  v25 = a4;
  Buffer = 0;
  Object = 0LL;
  v9 = 0LL;
  v18 = 0LL;
  memset(v21, 0, sizeof(v21));
  v24 = 0LL;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v9 = *a2;
    v18 = *a2;
    if ( a3 + 2 < a3 || (unsigned __int64)(a3 + 2) > MmUserProbeAddress )
      a3 = (__int128 *)MmUserProbeAddress;
    v22 = *a3;
    v23 = a3[1];
    v21[0] = v22;
    v21[1] = v23;
  }
  else
  {
    Buffer = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( Buffer >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v11, v10);
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Global + 38000) + 296LL))(*((_QWORD *)Global + 38000)) )
    {
      Buffer = CompositionSurfaceObject::ResolveHandle(a1, 1u, v13, (struct CompositionSurfaceObject **)&Object);
      if ( Buffer >= 0 )
      {
        v16 = 0LL;
        Buffer = CompositionSurfaceObject::LockForRead(Object, &v16);
        if ( Buffer >= 0 )
        {
          Buffer = CCompositionSurface::FindBuffer(v16, v9, &v19);
          if ( Buffer >= 0 )
          {
            Buffer = CCompositionBuffer::FindRealization(v19, (const struct CSM_REALIZATION_INFO *)v21, &v20);
            if ( Buffer >= 0 )
              Buffer = CBufferRealization::OpenLifetimeDirtyRegion(v20, &v24);
          }
          CCompositionSurface::UnlockAndRelease(v16);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      Buffer = -1073741790;
    }
  }
  if ( a4 )
  {
    v11 = (ULONG64)(a4 + 1);
    if ( a4 + 1 < a4 || v11 > MmUserProbeAddress )
    {
      v11 = MmUserProbeAddress;
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    *a4 = v24;
  }
  else
  {
    Buffer = -1073741811;
  }
  if ( Buffer < 0 && v24 )
  {
    v15 = DXGGLOBAL::GetGlobal(v11, v10);
    (*(void (__fastcall **)(HRGN))(*((_QWORD *)v15 + 38000) + 56LL))(v24);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)Buffer;
}

/*
 * XREFs of NtOpenCompositionSurfaceDirtyRegion @ 0x1C000A320
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1C0009F4C (-OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ?FindRealization@CCompositionBuffer@@QEBAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@Z @ 0x1C0009FE4 (-FindRealization@CCompositionBuffer@@QEBAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C000A2E0 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C000ADC4 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C000B938 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0015D90 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtOpenCompositionSurfaceDirtyRegion(void *a1, __int64 *a2, _OWORD *a3, HRGN *a4)
{
  int Buffer; // ebx
  __int64 v7; // rsi
  __int128 v8; // xmm1
  struct DXGGLOBAL *Global; // rax
  char v10; // r8
  struct DXGGLOBAL *v12; // rax
  CCompositionSurface *v13; // [rsp+28h] [rbp-60h] BYREF
  PVOID Object; // [rsp+30h] [rbp-58h] BYREF
  __int64 v15; // [rsp+38h] [rbp-50h]
  struct CCompositionBuffer *v16; // [rsp+40h] [rbp-48h] BYREF
  CBufferRealization *v17; // [rsp+48h] [rbp-40h] BYREF
  _OWORD v18[3]; // [rsp+50h] [rbp-38h] BYREF
  HRGN v19; // [rsp+98h] [rbp+10h] BYREF
  HRGN *v20; // [rsp+A8h] [rbp+20h]

  v20 = a4;
  Buffer = 0;
  Object = 0LL;
  v7 = 0LL;
  v15 = 0LL;
  v19 = 0LL;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v7 = *a2;
    v15 = *a2;
    if ( a3 + 2 < a3 || (unsigned __int64)(a3 + 2) > MmUserProbeAddress )
      a3 = (_OWORD *)MmUserProbeAddress;
    v8 = a3[1];
    v18[0] = *a3;
    v18[1] = v8;
  }
  else
  {
    Buffer = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( Buffer >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Global + 2541) + 256LL))(*((_QWORD *)Global + 2541)) )
    {
      Buffer = CompositionSurfaceObject::ResolveHandle(a1, 1u, v10, (struct CompositionSurfaceObject **)&Object);
      if ( Buffer >= 0 )
      {
        v13 = 0LL;
        Buffer = CompositionSurfaceObject::LockForRead(Object, &v13);
        if ( Buffer >= 0 )
        {
          Buffer = CCompositionSurface::FindBuffer(v13, v7, &v16);
          if ( Buffer >= 0 )
          {
            Buffer = CCompositionBuffer::FindRealization(v16, (const struct CSM_REALIZATION_INFO *)v18, &v17);
            if ( Buffer >= 0 )
              Buffer = CBufferRealization::OpenLifetimeDirtyRegion(v17, &v19);
          }
          CCompositionSurface::UnlockAndRelease(v13);
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
    if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a4 = v19;
  }
  else
  {
    Buffer = -1073741811;
  }
  if ( Buffer < 0 && v19 )
  {
    v12 = DXGGLOBAL::GetGlobal();
    (*(void (__fastcall **)(HRGN))(*((_QWORD *)v12 + 2541) + 48LL))(v19);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)Buffer;
}

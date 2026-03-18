/*
 * XREFs of NtSetCompositionSurfaceStatistics @ 0x1C005BF40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C0011300 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C00116B8 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C00172E0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?SetSurfaceStats@CCompositionSurface@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C005C808 (-SetSurfaceStats@CCompositionSurface@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 */

__int64 __fastcall NtSetCompositionSurfaceStatistics(void *a1, unsigned __int64 *a2, _OWORD *a3)
{
  int v6; // ebx
  unsigned __int64 v7; // r14
  __int128 v8; // xmm1
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v12; // r8
  CCompositionSurface *v13; // rdi
  _OWORD v15[5]; // [rsp+28h] [rbp-50h] BYREF
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF
  CCompositionSurface *v17; // [rsp+98h] [rbp+20h] BYREF

  v6 = 0;
  memset(v15, 0, 0x20uLL);
  v7 = 0LL;
  if ( a3 && a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v7 = *a2;
    if ( a3 + 2 < a3 || (unsigned __int64)(a3 + 2) > MmUserProbeAddress )
      a3 = (_OWORD *)MmUserProbeAddress;
    v8 = a3[1];
    v15[0] = *a3;
    v15[1] = v8;
  }
  else
  {
    v6 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v6 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v10, v9);
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Global + 38000) + 296LL))(*((_QWORD *)Global + 38000)) )
    {
      Object = 0LL;
      v6 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v12, (struct CompositionSurfaceObject **)&Object);
      if ( v6 >= 0 )
      {
        v17 = 0LL;
        v6 = CompositionSurfaceObject::LockForWrite((char *)Object, &v17);
        if ( v6 >= 0 )
        {
          v13 = v17;
          if ( *((_BYTE *)v17 + 88) )
            CCompositionSurface::SetSurfaceStats(v17, v7, (const struct DXGI_FRAME_STATISTICS *)v15);
          else
            v6 = -1073741823;
          CCompositionSurface::UnlockAndRelease(v13);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      v6 = -1073741790;
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}

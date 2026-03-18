/*
 * XREFs of NtSetCompositionSurfaceStatistics @ 0x1C0055120
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C000ADC4 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C000B6B0 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0015D90 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?SetSurfaceStats@CCompositionSurface@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C0055948 (-SetSurfaceStats@CCompositionSurface@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 */

__int64 __fastcall NtSetCompositionSurfaceStatistics(void *a1, unsigned __int64 *a2, _OWORD *a3)
{
  int v4; // ebx
  unsigned __int64 v5; // rsi
  __int128 v6; // xmm1
  __int64 v7; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  CCompositionSurface *v13; // rdi
  unsigned __int64 v15; // [rsp+20h] [rbp-48h]
  _OWORD v16[4]; // [rsp+28h] [rbp-40h] BYREF
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF
  CCompositionSurface *v18; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v5 = 0LL;
  v15 = 0LL;
  if ( a3 && a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v5 = *a2;
    v15 = *a2;
    if ( a3 + 2 < a3 || (unsigned __int64)(a3 + 2) > MmUserProbeAddress )
      a3 = (_OWORD *)MmUserProbeAddress;
    v6 = a3[1];
    v16[0] = *a3;
    v16[1] = v6;
  }
  else
  {
    v4 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v4 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v7);
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64, __int64, unsigned __int64))(*((_QWORD *)Global + 2541)
                                                                                             + 256LL))(
           *((_QWORD *)Global + 2541),
           v9,
           v10,
           v11,
           v15) )
    {
      Object = 0LL;
      v4 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v12, (struct CompositionSurfaceObject **)&Object);
      if ( v4 >= 0 )
      {
        v18 = 0LL;
        v4 = CompositionSurfaceObject::LockForWrite((char *)Object, &v18);
        if ( v4 >= 0 )
        {
          v13 = v18;
          if ( *((_BYTE *)v18 + 88) )
            CCompositionSurface::SetSurfaceStats(v18, v5, (const struct DXGI_FRAME_STATISTICS *)v16);
          else
            v4 = -1073741823;
          CCompositionSurface::UnlockAndRelease(v13);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      v4 = -1073741790;
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}

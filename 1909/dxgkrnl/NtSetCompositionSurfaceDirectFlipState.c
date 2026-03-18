/*
 * XREFs of NtSetCompositionSurfaceDirectFlipState @ 0x1C001D3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C0011300 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C00116B8 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C00123B0 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C00172E0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtSetCompositionSurfaceDirectFlipState(void *a1, __int64 *a2, int a3, int a4)
{
  int Buffer; // ebx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  PVOID Object; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+28h] [rbp-40h]
  struct CCompositionBuffer *v18; // [rsp+30h] [rbp-38h] BYREF
  CCompositionSurface *v19; // [rsp+78h] [rbp+10h] BYREF
  int v20; // [rsp+80h] [rbp+18h]
  int v21; // [rsp+88h] [rbp+20h]

  v21 = a4;
  v20 = a3;
  Buffer = 0;
  v8 = 0LL;
  v17 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v8 = *a2;
    v17 = *a2;
  }
  else
  {
    Buffer = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( Buffer >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v10, v9);
    if ( (*(unsigned int (**)(void))(*((_QWORD *)Global + 38000) + 296LL))() )
    {
      Object = 0LL;
      Buffer = CompositionSurfaceObject::ResolveHandle(a1, 2u, v12, (struct CompositionSurfaceObject **)&Object);
      if ( Buffer >= 0 )
      {
        v19 = 0LL;
        Buffer = CompositionSurfaceObject::LockForWrite((char *)Object, &v19);
        if ( Buffer >= 0 )
        {
          Buffer = CCompositionSurface::FindBuffer(v19, v8, &v18);
          if ( Buffer >= 0 )
          {
            LOBYTE(v14) = a4 != 0;
            LOBYTE(v13) = a3 != 0;
            (*(void (__fastcall **)(struct CCompositionBuffer *, __int64, __int64))(*(_QWORD *)v18 + 160LL))(
              v18,
              v13,
              v14);
          }
          CCompositionSurface::UnlockAndRelease(v19);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      Buffer = -1073741790;
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)Buffer;
}

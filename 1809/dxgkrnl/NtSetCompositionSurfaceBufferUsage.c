/*
 * XREFs of NtSetCompositionSurfaceBufferUsage @ 0x1C0001370
 * Callers:
 *     <none>
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C000A2E0 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C000ADC4 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C000B6B0 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0015D90 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtSetCompositionSurfaceBufferUsage(void *a1, unsigned __int64 *a2, unsigned int a3, int a4)
{
  int v7; // ebx
  unsigned __int64 v8; // rdi
  struct DXGGLOBAL *Global; // rax
  char v10; // r8
  struct CCompositionBuffer *v11; // rax
  PVOID Object; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-40h]
  struct CCompositionBuffer *v15; // [rsp+30h] [rbp-38h] BYREF
  CCompositionSurface *v16; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v17; // [rsp+80h] [rbp+18h]
  int v18; // [rsp+88h] [rbp+20h]

  v18 = a4;
  v17 = a3;
  v7 = 0;
  v8 = 0LL;
  v14 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v8 = *a2;
    v14 = *a2;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 >= 0 && a3 > 2 )
    v7 = -1073741811;
  KeEnterCriticalRegion();
  if ( v7 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    if ( (*(unsigned int (**)(void))(*((_QWORD *)Global + 2541) + 256LL))() )
    {
      Object = 0LL;
      v7 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v10, (struct CompositionSurfaceObject **)&Object);
      if ( v7 >= 0 )
      {
        v16 = 0LL;
        v7 = CompositionSurfaceObject::LockForWrite(Object, &v16);
        if ( v7 >= 0 )
        {
          if ( (int)CCompositionSurface::FindBuffer(v16, v8, &v15) >= 0 )
          {
            v11 = v15;
            *((_DWORD *)v15 + 43) = a3;
            *((_DWORD *)v11 + 44) = a4;
          }
          CCompositionSurface::UnlockAndRelease(v16);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      v7 = -1073741790;
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}

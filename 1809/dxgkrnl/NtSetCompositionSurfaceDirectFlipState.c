/*
 * XREFs of NtSetCompositionSurfaceDirectFlipState @ 0x1C001D950
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

__int64 __fastcall NtSetCompositionSurfaceDirectFlipState(void *a1, __int64 *a2, int a3)
{
  int Buffer; // ebx
  __int64 v6; // rdi
  __int64 v7; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  struct CCompositionBuffer *v12; // [rsp+28h] [rbp-30h] BYREF
  CCompositionSurface *v13; // [rsp+68h] [rbp+10h] BYREF
  int v14; // [rsp+70h] [rbp+18h]
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v14 = a3;
  Buffer = 0;
  v6 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v6 = *a2;
  }
  else
  {
    Buffer = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( Buffer >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v7);
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Global + 2541) + 256LL))(*((_QWORD *)Global + 2541)) )
    {
      Object = 0LL;
      Buffer = CompositionSurfaceObject::ResolveHandle(a1, 2u, v9, (struct CompositionSurfaceObject **)&Object);
      if ( Buffer >= 0 )
      {
        v13 = 0LL;
        Buffer = CompositionSurfaceObject::LockForWrite((char *)Object, &v13);
        if ( Buffer >= 0 )
        {
          Buffer = CCompositionSurface::FindBuffer(v13, v6, &v12);
          if ( Buffer >= 0 )
          {
            LOBYTE(v10) = a3 != 0;
            (*(void (__fastcall **)(struct CCompositionBuffer *, __int64))(*(_QWORD *)v12 + 160LL))(v12, v10);
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
  KeLeaveCriticalRegion();
  return (unsigned int)Buffer;
}

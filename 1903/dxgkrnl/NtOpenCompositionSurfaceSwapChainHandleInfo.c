/*
 * XREFs of NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C00103A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?OpenSwapChainHandles@CCompositionSurface@@QEBAJ_KPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z @ 0x1C00105EC (-OpenSwapChainHandles@CCompositionSurface@@QEBAJ_KPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C0010B60 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C0010D58 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0016A70 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 */

__int64 __fastcall NtOpenCompositionSurfaceSwapChainHandleInfo(void *a1, unsigned __int64 *a2, _OWORD *a3)
{
  unsigned int v6; // edi
  int v7; // ebx
  unsigned __int64 v8; // r15
  bool v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGGLOBAL *Global; // rax
  char v13; // r8
  HANDLE *v14; // rax
  __int64 v15; // rcx
  PVOID Object; // [rsp+28h] [rbp-150h] BYREF
  unsigned __int64 v18; // [rsp+30h] [rbp-148h]
  HANDLE v19[39]; // [rsp+40h] [rbp-138h] BYREF
  CCompositionSurface *v20; // [rsp+198h] [rbp+20h] BYREF

  v6 = 0;
  v7 = 0;
  Object = 0LL;
  v8 = 0LL;
  v18 = 0LL;
  memset(v19, 0, 0x100uLL);
  v9 = 0;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v8 = *a2;
    v18 = *a2;
  }
  else
  {
    v7 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v7 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v11, v10);
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Global + 38000) + 296LL))(*((_QWORD *)Global + 38000)) )
    {
      v7 = CompositionSurfaceObject::ResolveHandle(a1, 1u, v13, (struct CompositionSurfaceObject **)&Object);
      if ( v7 >= 0 )
      {
        v20 = 0LL;
        v7 = CompositionSurfaceObject::LockForRead(Object, &v20);
        if ( v7 >= 0 )
        {
          v7 = CCompositionSurface::OpenSwapChainHandles(v20, v8, (struct CSM_SWAPCHAIN_HANDLE_INFO *)v19);
          v9 = v7 >= 0;
          CCompositionSurface::UnlockAndRelease(v20);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      v7 = -1073741790;
    }
  }
  if ( v7 < 0 )
    goto LABEL_27;
  if ( a3 )
  {
    if ( a3 + 16 < a3 || (unsigned __int64)(a3 + 16) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v14 = v19;
    v15 = 2LL;
    do
    {
      *a3 = *(_OWORD *)v14;
      a3[1] = *((_OWORD *)v14 + 1);
      a3[2] = *((_OWORD *)v14 + 2);
      a3[3] = *((_OWORD *)v14 + 3);
      a3[4] = *((_OWORD *)v14 + 4);
      a3[5] = *((_OWORD *)v14 + 5);
      a3[6] = *((_OWORD *)v14 + 6);
      a3 += 8;
      *(a3 - 1) = *((_OWORD *)v14 + 7);
      v14 += 16;
      --v15;
    }
    while ( v15 );
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
  {
LABEL_27:
    if ( v9 && LODWORD(v19[0]) )
    {
      do
        ObCloseHandle(v19[++v6], 1);
      while ( v6 < LODWORD(v19[0]) );
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}

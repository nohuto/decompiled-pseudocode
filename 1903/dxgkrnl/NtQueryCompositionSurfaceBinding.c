/*
 * XREFs of NtQueryCompositionSurfaceBinding @ 0x1C0010190
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C0010B60 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C0010D58 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z @ 0x1C0010F84 (-QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0016A70 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceBinding(CCompositionSurface *a1, unsigned __int64 a2, _OWORD *a3)
{
  _OWORD *v3; // rdi
  unsigned __int64 *v4; // rbx
  unsigned __int64 v6; // rsi
  char v7; // r8
  int Binding; // ebx
  HANDLE *v9; // rax
  __int64 v10; // rcx
  CCompositionSurface *v12; // [rsp+28h] [rbp-460h] BYREF
  PVOID Object; // [rsp+30h] [rbp-458h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-450h]
  _OWORD *v15; // [rsp+48h] [rbp-440h]
  HANDLE v16[130]; // [rsp+50h] [rbp-438h] BYREF

  v3 = a3;
  v4 = (unsigned __int64 *)a2;
  v12 = a1;
  v15 = a3;
  v6 = 0LL;
  v14 = 0LL;
  Object = 0LL;
  memset(v16, 0, sizeof(v16));
  if ( a2 )
  {
    if ( a2 + 8 < a2 || a2 + 8 > MmUserProbeAddress )
      v4 = (unsigned __int64 *)MmUserProbeAddress;
    v6 = *v4;
    v14 = *v4;
  }
  KeEnterCriticalRegion();
  Binding = CompositionSurfaceObject::ResolveHandle(a1, 1u, v7, (struct CompositionSurfaceObject **)&Object);
  if ( Binding >= 0 )
  {
    v12 = 0LL;
    Binding = CompositionSurfaceObject::LockForRead(Object, &v12);
    if ( Binding >= 0 )
    {
      Binding = CCompositionSurface::QueryBinding(v12, v6, (struct CSM_BUFFER_INFO *)v16);
      CCompositionSurface::UnlockAndRelease(v12);
    }
    ObfDereferenceObject(Object);
  }
  if ( v3 )
  {
    if ( v3 + 65 < v3 || (unsigned __int64)(v3 + 65) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v9 = v16;
    v10 = 8LL;
    do
    {
      *v3 = *(_OWORD *)v9;
      v3[1] = *((_OWORD *)v9 + 1);
      v3[2] = *((_OWORD *)v9 + 2);
      v3[3] = *((_OWORD *)v9 + 3);
      v3[4] = *((_OWORD *)v9 + 4);
      v3[5] = *((_OWORD *)v9 + 5);
      v3[6] = *((_OWORD *)v9 + 6);
      v3 += 8;
      *(v3 - 1) = *((_OWORD *)v9 + 7);
      v9 += 16;
      --v10;
    }
    while ( v10 );
    *v3 = *(_OWORD *)v9;
  }
  else
  {
    Binding = -1073741811;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)Binding;
}

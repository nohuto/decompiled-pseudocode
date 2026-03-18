/*
 * XREFs of NtBindCompositionSurface @ 0x1C0009760
 * Callers:
 *     <none>
 * Callees:
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C00073E8 (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z @ 0x1C0008DB0 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C000ADC4 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C000B6B0 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0015D90 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

__int64 __fastcall NtBindCompositionSurface(void *a1, int a2, unsigned int a3, _OWORD *a4, _QWORD *a5)
{
  int v7; // ebx
  PVOID v8; // r15
  CCompositionSurface *v9; // r14
  char v10; // r12
  _OWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _OWORD *v14; // rax
  _OWORD *v15; // rcx
  char v16; // r8
  __int64 v17; // rdi
  struct DXGGLOBAL *Global; // rax
  PVOID Object; // [rsp+40h] [rbp-898h] BYREF
  CCompositionSurface *v22; // [rsp+48h] [rbp-890h] BYREF
  unsigned __int64 v23[3]; // [rsp+50h] [rbp-888h] BYREF
  _BYTE v24[1048]; // [rsp+68h] [rbp-870h] BYREF
  _QWORD v25[130]; // [rsp+480h] [rbp-458h] BYREF

  v23[1] = (unsigned __int64)a1;
  v23[2] = (unsigned __int64)a5;
  v7 = 0;
  memset(v25, 0, sizeof(v25));
  v23[0] = 0LL;
  v8 = 0LL;
  Object = 0LL;
  v9 = 0LL;
  v22 = 0LL;
  v10 = 0;
  if ( a4 )
  {
    if ( a4 + 65 < a4 || (unsigned __int64)(a4 + 65) > MmUserProbeAddress )
      a4 = (_OWORD *)MmUserProbeAddress;
    v11 = v24;
    v12 = 8LL;
    v13 = 8LL;
    do
    {
      *v11 = *a4;
      v11[1] = a4[1];
      v11[2] = a4[2];
      v11[3] = a4[3];
      v11[4] = a4[4];
      v11[5] = a4[5];
      v11[6] = a4[6];
      v11 += 8;
      *(v11 - 1) = a4[7];
      a4 += 8;
      --v13;
    }
    while ( v13 );
    *v11 = *a4;
    v14 = v25;
    v15 = v24;
    do
    {
      *v14 = *v15;
      v14[1] = v15[1];
      v14[2] = v15[2];
      v14[3] = v15[3];
      v14[4] = v15[4];
      v14[5] = v15[5];
      v14[6] = v15[6];
      v14 += 8;
      *(v14 - 1) = v15[7];
      v15 += 8;
      --v12;
    }
    while ( v12 );
    *v14 = *v15;
    if ( a5 + 1 < a5 || (unsigned __int64)(a5 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a5 = 0LL;
  }
  else
  {
    v7 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v7 < 0 )
    goto LABEL_33;
  v7 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v16, (struct CompositionSurfaceObject **)&Object);
  v8 = Object;
  if ( v7 < 0 )
    goto LABEL_33;
  v7 = CompositionSurfaceObject::LockForWrite(Object, &v22);
  v9 = v22;
  if ( v7 < 0 )
    goto LABEL_33;
  v7 = CCompositionSurface::Bind(v22, (const struct CSM_BUFFER_INFO *)v25, a2 != 0, 0LL, v23);
  if ( v7 < 0 )
    goto LABEL_33;
  v10 = 1;
  v17 = v25[111];
  if ( v25[111] )
  {
    Global = DXGGLOBAL::GetGlobal();
    if ( !(*(unsigned int (__fastcall **)(__int64, _QWORD, void *))(*((_QWORD *)Global + 2541) + 248LL))(v17, a3, a1) )
      v7 = -1073741790;
  }
  if ( v7 < 0 )
  {
LABEL_33:
    if ( v10 )
      CCompositionSurface::UnBind(v9, 0LL);
  }
  if ( v9 )
    CCompositionSurface::UnlockAndRelease(v9);
  if ( v8 )
    ObfDereferenceObject(v8);
  KeLeaveCriticalRegion();
  if ( a5 )
  {
    if ( a5 + 1 < a5 || (unsigned __int64)(a5 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a5 = v23[0];
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}

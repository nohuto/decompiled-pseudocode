/*
 * XREFs of NtNotifyPresentToCompositionSurface @ 0x1C005B940
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C0011300 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C00116B8 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C00172E0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@PEA_N@Z @ 0x1C005C400 (-CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@PEA_N@Z.c)
 *     ?PreNotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C005C798 (-PreNotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOK.c)
 */

__int64 __fastcall NtNotifyPresentToCompositionSurface(CCompositionSurface *a1, _DWORD *a2)
{
  _DWORD *v2; // rsi
  int v4; // ebx
  unsigned __int64 v5; // rdi
  _OWORD *v6; // rcx
  _OWORD *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *v10; // rcx
  _OWORD *v11; // rax
  unsigned __int64 *v12; // rdi
  __int64 v13; // r8
  PVOID v14; // r14
  CCompositionSurface *v15; // rsi
  bool v17; // [rsp+30h] [rbp-8B8h] BYREF
  PVOID Object; // [rsp+38h] [rbp-8B0h] BYREF
  CCompositionSurface *v19; // [rsp+40h] [rbp-8A8h] BYREF
  int v20; // [rsp+48h] [rbp-8A0h]
  unsigned __int64 v21; // [rsp+50h] [rbp-898h]
  HWND v22; // [rsp+58h] [rbp-890h] BYREF
  _BYTE v23[1072]; // [rsp+60h] [rbp-888h] BYREF
  _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN v24; // [rsp+490h] [rbp-458h] BYREF

  v2 = a2;
  v19 = a1;
  v4 = 0;
  memset(&v24, 0, sizeof(v24));
  Object = 0LL;
  v5 = 0LL;
  v21 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (_DWORD *)MmUserProbeAddress;
    if ( *a2 != 2 )
      v4 = -1073741811;
    v20 = v4;
    v6 = v2 + 4;
    if ( v2 + 270 < v2 + 4 || (unsigned __int64)(v2 + 270) > MmUserProbeAddress )
      v6 = (_OWORD *)MmUserProbeAddress;
    v7 = v23;
    v8 = 8LL;
    v9 = 8LL;
    do
    {
      *v7 = *v6;
      v7[1] = v6[1];
      v7[2] = v6[2];
      v7[3] = v6[3];
      v7[4] = v6[4];
      v7[5] = v6[5];
      v7[6] = v6[6];
      v7 += 8;
      *(v7 - 1) = v6[7];
      v6 += 8;
      --v9;
    }
    while ( v9 );
    *v7 = *v6;
    v7[1] = v6[1];
    *((_QWORD *)v7 + 4) = *((_QWORD *)v6 + 4);
    v10 = &v24;
    v11 = v23;
    do
    {
      *(_OWORD *)&v10->FenceValue = *v11;
      *(_OWORD *)&v10->dxgContext = v11[1];
      *(_OWORD *)&v10->PresentLimitSemaphoreId = v11[2];
      *(_OWORD *)&v10->hCompSurf = v11[3];
      *(_OWORD *)&v10->confirmationCookie = v11[4];
      *(_OWORD *)&v10->RemainingTokens = v11[5];
      *(_OWORD *)&v10->ScrollRect.bottom = v11[6];
      v10 = (_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)((char *)v10 + 128);
      v10[-1].DirtyRegions.Rects[15] = (RECT)v11[7];
      v11 += 8;
      --v8;
    }
    while ( v8 );
    *(_OWORD *)&v10->FenceValue = *v11;
    *(_OWORD *)&v10->dxgContext = v11[1];
    v10->PresentLimitSemaphoreId = *((_QWORD *)v11 + 4);
    v12 = (unsigned __int64 *)(v2 + 2);
    if ( v2 + 4 < v2 + 2 || (unsigned __int64)(v2 + 4) > MmUserProbeAddress )
      v12 = (unsigned __int64 *)MmUserProbeAddress;
    v5 = *v12;
    v21 = v5;
  }
  KeEnterCriticalRegion();
  if ( v4 >= 0 )
  {
    v4 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v13, (struct CompositionSurfaceObject **)&Object);
    v14 = Object;
    if ( v4 >= 0 )
    {
      v19 = 0LL;
      v4 = CompositionSurfaceObject::LockForWrite((char *)Object, &v19);
      if ( v4 >= 0 )
      {
        v17 = 0;
        v15 = v19;
        if ( !CCompositionSurface::CheckBinding(v19, v5, (enum CompositionBufferType *)&Object, &v22, &v17)
          || (_DWORD)Object != 2
          || !v17 )
        {
          v4 = -1073741811;
        }
        if ( v4 >= 0 )
          v4 = CCompositionSurface::PreNotifyPendingFlipPresent(v15, v5, &v24);
        CCompositionSurface::UnlockAndRelease(v15);
      }
      ObfDereferenceObject(v14);
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}

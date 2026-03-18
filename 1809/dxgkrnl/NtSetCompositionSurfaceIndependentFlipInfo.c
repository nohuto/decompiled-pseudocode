/*
 * XREFs of NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C001D3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C000A2E0 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C000ADC4 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C000B6B0 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0015D90 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 */

__int64 __fastcall NtSetCompositionSurfaceIndependentFlipInfo(
        void *a1,
        __int64 *a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        char *Src,
        _DWORD *a8)
{
  __int64 *v9; // r10
  int Buffer; // ebx
  __int64 v12; // r14
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // edx
  size_t v16; // r8
  __int64 v17; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v19; // r8
  __int64 v20; // r8
  char v21; // r11
  _BYTE *v22; // rdx
  int v24; // [rsp+44h] [rbp-B4h] BYREF
  CCompositionSurface *v25; // [rsp+48h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A0h]
  void *v28; // [rsp+60h] [rbp-98h]
  _DWORD *v29; // [rsp+68h] [rbp-90h]
  struct CCompositionBuffer *v30; // [rsp+70h] [rbp-88h] BYREF
  _BYTE v31[64]; // [rsp+80h] [rbp-78h] BYREF

  v9 = a2;
  v28 = a1;
  v29 = a8;
  Buffer = 0;
  v12 = 0LL;
  v27 = 0LL;
  v24 = 0;
  if ( a2
    && Src
    && a6
    && (v13 = (((a6 & 0x55555555) + ((a6 >> 1) & 0x55555555)) & 0x33333333)
            + ((((a6 & 0x55555555) + ((a6 >> 1) & 0x55555555)) >> 2) & 0x33333333),
        v14 = (((v13 & 0xF0F0F0F) + ((v13 >> 4) & 0xF0F0F0F)) & 0xFF00FF)
            + ((((v13 & 0xF0F0F0F) + ((v13 >> 4) & 0xF0F0F0F)) >> 8) & 0xFF00FF),
        v15 = (unsigned __int16)v14 + HIWORD(v14),
        v15 < 0x10) )
  {
    if ( v9 + 1 < v9 || (unsigned __int64)(v9 + 1) > MmUserProbeAddress )
      v9 = (__int64 *)MmUserProbeAddress;
    v12 = *v9;
    v27 = *v9;
    v16 = 4LL * v15;
    if ( &Src[v16] < Src || (unsigned __int64)&Src[v16] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v31, Src, v16);
  }
  else
  {
    Buffer = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( Buffer >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v17);
    if ( (*(unsigned int (**)(void))(*((_QWORD *)Global + 2541) + 256LL))() )
    {
      Object = 0LL;
      Buffer = CompositionSurfaceObject::ResolveHandle(a1, 2u, v19, (struct CompositionSurfaceObject **)&Object);
      if ( Buffer >= 0 )
      {
        v25 = 0LL;
        Buffer = CompositionSurfaceObject::LockForWrite((char *)Object, &v25);
        if ( Buffer >= 0 )
        {
          Buffer = CCompositionSurface::FindBuffer(v25, v12, &v30);
          if ( Buffer >= 0 )
          {
            v22 = v31;
            LOBYTE(v20) = v21;
            LOBYTE(v22) = a3 != 0;
            Buffer = (*(__int64 (__fastcall **)(struct CCompositionBuffer *, _BYTE *, __int64, _QWORD, unsigned int, _BYTE *, int *))(*(_QWORD *)v30 + 168LL))(
                       v30,
                       v22,
                       v20,
                       a5,
                       a6,
                       v31,
                       &v24);
          }
          CCompositionSurface::UnlockAndRelease(v25);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      Buffer = -1073741790;
    }
  }
  if ( Buffer >= 0 )
  {
    if ( a8 )
    {
      if ( a8 + 1 < a8 || (unsigned __int64)(a8 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a8 = v24;
    }
    else
    {
      Buffer = -1073741811;
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)Buffer;
}

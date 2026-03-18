/*
 * XREFs of NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C001D020
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C0010B60 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0010F18 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0011C10 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0016A70 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
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
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v20; // r8
  __int64 v21; // r8
  char v22; // r11
  _BYTE *v23; // rdx
  int v25; // [rsp+44h] [rbp-B4h] BYREF
  CCompositionSurface *v26; // [rsp+48h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+58h] [rbp-A0h]
  void *v29; // [rsp+60h] [rbp-98h]
  _DWORD *v30; // [rsp+68h] [rbp-90h]
  struct CCompositionBuffer *v31; // [rsp+70h] [rbp-88h] BYREF
  _BYTE v32[64]; // [rsp+80h] [rbp-78h] BYREF

  v9 = a2;
  v29 = a1;
  v30 = a8;
  Buffer = 0;
  v12 = 0LL;
  v28 = 0LL;
  v25 = 0;
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
    v28 = *v9;
    v16 = 4LL * v15;
    if ( &Src[v16] < Src || (unsigned __int64)&Src[v16] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v32, Src, v16);
  }
  else
  {
    Buffer = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( Buffer >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v18, v17);
    if ( (*(unsigned int (**)(void))(*((_QWORD *)Global + 38000) + 296LL))() )
    {
      Object = 0LL;
      Buffer = CompositionSurfaceObject::ResolveHandle(a1, 2u, v20, (struct CompositionSurfaceObject **)&Object);
      if ( Buffer >= 0 )
      {
        v26 = 0LL;
        Buffer = CompositionSurfaceObject::LockForWrite((char *)Object, &v26);
        if ( Buffer >= 0 )
        {
          Buffer = CCompositionSurface::FindBuffer(v26, v12, &v31);
          if ( Buffer >= 0 )
          {
            v23 = v32;
            LOBYTE(v21) = v22;
            LOBYTE(v23) = a3 != 0;
            Buffer = (*(__int64 (__fastcall **)(struct CCompositionBuffer *, _BYTE *, __int64, _QWORD, unsigned int, _BYTE *, int *))(*(_QWORD *)v31 + 168LL))(
                       v31,
                       v23,
                       v21,
                       a5,
                       a6,
                       v32,
                       &v25);
          }
          CCompositionSurface::UnlockAndRelease(v26);
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
      *a8 = v25;
    }
    else
    {
      Buffer = -1073741811;
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)Buffer;
}

/*
 * XREFs of NtQueryCompositionSurfaceHDRMetaData @ 0x1C00196A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C000A2E0 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C000ADC4 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C000B938 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0015D90 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceHDRMetaData(
        CCompositionSurface *a1,
        __int64 *a2,
        _DWORD *a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  int Buffer; // ebx
  __int64 v8; // r15
  int v9; // r14d
  __int64 v10; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r8
  CCompositionSurface *v15; // r13
  int v16; // r14d
  __m128i v17; // xmm1
  int v19; // eax
  PVOID Object; // [rsp+28h] [rbp-C0h] BYREF
  CCompositionSurface *v21; // [rsp+30h] [rbp-B8h] BYREF
  struct CCompositionBuffer *v22; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+40h] [rbp-A8h]
  struct CCompositionBuffer *v24; // [rsp+48h] [rbp-A0h] BYREF
  struct CCompositionBuffer *v25; // [rsp+50h] [rbp-98h] BYREF
  __int128 v26; // [rsp+60h] [rbp-88h] BYREF
  __m128i v27; // [rsp+70h] [rbp-78h]
  __int128 v28; // [rsp+80h] [rbp-68h]
  __int128 v29; // [rsp+90h] [rbp-58h]
  __int64 v30; // [rsp+A0h] [rbp-48h]

  v21 = a1;
  Object = a3;
  v22 = (struct CCompositionBuffer *)a5;
  Buffer = 0;
  v8 = 0LL;
  v23 = 0LL;
  v9 = 0;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v8 = *a2;
    v23 = *a2;
  }
  else
  {
    Buffer = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( Buffer >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v10);
    if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64, __int64))(*((_QWORD *)Global + 2541) + 256LL))(
            *((_QWORD *)Global + 2541),
            v12,
            v13) )
      Buffer = -1073741790;
    if ( Buffer >= 0 )
    {
      Object = 0LL;
      Buffer = CompositionSurfaceObject::ResolveHandle(a1, 1u, v14, (struct CompositionSurfaceObject **)&Object);
      if ( Buffer >= 0 )
      {
        v21 = 0LL;
        Buffer = CompositionSurfaceObject::LockForRead((char *)Object, &v21);
        if ( Buffer < 0 )
        {
LABEL_15:
          ObfDereferenceObject(Object);
          goto LABEL_16;
        }
        v15 = v21;
        Buffer = CCompositionSurface::FindBuffer(v21, v8, &v22);
        if ( Buffer < 0
          || (v9 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v22 + 128LL))(v22)) == 0 )
        {
LABEL_14:
          CCompositionSurface::UnlockAndRelease(v15);
          goto LABEL_15;
        }
        if ( v9 == 1 )
        {
          Buffer = CCompositionSurface::FindBuffer(v15, v8, &v25);
          if ( Buffer < 0 )
            goto LABEL_14;
          v19 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *, __int128 *))(*(_QWORD *)v25 + 144LL))(v25, &v26);
        }
        else
        {
          if ( v9 != 2 )
          {
            Buffer = -1073741811;
            goto LABEL_14;
          }
          Buffer = CCompositionSurface::FindBuffer(v15, v8, &v24);
          if ( Buffer < 0 )
            goto LABEL_14;
          v19 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *, __int128 *))(*(_QWORD *)v24 + 152LL))(v24, &v26);
        }
        Buffer = v19;
        goto LABEL_14;
      }
    }
  }
LABEL_16:
  if ( a3 )
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = v9;
  }
  else
  {
    Buffer = -1073741811;
  }
  if ( Buffer >= 0 && a5 && v9 )
  {
    v16 = v9 - 1;
    if ( v16 )
    {
      if ( v16 != 1 )
      {
        Buffer = -1073741811;
        goto LABEL_39;
      }
      if ( a4 >= 0x48 )
      {
        if ( a5 + 72 < a5 || a5 + 72 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        *(_OWORD *)a5 = v26;
        *(__m128i *)(a5 + 16) = v27;
        *(_OWORD *)(a5 + 32) = v28;
        *(_OWORD *)(a5 + 48) = v29;
        *(_QWORD *)(a5 + 64) = v30;
        goto LABEL_39;
      }
LABEL_38:
      Buffer = -1073741789;
      goto LABEL_39;
    }
    if ( a4 < 0x1C )
      goto LABEL_38;
    if ( a5 + 28 < a5 || a5 + 28 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)a5 = v26;
    v17 = v27;
    *(_QWORD *)(a5 + 16) = v27.m128i_i64[0];
    *(_DWORD *)(a5 + 24) = _mm_cvtsi128_si32(_mm_srli_si128(v17, 8));
  }
LABEL_39:
  KeLeaveCriticalRegion();
  return (unsigned int)Buffer;
}

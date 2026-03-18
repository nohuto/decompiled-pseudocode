/*
 * XREFs of NtQueryCompositionSurfaceHDRMetaData @ 0x1C000F400
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C0010B60 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C0010D58 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0011C10 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0016A70 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceHDRMetaData(
        void *a1,
        unsigned __int64 *a2,
        struct CCompositionBuffer *a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  int Buffer; // ebx
  unsigned __int64 v8; // r12
  int v9; // r14d
  PVOID v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGGLOBAL *Global; // rax
  char v14; // r8
  CCompositionSurface *v15; // r15
  int v16; // r14d
  __m128i v17; // xmm1
  int v19; // eax
  PVOID Object; // [rsp+28h] [rbp-C0h] BYREF
  int v21; // [rsp+30h] [rbp-B8h]
  CCompositionSurface *v22; // [rsp+38h] [rbp-B0h] BYREF
  struct CCompositionBuffer *v23; // [rsp+40h] [rbp-A8h] BYREF
  struct CCompositionBuffer *v24; // [rsp+48h] [rbp-A0h] BYREF
  unsigned __int64 v25; // [rsp+50h] [rbp-98h]
  struct CCompositionBuffer *v26; // [rsp+58h] [rbp-90h] BYREF
  _OWORD v27[5]; // [rsp+60h] [rbp-88h] BYREF

  Object = a1;
  v22 = (CCompositionSurface *)a1;
  v23 = a3;
  v24 = (struct CCompositionBuffer *)a5;
  Buffer = 0;
  v8 = 0LL;
  v25 = 0LL;
  v9 = 0;
  v21 = 0;
  memset(v27, 0, 0x48uLL);
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v8 = *a2;
    v25 = *a2;
    v10 = Object;
  }
  else
  {
    Buffer = -1073741811;
    v10 = Object;
  }
  KeEnterCriticalRegion();
  if ( Buffer >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v12, v11);
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Global + 38000) + 296LL))(*((_QWORD *)Global + 38000)) )
      Buffer = -1073741790;
    if ( Buffer >= 0 )
    {
      Object = 0LL;
      Buffer = CompositionSurfaceObject::ResolveHandle(v10, 1u, v14, (struct CompositionSurfaceObject **)&Object);
      if ( Buffer >= 0 )
      {
        v22 = 0LL;
        Buffer = CompositionSurfaceObject::LockForRead(Object, &v22);
        if ( Buffer < 0 )
        {
LABEL_15:
          ObfDereferenceObject(Object);
          goto LABEL_16;
        }
        v15 = v22;
        Buffer = CCompositionSurface::FindBuffer(v22, v8, &v24);
        if ( Buffer < 0
          || (v9 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v24 + 128LL))(v24),
              (v21 = v9) == 0) )
        {
LABEL_14:
          CCompositionSurface::UnlockAndRelease(v15);
          goto LABEL_15;
        }
        if ( v9 == 1 )
        {
          Buffer = CCompositionSurface::FindBuffer(v15, v8, &v26);
          if ( Buffer < 0 )
            goto LABEL_14;
          v19 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *, _OWORD *))(*(_QWORD *)v26 + 144LL))(v26, v27);
        }
        else
        {
          if ( v9 != 2 )
          {
            Buffer = -1073741811;
            goto LABEL_14;
          }
          Buffer = CCompositionSurface::FindBuffer(v15, v8, &v23);
          if ( Buffer < 0 )
            goto LABEL_14;
          v19 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *, _OWORD *))(*(_QWORD *)v23 + 152LL))(v23, v27);
        }
        Buffer = v19;
        goto LABEL_14;
      }
    }
  }
LABEL_16:
  if ( a3 )
  {
    if ( (struct CCompositionBuffer *)((char *)a3 + 4) < a3 || (unsigned __int64)a3 + 4 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_DWORD *)a3 = v9;
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
        *(_OWORD *)a5 = v27[0];
        *(_OWORD *)(a5 + 16) = v27[1];
        *(_OWORD *)(a5 + 32) = v27[2];
        *(_OWORD *)(a5 + 48) = v27[3];
        *(_QWORD *)(a5 + 64) = *(_QWORD *)&v27[4];
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
    *(_OWORD *)a5 = v27[0];
    v17 = (__m128i)v27[1];
    *(_QWORD *)(a5 + 16) = *(_QWORD *)&v27[1];
    *(_DWORD *)(a5 + 24) = _mm_cvtsi128_si32(_mm_srli_si128(v17, 8));
  }
LABEL_39:
  KeLeaveCriticalRegion();
  return (unsigned int)Buffer;
}

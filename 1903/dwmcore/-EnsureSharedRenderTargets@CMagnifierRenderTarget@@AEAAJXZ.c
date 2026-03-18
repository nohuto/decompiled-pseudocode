/*
 * XREFs of ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x1801AA000
 * Callers:
 *     ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x1801A9FA0 (-EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18005A24C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801AA328 (-OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVI.c)
 */

__int64 __fastcall CMagnifierRenderTarget::EnsureSharedRenderTargets(CMagnifierRenderTarget *this)
{
  int v1; // eax
  int v2; // ebx
  unsigned int v4; // esi
  signed int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rcx
  signed int v10; // eax
  struct IRenderTargetBitmap *v12; // [rsp+50h] [rbp+20h] BYREF
  struct IRenderTargetBitmap *v13; // [rsp+58h] [rbp+28h] BYREF

  v1 = *((_DWORD *)this + 98);
  v2 = 0;
  v13 = 0LL;
  if ( !v1 )
    return (unsigned int)v2;
  v4 = 0;
  while ( 1 )
  {
    v5 = CMagnifierRenderTarget::OpenSharedSurfaceRenderTarget(
           this,
           *((void **)this + 4 * v4 + 51),
           *(struct _LUID *)((char *)this + 32 * v4 + 416),
           *((HMONITOR *)this + 4 * v4 + 53),
           &v13);
    LODWORD(v12) = v5;
    v2 = v5;
    if ( v5 < 0 )
      break;
    v12 = v13;
    v7 = *((_DWORD *)this + 74);
    v8 = v7 + 1;
    if ( v7 + 1 >= v7 )
    {
      if ( v8 <= *((_DWORD *)this + 73) )
      {
        v2 = 0;
        *(_QWORD *)(*((_QWORD *)this + 34) + 8LL * *((unsigned int *)this + 74)) = v12;
        *((_DWORD *)this + 74) = v8;
        LODWORD(v12) = 0;
        goto LABEL_11;
      }
      v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 272, 8, 1, &v12);
      v2 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v10, 0xC3u, 0LL);
    }
    else
    {
      v2 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    }
    LODWORD(v12) = v2;
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_1802E3D40, 1u, v2, 0x19Eu, 0LL);
      goto LABEL_15;
    }
LABEL_11:
    v13 = 0LL;
    if ( ++v4 >= *((_DWORD *)this + 98) )
      goto LABEL_17;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_1802E3D40, 1u, v5, 0x19Bu, 0LL);
LABEL_15:
  if ( v13 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v13 + 16LL))(v13);
LABEL_17:
  if ( v2 < 0 )
  {
    TranslateDXGIorD3DErrorInContext(v2, 8, &v12);
    return (unsigned int)v12;
  }
  return (unsigned int)v2;
}

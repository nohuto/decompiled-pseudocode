/*
 * XREFs of ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x18015CF6C
 * Callers:
 *     ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x18015CF10 (-EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180038C28 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18015D268 (-OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVI.c)
 */

__int64 __fastcall CMagnifierRenderTarget::EnsureSharedRenderTargets(CMagnifierRenderTarget *this)
{
  int v1; // eax
  int v2; // ebx
  unsigned int v4; // edi
  unsigned int v5; // r14d
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // eax
  int v10; // eax
  struct IRenderTargetBitmap *v12; // [rsp+50h] [rbp+20h] BYREF
  struct IRenderTargetBitmap *v13; // [rsp+58h] [rbp+28h] BYREF

  v1 = *((_DWORD *)this + 100);
  v2 = 0;
  v13 = 0LL;
  if ( v1 )
  {
    v4 = 0;
    v5 = (unsigned int)v12;
    while ( 1 )
    {
      v6 = CMagnifierRenderTarget::OpenSharedSurfaceRenderTarget(
             this,
             *((void **)this + 4 * v4 + 52),
             *(struct _LUID *)((char *)this + 32 * v4 + 424),
             *((HMONITOR *)this + 4 * v4 + 54),
             &v13);
      LODWORD(v12) = v6;
      v2 = v6;
      if ( v6 < 0 )
        break;
      v8 = *((unsigned int *)this + 74);
      v12 = v13;
      v9 = v8 + 1;
      if ( (int)v8 + 1 >= (unsigned int)v8 )
        v5 = v8 + 1;
      v2 = v9 < (unsigned int)v8 ? 0x80070216 : 0;
      if ( v9 < (unsigned int)v8 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v2, 0xB5u);
      }
      else if ( v5 > *((_DWORD *)this + 73) )
      {
        v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 272, 8, 1, &v12);
        v2 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v10, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 34) + 8 * v8) = v12;
        *((_DWORD *)this + 74) = v5;
      }
      LODWORD(v12) = v2;
      if ( v2 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802BC238, 1u, v2, 0x19Au);
        goto LABEL_17;
      }
      v13 = 0LL;
      if ( ++v4 >= *((_DWORD *)this + 100) )
        goto LABEL_19;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802BC238, 1u, v6, 0x197u);
LABEL_17:
    if ( v13 )
      (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v13 + 16LL))(v13);
LABEL_19:
    if ( v2 < 0 )
    {
      TranslateDXGIorD3DErrorInContext(v2, 8, &v12);
      return (unsigned int)v12;
    }
  }
  return (unsigned int)v2;
}

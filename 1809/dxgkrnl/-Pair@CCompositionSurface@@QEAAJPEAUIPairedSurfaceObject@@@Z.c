/*
 * XREFs of ?Pair@CCompositionSurface@@QEAAJPEAUIPairedSurfaceObject@@@Z @ 0x1C005570C
 * Callers:
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C025E3F0 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C000973C (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     ?GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C000AF50 (-GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z @ 0x1C00555C0 (-FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z.c)
 *     ?PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z @ 0x1C005581C (-PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z.c)
 */

__int64 __fastcall CCompositionSurface::Pair(CCompositionSurface *this, struct IPairedSurfaceObject *a2)
{
  int v2; // ebx
  struct CCompositionBuffer *RenderingBuffer; // rax
  struct CCompositionBuffer *v7; // r14
  struct CCompositionBuffer *ActiveBuffer; // rax
  __int64 v9; // rdx
  struct CCompositionBuffer *v10; // rsi
  struct CFlipExBuffer *v11; // rax
  struct CFlipExBuffer *v12; // rax

  v2 = 0;
  if ( *((_QWORD *)this + 12) )
    return 3221226768LL;
  RenderingBuffer = CCompositionSurface::GetRenderingBuffer(this);
  v7 = RenderingBuffer;
  if ( RenderingBuffer
    && (*(unsigned int (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)RenderingBuffer + 8LL))(RenderingBuffer) != 2 )
  {
    v2 = -1073741790;
  }
  ActiveBuffer = CCompositionSurface::GetActiveBuffer(this);
  v10 = ActiveBuffer;
  if ( ActiveBuffer
    && (*(unsigned int (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)ActiveBuffer + 8LL))(ActiveBuffer) != 2 )
  {
    v2 = -1073741790;
  }
  if ( v2 < 0 )
    goto LABEL_17;
  *((_QWORD *)this + 12) = a2;
  LOBYTE(v9) = 1;
  (**(void (__fastcall ***)(struct IPairedSurfaceObject *, __int64))a2)(a2, v9);
  if ( v7 )
  {
    v11 = CFlipExBuffer::FromBuffer(v7);
    v2 = CCompositionSurface::PairBind(this, v11);
  }
  if ( v2 < 0 )
    goto LABEL_17;
  if ( v10 )
  {
    if ( v10 != v7 )
    {
      v12 = CFlipExBuffer::FromBuffer(v10);
      v2 = CCompositionSurface::PairBind(this, v12);
    }
  }
  if ( v2 < 0 )
  {
LABEL_17:
    (**(void (__fastcall ***)(struct IPairedSurfaceObject *, _QWORD))a2)(a2, 0LL);
    *((_QWORD *)this + 12) = 0LL;
  }
  return (unsigned int)v2;
}

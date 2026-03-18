/*
 * XREFs of ?PreRender@COverlayRenderTargetEngine@@UEAAJXZ @ 0x18015EB10
 * Callers:
 *     <none>
 * Callees:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180048740 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureRenderTarget@COverlayRenderTargetEngine@@IEAAJXZ @ 0x18015E68C (-EnsureRenderTarget@COverlayRenderTargetEngine@@IEAAJXZ.c)
 */

__int64 __fastcall COverlayRenderTargetEngine::PreRender(struct CVisualTree **this)
{
  unsigned int v1; // ebx
  int v3; // eax
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  char v14; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_BYTE *)this + 132) )
  {
    v3 = COverlayRenderTargetEngine::EnsureRenderTarget((COverlayRenderTargetEngine *)(this - 8));
    v1 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x71u);
    }
    else
    {
      v5 = CVisualTree::PreCompute(this[7], 0LL);
      v1 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x73u);
      }
      else
      {
        v7 = (*((__int64 (__fastcall **)(struct CVisualTree **, char *))*this + 7))(this, &v14);
        v1 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x78u);
        }
        else if ( v14 )
        {
          v9 = (*((__int64 (__fastcall **)(struct CVisualTree **, _QWORD, _QWORD))*this + 8))(this, 0LL, 0LL);
          v1 = v9;
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x7Cu);
          }
          else
          {
            v11 = (*((__int64 (__fastcall **)(struct CVisualTree **, _QWORD))*this + 9))(this, 0LL);
            v1 = v11;
            if ( v11 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x7Du);
          }
        }
      }
    }
  }
  return v1;
}

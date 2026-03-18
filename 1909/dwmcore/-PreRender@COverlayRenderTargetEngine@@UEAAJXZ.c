/*
 * XREFs of ?PreRender@COverlayRenderTargetEngine@@UEAAJXZ @ 0x1801A3430
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007FDD0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?EnsureRenderTarget@COverlayRenderTargetEngine@@IEAAJXZ @ 0x1801A2F84 (-EnsureRenderTarget@COverlayRenderTargetEngine@@IEAAJXZ.c)
 */

__int64 __fastcall COverlayRenderTargetEngine::PreRender(COverlayRenderTargetEngine *this)
{
  unsigned int v1; // ebx
  signed int v3; // eax
  __int64 v4; // rcx
  signed int v5; // eax
  __int64 v6; // rcx
  signed int v7; // eax
  __int64 v8; // rcx
  signed int v9; // eax
  __int64 v10; // rcx
  signed int v11; // eax
  __int64 v12; // rcx
  char v14; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_BYTE *)this + 132) )
  {
    v3 = COverlayRenderTargetEngine::EnsureRenderTarget((COverlayRenderTargetEngine *)((char *)this - 64));
    v1 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x75u, 0LL);
    }
    else
    {
      v5 = CVisualTree::PreCompute(*((_QWORD *)this + 7), 0LL);
      v1 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x77u, 0LL);
      }
      else
      {
        v7 = (*(__int64 (__fastcall **)(COverlayRenderTargetEngine *, char *))(*(_QWORD *)this + 56LL))(this, &v14);
        v1 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x7Cu, 0LL);
        }
        else if ( v14 )
        {
          v9 = (*(__int64 (__fastcall **)(COverlayRenderTargetEngine *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(
                 this,
                 0LL,
                 0LL);
          v1 = v9;
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x80u, 0LL);
          }
          else
          {
            v11 = (*(__int64 (__fastcall **)(COverlayRenderTargetEngine *, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL);
            v1 = v11;
            if ( v11 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x81u, 0LL);
          }
        }
      }
    }
  }
  return v1;
}

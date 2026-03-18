/*
 * XREFs of ?EnsureDirtyRegion@CHwndRenderTarget@@IEAAJXZ @ 0x1801A7774
 * Callers:
 *     ?PreRender@CHwndRenderTarget@@UEAAJXZ @ 0x1800C3440 (-PreRender@CHwndRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007FDD0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::EnsureDirtyRegion(CHwndRenderTarget *this)
{
  unsigned int v1; // ebx
  signed int v3; // eax
  __int64 v4; // rcx
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  if ( !*((_QWORD *)this + 24) )
  {
    if ( *((_QWORD *)this + 15) )
    {
      (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 22) + 48LL))(*((_QWORD *)this + 22), &v6);
      v3 = CVisualTree::PreCompute(*((_QWORD *)this + 15), &v6);
      v1 = v3;
      if ( v3 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0xA32u, 0LL);
    }
    else
    {
      v1 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x88982F04, 0xA38u, 0LL);
    }
  }
  return v1;
}

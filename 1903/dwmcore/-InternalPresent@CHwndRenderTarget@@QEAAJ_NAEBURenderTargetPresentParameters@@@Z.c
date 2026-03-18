/*
 * XREFs of ?InternalPresent@CHwndRenderTarget@@QEAAJ_NAEBURenderTargetPresentParameters@@@Z @ 0x180049788
 * Callers:
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x180049700 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801A5FB0 (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InEarlyWakeUpCompositionMode@CHwndRenderTarget@@AEAA_NXZ @ 0x1800EA954 (-InEarlyWakeUpCompositionMode@CHwndRenderTarget@@AEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::InternalPresent(
        CHwndRenderTarget *this,
        __int64 a2,
        const struct RenderTargetPresentParameters *a3)
{
  __int64 v3; // rax
  const struct RenderTargetPresentParameters *v4; // rbp
  char v5; // si
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // r9d
  unsigned __int64 v13; // rdi
  __int64 v14; // rax

  v3 = *((_QWORD *)this + 21);
  v4 = a3;
  v5 = a2;
  v7 = 0;
  if ( *(_BYTE *)(v3 + 313)
    && *(_BYTE *)(v3 + 314)
    && !*((_BYTE *)this + 859)
    && !CHwndRenderTarget::InEarlyWakeUpCompositionMode(this) )
  {
    v5 = 1;
  }
  if ( (*((_BYTE *)this + 858) || v5 || *((_BYTE *)this + 857)) && !*((_BYTE *)this + 865) )
  {
    v8 = *((_QWORD *)this + 106);
    if ( !v8
      || (((*(_QWORD *)(v8 + 8440) - *(_QWORD *)(v8 + 8432)) & 0xFFFFFFFFFFFFFF00uLL) == 0 || !*(_BYTE *)(v8 + 13435))
      && ((v9 = *(_QWORD *)(v8 + 13304)) == 0 || !*(_BYTE *)(v9 + 99) || *(_BYTE *)(v9 + 97)) )
    {
      v10 = *((_QWORD *)this + 22);
      *((_BYTE *)this + 858) = 0;
      if ( v10 )
      {
        LOBYTE(a3) = *((_BYTE *)this + 861);
        LOBYTE(a2) = *((_BYTE *)this + 857);
        v7 = (*(__int64 (__fastcall **)(__int64, __int64, const struct RenderTargetPresentParameters *, const struct RenderTargetPresentParameters *))(*(_QWORD *)v10 + 232LL))(
               v10,
               a2,
               a3,
               v4);
        v12 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v7, 0x1A3u, 0LL);
          goto LABEL_28;
        }
        if ( *((_BYTE *)this + 859) )
        {
          v13 = (unsigned int)(v7 - 142213121);
          if ( (unsigned int)v13 > 0x2E || (v11 = 0x400000000201LL, !_bittest64(&v11, v13)) )
            v12 = 142213129;
        }
        v7 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v12, 0x1A5u, 0LL);
        v14 = *((_QWORD *)this + 106);
        if ( v14 )
          *(_BYTE *)(v14 + 13438) = 0;
      }
      *((_QWORD *)this + 66) = *(_QWORD *)(*((_QWORD *)this + 2) + 384LL);
    }
  }
  *((_BYTE *)this + 865) = 0;
LABEL_28:
  *((_BYTE *)this + 857) = 0;
  return CHwndRenderTarget::HandleWindowErrors(this, v7);
}

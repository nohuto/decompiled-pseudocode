/*
 * XREFs of ?InternalPresent@CHwndRenderTarget@@QEAAJ_NAEBURenderTargetPresentParameters@@@Z @ 0x18004D1D8
 * Callers:
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x18004D150 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015FCF0 (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::InternalPresent(
        CHwndRenderTarget *this,
        __int64 a2,
        const struct RenderTargetPresentParameters *a3)
{
  __int64 v4; // rcx
  char v5; // al
  int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  const struct RenderTargetPresentParameters *v10; // r9
  __int64 v11; // rcx
  int v12; // r9d
  __int64 v13; // rax
  unsigned __int64 v15; // rdi

  v4 = *((_QWORD *)this + 21);
  v5 = a2;
  v6 = 0;
  if ( *(_BYTE *)(v4 + 321) )
  {
    if ( *(_BYTE *)(v4 + 322) )
    {
      v5 = a2;
      if ( !*((_BYTE *)this + 859) )
        v5 = 1;
    }
  }
  if ( (*((_BYTE *)this + 858) || v5 || *((_BYTE *)this + 857)) && !*((_BYTE *)this + 865) )
  {
    v7 = *((_QWORD *)this + 106);
    if ( !v7
      || (((*(_QWORD *)(v7 + 8440) - *(_QWORD *)(v7 + 8432)) & 0xFFFFFFFFFFFFFF00uLL) == 0 || !*(_BYTE *)(v7 + 13419))
      && ((v8 = *(_QWORD *)(v7 + 13288)) == 0 || !*(_BYTE *)(v8 + 86) || *(_BYTE *)(v8 + 84)) )
    {
      v9 = *((_QWORD *)this + 22);
      *((_BYTE *)this + 858) = 0;
      if ( v9 )
      {
        v10 = a3;
        LOBYTE(a3) = *((_BYTE *)this + 861);
        LOBYTE(a2) = *((_BYTE *)this + 857);
        v6 = (*(__int64 (__fastcall **)(__int64, __int64, const struct RenderTargetPresentParameters *, const struct RenderTargetPresentParameters *))(*(_QWORD *)v9 + 232LL))(
               v9,
               a2,
               a3,
               v10);
        v12 = v6;
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v6, 0x19Eu);
          goto LABEL_19;
        }
        if ( *((_BYTE *)this + 859) )
        {
          v15 = (unsigned int)(v6 - 142213121);
          if ( (unsigned int)v15 > 0x2E || (v11 = 0x400000000201LL, !_bittest64(&v11, v15)) )
            v12 = 142213129;
        }
        v6 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v12, 0x1A0u);
        v13 = *((_QWORD *)this + 106);
        if ( v13 )
          *(_BYTE *)(v13 + 13422) = 0;
      }
      *((_QWORD *)this + 66) = *(_QWORD *)(*((_QWORD *)this + 2) + 368LL);
    }
  }
  *((_BYTE *)this + 865) = 0;
LABEL_19:
  *((_BYTE *)this + 857) = 0;
  return CHwndRenderTarget::HandleWindowErrors(this, v6);
}

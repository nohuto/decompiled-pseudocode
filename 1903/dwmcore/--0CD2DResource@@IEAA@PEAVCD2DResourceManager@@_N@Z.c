/*
 * XREFs of ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x1800B3E54
 * Callers:
 *     ??0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x1800B3DC4 (--0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_N@Z.c)
 *     ?Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z @ 0x18016A39C (-Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z.c)
 *     ?Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@PEAPEAV1@@Z @ 0x18016A518 (-Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@.c)
 *     ?Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z @ 0x18016AD9C (-Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z.c)
 *     ?Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAPEAV1@@Z @ 0x18016B00C (-Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAP.c)
 *     ??0CD2DPrimitiveProperties@@IEAA@PEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x18016B4C4 (--0CD2DPrimitiveProperties@@IEAA@PEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitivePro.c)
 * Callees:
 *     <none>
 */

CD2DResource *__fastcall CD2DResource::CD2DResource(CD2DResource *this, struct CD2DResourceManager *a2, char a3)
{
  _QWORD *v3; // rdx
  _DWORD *v4; // rax
  __int64 v5; // r8

  *((_QWORD *)this + 3) = a2;
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  v3 = (_QWORD *)((char *)this + 40);
  *((_BYTE *)this + 33) = a3;
  *((_DWORD *)this + 2) = 0;
  *((_BYTE *)this + 32) = 0;
  *((_QWORD *)this + 7) = (char *)this + 88;
  *((_QWORD *)this + 8) = (char *)this + 88;
  *((_DWORD *)this + 18) = 2;
  *(_QWORD *)((char *)this + 76) = 2LL;
  v4 = (_DWORD *)*((_QWORD *)this + 3);
  v5 = *(_QWORD *)v4;
  if ( *(_DWORD **)(*(_QWORD *)v4 + 8LL) != v4 )
    __fastfail(3u);
  *v3 = v5;
  *((_QWORD *)this + 6) = v4;
  *(_QWORD *)(v5 + 8) = v3;
  *(_QWORD *)v4 = v3;
  *((_BYTE *)this + 32) = 1;
  if ( *((_BYTE *)this + 33) )
    ++v4[4];
  return this;
}

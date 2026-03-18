/*
 * XREFs of ?SetRenderTransform@CCachedVisualImage@@QEAAJAEBU_D3DMATRIX@@@Z @ 0x1801C9768
 * Callers:
 *     ?ProcessSetTransformMatrix@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_SNAPSHOT_SETTRANSFORMMATRIX@@@Z @ 0x180218350 (-ProcessSetTransformMatrix@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_SNAPSHOT_SETTRANSFO.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CCachedVisualImage::SetRenderTransform(CCachedVisualImage *this, const struct _D3DMATRIX *a2)
{
  _DWORD *v2; // r8
  unsigned int v3; // edi
  _DWORD *v6; // rax
  __int64 v7; // rcx
  __int128 v8; // xmm8
  D3DVALUE _11; // eax
  __int128 v10; // xmm4
  __int128 v11; // xmm0
  D3DVALUE _44; // xmm14_4
  D3DVALUE _43; // xmm13_4
  D3DVALUE _42; // xmm12_4

  v2 = (_DWORD *)*((_QWORD *)this + 27);
  v3 = 0;
  if ( v2
    || ((v6 = operator new(0x44uLL), (v2 = v6) == 0LL) ? (v2 = 0LL) : (_DWORD *)(v6[16] = 0),
        (*((_QWORD *)this + 27) = v2) != 0LL) )
  {
    v8 = *(_OWORD *)&a2->_32;
    _11 = a2->_11;
    v10 = *(_OWORD *)&a2->_22;
    v11 = *(_OWORD *)&a2->_12;
    _44 = a2->_44;
    _43 = a2->_43;
    _42 = a2->_42;
    v2[16] = 0;
    *(_OWORD *)(v2 + 1) = v11;
    *(D3DVALUE *)v2 = _11;
    *(_OWORD *)(v2 + 5) = v10;
    *(_OWORD *)(v2 + 9) = v8;
    *((D3DVALUE *)v2 + 13) = _42;
    *((D3DVALUE *)v2 + 14) = _43;
    *((D3DVALUE *)v2 + 15) = _44;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x8007000E, 0x80Eu, 0LL);
  }
  return v3;
}

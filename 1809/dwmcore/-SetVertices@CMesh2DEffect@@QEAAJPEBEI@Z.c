/*
 * XREFs of ?SetVertices@CMesh2DEffect@@QEAAJPEBEI@Z @ 0x180232FD8
 * Callers:
 *     ??$BlobSetter@P8CMesh2DEffect@@EAAJPEBEI@Z$H?SetVertices@1@QEAAJ0I@ZA@UID2D1EffectImpl@@@@YAJPEAUIUnknown@@PEBEI@Z @ 0x180232550 (--$BlobSetter@P8CMesh2DEffect@@EAAJPEBEI@Z$H-SetVertices@1@QEAAJ0I@ZA@UID2D1EffectImpl@@@@YAJPEA.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 *     ?EnsureVertexBuffer@CMesh2DEffect@@IEAAJPEBVCD3DVertexXYZDUV2@@I@Z @ 0x180232914 (-EnsureVertexBuffer@CMesh2DEffect@@IEAAJPEBVCD3DVertexXYZDUV2@@I@Z.c)
 */

__int64 __fastcall CMesh2DEffect::SetVertices(CMesh2DEffect *this, const unsigned __int8 *Src, size_t Size)
{
  size_t v3; // rdi
  unsigned int v6; // edi
  int v7; // r9d
  void *v8; // rcx
  void *v9; // rax
  int v10; // eax
  unsigned int v12; // [rsp+20h] [rbp-18h]

  v3 = (unsigned int)Size;
  if ( (Size & 0x1F) != 0 )
  {
    v6 = -2147024809;
    v12 = 384;
LABEL_3:
    v7 = v6;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v7, v12);
    WPF::ProcessHeapImpl::Free(*((void **)this + 21));
    *((_QWORD *)this + 21) = 0LL;
    *((_DWORD *)this + 41) = 0;
    return v6;
  }
  v8 = (void *)*((_QWORD *)this + 21);
  if ( v8 )
  {
    WPF::ProcessHeapImpl::Free(v8);
    *((_QWORD *)this + 21) = 0LL;
  }
  *((_DWORD *)this + 41) = (unsigned int)v3 >> 5;
  v9 = operator new(saturated_mul((unsigned int)v3 >> 5, 0x20uLL));
  *((_QWORD *)this + 21) = v9;
  if ( !v9 )
  {
    v6 = -2147024882;
    v12 = 396;
    goto LABEL_3;
  }
  memcpy_0(v9, Src, v3);
  v10 = CMesh2DEffect::EnsureVertexBuffer(this, *((const struct CD3DVertexXYZDUV2 **)this + 21), *((_DWORD *)this + 41));
  v6 = v10;
  if ( v10 < 0 )
  {
    v12 = 407;
    v7 = v10;
    goto LABEL_10;
  }
  return v6;
}

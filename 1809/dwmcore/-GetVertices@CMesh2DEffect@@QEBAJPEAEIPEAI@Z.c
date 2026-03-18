/*
 * XREFs of ?GetVertices@CMesh2DEffect@@QEBAJPEAEIPEAI@Z @ 0x180232AF8
 * Callers:
 *     ??$BlobGetter@P8CMesh2DEffect@@EBAJPEAEIPEAI@Z$H?GetVertices@1@QEBAJ0I1@ZA@UID2D1EffectImpl@@@@YAJPEBUIUnknown@@PEAEIPEAI@Z @ 0x180232540 (--$BlobGetter@P8CMesh2DEffect@@EBAJPEAEIPEAI@Z$H-GetVertices@1@QEBAJ0I1@ZA@UID2D1EffectImpl@@@@Y.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 */

__int64 __fastcall CMesh2DEffect::GetVertices(
        CMesh2DEffect *this,
        unsigned __int8 *a2,
        unsigned int a3,
        unsigned int *a4)
{
  unsigned int v4; // r10d
  unsigned int v5; // ebx
  size_t v6; // rax
  size_t v9; // r8

  v4 = *((_DWORD *)this + 41);
  v5 = 0;
  v6 = a3;
  if ( a2 )
  {
    v9 = 32LL * v4;
    if ( v6 < v9 )
    {
      *a4 = 0;
      v5 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x1CBu);
      return v5;
    }
    if ( v4 )
    {
      memcpy_0(a2, *((const void **)this + 21), v9);
      v4 = *((_DWORD *)this + 41);
    }
  }
  *a4 = 32 * v4;
  return v5;
}

/*
 * XREFs of ??$BlobGetter@P8CMesh2DEffect@@EBAJPEAEIPEAI@Z$H?GetVertices@1@QEBAJ0I1@ZA@UID2D1EffectImpl@@@@YAJPEBUIUnknown@@PEAEIPEAI@Z @ 0x180232540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall BlobGetter<long (CMesh2DEffect::*)(unsigned char *,unsigned int,unsigned int *)const,{public: long CMesh2DEffect::GetVertices(unsigned char *,unsigned int,unsigned int *)const,0},ID2D1EffectImpl>(
        CMesh2DEffect *a1,
        unsigned __int8 *a2,
        unsigned int a3,
        unsigned int *a4)
{
  return CMesh2DEffect::GetVertices(a1, a2, a3, a4);
}

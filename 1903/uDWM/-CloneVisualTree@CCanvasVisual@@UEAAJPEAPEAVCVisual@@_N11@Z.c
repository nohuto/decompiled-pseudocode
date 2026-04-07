/*
 * XREFs of ?CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180024B50
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180023500 (-CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x180024E80 (-Create@CCanvasVisual@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CCanvasVisual::CloneVisualTree(CCanvasVisual *this, struct CVisual **a2)
{
  volatile signed __int32 *v2; // rbx
  int v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  void *v9; // [rsp+28h] [rbp-20h]
  struct CCanvasVisual *v10; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0LL;
  v10 = 0LL;
  if ( !*a2 )
  {
    v5 = CCanvasVisual::Create(&v10);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x50u, v9);
      v2 = (volatile signed __int32 *)v10;
      goto LABEL_7;
    }
    v2 = (volatile signed __int32 *)v10;
    *a2 = v10;
    if ( v2 )
    {
      _InterlockedIncrement(v2 + 2);
      v2 = (volatile signed __int32 *)v10;
    }
  }
  v7 = CRenderDataVisual::CloneVisualTree(this, a2);
  v6 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x59u, v9);
LABEL_7:
  if ( v2 )
    CBaseObject::Release((CBaseObject *)v2);
  return v6;
}

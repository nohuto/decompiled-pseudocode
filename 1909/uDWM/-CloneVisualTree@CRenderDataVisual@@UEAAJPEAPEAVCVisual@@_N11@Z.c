/*
 * XREFs of ?CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180023350
 * Callers:
 *     ?CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180024510 (-CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180028F40 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x1800AE8A0 (-CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z @ 0x180018130 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180021F8C (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x180025BC0 (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CRenderDataVisual::CloneVisualTree(CRenderDataVisual *this, struct CVisual **a2)
{
  CBaseObject *v2; // rax
  volatile signed __int32 *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  __int64 i; // rsi
  int v10; // eax
  void *v11; // [rsp+28h] [rbp-20h]
  CBaseObject *v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    v12 = *a2;
    _InterlockedIncrement((volatile signed __int32 *)v2 + 2);
LABEL_3:
    v5 = (volatile signed __int32 *)v12;
    goto LABEL_4;
  }
  v10 = CRenderDataVisual::Create(&v12);
  v7 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xA9u, v11);
    v5 = (volatile signed __int32 *)v12;
    goto LABEL_6;
  }
  v5 = (volatile signed __int32 *)v12;
  *a2 = v12;
  if ( v5 )
  {
    _InterlockedIncrement(v5 + 2);
    goto LABEL_3;
  }
LABEL_4:
  v6 = CVisual::CloneVisualTree(this, a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xB7u, v11);
  }
  else
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 68); i = (unsigned int)(i + 1) )
      CRenderDataVisual::AddInstruction(
        (CRenderDataVisual *)v5,
        *(struct CRenderDataInstruction **)(*((_QWORD *)this + 31) + 8 * i));
  }
LABEL_6:
  if ( v5 )
    CBaseObject::Release((CBaseObject *)v5);
  return v7;
}

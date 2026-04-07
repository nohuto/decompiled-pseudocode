/*
 * XREFs of ?CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x1800AE8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180023350 (-CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z @ 0x18008F4F4 (-Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CDesktopThumbnailCVIVisual::CloneVisualTree(CDesktopThumbnailCVIVisual *this, struct CVisual **a2)
{
  int v4; // eax
  unsigned int v5; // esi
  CBaseObject *v6; // rbx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  CBaseObject *v12; // [rsp+30h] [rbp-28h] BYREF
  struct CVisual *v13; // [rsp+38h] [rbp-20h] BYREF

  v12 = 0LL;
  v4 = CDesktopThumbnailCVIVisual::Create(&v12);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = v12;
    v13 = v12;
    v7 = CRenderDataVisual::CloneVisualTree(this, &v13);
    v5 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1F9u);
      goto LABEL_13;
    }
    *((_QWORD *)v6 + 37) = *((_QWORD *)this + 37);
    v8 = *((_QWORD *)this + 37);
    if ( v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      v6 = v12;
    }
    *((_QWORD *)v6 + 35) = *((_QWORD *)this + 35);
    v9 = *((_QWORD *)this + 35);
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v6 = v12;
    }
    *((_QWORD *)v6 + 38) = *((_QWORD *)this + 38);
    v10 = *((_QWORD *)this + 38);
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v6 = v12;
    }
    *a2 = v6;
    _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x1F2u);
  }
  v6 = v12;
LABEL_13:
  if ( v6 )
    CBaseObject::Release(v6);
  return v5;
}

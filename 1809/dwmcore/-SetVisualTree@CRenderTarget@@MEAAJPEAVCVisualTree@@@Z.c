/*
 * XREFs of ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180077950
 * Callers:
 *     ?SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180077790 (-SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ??1CRenderTarget@@MEAA@XZ @ 0x1800778A4 (--1CRenderTarget@@MEAA@XZ.c)
 *     ?SetVisualTree@CHwndRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180077910 (-SetVisualTree@CHwndRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?AddTreeClient@CVisualTree@@QEAAJPEAVIVisualTreeClient@@@Z @ 0x180077A14 (-AddTreeClient@CVisualTree@@QEAAJPEAVIVisualTreeClient@@@Z.c)
 *     ??$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z @ 0x1800921C4 (--$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRenderTarget::SetVisualTree(CRenderTarget *this, struct CVisualTree *a2)
{
  _QWORD *v2; // r14
  unsigned int v3; // edi
  __int64 v4; // r8
  int v7; // eax
  unsigned int v8; // ecx
  __int64 v10; // rdx
  char *v11; // r10
  __int64 v12; // r9
  __int64 i; // rcx

  v2 = (_QWORD *)((char *)this + 120);
  v3 = 0;
  v4 = *((_QWORD *)this + 15);
  if ( a2 != (struct CVisualTree *)v4 )
  {
    if ( v4 )
    {
      v10 = *(unsigned int *)(v4 + 1272);
      v11 = (char *)this + 72;
      v12 = *(_QWORD *)(v4 + 1248);
      for ( i = 0LL; (unsigned int)i < (unsigned int)v10; i = (unsigned int)(i + 1) )
      {
        if ( v11 == *(char **)(v12 + 8 * i) )
          break;
      }
      if ( (unsigned int)i < (unsigned int)v10 )
      {
        while ( (unsigned int)i < (int)v10 - 1 )
        {
          *(_QWORD *)(v12 + 8 * i) = *(_QWORD *)(v12 + 8LL * (unsigned int)(i + 1));
          i = (unsigned int)(i + 1);
          v10 = *(unsigned int *)(v4 + 1272);
        }
        *(_DWORD *)(v4 + 1272) = v10 - 1;
      }
      ReleaseInterface<CVisualTree>(v2, v10, v4, v12);
    }
    if ( a2 )
    {
      v7 = CVisualTree::AddTreeClient(a2, (CRenderTarget *)((char *)this + 72));
      v3 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x97u);
        return v3;
      }
      *v2 = a2;
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    }
    *((_BYTE *)this + 161) = 1;
  }
  return v3;
}

/*
 * XREFs of ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800AE950
 * Callers:
 *     ?SetVisualTree@CHwndRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800AE910 (-SetVisualTree@CHwndRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ??1CRenderTarget@@MEAA@XZ @ 0x1800DCE80 (--1CRenderTarget@@MEAA@XZ.c)
 *     ?SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800E70C0 (-SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?SetVisualTree@CLocalAppRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x18024F600 (-SetVisualTree@CLocalAppRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z @ 0x1800AD534 (--$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z.c)
 *     ?AddTreeClient@CVisualTree@@QEAAJPEAVIVisualTreeClient@@@Z @ 0x1800E73A4 (-AddTreeClient@CVisualTree@@QEAAJPEAVIVisualTreeClient@@@Z.c)
 */

__int64 __fastcall CRenderTarget::SetVisualTree(CRenderTarget *this, struct CVisualTree *a2)
{
  CDirtyRegion **v2; // r14
  unsigned int v3; // edi
  __int64 v4; // r8
  signed int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // edx
  char *v11; // r10
  __int64 v12; // r9
  __int64 i; // rcx

  v2 = (CDirtyRegion **)((char *)this + 120);
  v3 = 0;
  v4 = *((_QWORD *)this + 15);
  if ( a2 != (struct CVisualTree *)v4 )
  {
    if ( v4 )
    {
      v10 = *(_DWORD *)(v4 + 1304);
      v11 = (char *)this + 72;
      v12 = *(_QWORD *)(v4 + 1280);
      for ( i = 0LL; (unsigned int)i < v10; i = (unsigned int)(i + 1) )
      {
        if ( v11 == *(char **)(v12 + 8 * i) )
          break;
      }
      if ( (unsigned int)i < v10 )
      {
        while ( (unsigned int)i < v10 - 1 )
        {
          *(_QWORD *)(v12 + 8 * i) = *(_QWORD *)(v12 + 8LL * (unsigned int)(i + 1));
          i = (unsigned int)(i + 1);
          v10 = *(_DWORD *)(v4 + 1304);
        }
        *(_DWORD *)(v4 + 1304) = v10 - 1;
      }
      ReleaseInterface<CVisualTree>(v2);
    }
    if ( a2 )
    {
      v8 = CVisualTree::AddTreeClient(a2, (CRenderTarget *)((char *)this + 72));
      v3 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x96u, 0LL);
        return v3;
      }
      *v2 = a2;
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    }
    *((_BYTE *)this + 161) = 1;
  }
  return v3;
}

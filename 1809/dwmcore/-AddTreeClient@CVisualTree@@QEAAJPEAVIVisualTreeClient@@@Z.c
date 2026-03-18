/*
 * XREFs of ?AddTreeClient@CVisualTree@@QEAAJPEAVIVisualTreeClient@@@Z @ 0x180077A14
 * Callers:
 *     ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180077950 (-SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z @ 0x18020E860 (-SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisualTree::AddTreeClient(CVisualTree *this, struct IVisualTreeClient *a2)
{
  char *v2; // r10
  unsigned int v3; // eax
  unsigned int v4; // edx
  int v5; // ebx
  unsigned int v6; // ecx
  int v8; // eax
  struct IVisualTreeClient *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v2 = (char *)this + 1248;
  v3 = *((_DWORD *)this + 318);
  v4 = v3 + 1;
  v5 = v3 + 1 < v3 ? 0x80070216 : 0;
  if ( v3 + 1 < v3 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v5, 0xB5u);
  }
  else if ( v4 > *((_DWORD *)this + 317) )
  {
    v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 1248, 8, 1, &v9);
    v5 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v8, 0xC0u);
  }
  else
  {
    v6 = *((_DWORD *)this + 318);
    *(_QWORD *)(*(_QWORD *)v2 + 8LL * v3) = v9;
    *((_DWORD *)v2 + 6) = v4;
  }
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x51u);
  return (unsigned int)v5;
}

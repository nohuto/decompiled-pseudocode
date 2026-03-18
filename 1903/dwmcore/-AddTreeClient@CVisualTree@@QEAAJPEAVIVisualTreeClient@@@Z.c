/*
 * XREFs of ?AddTreeClient@CVisualTree@@QEAAJPEAVIVisualTreeClient@@@Z @ 0x1800E64F4
 * Callers:
 *     ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x18002E3D0 (-SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z @ 0x180247AD8 (-SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CVisualTree::AddTreeClient(CVisualTree *this, struct IVisualTreeClient *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  unsigned int v4; // ebx
  signed int v6; // eax
  __int64 v7; // rcx
  struct IVisualTreeClient *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v2 = *((_DWORD *)this + 326);
  v3 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80070216, 0xB8u, 0LL);
  }
  else
  {
    v4 = 0;
    if ( v3 <= *((_DWORD *)this + 325) )
    {
      *(_QWORD *)(*((_QWORD *)this + 160) + 8LL * v2) = v8;
      *((_DWORD *)this + 326) = v3;
      return v4;
    }
    v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 1280, 8, 1, &v8);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xC3u, 0LL);
  }
  if ( (v4 & 0x80000000) != 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v4, 0x4Fu, 0LL);
  return v4;
}

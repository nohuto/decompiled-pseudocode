/*
 * XREFs of ?NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x1800A0C60
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x1800A0F80 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 */

void __fastcall CCompositionSurfaceBitmap::NotifyUpdate(
        CCompositionSurfaceBitmap *this,
        char a2,
        char a3,
        char a4,
        const struct CRegion *a5,
        const struct ScrollOptimization *a6)
{
  char *v6; // rbx
  char *v7; // rsi
  unsigned int v11; // ebp

  v6 = 0LL;
  v7 = (char *)this - 72;
  v11 = 1;
  if ( a2 )
    CCompositionSurfaceBitmap::EnsureBitmapRealization((CCompositionSurfaceBitmap *)((char *)this - 72), 1);
  if ( a3 || a4 )
  {
    v11 = 0;
  }
  else
  {
    *((_QWORD *)this + 4) = a5;
    if ( a6 )
    {
      *(_OWORD *)((char *)this + 40) = *(_OWORD *)a6;
      *((_QWORD *)this + 7) = *((_QWORD *)a6 + 2);
      *((_DWORD *)this + 16) = *((_DWORD *)a6 + 6);
    }
    v6 = v7;
  }
  CResource::NotifyOnChanged(v7, v11, v6);
}

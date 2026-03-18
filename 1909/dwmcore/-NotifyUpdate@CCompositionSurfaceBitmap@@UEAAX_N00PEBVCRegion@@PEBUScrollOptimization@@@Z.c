/*
 * XREFs of ?NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x1800AB630
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x1800AB8E0 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 */

void __fastcall CCompositionSurfaceBitmap::NotifyUpdate(
        CCompositionSurfaceBitmap *this,
        char a2,
        char a3,
        char a4,
        const struct CRegion *a5,
        const struct ScrollOptimization *a6)
{
  char *v6; // rsi
  unsigned int v10; // edi

  v6 = (char *)this - 72;
  v10 = 1;
  if ( a2 )
    CCompositionSurfaceBitmap::EnsureBitmapRealization((CCompositionSurfaceBitmap *)((char *)this - 72), 1);
  if ( a3 || a4 )
  {
    v10 = 0;
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
  }
  CResource::NotifyOnChanged(v6, v10, v6);
}

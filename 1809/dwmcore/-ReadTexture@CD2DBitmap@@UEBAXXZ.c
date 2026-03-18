/*
 * XREFs of ?ReadTexture@CD2DBitmap@@UEBAXXZ @ 0x1802024E0
 * Callers:
 *     <none>
 * Callees:
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x1801E16E8 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 */

void __fastcall CD2DBitmap::ReadTexture(CD2DBitmap *this)
{
  struct ID3D11Texture2D *v1; // rcx

  v1 = (struct ID3D11Texture2D *)*((_QWORD *)this + 3);
  if ( v1 )
    DebugInspectTexture(v1, 0);
}

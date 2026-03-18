/*
 * XREFs of ?GetBitmapTexture@CHwTextureRenderTarget@@UEAAJPEAPEAVCD3DTexture@@@Z @ 0x1800CB790
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwTextureRenderTarget::GetBitmapTexture(CHwTextureRenderTarget *this, struct CD3DTexture **a2)
{
  struct CD3DTexture *v2; // rcx
  unsigned int v3; // ebx

  v2 = (struct CD3DTexture *)*((_QWORD *)this + 4);
  v3 = 0;
  if ( v2 )
  {
    *a2 = v2;
    (**(void (__fastcall ***)(struct CD3DTexture *))v2)(v2);
  }
  else
  {
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, 0x80004005, 0x23Cu, 0LL);
  }
  return v3;
}

/*
 * XREFs of ?GetBitmapTexture@CHwTextureRenderTarget@@UEAAJPEAPEAVCD3DTexture@@@Z @ 0x18006AB90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2147467259, 0x23Fu);
  }
  return v3;
}

/*
 * XREFs of ?GetAdapterLuid@CHwTextureRenderTarget@@UEBA?AU_LUID@@XZ @ 0x1800E7800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CHwTextureRenderTarget::GetAdapterLuid(CHwTextureRenderTarget *this, _QWORD *a2)
{
  struct _LUID result; // rax

  result = (struct _LUID)a2;
  *a2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 80LL) + 712LL);
  return result;
}

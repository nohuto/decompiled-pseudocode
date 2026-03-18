/*
 * XREFs of ?ShouldInvalidateHardwareProtectedResource@CD3DTexture@@UEBA_NXZ @ 0x180163A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CD3DTexture::ShouldInvalidateHardwareProtectedResource(CD3DTexture *this)
{
  return (*((_DWORD *)this + 42) & 0x80000) != 0;
}

/*
 * XREFs of ?IsVisible@CVisual@@QEBA_NXZ @ 0x18008D474
 * Callers:
 *     ?SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z @ 0x18000937C (-SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z.c)
 *     ?SwapVisual@UdwmDcompVisual@@CAJPEAVCVisual@@0@Z @ 0x1800B3920 (-SwapVisual@UdwmDcompVisual@@CAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::IsVisible(CVisual *this)
{
  bool result; // al
  float v2; // xmm2_4

  result = 0;
  if ( (*((_BYTE *)this + 84) & 4) != 0 && !*((_DWORD *)this + 22) )
  {
    v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)*((double *)this + 23)) & _xmm);
    return v2 >= 0.0000011920929;
  }
  return result;
}

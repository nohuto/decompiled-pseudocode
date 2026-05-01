/*
 * XREFs of ?GetBandId@CImmersiveApplicationWindow@@UEAAJPEAK@Z @ 0x18016E310
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180136190 (-ResultFromKnownLastError@@YAJXZ.c)
 */

signed int __fastcall CImmersiveApplicationWindow::GetBandId(CImmersiveApplicationWindow *this, unsigned int *a2)
{
  signed int result; // eax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0;
  if ( (unsigned int)GetWindowBand(*((_QWORD *)this + 2), &v4) )
  {
    result = 0;
  }
  else
  {
    result = ResultFromKnownLastError();
    if ( result < 0 )
      return result;
  }
  *a2 = v4;
  return result;
}

/*
 * XREFs of ?IsDynamicBitmap@CSubRectBitmapRealizationImageSource@@UEBA_NXZ @ 0x180259520
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CSubRectBitmapRealizationImageSource::IsDynamicBitmap(CSubRectBitmapRealizationImageSource *this)
{
  bool result; // al

  result = 0;
  if ( !*((_BYTE *)this + 8) )
  {
    *((_BYTE *)this + 8) = 1;
    result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 136LL))(*((_QWORD *)this + 2));
    *((_BYTE *)this + 8) = 0;
  }
  return result;
}

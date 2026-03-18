/*
 * XREFs of ?CanDrawToIntermediate@CSubRectBitmapRealizationImageSource@@UEAA_NXZ @ 0x180259090
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CSubRectBitmapRealizationImageSource::CanDrawToIntermediate(CSubRectBitmapRealizationImageSource *this)
{
  char result; // al

  result = 1;
  if ( !*((_BYTE *)this + 8) )
  {
    *((_BYTE *)this + 8) = 1;
    result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 112LL))(*((_QWORD *)this + 2));
    *((_BYTE *)this + 8) = 0;
  }
  return result;
}

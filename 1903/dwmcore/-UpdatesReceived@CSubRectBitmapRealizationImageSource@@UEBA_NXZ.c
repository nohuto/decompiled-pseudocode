/*
 * XREFs of ?UpdatesReceived@CSubRectBitmapRealizationImageSource@@UEBA_NXZ @ 0x18025AFA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CSubRectBitmapRealizationImageSource::UpdatesReceived(CSubRectBitmapRealizationImageSource *this)
{
  bool result; // al

  result = 0;
  if ( !*((_BYTE *)this + 8) )
  {
    *((_BYTE *)this + 8) = 1;
    result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 96LL))(*((_QWORD *)this + 2));
    *((_BYTE *)this + 8) = 0;
  }
  return result;
}

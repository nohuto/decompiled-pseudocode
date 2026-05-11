/*
 * XREFs of ??_GCSidebandDevice@@UEAAPEAXI@Z @ 0x1C00081A8
 * Callers:
 *     ??_ECSidebandDevice@@W7EAAPEAXI@Z @ 0x1C000C6F0 (--_ECSidebandDevice@@W7EAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

CSidebandDevice *__fastcall CSidebandDevice::`scalar deleting destructor'(CSidebandDevice *this, char a2)
{
  *(_QWORD *)this = &CSidebandDevice::`vftable'{for `ISidebandDevice'};
  *(_QWORD *)(*((_QWORD *)this + 5) + 152LL) = 0LL;
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
  if ( (a2 & 1) != 0 )
    ExFreePool(this);
  return this;
}

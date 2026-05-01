/*
 * XREFs of ??_GJointResizeAcc@@UEAAPEAXI@Z @ 0x1803D1A10
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 */

VARIANTARG *__fastcall JointResizeAcc::`scalar deleting destructor'(VARIANTARG *this, char a2)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&this[4]);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&this[3]);
  VariantClear(this + 2);
  this[1].decVal.Hi32 = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

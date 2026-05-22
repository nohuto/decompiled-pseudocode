/*
 * XREFs of _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::Create_::_1_::catch$20 @ 0x180135C5E
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180108AC0 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::Create_::_1_::catch_20(
        wil *a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = wil::ResultFromCaughtException(a1);
  return &loc_1801167DC;
}

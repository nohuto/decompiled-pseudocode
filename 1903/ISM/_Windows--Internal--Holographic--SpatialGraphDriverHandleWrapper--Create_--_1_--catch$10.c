/*
 * XREFs of _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::Create_::_1_::catch$10 @ 0x180153D7E
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x18015CEE0 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::Create_::_1_::catch_10(
        wil *a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 56) = wil::ResultFromCaughtException(a1);
  return &loc_180153D10;
}

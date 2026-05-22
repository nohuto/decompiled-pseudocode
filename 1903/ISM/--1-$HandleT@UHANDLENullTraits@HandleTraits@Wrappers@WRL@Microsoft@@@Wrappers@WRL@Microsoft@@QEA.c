/*
 * XREFs of ??1?$HandleT@UHANDLENullTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18009BE14
 * Callers:
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::PropertyUpdatedListenerThreadProcV2_::_1_::dtor$0 @ 0x18015C7CA (_Windows--Internal--Holographic--SpatialGraphDriverClient--PropertyUpdatedListenerThreadProcV2_-.c)
 * Callees:
 *     ?InternalClose@?$HandleT@UFileHandleTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x18009D870 (-InternalClose@-$HandleT@UFileHandleTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Mi.c)
 */

void **__fastcall Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::~HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>(
        _QWORD *a1)
{
  bool v1; // zf
  void **result; // rax
  int LastError; // eax

  v1 = a1[1] == 0LL;
  result = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::`vftable';
  *a1 = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::`vftable';
  if ( !v1 )
  {
    result = (void **)Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::FileHandleTraits>::InternalClose();
    if ( !(_BYTE)result )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      RaiseException(LastError, 1u, 0, 0LL);
      __debugbreak();
    }
    a1[1] = 0LL;
  }
  return result;
}

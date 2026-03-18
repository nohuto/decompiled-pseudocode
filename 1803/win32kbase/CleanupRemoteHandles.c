/*
 * XREFs of CleanupRemoteHandles @ 0x1C00A1430
 * Callers:
 *     xxxRemoteConnect @ 0x1C00A1760 (xxxRemoteConnect.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

__int64 __fastcall CleanupRemoteHandles(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[4] = 0LL;
  a1[3] = 0LL;
  v2 = a1[7];
  if ( v2 )
  {
    Win32FreePool(v2);
    a1[7] = 0LL;
  }
  if ( gThinwireFileObject )
  {
    ObfDereferenceObject(gThinwireFileObject);
    gThinwireFileObject = 0LL;
  }
  if ( gVideoFileObject )
  {
    ObfDereferenceObject(gVideoFileObject);
    gVideoFileObject = 0LL;
  }
  if ( gpRemoteBeepDevice )
  {
    ObfDereferenceObject(gpRemoteBeepDevice);
    gpRemoteBeepDevice = 0LL;
  }
  ghRemoteMouseChannel = 0LL;
  ghRemoteKeyboardChannel = 0LL;
  result = IsRemoteConnection();
  if ( (_DWORD)result )
  {
    result = IsRemoveInputDevicesSupported();
    if ( (int)result >= 0 )
      return RemoveInputDevices();
  }
  return result;
}

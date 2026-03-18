/*
 * XREFs of CleanupRemoteHandles @ 0x1C00A6FB0
 * Callers:
 *     xxxRemoteConnect @ 0x1C0063E60 (xxxRemoteConnect.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 */

__int64 __fastcall CleanupRemoteHandles(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  PVOID v5; // rcx
  __int64 result; // rax

  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[4] = 0LL;
  a1[3] = 0LL;
  v4 = a1[7];
  if ( v4 )
  {
    Win32FreePool(v4);
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
  v5 = gpRemoteBeepDevice;
  if ( gpRemoteBeepDevice )
  {
    ObfDereferenceObject(gpRemoteBeepDevice);
    gpRemoteBeepDevice = 0LL;
  }
  ghRemoteMouseChannel = 0LL;
  ghRemoteKeyboardChannel = 0LL;
  result = IsRemoteConnection(v5, a2, a3);
  if ( (_DWORD)result )
  {
    result = IsRemoveInputDevicesSupported();
    if ( (int)result >= 0 )
      return RemoveInputDevices();
  }
  return result;
}

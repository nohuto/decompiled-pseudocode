/*
 * XREFs of _CmCreateDeviceWorker @ 0x1406FE798
 * Callers:
 *     _CmCreateDevice @ 0x1406FE62C (_CmCreateDevice.c)
 * Callees:
 *     _CmOpenDeviceRegKey @ 0x1405C7EF0 (_CmOpenDeviceRegKey.c)
 *     _CmRaiseCreateEvent @ 0x1406FE840 (_CmRaiseCreateEvent.c)
 */

__int64 __fastcall CmCreateDeviceWorker(__int64 a1, __int64 a2, int a3, _QWORD *a4, bool *a5, __int16 a6)
{
  int v9; // ebx
  bool v10; // dl
  _DWORD v12[6]; // [rsp+40h] [rbp-18h] BYREF

  v12[0] = 0;
  if ( a6 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v9 = CmOpenDeviceRegKey(a1, a2, 16, 0, a3, 1, (__int64)a4, v12);
    if ( v9 >= 0 )
    {
      v10 = v12[0] == 1;
      *a5 = v12[0] == 1;
      if ( v10 )
        CmRaiseCreateEvent(a1, a2, 1LL, *a4);
    }
  }
  return (unsigned int)v9;
}

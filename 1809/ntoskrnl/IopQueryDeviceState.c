/*
 * XREFs of IopQueryDeviceState @ 0x1406EB078
 * Callers:
 *     PiProcessQueryDeviceState @ 0x1406EAEE4 (PiProcessQueryDeviceState.c)
 *     PiProcessCanceledRemoveForReset @ 0x140841238 (PiProcessCanceledRemoveForReset.c)
 *     PiRestartRemovalRelations @ 0x140841624 (PiRestartRemovalRelations.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     IopSynchronousCall @ 0x1405A3CE0 (IopSynchronousCall.c)
 */

__int64 __fastcall IopQueryDeviceState(struct _DEVICE_OBJECT *a1, _DWORD *a2)
{
  __int64 result; // rax
  _WORD v5[44]; // [rsp+30h] [rbp-58h] BYREF
  ULONG_PTR v6; // [rsp+A0h] [rbp+18h] BYREF

  v6 = 0LL;
  memset(v5, 0, 0x48uLL);
  v5[0] = 5147;
  result = IopSynchronousCall(a1, (__int64)v5, -1073741637, 0LL, &v6);
  if ( (int)result >= 0 )
  {
    if ( a2 )
      *a2 = v6;
  }
  return result;
}

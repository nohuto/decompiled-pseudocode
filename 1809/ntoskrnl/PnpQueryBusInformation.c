/*
 * XREFs of PnpQueryBusInformation @ 0x140701A58
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1406E51B4 (PiProcessNewDeviceNode.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopSynchronousCall @ 0x1405A3CE0 (IopSynchronousCall.c)
 *     PnpBusTypeGuidGetIndex @ 0x1406DBE84 (PnpBusTypeGuidGetIndex.c)
 */

__int64 __fastcall PnpQueryBusInformation(__int64 a1)
{
  struct _DEVICE_OBJECT *v2; // rcx
  int v3; // eax
  __int128 *v4; // rbx
  unsigned int v5; // esi
  _WORD v7[40]; // [rsp+30h] [rbp-58h] BYREF
  __int128 *v8; // [rsp+90h] [rbp+8h] BYREF

  v8 = 0LL;
  memset(v7, 0, 0x48uLL);
  v2 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v7[0] = 5403;
  v3 = IopSynchronousCall(v2, (__int64)v7, -1073741637, 0LL, (ULONG_PTR *)&v8);
  v4 = v8;
  v5 = v3;
  if ( v3 >= 0 )
  {
    *(_WORD *)(a1 + 464) = PnpBusTypeGuidGetIndex(v8);
    *(_DWORD *)(a1 + 456) = *((_DWORD *)v4 + 4);
    *(_DWORD *)(a1 + 460) = *((_DWORD *)v4 + 5);
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    *(_DWORD *)(a1 + 456) = -1;
    *(_WORD *)(a1 + 464) = -1;
    *(_DWORD *)(a1 + 460) = -16;
  }
  return v5;
}

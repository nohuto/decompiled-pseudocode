/*
 * XREFs of PiProcessCanceledRemoveForReset @ 0x140841238
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1406F0A30 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     IopQueryDeviceState @ 0x1406EB078 (IopQueryDeviceState.c)
 *     IopEnumerateRelations @ 0x1406EF354 (IopEnumerateRelations.c)
 */

__int64 __fastcall PiProcessCanceledRemoveForReset(int a1, __int64 a2, unsigned int **a3, int *a4)
{
  ULONG_PTR v5; // r15
  unsigned int v8; // ebx
  __int64 v9; // rcx
  struct _DEVICE_OBJECT *v10; // rcx
  _DWORD *DeviceNode; // rdx
  struct _DEVICE_OBJECT *v12; // rcx
  __int64 v13; // rdx
  _QWORD v15[2]; // [rsp+30h] [rbp-10h] BYREF
  int v16; // [rsp+78h] [rbp+38h] BYREF
  __int64 v17; // [rsp+80h] [rbp+40h] BYREF

  v5 = a1;
  v17 = 1LL;
  v8 = 0;
  while ( IopEnumerateRelations(a3, (int *)&v17, v15, 0LL, 0LL) )
  {
    if ( v15[0] )
      v9 = *(_QWORD *)(*(_QWORD *)(v15[0] + 312LL) + 40LL);
    else
      v9 = 0LL;
    if ( v9 )
      *(_DWORD *)(v9 + 704) &= ~2u;
  }
  if ( **a3 == 1 )
  {
    v10 = *(struct _DEVICE_OBJECT **)(a2 + 152);
    if ( v10 )
      DeviceNode = v10->DeviceObjectExtension->DeviceNode;
    else
      DeviceNode = 0LL;
    if ( DeviceNode[75] == 788 )
      KeBugCheckEx(0xCAu, 0xEuLL, v5, *a4, (ULONG_PTR)a3);
    v10->Flags |= 0x4000000u;
    IopQueryDeviceState(v10, 0LL);
  }
  else if ( (*(_BYTE *)(*(_QWORD *)(a2 + 40) + 216LL) & 1) != 0 && *a4 == 5
         || (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 216LL) & 2) != 0 )
  {
    v17 = 1LL;
    while ( IopEnumerateRelations(a3, (int *)&v17, v15, &v16, 0LL) )
    {
      v12 = (struct _DEVICE_OBJECT *)v15[0];
      if ( v15[0] )
        v13 = *(_QWORD *)(*(_QWORD *)(v15[0] + 312LL) + 40LL);
      else
        v13 = 0LL;
      if ( v16 != 1 && *(_DWORD *)(v13 + 300) != 788 )
      {
        *(_DWORD *)(v15[0] + 48LL) |= 0x4000000u;
        IopQueryDeviceState(v12, 0LL);
      }
    }
  }
  else
  {
    return (unsigned int)-2147483608;
  }
  return v8;
}

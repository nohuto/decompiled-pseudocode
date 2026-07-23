/*
 * XREFs of PoFxRegisterInternalDevice @ 0x14086A420
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     PopFxRegisterDevice @ 0x140726430 (PopFxRegisterDevice.c)
 */

__int64 __fastcall PoFxRegisterInternalDevice(PDEVICE_OBJECT DeviceObject, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // r9d
  int v7; // ecx
  int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rax
  _QWORD v12[10]; // [rsp+48h] [rbp+7h] BYREF

  if ( DeviceObject && a2 && *(_DWORD *)a2 == 2 && (unsigned int)(*(_DWORD *)(a2 + 72) - 601) > 0xFFFFFDA5 )
  {
    memset(v12, 0, 0x48uLL);
    v6 = *(_DWORD *)(a2 + 88);
    v12[0] = *(_QWORD *)(a2 + 16);
    v12[1] = *(_QWORD *)(a2 + 24);
    v12[2] = *(_QWORD *)(a2 + 32);
    v12[3] = *(_QWORD *)(a2 + 40);
    v12[4] = *(_QWORD *)(a2 + 48);
    v12[5] = *(_QWORD *)(a2 + 56);
    v12[8] = *(_QWORD *)(a2 + 64);
    v7 = PopFxRegisterDevice(DeviceObject, (__int64)v12, a2 + 96, v6, *(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 8), a3);
    if ( v7 >= 0 )
    {
      if ( v12[8] )
      {
        v8 = *(_DWORD *)(a2 + 72);
        v9 = *a3;
        if ( v8 == -1 )
        {
          *(_DWORD *)(v9 + 896) = 0;
        }
        else
        {
          if ( !v8 )
            v8 = PopFxDirectedFxDefaultTimeout;
          *(_DWORD *)(v9 + 896) = v8;
        }
        _InterlockedOr((volatile signed __int32 *)(v9 + 808), 0x20u);
        v10 = *(_QWORD *)(v9 + 48);
        if ( v10 )
          *(_DWORD *)(v10 + 296) |= 0x40u;
      }
      if ( !v12[0] && !v12[1] && !v12[2] && !v12[3] && !v12[4] )
        _InterlockedOr((volatile signed __int32 *)(*a3 + 808LL), 1u);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}

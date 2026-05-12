/*
 * XREFs of StorpAdapterInitializePoFxPower @ 0x1C0024880
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E3C0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C00081B4 (RaidAllocatePool.c)
 *     RaidGetStorPoFxComponent @ 0x1C0016A94 (RaidGetStorPoFxComponent.c)
 *     RaidSetD3Cold @ 0x1C001D45C (RaidSetD3Cold.c)
 *     RaidStorPoFxComponentVersionAndSizeIsValid @ 0x1C0024AD8 (RaidStorPoFxComponentVersionAndSizeIsValid.c)
 *     RaidGetTotalStorPoFxDeviceSize @ 0x1C0024B00 (RaidGetTotalStorPoFxDeviceSize.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C0024BB0 (RaidRegisterForRuntimePowerManagement.c)
 *     RaidStorPoFxDeviceVersionAndSizeIsValid @ 0x1C0024F30 (RaidStorPoFxDeviceVersionAndSizeIsValid.c)
 *     memmove @ 0x1C002C080 (memmove.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 *     McTemplateK0pqtqq @ 0x1C00368DC (McTemplateK0pqtqq.c)
 */

__int64 __fastcall StorpAdapterInitializePoFxPower(__int64 a1, __int64 a2, bool *a3)
{
  __int64 v5; // rbx
  char v6; // al
  __int64 v7; // rdx
  char *StorPoFxComponent; // rax
  char *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int TotalStorPoFxDeviceSize; // r15d
  _QWORD *Pool; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rax
  unsigned __int8 v16; // dl
  int v17; // eax
  char v18; // dl
  int v19; // eax
  int v20; // r8d
  bool v21; // zf
  _QWORD *v22; // rcx
  int v23; // edx
  __int64 v25; // [rsp+78h] [rbp+10h] BYREF

  *a3 = 0;
  if ( !a2 )
    return 3238002694LL;
  v5 = **(_QWORD **)(a1 - 16);
  if ( !v5 )
    return 3238002694LL;
  v6 = *(_BYTE *)(v5 + 108);
  if ( (v6 & 0x10) != 0 )
    return 3221225473LL;
  if ( *(_QWORD *)(v5 + 5152) )
  {
    *a3 = (v6 & 8) != 0;
    return 0LL;
  }
  if ( !(unsigned __int8)RaidStorPoFxDeviceVersionAndSizeIsValid(a2) )
    return 3238002694LL;
  if ( *(_DWORD *)(v7 + 8) != 1 )
    return 3238002694LL;
  StorPoFxComponent = RaidGetStorPoFxComponent((int *)a2, 0);
  v9 = StorPoFxComponent;
  if ( !StorPoFxComponent
    || !(unsigned __int8)RaidStorPoFxComponentVersionAndSizeIsValid(StorPoFxComponent)
    || (unsigned int)(*((_DWORD *)v9 + 2) - 1) > 7 )
  {
    return 3238002694LL;
  }
  v11 = *((_QWORD *)v9 + 2) - 0x481F895FDCAF9C10LL;
  if ( *((_QWORD *)v9 + 2) == 0x481F895FDCAF9C10LL )
    v11 = *((_QWORD *)v9 + 3) - 0x3356F5D2CED492A4LL;
  if ( v11 )
    return 3238002694LL;
  v25 &= v10;
  if ( (int)RaidRegisterForRuntimePowerManagement(*(_QWORD *)(v5 + 8), a2, v5, &v25) < 0 )
    return 3238002689LL;
  TotalStorPoFxDeviceSize = RaidGetTotalStorPoFxDeviceSize(a2);
  Pool = RaidAllocatePool(NonPagedPoolNx, TotalStorPoFxDeviceSize + 80, 0x4F506152u, *(_QWORD *)(v5 + 8));
  v14 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, TotalStorPoFxDeviceSize + 80);
    v15 = v25;
    *((_DWORD *)v14 + 4) = 0;
    *((_DWORD *)v14 + 5) |= 3u;
    *v14 = v15;
    v14[1] = v14 + 10;
    memmove(v14 + 10, (const void *)a2, TotalStorPoFxDeviceSize);
    v16 = *(_BYTE *)(v5 + 108);
    if ( ((v16 >> 2) & ((*(_BYTE *)(a2 + 12) & 4) != 0)) != 0
      && (v17 = RaidSetD3Cold(*(struct _DEVICE_OBJECT **)(v5 + 8), 1), v16 = *(_BYTE *)(v5 + 108), v17 >= 0) )
    {
      *(_BYTE *)(v5 + 108) = v16 | 8;
      *a3 = 1;
      v18 = *(_BYTE *)(v5 + 108);
    }
    else
    {
      v18 = v16 & 0xF7;
      *(_BYTE *)(v5 + 108) = v18;
    }
    v19 = *(_DWORD *)(a2 + 12);
    if ( (v19 & 8) != 0 )
    {
      *(_BYTE *)(v5 + 108) = v18 | 0x20;
      v19 = *(_DWORD *)(a2 + 12);
    }
    if ( (v19 & 0x200) != 0 )
    {
      *(_BYTE *)(v5 + 109) |= 0x40u;
      v19 = *(_DWORD *)(a2 + 12);
    }
    if ( (v19 & 0x40) != 0 )
    {
      *(_BYTE *)(v5 + 109) |= 4u;
      v19 = *(_DWORD *)(a2 + 12);
    }
    if ( (v19 & 0x400) != 0 )
      *(_BYTE *)(v5 + 109) |= 0x80u;
    PoFxSetComponentLatency(*v14, 0LL, -1LL);
    PoFxSetComponentResidency(*v14, 0LL, -1LL);
    if ( (*(_BYTE *)(v5 + 108) & 0x40) == 0 && *(_DWORD *)a2 >= 2u && (*(_DWORD *)(a2 + 12) & 0x10) != 0 )
      *(_DWORD *)(v5 + 5168) = *(_DWORD *)(a2 + 16);
    PoFxSetDeviceIdleTimeout(*v14, 10000LL * *(unsigned int *)(v5 + 5168));
    v21 = StorEtwLoggingEnabled == 0;
    v22 = v14;
    *(_QWORD *)(v5 + 5152) = v14;
    if ( !v21 )
    {
      v23 = *(_DWORD *)(v5 + 56);
      if ( v23 != -1 && (byte_1C00617E2 & 0x10) != 0 )
      {
        McTemplateK0pqtqq(
          (*(unsigned __int8 *)(v5 + 108) >> 3) & 1,
          v23,
          v20,
          *v14,
          v23,
          (*(_BYTE *)(v5 + 108) & 8) != 0,
          *(_DWORD *)(v5 + 5168),
          *((_DWORD *)v9 + 2));
        v22 = *(_QWORD **)(v5 + 5152);
      }
    }
    PoFxStartDevicePowerManagement(*v22);
    return 0LL;
  }
  PoFxUnregisterDevice(v25);
  return 3238002691LL;
}

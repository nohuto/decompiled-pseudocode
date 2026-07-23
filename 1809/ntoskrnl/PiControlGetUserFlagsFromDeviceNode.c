/*
 * XREFs of PiControlGetUserFlagsFromDeviceNode @ 0x14059D36C
 * Callers:
 *     PiControlGetSetDeviceStatus @ 0x14059CD40 (PiControlGetSetDeviceStatus.c)
 * Callees:
 *     PipIsDevNodeDNStarted @ 0x140007294 (PipIsDevNodeDNStarted.c)
 *     PipAreDriversLoaded @ 0x1400072C0 (PipAreDriversLoaded.c)
 *     _CmIsRootEnumeratedDevice @ 0x14059D4CC (_CmIsRootEnumeratedDevice.c)
 */

int __fastcall PiControlGetUserFlagsFromDeviceNode(__int64 a1, int *a2)
{
  BOOL IsDevNodeDNStarted; // eax
  int v5; // r8d
  int v6; // ebx
  char IsRootEnumeratedDevice; // al
  int v8; // r10d
  int v9; // r9d
  int v10; // edx
  int v11; // r8d
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // edx
  int v17; // ecx
  int v18; // edx
  int v19; // r8d
  int v20; // ecx
  int v21; // edx
  int v22; // ecx
  int result; // eax

  PipAreDriversLoaded(a1);
  IsDevNodeDNStarted = PipIsDevNodeDNStarted(a1);
  v6 = v5 | 8;
  if ( !IsDevNodeDNStarted )
    v6 = v5;
  IsRootEnumeratedDevice = CmIsRootEnumeratedDevice(*(PCWSTR *)(a1 + 48));
  v8 = *(_DWORD *)(a1 + 400);
  v9 = *(_DWORD *)(a1 + 396);
  v10 = v6 | 1;
  if ( !IsRootEnumeratedDevice )
    v10 = v6;
  v11 = v10 | 0x4000;
  if ( (*(_DWORD *)(a1 + 560) & 0x10) == 0 )
    v11 = v10;
  v12 = v11 | 0x40000;
  if ( (v8 & 1) == 0 )
    v12 = v11;
  v13 = v12 | 0x40000000;
  if ( (v8 & 2) == 0 )
    v13 = v12;
  v14 = v13 | 0x2000000;
  if ( (v8 & 0x40) == 0 )
    v14 = v13;
  v15 = v14 | 0x100;
  if ( (v8 & 4) == 0 )
    v15 = v14;
  v16 = v15 | 0x8000;
  if ( (v9 & 0x4000) == 0 )
    v16 = v15;
  v17 = v16 | 0x400;
  if ( (v9 & 0x2000) == 0 )
    v17 = v16;
  v18 = v17 | 0x40;
  if ( (*(_DWORD *)(a1 + 396) & 0x100000) == 0 )
    v18 = v17;
  v19 = v18 | 0x1000;
  if ( (v9 & 0x1000) == 0 )
    v19 = v18;
  v20 = v19 | 0x200;
  if ( (v9 & 0x200000) == 0 )
    v20 = v19;
  v21 = v20 | 0x2000;
  if ( *(_DWORD *)(a1 + 600) )
    v21 = v20;
  v22 = v21 | 0x10000;
  if ( (v8 & 0x100) == 0 )
    v22 = v21;
  result = v22 | 0x20000;
  if ( (v8 & 0x200) == 0 )
    result = v22;
  *a2 = result;
  return result;
}

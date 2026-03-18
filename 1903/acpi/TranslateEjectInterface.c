/*
 * XREFs of TranslateEjectInterface @ 0x1C00A04E8
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C000B2A0 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIGet @ 0x1C0002200 (ACPIGet.c)
 *     PnpBiosResourcesToNtResources @ 0x1C0095CE4 (PnpBiosResourcesToNtResources.c)
 *     BuildTranslatorRanges @ 0x1C00B53FC (BuildTranslatorRanges.c)
 */

__int64 __fastcall TranslateEjectInterface(ULONG_PTR a1, __int64 a2)
{
  _QWORD *PoolWithTag; // rsi
  PVOID v3; // rdi
  __int64 *DeviceExtension; // r15
  __int64 v7; // r14
  int v8; // eax
  int v9; // ebx
  unsigned int v10; // r9d
  unsigned int v11; // r8d
  char *v12; // rdx
  PVOID P[9]; // [rsp+50h] [rbp-48h] BYREF
  char v15; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v16; // [rsp+B0h] [rbp+18h]
  PVOID v17; // [rsp+B8h] [rbp+20h] BYREF

  PoolWithTag = 0LL;
  v3 = 0LL;
  P[0] = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  DeviceExtension = (__int64 *)ACPIInternalGetDeviceExtension(a1);
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 24LL);
  if ( (int)ACPIGet(DeviceExtension, 1397900127, 268501000, 0LL, 0, 0LL, 0LL, (__int64)P, (__int64)&v15) < 0 )
    goto LABEL_9;
  v8 = PnpBiosResourcesToNtResources(a1, (ULONG_PTR)P[0], 1LL, (unsigned int **)&v17);
  v3 = v17;
  v9 = v8;
  if ( v8 < 0 )
    goto LABEL_13;
  if ( !v17 || (v10 = *((_DWORD *)v17 + 9), v11 = 0, !v10) )
  {
LABEL_9:
    v9 = *(_DWORD *)(a2 + 48);
    goto LABEL_10;
  }
  v12 = (char *)v17 + 44;
  while ( 1 )
  {
    if ( *(v12 - 3) == -127 && (*(_WORD *)v12 & 0x6000) != 0 )
    {
      v16 = *((_QWORD *)v12 + 1);
      if ( *((_DWORD *)v12 + 1) != *((unsigned __int8 *)v17 + 32 * v11 + 9) || v16 != *(_QWORD *)(v12 - 20) )
        break;
    }
    ++v11;
    v12 += 32;
    if ( v11 >= v10 )
      goto LABEL_9;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x58706341u);
  if ( !PoolWithTag )
  {
    v9 = -1073741670;
    goto LABEL_13;
  }
  *PoolWithTag = DeviceExtension[89];
  PoolWithTag[3] = v3;
  v9 = BuildTranslatorRanges(PoolWithTag, PoolWithTag + 1, PoolWithTag + 2);
  if ( v9 >= 0 )
  {
    *(_DWORD *)v7 = 65584;
    *(_QWORD *)(v7 + 16) = PciConfigPinToLine;
    v9 = 0;
    *(_QWORD *)(v7 + 24) = PciConfigPinToLine;
    *(_QWORD *)(v7 + 32) = &TranslateBridgeResources;
    *(_QWORD *)(v7 + 40) = &TranslateBridgeRequirements;
    *(_QWORD *)(v7 + 8) = PoolWithTag;
LABEL_10:
    if ( v9 >= 0 )
      goto LABEL_13;
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_13:
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)v9;
}

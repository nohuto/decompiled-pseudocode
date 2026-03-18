/*
 * XREFs of ACPIInternalSetSpare @ 0x1C009580C
 * Callers:
 *     ACPIFilterIrpQueryResourceRequirements @ 0x1C0095310 (ACPIFilterIrpQueryResourceRequirements.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C0095390 (ACPIBusIrpQueryResourceRequirements.c)
 * Callees:
 *     ACPIInternalClearFlags @ 0x1C0001854 (ACPIInternalClearFlags.c)
 *     ACPIQuerySpareDsm @ 0x1C00B0034 (ACPIQuerySpareDsm.c)
 */

__int64 __fastcall ACPIInternalSetSpare(__int64 a1)
{
  __int64 *v1; // rdi
  unsigned int v3; // ebx
  char v4; // bp
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  char Data; // [rsp+70h] [rbp+8h] BYREF
  int v10; // [rsp+78h] [rbp+10h] BYREF
  ULONG Type; // [rsp+80h] [rbp+18h] BYREF
  ULONG RequiredSize; // [rsp+88h] [rbp+20h] BYREF

  v1 = (__int64 *)(a1 + 8);
  v3 = 0;
  v4 = 0;
  ACPIInternalClearFlags((void *)(a1 + 8), 0x4000LL);
  v5 = *v1;
  if ( (*v1 & 0x2000000000LL) != 0 )
  {
    v4 = 1;
    if ( (int)ACPIQuerySpareDsm(a1, &v10) >= 0 && (v10 & 3) == 3 )
      *v1 |= 0x4000uLL;
    v7 = *v1;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 744);
    if ( v6 && (*(_DWORD *)(v6 + 8) & 0x4000LL) != 0 )
    {
      LOWORD(v7) = v5 | 0x4000;
      *v1 = v5 | 0x4000;
    }
    else
    {
      v7 = *v1;
      if ( v6 && (*(_QWORD *)(v6 + 8) & 0x2000000000LL) != 0 )
        v4 = 1;
    }
  }
  if ( (v7 & 0x4000) != 0 )
  {
    Data = -1;
    return (unsigned int)IoSetDevicePropertyData(
                           *(PDEVICE_OBJECT *)(a1 + 736),
                           &DEVPKEY_Spare_Device,
                           0,
                           0,
                           0x11u,
                           1u,
                           &Data);
  }
  if ( v4
    && IoGetDevicePropertyData(
         *(PDEVICE_OBJECT *)(a1 + 736),
         &DEVPKEY_Spare_Device,
         0,
         0,
         1u,
         &Data,
         &RequiredSize,
         &Type) >= 0 )
  {
    Data = 0;
    return (unsigned int)IoSetDevicePropertyData(
                           *(PDEVICE_OBJECT *)(a1 + 736),
                           &DEVPKEY_Spare_Device,
                           0,
                           0,
                           0x11u,
                           1u,
                           &Data);
  }
  return v3;
}

/*
 * XREFs of AcpiQueryPciDeviceChassisLabel @ 0x1C00938B8
 * Callers:
 *     ACPIBusIrpDeviceEnumerated @ 0x1C0094D90 (ACPIBusIrpDeviceEnumerated.c)
 * Callees:
 *     ACPIInternalSetFlags @ 0x1C0001884 (ACPIInternalSetFlags.c)
 *     AMLIFreeDataBuffs @ 0x1C000A45C (AMLIFreeDataBuffs.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0093754 (ACPIAmliEvaluateDsm.c)
 *     ACPIInternalPciDeviceLabel @ 0x1C00AF79C (ACPIInternalPciDeviceLabel.c)
 */

__int64 __fastcall AcpiQueryPciDeviceChassisLabel(__int64 a1)
{
  __int64 *v2; // rcx
  int v3; // eax
  _QWORD *v4; // rbx
  unsigned int v5; // edi
  __int64 v7; // rdx
  PVOID P[2]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v9; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v10[48]; // [rsp+50h] [rbp-48h] BYREF

  memset(v10, 0, sizeof(v10));
  if ( (*(_BYTE *)(a1 + 952) & 1) != 0 )
    return 0LL;
  ACPIInternalSetFlags((void *)(a1 + 952), 1uLL);
  P[0] = 0LL;
  memset(v10, 0, sizeof(v10));
  v2 = *(__int64 **)(a1 + 712);
  v9 = PCI_ROOT_BUS_DSM_UUID;
  v3 = ACPIAmliEvaluateDsm(v2, (__int64)&v9, 2u, 7u, (__int64)v10, P);
  v4 = P[0];
  if ( v3 >= 0 && *((_WORD *)P[0] + 1) == 4 )
  {
    v7 = *((_QWORD *)P[0] + 4);
    if ( *((_DWORD *)P[0] + 6) >= 0x58u && (unsigned int)(*(_DWORD *)v7 - 1) <= 1 && *(_WORD *)(v7 + 10) == 1 )
      v5 = ACPIInternalPciDeviceLabel(a1);
    else
      v5 = -1073741823;
  }
  else
  {
    v5 = 0;
  }
  if ( v4 )
  {
    AMLIFreeDataBuffs(v4);
    ExFreePoolWithTag(v4, 0x52706341u);
  }
  return v5;
}

/*
 * XREFs of AcpiQueryPciDeviceChassisLabel @ 0x1C0096BC0
 * Callers:
 *     ACPIBusIrpDeviceEnumerated @ 0x1C00966F0 (ACPIBusIrpDeviceEnumerated.c)
 * Callees:
 *     ACPIInternalSetFlags @ 0x1C00023BC (ACPIInternalSetFlags.c)
 *     AMLIFreeDataBuffs @ 0x1C001D1E4 (AMLIFreeDataBuffs.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0096C9C (ACPIAmliEvaluateDsm.c)
 *     ACPIInternalPciDeviceLabel @ 0x1C00AC084 (ACPIInternalPciDeviceLabel.c)
 */

__int64 __fastcall AcpiQueryPciDeviceChassisLabel(__int64 a1)
{
  _BYTE *v2; // rcx
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  PVOID v8; // rbx
  unsigned int v9; // edi
  PVOID P[2]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v12; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v13[48]; // [rsp+50h] [rbp-48h] BYREF

  v2 = (_BYTE *)(a1 + 952);
  if ( (*v2 & 1) != 0 )
    return 0LL;
  ACPIInternalSetFlags(v2, 1uLL);
  P[0] = 0LL;
  memset(v13, 0, sizeof(v13));
  v3 = *(_QWORD *)(a1 + 712);
  v12 = PCI_ROOT_BUS_DSM_UUID;
  v4 = ACPIAmliEvaluateDsm(v3, (unsigned int)&v12, 2, 7, (__int64)v13, (__int64)P);
  v8 = P[0];
  if ( v4 >= 0 && *((_WORD *)P[0] + 1) == 4 )
  {
    v5 = *((_QWORD *)P[0] + 4);
    if ( *((_DWORD *)P[0] + 6) >= 0x58u && (unsigned int)(*(_DWORD *)v5 - 1) <= 1 && *(_WORD *)(v5 + 10) == 1 )
      v9 = ACPIInternalPciDeviceLabel(a1);
    else
      v9 = -1073741823;
  }
  else
  {
    v9 = 0;
  }
  if ( v8 )
  {
    AMLIFreeDataBuffs((__int64)v8, v5, v6, v7);
    ExFreePoolWithTag(v8, 0x52706341u);
  }
  return v9;
}

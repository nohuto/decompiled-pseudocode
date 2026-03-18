/*
 * XREFs of AcpiEvaluateDsmMethodOnPciRootBus @ 0x1C00956CC
 * Callers:
 *     PciGetRootBusCapability @ 0x1C00955F0 (PciGetRootBusCapability.c)
 * Callees:
 *     AMLIFreeDataBuffs @ 0x1C001D1E4 (AMLIFreeDataBuffs.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0096C9C (ACPIAmliEvaluateDsm.c)
 */

__int64 __fastcall AcpiEvaluateDsmMethodOnPciRootBus(__int64 a1, _BYTE *a2)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  PVOID v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  PVOID P[2]; // [rsp+30h] [rbp-49h] BYREF
  __int128 v16; // [rsp+40h] [rbp-39h] BYREF
  __int128 v17; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v18[48]; // [rsp+60h] [rbp-19h] BYREF

  P[0] = 0LL;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 184), 0, 0) & 4) != 0 )
  {
    *a2 = *(_BYTE *)(a1 + 224);
    return 0LL;
  }
  memset(v18, 0, sizeof(v18));
  v5 = *(_QWORD *)(a1 + 712);
  v16 = PCI_ROOT_BUS_DSM_UUID;
  v7 = ACPIAmliEvaluateDsm(v5, (unsigned int)&v16, 1, 0, (__int64)v18, (__int64)P);
  _InterlockedOr((volatile signed __int32 *)(a1 + 184), 4u);
  v10 = P[0];
  if ( v7 >= 0 )
  {
    if ( *((_WORD *)P[0] + 1) == 3 && *((_DWORD *)P[0] + 6) && (**((_BYTE **)P[0] + 4) & 0x10) != 0 )
    {
      memset(v18, 0, sizeof(v18));
      v11 = *(_QWORD *)(a1 + 712);
      v17 = PCI_ROOT_BUS_DSM_UUID;
      v12 = ACPIAmliEvaluateDsm(v11, (unsigned int)&v17, 1, 4, (__int64)v18, (__int64)P);
      v10 = P[0];
      v7 = v12;
      if ( v12 < 0 )
      {
LABEL_26:
        AMLIFreeDataBuffs((__int64)v10, v6, v8, v9);
        goto LABEL_4;
      }
      if ( *((_WORD *)P[0] + 1) == 4 && *((_DWORD *)P[0] + 6) >= 0x58u )
      {
        v13 = *((_QWORD *)P[0] + 4);
        if ( *(_DWORD *)v13 == 2
          && *(_WORD *)(v13 + 10) == 1
          && *(_QWORD *)(v13 + 24) == 1LL
          && *(_WORD *)(v13 + 50) == 3
          && *(_DWORD *)(v13 + 72) >= 0x18u )
        {
          v14 = *(_QWORD *)(v13 + 80);
          if ( v14 )
          {
            if ( *(_WORD *)v14 == 1
              && !*(_WORD *)(v14 + 2)
              && *(_DWORD *)(v14 + 4) >= 0x18u
              && *(_WORD *)(v14 + 8) == 1
              && *(_WORD *)(v14 + 10) >= 0x10u )
            {
              *(_BYTE *)(a1 + 224) = 1;
              v7 = 0;
              *(_OWORD *)(a1 + 226) = *(_OWORD *)(v14 + 8);
              *a2 = 1;
              goto LABEL_26;
            }
          }
        }
      }
    }
    v7 = -1073741823;
    goto LABEL_26;
  }
LABEL_4:
  if ( v10 )
    ExFreePoolWithTag(v10, 0x52706341u);
  return (unsigned int)v7;
}

/*
 * XREFs of ?ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1C00A589C
 * Callers:
 *     ndisSetSystemPower @ 0x1C00131C8 (ndisSetSystemPower.c)
 *     ndisWdfNotifySystemPower @ 0x1C00A72F8 (ndisWdfNotifySystemPower.c)
 * Callees:
 *     ndisIndicateStatusInternal @ 0x1C0015988 (ndisIndicateStatusInternal.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0018498 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00293F8 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

void __fastcall ndisSendSystemPowerStateIndication(struct _NDIS_MINIPORT_BLOCK *a1, enum _SYSTEM_POWER_STATE a2)
{
  unsigned __int8 v3[8]; // [rsp+28h] [rbp-39h] BYREF
  _DWORD v4[2]; // [rsp+30h] [rbp-31h] BYREF
  __int128 v5[7]; // [rsp+38h] [rbp-29h] BYREF

  v4[1] = a2;
  v4[0] = 524672;
  memset(v5, 0, sizeof(v5));
  LODWORD(v5[0]) = 7340440;
  *(_QWORD *)&v5[3] = v4;
  *((_QWORD *)&v5[0] + 1) = a1;
  DWORD1(v5[1]) = 1073807399;
  DWORD2(v5[3]) = 8;
  ndisMAcquireStInLockWithSpinLock(a1, v3);
  ndisIndicateStatusInternal(a1, v5);
  ndisMReleaseStInLockAndSpinLock(a1, v3[0]);
}

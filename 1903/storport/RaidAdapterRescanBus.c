/*
 * XREFs of RaidAdapterRescanBus @ 0x1C0012DF4
 * Callers:
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C00128A0 (RaidAdapterQueryDeviceRelationsIrp.c)
 * Callees:
 *     RaidDeleteBusEnumerator @ 0x1C0012F7C (RaidDeleteBusEnumerator.c)
 *     RaidBusEnumeratorProcessModifiedNodes @ 0x1C0013248 (RaidBusEnumeratorProcessModifiedNodes.c)
 *     RaidAdapterEnumerateBus @ 0x1C0013850 (RaidAdapterEnumerateBus.c)
 *     RaidIsAdapterControlSupported @ 0x1C0015A68 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x1C0015B98 (RaCallMiniportAdapterControl.c)
 *     RaidAdapterTargetedRescan @ 0x1C0022F00 (RaidAdapterTargetedRescan.c)
 *     memset @ 0x1C0023840 (memset.c)
 */

__int64 __fastcall RaidAdapterRescanBus(__int64 a1, int *a2, _BYTE *a3)
{
  char v3; // bl
  char v4; // r15
  bool v5; // bp
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // esi
  __int64 v12; // rdx
  int v13; // ebx
  int v15; // eax
  _QWORD v16[15]; // [rsp+20h] [rbp-B8h] BYREF
  _QWORD v17[3]; // [rsp+98h] [rbp-40h] BYREF

  v3 = *(_BYTE *)(a1 + 106);
  v4 = 0;
  v5 = 0;
  if ( !v3 && (*(_BYTE *)(a1 + 104) & 0x40) == 0 )
    return 0LL;
  memset(&v16[1], 0, 0x70uLL);
  v16[0] = a1;
  v11 = 0;
  v17[1] = v17;
  v17[0] = v17;
  if ( v3 )
  {
    *(_BYTE *)(a1 + 106) = 0;
    *(_QWORD *)(a1 + 4344) = MEMORY[0xFFFFF78000000014];
    if ( (unsigned int)RaidIsAdapterControlSupported(a1, 11LL) )
      RaCallMiniportAdapterControl(a1 + 296, 11LL, 0LL);
    v13 = *(_DWORD *)(a1 + 4904);
    v11 = RaidAdapterEnumerateBus(a1, v12, v16);
    v4 = 1;
    v5 = v13 != *(_DWORD *)(a1 + 4904);
  }
  if ( (*(_BYTE *)(a1 + 104) & 0x40) == 0 || v5 )
  {
    if ( (*(_BYTE *)(a1 + 104) & 0x40) != 0
      && v5
      && (*(_DWORD *)(a1 + 4908) & 4) != 0
      && (*(_DWORD *)(a1 + 4912) & 1) != 0
      && *(_QWORD *)(a1 + 4960) )
    {
      RtlSetBit((PRTL_BITMAP)(a1 + 4944), *(unsigned __int8 *)(*(_QWORD *)(a1 + 4920) + 8LL));
    }
  }
  else
  {
    LOBYTE(v10) = v4;
    v15 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, __int64))RaidAdapterTargetedRescan)(a1, v9, v16, v10);
    if ( !v4 )
      v11 = v15;
    if ( a2 )
      *a2 = v15;
    if ( a3 )
      *a3 = 1;
  }
  if ( v11 >= 0 )
    RaidBusEnumeratorProcessModifiedNodes(v16);
  RaidDeleteBusEnumerator(v16);
  return (unsigned int)v11;
}

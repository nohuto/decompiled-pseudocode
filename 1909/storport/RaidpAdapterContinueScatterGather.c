/*
 * XREFs of RaidpAdapterContinueScatterGather @ 0x1C0004630
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00046A0 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidXrbSetDataBufferAddress @ 0x1C0004C70 (RaidXrbSetDataBufferAddress.c)
 *     RaidAdapterRequestComplete @ 0x1C00057F0 (RaidAdapterRequestComplete.c)
 */

void __fastcall RaidpAdapterContinueScatterGather(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 v6; // r8
  int v7; // esi
  __int64 v8; // rax
  struct _DEVICE_OBJECT *v9; // rcx

  v4 = *(_QWORD *)(a1 + 64);
  a4[14] = a3;
  a4[27] = v4;
  if ( (int)RaidXrbSetDataBufferAddress(a4, v4, 0LL) < 0 )
  {
    *(_BYTE *)(a4[21] + 3LL) = 48;
    v8 = a4[21];
    if ( *(_BYTE *)(v8 + 2) == 40 )
      *(_DWORD *)(v8 + 44) = -1073741670;
    else
      *(_DWORD *)(v8 + 64) = -1073741670;
    goto LABEL_10;
  }
  v7 = RaidAdapterPostScatterGatherExecute(v4, a4);
  if ( *(_BYTE *)(v4 + 105) )
  {
    v9 = *(struct _DEVICE_OBJECT **)(v4 + 32);
    *(_BYTE *)(v4 + 105) = 0;
    IoInvalidateDeviceRelations(v9, BusRelations);
  }
  if ( v7 < 0 )
  {
    *(_BYTE *)(a4[21] + 3LL) = 4;
LABEL_10:
    LOBYTE(v6) = 1;
    RaidAdapterRequestComplete(v4, a4, v6);
  }
}

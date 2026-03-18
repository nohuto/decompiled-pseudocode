/*
 * XREFs of UsbDevice_ControllerResetPostReset @ 0x1C0039AEC
 * Callers:
 *     DeviceSlot_ControllerResetPostReset @ 0x1C00159F0 (DeviceSlot_ControllerResetPostReset.c)
 * Callees:
 *     ESM_AddEvent @ 0x1C0044E54 (ESM_AddEvent.c)
 */

NTSTATUS __fastcall UsbDevice_ControllerResetPostReset(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // rbp
  NTSTATUS result; // eax

  v1 = (__int64 *)(a1 + 176);
  v2 = 31LL;
  do
  {
    v3 = *v1;
    if ( *v1 )
    {
      KeClearEvent((PRKEVENT)(v3 + 40));
      ESM_AddEvent((PVOID)(v3 + 288));
      result = KeWaitForSingleObject((PVOID)(v3 + 40), Executive, 0, 0, 0LL);
    }
    ++v1;
    --v2;
  }
  while ( v2 );
  return result;
}

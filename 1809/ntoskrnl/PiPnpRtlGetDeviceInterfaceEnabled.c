/*
 * XREFs of PiPnpRtlGetDeviceInterfaceEnabled @ 0x1406AF4D0
 * Callers:
 *     <none>
 * Callees:
 *     ZwPlugPlayControl @ 0x1401BA6F0 (ZwPlugPlayControl.c)
 */

NTSTATUS __fastcall PiPnpRtlGetDeviceInterfaceEnabled(__int64 a1, __int128 *a2, _BYTE *a3, unsigned int a4)
{
  NTSTATUS result; // eax
  __int128 Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  Buffer = *a2;
  v7 = a4;
  result = ZwPlugPlayControl(MaxPlugPlayControl, &Buffer, 0x18u);
  *a3 = BYTE4(v7);
  return result;
}

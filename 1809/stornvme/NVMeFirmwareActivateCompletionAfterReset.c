/*
 * XREFs of NVMeFirmwareActivateCompletionAfterReset @ 0x1C0011F30
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0005118 (GetSrbExtension.c)
 *     NVMeRequestComplete @ 0x1C000F7AC (NVMeRequestComplete.c)
 */

_DWORD *__fastcall NVMeFirmwareActivateCompletionAfterReset(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // dl
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 SrbExtension; // r10
  __int64 v7; // r11
  __int64 v8; // r8

  SrbExtension = GetSrbExtension(a3);
  if ( *(_BYTE *)(v4 + 2) == 40 )
    v8 = *(_QWORD *)(v4 + 64);
  else
    v8 = *(_QWORD *)(v4 + 24);
  *(_DWORD *)(v8 + 20) = v3 != 0 ? 0 : 0x20;
  *(_BYTE *)(SrbExtension + 4253) |= 8u;
  *(_BYTE *)(v5 + 3) = 1;
  return NVMeRequestComplete(v7, v5, 0);
}

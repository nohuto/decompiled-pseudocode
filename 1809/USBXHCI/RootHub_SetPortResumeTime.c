/*
 * XREFs of RootHub_SetPortResumeTime @ 0x1C001ECBC
 * Callers:
 *     UsbDevice_UpdateUsbDevice @ 0x1C0038094 (UsbDevice_UpdateUsbDevice.c)
 * Callees:
 *     DynamicLock_Acquire @ 0x1C0041760 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C004195C (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_SetPortResumeTime(__int64 a1, int a2, __int16 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v6; // rdi

  v3 = *(_QWORD *)(a1 + 48);
  v4 = (unsigned int)(a2 - 1);
  v6 = 10 * v4;
  DynamicLock_Acquire(*(_QWORD *)(v3 + 80 * v4 + 24));
  ++*(_DWORD *)(v3 + 8 * v6 + 40);
  *(_WORD *)(v3 + 8 * v6 + 44) = a3;
  return DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v6 + 24));
}

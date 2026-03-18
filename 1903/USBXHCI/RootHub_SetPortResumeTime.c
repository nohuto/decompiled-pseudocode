/*
 * XREFs of RootHub_SetPortResumeTime @ 0x1C0022820
 * Callers:
 *     UsbDevice_UpdateUsbDevice @ 0x1C003D3DC (UsbDevice_UpdateUsbDevice.c)
 * Callees:
 *     DynamicLock_Acquire @ 0x1C0046FAC (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C00471B4 (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_SetPortResumeTime(__int64 a1, int a2, __int16 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi

  v3 = *(_QWORD *)(a1 + 48);
  v4 = 88LL * (unsigned int)(a2 - 1);
  DynamicLock_Acquire(*(_QWORD *)(v4 + v3 + 24));
  ++*(_DWORD *)(v4 + v3 + 40);
  *(_WORD *)(v4 + v3 + 44) = a3;
  return DynamicLock_Release(*(_QWORD *)(v4 + *(_QWORD *)(a1 + 48) + 24));
}

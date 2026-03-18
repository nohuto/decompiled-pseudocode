/*
 * XREFs of UsbhAcquirePdoUxdLock @ 0x1C0022000
 * Callers:
 *     UsbhUpdateUxdSettings @ 0x1C002203C (UsbhUpdateUxdSettings.c)
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 */

__int64 __fastcall UsbhAcquirePdoUxdLock(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax

  v2 = PdoExt(a2);
  KeWaitForSingleObject(v2 + 642, Executive, 0, 0, 0LL);
  return 0LL;
}

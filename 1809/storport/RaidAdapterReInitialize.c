/*
 * XREFs of RaidAdapterReInitialize @ 0x1C0038A8C
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C001221C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006E60 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0006FF4 (RaidAdapterReleaseInterruptLock.c)
 *     RaCallMiniportFindAdapter @ 0x1C001EF8C (RaCallMiniportFindAdapter.c)
 *     RaCallMiniportHwInitialize @ 0x1C001FE58 (RaCallMiniportHwInitialize.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterReInitialize(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 result; // rax
  KIRQL v6; // bl
  int v7; // esi
  char v8; // cl
  char v9[16]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a1 + 312;
  strcpy(v9, "wakeup=1");
  result = RaCallMiniportFindAdapter((__int64 *)(a1 + 312), v9, a3);
  if ( (int)result >= 0 )
  {
    *(_BYTE *)(a1 + 104) |= 0x10u;
    v6 = RaidAdapterAcquireInterruptLock(a1);
    v7 = RaCallMiniportHwInitialize(v3);
    RaidAdapterReleaseInterruptLock(a1, v6);
    v8 = *(_BYTE *)(a1 + 104) & 0xEF;
    *(_BYTE *)(a1 + 104) = v8;
    if ( v7 >= 0 )
      *(_BYTE *)(a1 + 104) = v8 | 1;
    return (unsigned int)v7;
  }
  return result;
}

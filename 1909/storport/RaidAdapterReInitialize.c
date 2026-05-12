/*
 * XREFs of RaidAdapterReInitialize @ 0x1C0035A5C
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0015F78 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C0005B84 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0005D18 (RaidAdapterReleaseInterruptLock.c)
 *     RaCallMiniportHwInitialize @ 0x1C001D110 (RaCallMiniportHwInitialize.c)
 *     RaCallMiniportFindAdapter @ 0x1C001D1C0 (RaCallMiniportFindAdapter.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterReInitialize(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 result; // rax
  KIRQL v6; // bl
  int v7; // esi
  char v8; // cl
  unsigned __int16 v9[8]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a1 + 296;
  strcpy((char *)v9, "wakeup=1");
  result = RaCallMiniportFindAdapter((__int64 *)(a1 + 296), v9, a3);
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

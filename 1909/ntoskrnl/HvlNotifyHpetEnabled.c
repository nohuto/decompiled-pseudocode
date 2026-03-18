/*
 * XREFs of HvlNotifyHpetEnabled @ 0x1402889B0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013EC10 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028558C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1402861B8 (HvlpReleaseHypercallPage.c)
 */

__int64 HvlNotifyHpetEnabled()
{
  _QWORD *v0; // rax
  __int16 v1; // bx
  PHYSICAL_ADDRESS v3[4]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v4[80]; // [rsp+40h] [rbp-68h] BYREF

  memset(v3, 0, sizeof(v3));
  v0 = HvlpAcquireHypercallPage(v3, 1, (__int64)v4, 40LL);
  *(_DWORD *)v0 = 8;
  *((_BYTE *)v0 + 8) = 1;
  v1 = HvcallCodeVa();
  HvlpReleaseHypercallPage((unsigned int *)v3);
  return v1 != 0 ? 0xC0000001 : 0;
}

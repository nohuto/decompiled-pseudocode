/*
 * XREFs of HvlHvDebuggerPowerHandler @ 0x1402882A0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x14028D8C8 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlHvDebuggerPowerHandler(char a1)
{
  _QWORD *v2; // rax
  unsigned __int16 v3; // bx
  PHYSICAL_ADDRESS v5[4]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v6[80]; // [rsp+40h] [rbp-68h] BYREF

  memset(v5, 0, sizeof(v5));
  v2 = HvlpAcquireHypercallPage(v5, 1, (__int64)v6, 40LL);
  *(_DWORD *)v2 = 10;
  *((_BYTE *)v2 + 8) = a1;
  v3 = HvcallCodeVa();
  HvlpReleaseHypercallPage((unsigned int *)v5);
  return HvlpHvToNtStatus(v3);
}

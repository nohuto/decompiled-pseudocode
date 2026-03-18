/*
 * XREFs of HvlSetSystemMachineCheckProperty @ 0x1402897E0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlSetSystemMachineCheckProperty(_QWORD *a1)
{
  _QWORD *v2; // rax
  PHYSICAL_ADDRESS v4[4]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v5[80]; // [rsp+40h] [rbp-68h] BYREF

  memset(v4, 0, sizeof(v4));
  v2 = HvlpAcquireHypercallPage(v4, 1, (__int64)v5, 40LL);
  *(_DWORD *)v2 = 4;
  v2[1] = *a1;
  LOWORD(a1) = HvcallCodeVa();
  HvlpReleaseHypercallPage((unsigned int *)v4);
  return (_WORD)a1 != 0 ? 0xC0000001 : 0;
}

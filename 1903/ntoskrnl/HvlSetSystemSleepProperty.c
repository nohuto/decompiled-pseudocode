/*
 * XREFs of HvlSetSystemSleepProperty @ 0x140289890
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlSetSystemSleepProperty(int a1, char a2, char a3)
{
  _QWORD *v6; // rax
  PHYSICAL_ADDRESS v8[4]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v9[80]; // [rsp+40h] [rbp-68h] BYREF

  memset(v8, 0, sizeof(v8));
  v6 = HvlpAcquireHypercallPage(v8, 1, (__int64)v9, 40LL);
  *(_DWORD *)v6 = 3;
  *((_DWORD *)v6 + 2) = a1;
  *((_BYTE *)v6 + 12) = a2;
  *((_BYTE *)v6 + 13) = a3;
  LOWORD(a1) = HvcallCodeVa();
  HvlpReleaseHypercallPage((unsigned int *)v8);
  return (_WORD)a1 != 0 ? 0xC0000001 : 0;
}

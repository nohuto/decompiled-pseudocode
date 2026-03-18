/*
 * XREFs of HvlpAddPhysicalMemory @ 0x14034D308
 * Callers:
 *     KeConfigureDynamicMemory @ 0x1402A4634 (KeConfigureDynamicMemory.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpDepositPages @ 0x140285BA8 (HvlpDepositPages.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x14028D8C8 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlpAddPhysicalMemory(__int64 a1, __int64 a2)
{
  int v4; // esi
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  unsigned __int16 v7; // bx
  __int64 v8; // rdx
  PHYSICAL_ADDRESS v10[4]; // [rsp+20h] [rbp-98h] BYREF
  PHYSICAL_ADDRESS v11[4]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v12[16]; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v13[32]; // [rsp+70h] [rbp-48h] BYREF

  memset(v11, 0, sizeof(v11));
  memset(v10, 0, sizeof(v10));
  v4 = 0;
  while ( a2 )
  {
    v5 = HvlpAcquireHypercallPage(v11, 1, (__int64)v13, 16LL);
    v6 = HvlpAcquireHypercallPage(v10, 2, (__int64)v12, 8LL);
    *v5 = a1;
    v5[1] = a2;
    v7 = HvcallCodeVa();
    a2 -= *v6;
    a1 += *v6;
    HvlpReleaseHypercallPage((unsigned int *)v10);
    HvlpReleaseHypercallPage((unsigned int *)v11);
    if ( v7 == 11 )
    {
      v4 = HvlpDepositPages(0, v8, 0);
      if ( v4 < 0 )
        return (unsigned int)-1073741670;
    }
    else if ( v7 )
    {
      return (unsigned int)HvlpHvToNtStatus(v7);
    }
  }
  return (unsigned int)v4;
}

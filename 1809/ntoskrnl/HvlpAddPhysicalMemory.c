/*
 * XREFs of HvlpAddPhysicalMemory @ 0x14032BA10
 * Callers:
 *     KeConfigureDynamicMemory @ 0x14028DA04 (KeConfigureDynamicMemory.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E680 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x140271764 (HvlpAcquireHypercallPage.c)
 *     HvlpDepositPages @ 0x140271AA0 (HvlpDepositPages.c)
 *     HvlpReleaseHypercallPage @ 0x140272284 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x140279480 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlpAddPhysicalMemory(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v3; // esi
  bool i; // zf
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  unsigned __int16 v8; // bx
  __int64 v9; // rdx
  PHYSICAL_ADDRESS v11[3]; // [rsp+20h] [rbp-98h] BYREF
  PHYSICAL_ADDRESS v12[3]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v13[16]; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v14[32]; // [rsp+70h] [rbp-48h] BYREF

  v2 = a2;
  v3 = 0;
  for ( i = a2 == 0; !i; i = v2 == 0 )
  {
    v6 = HvlpAcquireHypercallPage(v12, 1, (__int64)v14, 16LL);
    v7 = HvlpAcquireHypercallPage(v11, 2, (__int64)v13, 8LL);
    *v6 = a1;
    v6[1] = v2;
    v8 = HvcallCodeVa();
    v2 -= *v7;
    a1 += *v7;
    HvlpReleaseHypercallPage((unsigned int *)v11);
    HvlpReleaseHypercallPage((unsigned int *)v12);
    if ( v8 == 11 )
    {
      v3 = HvlpDepositPages(0, v9, 0);
      if ( v3 < 0 )
        return (unsigned int)-1073741670;
    }
    else if ( v8 )
    {
      return (unsigned int)HvlpHvToNtStatus(v8);
    }
  }
  return (unsigned int)v3;
}

/*
 * XREFs of HvlDmaGetDmaGuardEnabled @ 0x140287410
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

__int64 __fastcall HvlDmaGetDmaGuardEnabled(_BYTE *a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rsi
  unsigned __int16 v4; // bx
  PHYSICAL_ADDRESS v6[4]; // [rsp+20h] [rbp-878h] BYREF
  PHYSICAL_ADDRESS v7[4]; // [rsp+40h] [rbp-858h] BYREF
  _BYTE v8[16]; // [rsp+60h] [rbp-838h] BYREF
  _BYTE v9[2064]; // [rsp+70h] [rbp-828h] BYREF

  memset(v7, 0, sizeof(v7));
  memset(v6, 0, sizeof(v6));
  v2 = HvlpAcquireHypercallPage(v7, 1, (__int64)v8, 8LL);
  v3 = HvlpAcquireHypercallPage(v6, 2, (__int64)v9, 1032LL);
  *v2 = 0LL;
  *(_DWORD *)v2 = 20;
  v4 = HvcallCodeVa();
  if ( !v4 )
    *a1 = *(_BYTE *)v3;
  HvlpReleaseHypercallPage((unsigned int *)v6);
  HvlpReleaseHypercallPage((unsigned int *)v7);
  return HvlpHvToNtStatus(v4);
}

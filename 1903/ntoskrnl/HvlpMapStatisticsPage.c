/*
 * XREFs of HvlpMapStatisticsPage @ 0x140286284
 * Callers:
 *     HvlPhase1Initialize @ 0x14019DFE8 (HvlPhase1Initialize.c)
 *     HvlpEnableNextLogicalProcessor @ 0x140285DA4 (HvlpEnableNextLogicalProcessor.c)
 *     HvlpInitializeBootProcessor @ 0x140286104 (HvlpInitializeBootProcessor.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpMapStatisticsPage(int a1, _OWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  PHYSICAL_ADDRESS v9[4]; // [rsp+20h] [rbp-A8h] BYREF
  PHYSICAL_ADDRESS v10[4]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v11[16]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE v12[48]; // [rsp+70h] [rbp-58h] BYREF

  memset(v10, 0, sizeof(v10));
  memset(v9, 0, sizeof(v9));
  v6 = HvlpAcquireHypercallPage(v10, 1, (__int64)v12, 24LL);
  v7 = HvlpAcquireHypercallPage(v9, 2, (__int64)v11, 8LL);
  *(_OWORD *)(v6 + 1) = *a2;
  *(_DWORD *)v6 = a1;
  LOWORD(v6) = HvcallCodeVa();
  *a3 = *v7 << 12;
  HvlpReleaseHypercallPage(v9);
  HvlpReleaseHypercallPage(v10);
  return (_WORD)v6 != 0 ? 0xC0000001 : 0;
}

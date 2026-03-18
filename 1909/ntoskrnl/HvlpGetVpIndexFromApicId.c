/*
 * XREFs of HvlpGetVpIndexFromApicId @ 0x140285D74
 * Callers:
 *     HvlpEnableNextLogicalProcessor @ 0x140285B04 (HvlpEnableNextLogicalProcessor.c)
 *     HvlHalGetVpIndexFromApicId @ 0x140287F70 (HvlHalGetVpIndexFromApicId.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013EC10 (HvcallpNoHypervisorPresent.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028558C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1402861B8 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpGetVpIndexFromApicId(int a1, _DWORD *a2)
{
  unsigned int v4; // esi
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  _DWORD *v7; // r15
  PHYSICAL_ADDRESS v9[4]; // [rsp+20h] [rbp-58h] BYREF
  PHYSICAL_ADDRESS v10[4]; // [rsp+40h] [rbp-38h] BYREF

  memset(v10, 0, sizeof(v10));
  memset(v9, 0, sizeof(v9));
  v4 = 0;
  v5 = HvlpAcquireHypercallPage(v10, 1, 0LL, 16LL);
  v6 = HvlpAcquireHypercallPage(v9, 2, 0LL, 4LL);
  *v5 = -1LL;
  v7 = v6;
  v5[1] = 0LL;
  *((_DWORD *)v5 + 4) = a1;
  if ( (unsigned __int16)HvcallCodeVa() )
    v4 = -1073741823;
  else
    *a2 = *v7;
  HvlpReleaseHypercallPage(v9);
  HvlpReleaseHypercallPage(v10);
  return v4;
}

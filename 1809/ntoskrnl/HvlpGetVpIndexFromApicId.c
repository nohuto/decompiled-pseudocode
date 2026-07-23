/*
 * XREFs of HvlpGetVpIndexFromApicId @ 0x1402721D8
 * Callers:
 *     HvlpEnableNextLogicalProcessor @ 0x140271F8C (HvlpEnableNextLogicalProcessor.c)
 *     HvlHalGetVpIndexFromApicId @ 0x140274440 (HvlHalGetVpIndexFromApicId.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E7A0 (HvcallpNoHypervisorPresent.c)
 *     HvlpAcquireHypercallPage @ 0x140271A54 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272574 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpGetVpIndexFromApicId(int a1, _DWORD *a2)
{
  unsigned int v2; // esi
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  _DWORD *v7; // r15
  PHYSICAL_ADDRESS v9[3]; // [rsp+20h] [rbp-58h] BYREF
  PHYSICAL_ADDRESS v10[3]; // [rsp+40h] [rbp-38h] BYREF

  v2 = 0;
  v5 = HvlpAcquireHypercallPage(v10, 1, 0LL, 16LL);
  v6 = HvlpAcquireHypercallPage(v9, 2, 0LL, 4LL);
  *v5 = -1LL;
  v7 = v6;
  v5[1] = 0LL;
  *((_DWORD *)v5 + 4) = a1;
  if ( (unsigned __int16)HvcallCodeVa() )
    v2 = -1073741823;
  else
    *a2 = *v7;
  HvlpReleaseHypercallPage(v9);
  HvlpReleaseHypercallPage(v10);
  return v2;
}

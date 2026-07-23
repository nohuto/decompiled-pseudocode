/*
 * XREFs of HvlpGetLogicalProcessorProperty @ 0x140272068
 * Callers:
 *     HvlLpGetMachineCheckContext @ 0x140274590 (HvlLpGetMachineCheckContext.c)
 *     HvlpLogMicrocodeUpdateStatus @ 0x1408189A4 (HvlpLogMicrocodeUpdateStatus.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E7A0 (HvcallpNoHypervisorPresent.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     HvlpAcquireHypercallPage @ 0x140271A54 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272574 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpGetLogicalProcessorProperty(int a1, int a2, void *a3)
{
  unsigned int v3; // ebp
  _DWORD *v7; // rbx
  _QWORD *v8; // r15
  PHYSICAL_ADDRESS v10[3]; // [rsp+20h] [rbp-58h] BYREF
  PHYSICAL_ADDRESS v11[3]; // [rsp+40h] [rbp-38h] BYREF

  v3 = 0;
  v7 = HvlpAcquireHypercallPage(v11, 1, 0LL, 8LL);
  v8 = HvlpAcquireHypercallPage(v10, 2, 0LL, 3256LL);
  *v7 = a1;
  v7[1] = a2;
  if ( (unsigned __int16)HvcallCodeVa() )
    v3 = -1073741823;
  else
    memmove(a3, v8, 0xCB8uLL);
  HvlpReleaseHypercallPage(v10);
  HvlpReleaseHypercallPage(v11);
  return v3;
}

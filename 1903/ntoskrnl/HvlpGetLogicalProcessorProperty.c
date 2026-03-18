/*
 * XREFs of HvlpGetLogicalProcessorProperty @ 0x140285E84
 * Callers:
 *     HvlLpGetMachineCheckContext @ 0x140288370 (HvlLpGetMachineCheckContext.c)
 *     HvlpLogMicrocodeUpdateStatus @ 0x1408511B4 (HvlpLogMicrocodeUpdateStatus.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpGetLogicalProcessorProperty(int a1, int a2, void *a3)
{
  unsigned int v6; // ebp
  _DWORD *v7; // rbx
  _QWORD *v8; // r15
  PHYSICAL_ADDRESS v10[4]; // [rsp+20h] [rbp-58h] BYREF
  PHYSICAL_ADDRESS v11[4]; // [rsp+40h] [rbp-38h] BYREF

  memset(v11, 0, sizeof(v11));
  memset(v10, 0, sizeof(v10));
  v6 = 0;
  v7 = HvlpAcquireHypercallPage(v11, 1, 0LL, 8LL);
  v8 = HvlpAcquireHypercallPage(v10, 2, 0LL, 3256LL);
  *v7 = a1;
  v7[1] = a2;
  if ( (unsigned __int16)HvcallCodeVa() )
    v6 = -1073741823;
  else
    memmove(a3, v8, 0xCB8uLL);
  HvlpReleaseHypercallPage(v10);
  HvlpReleaseHypercallPage(v11);
  return v6;
}

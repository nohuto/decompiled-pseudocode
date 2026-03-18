/*
 * XREFs of HvlpGetLogicalProcessorProperty @ 0x140285BE4
 * Callers:
 *     HvlLpGetMachineCheckContext @ 0x1402880D0 (HvlLpGetMachineCheckContext.c)
 *     HvlpLogMicrocodeUpdateStatus @ 0x1408508B4 (HvlpLogMicrocodeUpdateStatus.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013EC10 (HvcallpNoHypervisorPresent.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028558C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1402861B8 (HvlpReleaseHypercallPage.c)
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

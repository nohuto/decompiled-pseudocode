/*
 * XREFs of NVMeControllerRemove @ 0x1C000B684
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C00046D0 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeFreeDmaBuffer @ 0x1C00039DC (NVMeFreeDmaBuffer.c)
 *     NVMeDisableThrottling @ 0x1C0004D90 (NVMeDisableThrottling.c)
 *     memset @ 0x1C0005400 (memset.c)
 *     AdminQueuesFreeResources @ 0x1C0008AD8 (AdminQueuesFreeResources.c)
 *     FreeMsiInfo @ 0x1C0008DEC (FreeMsiInfo.c)
 *     FreeProcessorGroupInfo @ 0x1C0008E60 (FreeProcessorGroupInfo.c)
 *     FreeProcessorInfo @ 0x1C0008EAC (FreeProcessorInfo.c)
 *     IoQueuesFreeResources @ 0x1C0009B48 (IoQueuesFreeResources.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C000BA58 (NVMeFreeHostMemoryBuffer.c)
 *     NVMePowerCleanUp @ 0x1C000CDC0 (NVMePowerCleanUp.c)
 */

char __fastcall NVMeControllerRemove(__int64 a1)
{
  __int64 i; // rdi
  __int64 v3; // r8
  __int64 v4; // r8
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  *(_DWORD *)(a1 + 20) &= ~1u;
  NVMePowerCleanUp();
  if ( *(_QWORD *)(a1 + 3704) )
    NVMeFreeHostMemoryBuffer(a1);
  IoQueuesFreeResources(a1);
  AdminQueuesFreeResources(a1);
  NVMeFreeDmaBuffer(a1, 4096LL, *(_QWORD *)(a1 + 3688));
  FreeProcessorInfo(a1);
  FreeProcessorGroupInfo(a1);
  FreeMsiInfo(a1);
  NVMeDisableThrottling(a1);
  if ( !*(_BYTE *)(a1 + 16) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 192); i = (unsigned int)(i + 1) )
    {
      v3 = *(_QWORD *)(a1 + 8 * i + 1648);
      if ( v3 )
        StorPortExtendedFunction(1LL, a1, v3);
    }
  }
  memset((void *)(a1 + 1648), 0, 0x7F8uLL);
  v4 = *(_QWORD *)(a1 + 3792);
  *(_DWORD *)(a1 + 180) = 0;
  if ( v4 )
  {
    StorPortExtendedFunction(1LL, a1, v4);
    *(_QWORD *)(a1 + 3792) = 0LL;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 144) + 20LL) = *(_DWORD *)(*(_QWORD *)(a1 + 144) + 20LL) & 0xFFFF3FFF | 0x8000;
  _InterlockedOr(v6, 0);
  return 1;
}

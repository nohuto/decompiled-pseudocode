/*
 * XREFs of NVMeControllerStop @ 0x1C000B894
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0004C30 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeDisableThrottling @ 0x1C00052F0 (NVMeDisableThrottling.c)
 *     memset @ 0x1C0005980 (memset.c)
 *     AdminQueuesFreeResources @ 0x1C0008928 (AdminQueuesFreeResources.c)
 *     FreeMsiInfo @ 0x1C0008C3C (FreeMsiInfo.c)
 *     FreeProcessorInfo @ 0x1C0008CFC (FreeProcessorInfo.c)
 *     IoQueuesDeletion @ 0x1C00096FC (IoQueuesDeletion.c)
 *     IoQueuesFreeResources @ 0x1C0009998 (IoQueuesFreeResources.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C000B968 (NVMeFreeHostMemoryBuffer.c)
 *     NVMePowerCleanUp @ 0x1C000CCD0 (NVMePowerCleanUp.c)
 */

char __fastcall NVMeControllerStop(__int64 a1)
{
  char v2; // si
  __int64 i; // rdi
  __int64 v4; // r8

  v2 = IoQueuesDeletion(a1);
  NVMePowerCleanUp(a1);
  if ( *(_QWORD *)(a1 + 3704) )
    NVMeFreeHostMemoryBuffer(a1);
  IoQueuesFreeResources(a1);
  AdminQueuesFreeResources(a1);
  FreeProcessorInfo(a1);
  FreeMsiInfo(a1);
  if ( !*(_BYTE *)(a1 + 16) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 192); i = (unsigned int)(i + 1) )
    {
      v4 = *(_QWORD *)(a1 + 8 * i + 1648);
      if ( v4 )
        StorPortExtendedFunction(1LL, a1, v4);
    }
  }
  memset((void *)(a1 + 1648), 0, 0x7F8uLL);
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 192) = 0;
  NVMeDisableThrottling(a1);
  return v2;
}

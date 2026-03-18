/*
 * XREFs of NVMeControllerRemove @ 0x1C000B4D4
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0004C30 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeFreeDmaBuffer @ 0x1C0003F3C (NVMeFreeDmaBuffer.c)
 *     NVMeDisableThrottling @ 0x1C00052F0 (NVMeDisableThrottling.c)
 *     memset @ 0x1C0005980 (memset.c)
 *     AdminQueuesFreeResources @ 0x1C0008928 (AdminQueuesFreeResources.c)
 *     FreeMsiInfo @ 0x1C0008C3C (FreeMsiInfo.c)
 *     FreeProcessorGroupInfo @ 0x1C0008CB0 (FreeProcessorGroupInfo.c)
 *     FreeProcessorInfo @ 0x1C0008CFC (FreeProcessorInfo.c)
 *     IoQueuesFreeResources @ 0x1C0009998 (IoQueuesFreeResources.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C000B968 (NVMeFreeHostMemoryBuffer.c)
 *     NVMePowerCleanUp @ 0x1C000CCD0 (NVMePowerCleanUp.c)
 *     RoundUp64 @ 0x1C000DD10 (RoundUp64.c)
 */

char __fastcall NVMeControllerRemove(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // edi
  unsigned int v4; // eax
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rax
  unsigned __int8 v7; // r10
  int v8; // ecx
  unsigned int i; // esi
  __int64 v10; // r8
  __int64 v11; // r8
  signed __int32 v13[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 1536);
  *(_DWORD *)(a1 + 20) &= ~1u;
  NVMePowerCleanUp();
  v3 = 0;
  if ( *(_QWORD *)(a1 + 3704) )
    NVMeFreeHostMemoryBuffer(a1);
  v4 = *(_DWORD *)(v1 + 88);
  if ( v4 )
    v5 = RoundUp64(v4, 10000LL) / 0x2710uLL;
  else
    LODWORD(v5) = 500;
  if ( *(_BYTE *)(a1 + 43) )
  {
    v6 = RoundUp64((unsigned int)v5, 100LL);
    v8 = v7;
    if ( (unsigned int)(v6 / 0x64) > v7 )
      v8 = v6 / 0x64;
    LODWORD(v5) = 100 * v8;
  }
  IoQueuesFreeResources(a1);
  AdminQueuesFreeResources(a1);
  NVMeFreeDmaBuffer(a1, 4096LL, *(_QWORD *)(a1 + 3688));
  FreeProcessorInfo(a1);
  FreeProcessorGroupInfo(a1);
  FreeMsiInfo(a1);
  NVMeDisableThrottling(a1);
  if ( !*(_BYTE *)(a1 + 16) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 192); ++i )
    {
      v10 = *(_QWORD *)(a1 + 8LL * i + 1648);
      if ( v10 )
        StorPortExtendedFunction(1LL, a1, v10);
    }
  }
  memset((void *)(a1 + 1648), 0, 0x7F8uLL);
  v11 = *(_QWORD *)(a1 + 3792);
  *(_DWORD *)(a1 + 180) = 0;
  if ( v11 )
  {
    StorPortExtendedFunction(1LL, a1, v11);
    *(_QWORD *)(a1 + 3792) = 0LL;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 144) + 20LL) = *(_DWORD *)(*(_QWORD *)(a1 + 144) + 20LL) & 0xFFFF3FFF | 0x4000;
  _InterlockedOr(v13, 0);
  if ( (_DWORD)v5 )
  {
    do
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 144) + 28LL) & 0xC) == 8 )
        break;
      StorPortExtendedFunction(81LL, a1, 10000LL);
      ++v3;
    }
    while ( v3 < (unsigned int)v5 );
  }
  return 1;
}

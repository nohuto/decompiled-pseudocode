/*
 * XREFs of NVMeControllerRemove @ 0x1C000DF24
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0006160 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeFreeDmaBuffer @ 0x1C0005234 (NVMeFreeDmaBuffer.c)
 *     RoundUp64 @ 0x1C00068CC (RoundUp64.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     AdminQueuesFreeResources @ 0x1C000B698 (AdminQueuesFreeResources.c)
 *     FreeMsiInfo @ 0x1C000B988 (FreeMsiInfo.c)
 *     FreeProcessorGroupInfo @ 0x1C000B9FC (FreeProcessorGroupInfo.c)
 *     FreeProcessorInfo @ 0x1C000BA48 (FreeProcessorInfo.c)
 *     IoQueuesFreeResources @ 0x1C000C5E0 (IoQueuesFreeResources.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C000E3C4 (NVMeFreeHostMemoryBuffer.c)
 *     NVMePowerCleanUp @ 0x1C000EB94 (NVMePowerCleanUp.c)
 */

char __fastcall NVMeControllerRemove(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int128 v3; // rax
  __int64 v4; // r8
  unsigned __int64 v5; // r9
  unsigned int v6; // edi
  unsigned int v7; // eax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r9
  unsigned __int8 v10; // r10
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r9
  unsigned int i; // esi
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r8
  signed __int32 v30[14]; // [rsp+0h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 1528);
  *(_DWORD *)(a1 + 20) &= ~1u;
  NVMePowerCleanUp();
  v6 = 0;
  if ( *(_QWORD *)(a1 + 3696) )
    NVMeFreeHostMemoryBuffer(a1);
  v7 = *(_DWORD *)(v1 + 88);
  if ( v7 )
  {
    v5 = RoundUp64(v7, 0x2710uLL);
    v3 = v5 * (unsigned __int128)0x346DC5D63886594BuLL;
    v8 = v5 / 0x2710;
  }
  else
  {
    LODWORD(v8) = 500;
  }
  if ( *(_BYTE *)(a1 + 43) )
  {
    v9 = RoundUp64((unsigned int)v8, 0x64uLL);
    v11 = v10;
    v3 = v9 * (unsigned __int128)0x47AE147AE147AE15uLL;
    v5 = v9 / 0x64;
    if ( (unsigned int)v5 > v10 )
      v11 = v5;
    LODWORD(v8) = 100 * v11;
  }
  IoQueuesFreeResources(a1, *((__int64 *)&v3 + 1), v4, v5);
  AdminQueuesFreeResources(a1, v12, v13, v14);
  NVMeFreeDmaBuffer(a1, 4096LL, *(_QWORD *)(a1 + 3680));
  FreeProcessorInfo(a1, v15, v16, v17);
  FreeProcessorGroupInfo(a1, v18, v19, v20);
  FreeMsiInfo(a1, v21, v22, v23);
  if ( !*(_BYTE *)(a1 + 16) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 184); ++i )
    {
      v26 = *(_QWORD *)(a1 + 8LL * i + 1640);
      if ( v26 )
        StorPortExtendedFunction(1LL, a1, v26, v24);
    }
  }
  memset((void *)(a1 + 1640), 0, 0x7F8uLL);
  v28 = *(_QWORD *)(a1 + 3784);
  *(_DWORD *)(a1 + 172) = 0;
  if ( v28 )
  {
    StorPortExtendedFunction(1LL, a1, v28, v27);
    *(_QWORD *)(a1 + 3784) = 0LL;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 136) + 20LL) = *(_DWORD *)(*(_QWORD *)(a1 + 136) + 20LL) & 0xFFFF3FFF | 0x4000;
  _InterlockedOr(v30, 0);
  if ( (_DWORD)v8 )
  {
    do
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 136) + 28LL) & 0xC) == 8 )
        break;
      StorPortExtendedFunction(81LL, a1, 10000LL, v27);
      ++v6;
    }
    while ( v6 < (unsigned int)v8 );
  }
  return 1;
}

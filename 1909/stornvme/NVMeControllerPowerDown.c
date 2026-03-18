/*
 * XREFs of NVMeControllerPowerDown @ 0x1C000B298
 * Callers:
 *     NVMeHwStartIo @ 0x1C00020B0 (NVMeHwStartIo.c)
 *     NVMeHwAdapterControl @ 0x1C0004C30 (NVMeHwAdapterControl.c)
 * Callees:
 *     IoQueuesDeletion @ 0x1C00096FC (IoQueuesDeletion.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C00180A0 (NVMeSetHostMemoryBuffer.c)
 */

__int64 __fastcall NVMeControllerPowerDown(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rcx
  unsigned int v4; // edi
  unsigned int v5; // eax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  unsigned __int8 v9; // r10
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r9
  int v12; // eax
  unsigned __int64 v13; // r9
  signed __int32 v15[8]; // [rsp+0h] [rbp-38h] BYREF
  size_t Size; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 1536);
  v3 = *(_QWORD *)(a1 + 3704);
  v4 = 0;
  if ( v3 )
  {
    LODWORD(Size) = *(_DWORD *)(v3 + 4);
    NVMeSetHostMemoryBuffer(a1, (void *)(v3 + 8), Size);
  }
  if ( (*(_BYTE *)(a1 + 3712) & 3) == 3 )
    *(_BYTE *)(a1 + 3712) |= 4u;
  v5 = *(_DWORD *)(v1 + 88);
  if ( v5 )
  {
    v6 = 10000 * (v5 / 0x2710uLL);
    v7 = v6 + 10000;
    if ( v5 == v6 )
      v7 = v5;
    v8 = v7 / 0x2710;
  }
  else
  {
    LODWORD(v8) = 500;
  }
  v9 = *(_BYTE *)(a1 + 43);
  if ( v9 )
  {
    v10 = 100 * ((unsigned int)v8 / 0x64uLL);
    v11 = v10 + 100;
    if ( (unsigned int)v8 == v10 )
      v11 = (unsigned int)v8;
    v12 = v9;
    v13 = v11 / 0x64;
    if ( (unsigned int)v13 > v9 )
      v12 = v13;
    LODWORD(v8) = 100 * v12;
  }
  StorPortDebugPrint(3LL, "StorNVMe - POWER: Controller D3, waiting %us seconds...\n", v8);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFFFFFFFA | 4;
  IoQueuesDeletion(a1);
  *(_DWORD *)(*(_QWORD *)(a1 + 144) + 20LL) = *(_DWORD *)(*(_QWORD *)(a1 + 144) + 20LL) & 0xFFFF3FFF | 0x4000;
  _InterlockedOr(v15, 0);
  if ( (_DWORD)v8 )
  {
    do
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 144) + 28LL) & 0xC) == 8 )
        break;
      StorPortExtendedFunction(81LL, a1, 10000LL);
      ++v4;
    }
    while ( v4 < (unsigned int)v8 );
  }
  return StorPortDebugPrint(3LL, "StorNVMe - POWER: Controller D3, took %ums\n", 10 * v4);
}

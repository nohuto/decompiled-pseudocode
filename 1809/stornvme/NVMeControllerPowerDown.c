/*
 * XREFs of NVMeControllerPowerDown @ 0x1C000DD5C
 * Callers:
 *     NVMeHwStartIo @ 0x1C0002BE0 (NVMeHwStartIo.c)
 *     NVMeHwAdapterControl @ 0x1C0006160 (NVMeHwAdapterControl.c)
 * Callees:
 *     IoQueuesDeletion @ 0x1C000C3F0 (IoQueuesDeletion.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C0017310 (NVMeSetHostMemoryBuffer.c)
 */

__int64 __fastcall NVMeControllerPowerDown(__int64 a1)
{
  int *v2; // rcx
  unsigned int v3; // esi
  int v4; // r9d
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r9
  unsigned int v10; // ebx
  signed __int32 v12[8]; // [rsp+0h] [rbp-38h] BYREF
  size_t Size; // [rsp+28h] [rbp-10h]

  v2 = *(int **)(a1 + 3696);
  v3 = 0;
  if ( v2 )
  {
    v4 = *v2;
    LODWORD(Size) = v2[1];
    NVMeSetHostMemoryBuffer(a1, 0, 0, v4, v2 + 2, Size);
  }
  if ( (*(_BYTE *)(a1 + 3704) & 3) == 3 )
    *(_BYTE *)(a1 + 3704) |= 4u;
  v5 = 5;
  if ( *(unsigned __int8 *)(a1 + 43) >= 5u )
    v5 = *(unsigned __int8 *)(a1 + 43);
  StorPortDebugPrint(3LL, "StorNVMe - POWER: Controller D3, waiting %us seconds...\n", v5);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFFFFFFFA | 4;
  IoQueuesDeletion(a1, v6, v7, v8);
  *(_DWORD *)(*(_QWORD *)(a1 + 136) + 20LL) = *(_DWORD *)(*(_QWORD *)(a1 + 136) + 20LL) & 0xFFFF3FFF | 0x4000;
  _InterlockedOr(v12, 0);
  v10 = 100 * v5;
  if ( v10 )
  {
    do
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 136) + 28LL) & 0xC) == 8 )
        break;
      StorPortExtendedFunction(81LL, a1, 10000LL, v9);
      ++v3;
    }
    while ( v3 < v10 );
  }
  return StorPortDebugPrint(3LL, "StorNVMe - POWER: Controller D3, took %ums\n", 10 * v3);
}

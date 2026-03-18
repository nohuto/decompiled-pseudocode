/*
 * XREFs of ?IncreaseAddedBufferSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x1C005B5A8
 * Callers:
 *     ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEA_N@Z @ 0x1C005B67C (-PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpd.c)
 *     ?PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C005B97C (-PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CResourceStateUpdateSerializer::IncreaseAddedBufferSize(
        CResourceStateUpdateSerializer *this,
        unsigned int a2,
        int a3)
{
  unsigned int v3; // eax
  int v4; // r9d
  int v5; // r10d
  unsigned int v7; // r8d
  unsigned int v8; // ecx

  v3 = a2 + a3;
  v4 = -1;
  v5 = -1;
  if ( a2 + a3 >= a2 )
    v5 = a2 + a3;
  v7 = v3 < a2 ? 0xC0000095 : 0;
  if ( v3 >= a2 )
  {
    v8 = *((_DWORD *)this + 14);
    if ( v8 + v5 >= v8 )
      v4 = v8 + v5;
    v7 = v8 + v5 < v8 ? 0xC0000095 : 0;
    *((_DWORD *)this + 14) = v4;
  }
  return v7;
}

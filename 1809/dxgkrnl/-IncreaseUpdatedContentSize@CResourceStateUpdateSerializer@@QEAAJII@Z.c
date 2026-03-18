/*
 * XREFs of ?IncreaseUpdatedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x1C005B638
 * Callers:
 *     ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEA_N@Z @ 0x1C005B67C (-PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpd.c)
 *     ?PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C005B97C (-PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CResourceStateUpdateSerializer::IncreaseUpdatedContentSize(
        CResourceStateUpdateSerializer *this,
        __int64 a2,
        int a3)
{
  unsigned int v3; // r8d
  int v4; // edx
  int v5; // r9d
  __int64 result; // rax
  unsigned int v8; // ecx

  v3 = a3 + 32;
  v4 = -1;
  v5 = -1;
  if ( v3 >= 0x20 )
    v5 = v3;
  result = v3 < 0x20 ? 0xC0000095 : 0;
  if ( v3 >= 0x20 )
  {
    v8 = *((_DWORD *)this + 18);
    if ( v8 + v5 >= v8 )
      v4 = v8 + v5;
    result = v8 + v5 < v8 ? 0xC0000095 : 0;
    *((_DWORD *)this + 18) = v4;
  }
  return result;
}

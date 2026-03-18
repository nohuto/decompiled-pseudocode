/*
 * XREFs of ?IncreaseAddedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x1C00626C8
 * Callers:
 *     ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEA_N@Z @ 0x1C00627F0 (-PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpd.c)
 *     ?PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C0062ADC (-PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CResourceStateUpdateSerializer::IncreaseAddedContentSize(
        CResourceStateUpdateSerializer *this,
        unsigned int a2,
        int a3)
{
  int v3; // eax
  unsigned int v4; // r8d
  unsigned int v5; // edx
  int v6; // eax

  v3 = a2 + a3;
  if ( a2 + a3 < a2 )
    return 3221225621LL;
  v4 = *((_DWORD *)this + 16);
  v5 = v4 + v3;
  v6 = -1;
  if ( v5 >= v4 )
    v6 = v5;
  *((_DWORD *)this + 16) = v6;
  return v5 < v4 ? 0xC0000095 : 0;
}

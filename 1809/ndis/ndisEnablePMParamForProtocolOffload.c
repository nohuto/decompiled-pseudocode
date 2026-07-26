/*
 * XREFs of ndisEnablePMParamForProtocolOffload @ 0x1C004A1A8
 * Callers:
 *     ndisOidPostAddPMProtocolOffload @ 0x1C0014780 (ndisOidPostAddPMProtocolOffload.c)
 *     ndisUpdateWmiPMParamsForProtocolOffloads @ 0x1C004BC5C (ndisUpdateWmiPMParamsForProtocolOffloads.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisEnablePMParamForProtocolOffload(__int64 a1, __int64 a2)
{
  switch ( *(_DWORD *)(a1 + 12) )
  {
    case 1:
      *(_DWORD *)(a2 + 8) |= 1u;
      break;
    case 2:
      *(_DWORD *)(a2 + 8) |= 2u;
      break;
    case 3:
      *(_DWORD *)(a2 + 8) |= 0x80u;
      break;
  }
}

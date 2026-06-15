/*
 * XREFs of wil::details::lambda_call__lambda_02ff5d2e0247e50668dd90287b768e54___::_lambda_call__lambda_02ff5d2e0247e50668dd90287b768e54___ @ 0x1800653CC
 * Callers:
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800ED988 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUI.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$6 @ 0x1800EDEB1 (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$6.c)
 * Callees:
 *     _lambda_0a015809dd6257f91f177da0fa925ef4_::operator() @ 0x180065420 (_lambda_0a015809dd6257f91f177da0fa925ef4_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_02ff5d2e0247e50668dd90287b768e54___::_lambda_call__lambda_02ff5d2e0247e50668dd90287b768e54___(
        __int64 a1)
{
  __int64 result; // rax
  _QWORD v2[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( *(_BYTE *)(a1 + 48) )
  {
    *(_BYTE *)(a1 + 48) = 0;
    v2[0] = *(_QWORD *)a1;
    v2[1] = *(_QWORD *)(a1 + 8);
    v2[2] = *(_QWORD *)(a1 + 16);
    v2[3] = *(_QWORD *)(a1 + 24);
    v2[4] = *(_QWORD *)(a1 + 32);
    v2[5] = *(_QWORD *)(a1 + 40);
    return lambda_0a015809dd6257f91f177da0fa925ef4_::operator()(v2);
  }
  return result;
}

/*
 * XREFs of _lambda_3bbd621042013d32986f77ece3de05df_::operator() @ 0x180152540
 * Callers:
 *     ?PrecacheProperties@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJXZ @ 0x18015B2E0 (-PrecacheProperties@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@P6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x180155874 (-GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEB.c)
 */

__int64 __fastcall lambda_3bbd621042013d32986f77ece3de05df_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  int DevicePropertyOfVariableSize; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  DevicePropertyOfVariableSize = Windows::Internal::Holographic::SpatialGraphDriverClient::GetDevicePropertyOfVariableSize(
                                   *a1,
                                   a2,
                                   a1[1],
                                   a3,
                                   2);
  v4 = DevicePropertyOfVariableSize;
  if ( DevicePropertyOfVariableSize >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x650,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
    (const char *)(unsigned int)DevicePropertyOfVariableSize);
  return v4;
}

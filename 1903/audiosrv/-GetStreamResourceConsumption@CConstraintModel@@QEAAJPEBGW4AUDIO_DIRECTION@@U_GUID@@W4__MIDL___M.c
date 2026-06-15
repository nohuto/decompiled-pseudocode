/*
 * XREFs of ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x180142C38
 * Callers:
 *     ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800FFCC4 (-DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleI.c)
 *     ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x180101000 (-QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEBGW4AUDIO_DIRECTION@@.c)
 * Callees:
 *     ?GetEndpointInformationFromId@CConstraintModel@@QEAAJPEBGPEAGI1IPEAK@Z @ 0x18000C910 (-GetEndpointInformationFromId@CConstraintModel@@QEAAJPEBGPEAGI1IPEAK@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     ?GetStreamResourceConsumptionFromMap@CConstraintModel@@QEAAJPEBGW4AUDIO_DIRECTION@@0KU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x180142D0C (-GetStreamResourceConsumptionFromMap@CConstraintModel@@QEAAJPEBGW4AUDIO_DIRECTION@@0KU_GUID@@W4_.c)
 */

__int64 __fastcall CConstraintModel::GetStreamResourceConsumption(
        CConstraintModel *a1,
        const unsigned __int16 *a2,
        __int64 a3,
        __int128 *a4,
        int a5,
        _DWORD *a6,
        _QWORD *a7)
{
  __int64 result; // rax
  __int64 v10; // r8
  unsigned int v11; // [rsp+28h] [rbp-420h]
  unsigned int v12[4]; // [rsp+50h] [rbp-3F8h] BYREF
  __int128 v13; // [rsp+60h] [rbp-3E8h] BYREF
  unsigned __int16 v14[208]; // [rsp+70h] [rbp-3D8h] BYREF
  unsigned __int16 v15[264]; // [rsp+210h] [rbp-238h] BYREF

  *a7 = 0LL;
  *a6 = 0;
  result = CConstraintModel::GetEndpointInformationFromId(a1, a2, v14, (int)a4, v15, v11, v12);
  if ( (int)result >= 0 )
  {
    v13 = *a4;
    return CConstraintModel::GetStreamResourceConsumptionFromMap(a1, v14, v10, v15, v12[0], &v13, a5, a6, a7);
  }
  return result;
}

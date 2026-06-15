/*
 * XREFs of ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14003ABAC
 * Callers:
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x140007AA0 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 *     ?AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14003C290 (-AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipeToLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400414C0 (-AddPipeToLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@PEAPEAUIAudioProcessingObject@@@Z @ 0x14003A8A4 (-GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionI.c)
 *     ?GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@Z @ 0x14003AC2C (-GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@.c)
 */

const struct CConnectionInstance *__fastcall CPipeInstance::GetLoopbackConnection(CPipeInstance *this)
{
  CPipeInstance *v1; // rbx
  const struct CConnectionInstance *result; // rax
  struct CConnectionInstance *v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = this;
  if ( *((_DWORD *)this + 51) )
    return (const struct CConnectionInstance *)CPipeInstance::GetMixSplitConnection_Internal(this, 1LL);
  v3 = 0LL;
  CPipeInstance::GetAPONodeAndConnection(this, &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60, 0LL, &v3, 0LL);
  result = v3;
  if ( !v3 )
  {
    v3 = 0LL;
    CPipeInstance::GetAPONodeAndConnection(v1, &GUID_fc7dff56_6b8d_45a9_b4ca_266f9ac21693, 0LL, &v3, 0LL);
    result = v3;
    if ( !v3 )
    {
      this = v1;
      return (const struct CConnectionInstance *)CPipeInstance::GetMixSplitConnection_Internal(this, 1LL);
    }
  }
  return result;
}

/*
 * XREFs of ?GetVirtualSurroundAPO@CPipeInstance@@QEBAJPEAPEAUIVirtualSurround@@@Z @ 0x14000B308
 * Callers:
 *     ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x14000B7FC (-RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 * Callees:
 *     ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@PEAPEAUIAudioProcessingObject@@@Z @ 0x14000B130 (-GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionI.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::GetVirtualSurroundAPO(CPipeInstance *this, struct IVirtualSurround **a2)
{
  struct IAudioProcessingObject *v3; // rbx
  unsigned int v4; // edi
  struct IAudioProcessingObject *v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0LL;
  *a2 = 0LL;
  CPipeInstance::GetAPONodeAndConnection(this, &GUID_b8bb0d7d_75ea_4359_abdf_d256f849d065, 0LL, 0LL, &v6);
  v3 = v6;
  if ( v6 )
    v4 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IVirtualSurround **))v6->lpVtbl->QueryInterface)(
           v6,
           &GUID_b8bb0d7d_75ea_4359_abdf_d256f849d065,
           a2);
  else
    v4 = -2147023728;
  if ( v3 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v3->lpVtbl->Release)(v3);
  return v4;
}

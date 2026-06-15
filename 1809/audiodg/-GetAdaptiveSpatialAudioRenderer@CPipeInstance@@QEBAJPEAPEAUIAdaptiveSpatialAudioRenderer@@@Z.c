/*
 * XREFs of ?GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z @ 0x14003AA24
 * Callers:
 *     ?GetSpatialResourcePoolSize@CAudioDeviceGraph@@UEAAJPEAI0PEAH@Z @ 0x14003CE10 (-GetSpatialResourcePoolSize@CAudioDeviceGraph@@UEAAJPEAI0PEAH@Z.c)
 *     ?GetSpatialResourceRevocationTime@CAudioDeviceGraph@@UEAAJPEA_J@Z @ 0x14003CED0 (-GetSpatialResourceRevocationTime@CAudioDeviceGraph@@UEAAJPEA_J@Z.c)
 *     ?GetSpatialUtilization@CAudioDeviceGraph@@UEAAJPEAI00@Z @ 0x14003CF80 (-GetSpatialUtilization@CAudioDeviceGraph@@UEAAJPEAI00@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@PEAPEAUIAudioProcessingObject@@@Z @ 0x14003A8A4 (-GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionI.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x14003B14C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::GetAdaptiveSpatialAudioRenderer(
        CPipeInstance *this,
        struct IAdaptiveSpatialAudioRenderer **a2)
{
  struct IAudioProcessingObject *v4; // rbx
  unsigned int v5; // edi
  char *v7; // [rsp+28h] [rbp-80h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  struct IAudioProcessingObject *v9; // [rsp+B8h] [rbp+10h] BYREF

  v9 = 0LL;
  *a2 = 0LL;
  CPipeInstance::GetAPONodeAndConnection(this, &GUID_24bdc606_d710_4d62_be35_be665fbc3e00, 0LL, 0LL, &v9);
  v4 = v9;
  if ( v9 )
  {
    v5 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IAdaptiveSpatialAudioRenderer **))v9->lpVtbl->QueryInterface)(
           v9,
           &GUID_24bdc606_d710_4d62_be35_be665fbc3e00,
           a2);
  }
  else if ( *((_DWORD *)this + 28) == 1 )
  {
    LODWORD(v7) = *((_DWORD *)this + 38);
    v5 = -2147023728;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x129A,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
      (const char *)0x80070490LL,
      (int)"Could not find ASAR in device pipe for EndpointId: {%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
      v7,
      *((unsigned __int16 *)this + 78),
      *((unsigned __int16 *)this + 79),
      *((unsigned __int8 *)this + 160),
      *((unsigned __int8 *)this + 161),
      *((unsigned __int8 *)this + 162),
      *((unsigned __int8 *)this + 163),
      *((unsigned __int8 *)this + 164),
      *((unsigned __int8 *)this + 165),
      *((unsigned __int8 *)this + 166),
      *((unsigned __int8 *)this + 167),
      -2LL);
  }
  else
  {
    v5 = -2147023728;
  }
  if ( v4 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v4->lpVtbl->Release)(v4);
  return v5;
}

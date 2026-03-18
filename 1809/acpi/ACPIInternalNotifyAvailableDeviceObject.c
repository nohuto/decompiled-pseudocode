/*
 * XREFs of ACPIInternalNotifyAvailableDeviceObject @ 0x1C009F018
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0001010 (ACPIDispatchIrp.c)
 * Callees:
 *     WPP_RECORDER_SF_sqL @ 0x1C0029970 (WPP_RECORDER_SF_sqL.c)
 *     AMLIGetNSObjectNotifyFlag @ 0x1C002C324 (AMLIGetNSObjectNotifyFlag.c)
 *     WPP_RECORDER_SF_sqSD @ 0x1C00515A0 (WPP_RECORDER_SF_sqSD.c)
 *     ACPIQueryDeviceBiosName @ 0x1C0096A84 (ACPIQueryDeviceBiosName.c)
 *     AcpiExternalAddBiosNameDeviceAssociation @ 0x1C00AB344 (AcpiExternalAddBiosNameDeviceAssociation.c)
 */

__int64 __fastcall ACPIInternalNotifyAvailableDeviceObject(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // [rsp+20h] [rbp-48h]
  int v11; // [rsp+28h] [rbp-40h]
  int v12; // [rsp+38h] [rbp-30h]
  struct _UNICODE_STRING v13; // [rsp+50h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 712);
  *(_QWORD *)&v13.Length = 0LL;
  v13.Buffer = 0LL;
  if ( v2 && AMLIGetNSObjectNotifyFlag(v2) )
  {
    v5 = ACPIQueryDeviceBiosName(*(_QWORD *)(a1 + 720), &v13);
    v6 = *(_QWORD *)(a1 + 720);
    v3 = v5;
    if ( v5 >= 0 )
    {
      v3 = AcpiExternalAddBiosNameDeviceAssociation(&v13, v6);
      if ( v3 < 0 )
        WPP_RECORDER_SF_sqSD((__int64)WPP_GLOBAL_Control->DeviceExtension, v7, v8, v9, v10, v11);
    }
    else
    {
      v12 = v5;
      WPP_RECORDER_SF_sqL(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0x14u,
        (__int64)&WPP_ab258ff9f03f3cf3ffad82b9e12a3728_Traceguids,
        "ACPIInternalNotifyAvailableDeviceObject",
        v6,
        v12);
    }
  }
  else
  {
    v3 = 0;
  }
  if ( v13.Buffer )
    ExFreePoolWithTag(v13.Buffer, 0x53706341u);
  return (unsigned int)v3;
}

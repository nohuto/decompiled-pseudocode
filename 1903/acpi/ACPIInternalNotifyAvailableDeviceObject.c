/*
 * XREFs of ACPIInternalNotifyAvailableDeviceObject @ 0x1C00A08F8
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0001010 (ACPIDispatchIrp.c)
 * Callees:
 *     WPP_RECORDER_SF_sqL @ 0x1C0029354 (WPP_RECORDER_SF_sqL.c)
 *     AMLIGetNSObjectNotifyFlag @ 0x1C002C908 (AMLIGetNSObjectNotifyFlag.c)
 *     WPP_RECORDER_SF_sqSD @ 0x1C0052F40 (WPP_RECORDER_SF_sqSD.c)
 *     ACPIQueryDeviceBiosName @ 0x1C0095168 (ACPIQueryDeviceBiosName.c)
 *     AcpiExternalAddBiosNameDeviceAssociation @ 0x1C00AEA04 (AcpiExternalAddBiosNameDeviceAssociation.c)
 */

__int64 __fastcall ACPIInternalNotifyAvailableDeviceObject(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // [rsp+20h] [rbp-48h]
  int v9; // [rsp+28h] [rbp-40h]
  int v10; // [rsp+38h] [rbp-30h]
  struct _UNICODE_STRING v11; // [rsp+50h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 712);
  *(_QWORD *)&v11.Length = 0LL;
  v11.Buffer = 0LL;
  if ( v2 && AMLIGetNSObjectNotifyFlag(v2) )
  {
    v3 = ACPIQueryDeviceBiosName(*(_QWORD *)(a1 + 720), &v11);
    if ( v3 >= 0 )
    {
      v3 = AcpiExternalAddBiosNameDeviceAssociation(&v11, *(_QWORD *)(a1 + 720));
      if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sqSD((__int64)WPP_GLOBAL_Control->DeviceExtension, v5, v6, v7, v8, v9);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = v3;
      WPP_RECORDER_SF_sqL(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0x14u,
        (__int64)&WPP_b68cac7b7f983325ca4dacf3610890c5_Traceguids,
        "ACPIInternalNotifyAvailableDeviceObject",
        *(_QWORD *)(a1 + 720),
        v10);
    }
  }
  else
  {
    v3 = 0;
  }
  if ( v11.Buffer )
    ExFreePoolWithTag(v11.Buffer, 0x53706341u);
  return (unsigned int)v3;
}

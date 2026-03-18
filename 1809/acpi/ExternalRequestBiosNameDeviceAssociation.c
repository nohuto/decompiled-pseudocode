/*
 * XREFs of ExternalRequestBiosNameDeviceAssociation @ 0x1C00AB960
 * Callers:
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C00AB48C (AcpiExternalTranslateBiosToNtResources.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x1C000ABD0 (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_qSD @ 0x1C00530B0 (WPP_RECORDER_SF_qSD.c)
 *     WPP_RECORDER_SF_qsD @ 0x1C0053234 (WPP_RECORDER_SF_qsD.c)
 *     ACPIInternalGetDeviceFromNSOBJ @ 0x1C005503C (ACPIInternalGetDeviceFromNSOBJ.c)
 *     AMLISetNSObjectNotifyFlag @ 0x1C00613C4 (AMLISetNSObjectNotifyFlag.c)
 *     ACPIInitUnicodeString @ 0x1C0096B14 (ACPIInitUnicodeString.c)
 *     AcpiExternalAddBiosNameDeviceAssociation @ 0x1C00AB344 (AcpiExternalAddBiosNameDeviceAssociation.c)
 */

__int64 __fastcall ExternalRequestBiosNameDeviceAssociation(char *a1, __int64 a2, char a3)
{
  void *v5; // rdi
  int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // [rsp+20h] [rbp-40h]
  __int64 *v17; // [rsp+40h] [rbp-20h] BYREF
  void *v18; // [rsp+48h] [rbp-18h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  int v20; // [rsp+98h] [rbp+38h] BYREF

  v17 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v5 = 0LL;
  v18 = 0LL;
  v7 = AMLIGetNameSpaceObject(a1, 0LL, (unsigned __int64 *)&v17, 0);
  if ( v7 >= 0 )
  {
    AMLISetNSObjectNotifyFlag(v17);
    v7 = ACPIInitUnicodeString(&DestinationString, a1);
    if ( v7 >= 0 )
    {
      ACPIInternalGetDeviceFromNSOBJ((__int64)v17, &v18, v8, &v20);
      v5 = v18;
      if ( v20 == 3 )
      {
        v7 = AcpiExternalAddBiosNameDeviceAssociation((__int64)&DestinationString, (__int64)v18);
        if ( v7 < 0 )
        {
          WPP_RECORDER_SF_qSD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v9,
            v10,
            v11,
            v16,
            (char)v5,
            DestinationString.Buffer);
          v7 = 0;
        }
      }
      if ( (a3 & 4) == 0 )
      {
        v7 = IoReserveDependency(*(_QWORD *)(a2 + 736), &DestinationString, 2LL);
        if ( v7 < 0 )
        {
          WPP_RECORDER_SF_qsD((__int64)WPP_GLOBAL_Control->DeviceExtension, v12, v13, v14, v16, a2, a1);
          v7 = 0;
        }
      }
    }
  }
  if ( DestinationString.Buffer )
  {
    ExFreePoolWithTag(DestinationString.Buffer, 0x53706341u);
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( v17 )
    AMLIDereferenceHandleEx((__int64)v17);
  return (unsigned int)v7;
}

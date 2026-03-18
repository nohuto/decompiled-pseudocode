/*
 * XREFs of ACPIFilterIrpQueryResourceRequirements @ 0x1C0098FF0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDispatchForwardIrp @ 0x1C0001ED0 (ACPIDispatchForwardIrp.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C001DC64 (WPP_RECORDER_SF_qLqss.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C0099330 (PnpBiosGetDeviceResourceList.c)
 *     ACPIInternalSetSpare @ 0x1C00994C8 (ACPIInternalSetSpare.c)
 *     ACPIInternalSetProximityDomain @ 0x1C009955C (ACPIInternalSetProximityDomain.c)
 */

__int64 __fastcall ACPIFilterIrpQueryResourceRequirements(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  _QWORD *DeviceExtension; // rbx
  __int64 v5; // rdx
  int DeviceResourceList; // eax
  char v8; // r10
  const char *v9; // rcx
  const char *v10; // rdx
  __int64 v11; // r8
  PVOID P; // [rsp+70h] [rbp+18h] BYREF

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(BugCheckParameter3);
  ACPIInternalSetProximityDomain(DeviceExtension);
  ACPIInternalSetSpare(DeviceExtension);
  P = 0LL;
  LOBYTE(v5) = 1;
  DeviceResourceList = PnpBiosGetDeviceResourceList(BugCheckParameter3, v5, &P);
  if ( DeviceResourceList < 0 )
  {
    v8 = 0;
    v9 = byte_1C006E28A;
    v10 = byte_1C006E28A;
    if ( DeviceExtension )
    {
      v11 = DeviceExtension[1];
      v8 = (char)DeviceExtension;
      if ( (v11 & 0x200000000000LL) != 0 )
      {
        v9 = (const char *)DeviceExtension[70];
        if ( (v11 & 0x400000000000LL) != 0 )
          v10 = (const char *)DeviceExtension[71];
      }
    }
    WPP_RECORDER_SF_qLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      5u,
      0xFu,
      (__int64)&WPP_ed40076b1570389cf10b919aaf05b677_Traceguids,
      BugCheckParameter3,
      DeviceResourceList,
      v8,
      v9,
      v10);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return ACPIDispatchForwardIrp(BugCheckParameter3, Irp);
}

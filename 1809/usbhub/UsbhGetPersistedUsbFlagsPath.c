/*
 * XREFs of UsbhGetPersistedUsbFlagsPath @ 0x1C0024BB0
 * Callers:
 *     UsbhGetInitRegUsbDeviceFlags @ 0x1C0021920 (UsbhGetInitRegUsbDeviceFlags.c)
 *     UsbhGetRegPersistedUsbDeviceFlags @ 0x1C0022000 (UsbhGetRegPersistedUsbDeviceFlags.c)
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     RtlStringCbPrintfW @ 0x1C0024E10 (RtlStringCbPrintfW.c)
 *     memset @ 0x1C002B800 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 */

void *__fastcall UsbhGetPersistedUsbFlagsPath(__int64 a1, __int64 a2)
{
  unsigned __int16 *v2; // rdi
  void *v3; // rbx
  int PersistedStateLocation; // eax
  PVOID PoolWithTag; // rax
  int v6; // eax
  char v7; // si
  NTSTATUS v8; // edi
  __int64 v10; // [rsp+20h] [rbp-28h]
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = a1;
  v2 = (unsigned __int16 *)PdoExt(a2);
  v3 = 0LL;
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             L"usbflags",
                             0LL,
                             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\usbflags",
                             0LL,
                             0LL,
                             0,
                             &v12);
  if ( PersistedStateLocation == -2147483643 )
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned int)(v12 + 26), 0x42554855u);
    v3 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, (unsigned int)(v12 + 26));
      v6 = RtlGetPersistedStateLocation(
             L"usbflags",
             0LL,
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\usbflags",
             0LL,
             v3,
             v12,
             0LL);
      v7 = v6;
      if ( v6 < 0 )
      {
        ExFreePoolWithTag(v3, 0);
        v3 = 0LL;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            75,
            (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
            v7);
      }
      else
      {
        LODWORD(v11) = v2[706];
        LODWORD(v10) = v2[705];
        v8 = RtlStringCbPrintfW(
               (NTSTRSAFE_PWSTR)v3 + ((unsigned __int64)(unsigned int)v12 >> 1) - 1,
               0x1CuLL,
               L"\\%04X%04X%04X",
               v2[704],
               v10,
               v11);
        if ( v8 < 0 )
        {
          ExFreePoolWithTag(v3, 0);
          v3 = 0LL;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              76,
              (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
              v8);
        }
      }
    }
    else if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        77,
        (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids);
    }
  }
  else if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      78,
      (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
      PersistedStateLocation);
  }
  return v3;
}

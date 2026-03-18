/*
 * XREFs of Etw_StartDeviceFail @ 0x1C003F150
 * Callers:
 *     Register_BiosHandoff @ 0x1C001FE14 (Register_BiosHandoff.c)
 *     Register_ControllerReset @ 0x1C00200E4 (Register_ControllerReset.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqzr1q @ 0x1C003F560 (McTemplateK0pqzr1q.c)
 */

void __fastcall Etw_StartDeviceFail(__int64 *a1, __int64 a2, char a3)
{
  __int64 v3; // rdx
  struct _DEVICE_OBJECT *v6; // rax
  int v7; // edx
  int v8; // r8d
  unsigned __int16 Length; // cx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  ULONG ResultLength[4]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v12[512]; // [rsp+60h] [rbp-A0h] BYREF

  v3 = *a1;
  DestinationString.Buffer = (wchar_t *)v12;
  *(_QWORD *)&DestinationString.Length = 33423360LL;
  v6 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 264))(
                                  WPP_MAIN_CB.Dpc.ProcessorHistory,
                                  v3);
  if ( IoGetDeviceProperty(v6, DevicePropertyDeviceDescription, 0x1FCu, v12, ResultLength) < 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"USB eXtensible Host Controller");
    Length = DestinationString.Length;
  }
  else
  {
    Length = LOWORD(ResultLength[0]) - 2;
    DestinationString.Length = LOWORD(ResultLength[0]) - 2;
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 4) != 0 )
    McTemplateK0pqzr1q(
      ((unsigned __int64)Length + 2) >> 1,
      v7,
      v8,
      a1[1],
      ((unsigned __int64)Length + 2) >> 1,
      (__int64)DestinationString.Buffer,
      a3);
}

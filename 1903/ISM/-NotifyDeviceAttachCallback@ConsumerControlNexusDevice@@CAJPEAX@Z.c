/*
 * XREFs of ?NotifyDeviceAttachCallback@ConsumerControlNexusDevice@@CAJPEAX@Z @ 0x1800B0600
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??_GDeviceRemovalEventArgs@WGIController@@QEAAPEAXI@Z @ 0x1800A8DB4 (--_GDeviceRemovalEventArgs@WGIController@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::NotifyDeviceAttachCallback(WGIController::DeviceRemovalEventArgs *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 v5; // rdx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( this )
  {
    v3 = *(_QWORD *)this;
    if ( v3 )
    {
      if ( *((_QWORD *)this + 1) )
      {
        if ( *((_QWORD *)this + 2) )
        {
          v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
          v2 = v6;
          if ( v6 >= 0 )
          {
            v2 = 0;
            goto LABEL_13;
          }
          v4 = (unsigned int)v6;
          v5 = 347LL;
        }
        else
        {
          v2 = -2147024809;
          v4 = 2147942487LL;
          v5 = 343LL;
        }
      }
      else
      {
        v2 = -2147024809;
        v4 = 2147942487LL;
        v5 = 342LL;
      }
    }
    else
    {
      v2 = -2147024809;
      v4 = 2147942487LL;
      v5 = 341LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)v4);
LABEL_13:
    WGIController::DeviceRemovalEventArgs::`scalar deleting destructor'(this);
    return v2;
  }
  v2 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x154,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
    (const char *)0x80070057LL);
  return v2;
}

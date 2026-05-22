/*
 * XREFs of ??1ConsumerControlNexusDevice@@EEAA@XZ @ 0x1800AFCD0
 * Callers:
 *     ??_EConsumerControlNexusDevice@@EEAAPEAXI@Z @ 0x1800AFDC0 (--_EConsumerControlNexusDevice@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180029430 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?CloseInterface@PnpDevice@@QEAAXXZ @ 0x1800AD890 (-CloseInterface@PnpDevice@@QEAAXXZ.c)
 *     ?Clear@?$NtList@UInputBufferListEntry@ConsumerControlNexusDevice@@@@QEAAXXZ @ 0x1800AFE64 (-Clear@-$NtList@UInputBufferListEntry@ConsumerControlNexusDevice@@@@QEAAXXZ.c)
 *     ?NotifyDeviceRemoval@ConsumerControlNexusDevice@@AEAAJXZ @ 0x1800B0588 (-NotifyDeviceRemoval@ConsumerControlNexusDevice@@AEAAJXZ.c)
 */

void __fastcall ConsumerControlNexusDevice::~ConsumerControlNexusDevice(ConsumerControlNexusDevice *this)
{
  __int64 v2; // rcx
  struct _HIDP_PREPARSED_DATA *v3; // rcx
  RefCountedObject *v4; // rcx

  *(_QWORD *)this = &ConsumerControlNexusDevice::`vftable';
  if ( *((_BYTE *)this + 136) )
    ConsumerControlNexusDevice::NotifyDeviceRemoval(this);
  PnpDevice::CloseInterface(*((PnpDevice **)this + 2));
  while ( *((_QWORD *)this + 11) )
    SleepEx(0x64u, 1);
  NtList<ConsumerControlNexusDevice::InputBufferListEntry>::Clear((char *)this + 48);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 15);
  v2 = *((_QWORD *)this + 14);
  if ( v2 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  NtList<ConsumerControlNexusDevice::InputBufferListEntry>::Clear((char *)this + 72);
  NtList<ConsumerControlNexusDevice::InputBufferListEntry>::Clear((char *)this + 48);
  v3 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 4);
  if ( v3 )
    HidD_FreePreparsedData(v3);
  WindowsDeleteString(*((HSTRING *)this + 3));
  *((_QWORD *)this + 3) = 0LL;
  v4 = (RefCountedObject *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    *((_QWORD *)this + 2) = 0LL;
    RefCountedObject::Release(v4);
  }
  *(_QWORD *)this = &RefCountedObject::`vftable';
}

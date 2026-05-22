/*
 * XREFs of ??1PnpDevice@@UEAA@XZ @ 0x18007319C
 * Callers:
 *     ??_GPnpDevice@@UEAAPEAXI@Z @ 0x180073150 (--_GPnpDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?CloseInterface@PnpDevice@@QEAAXXZ @ 0x180073290 (-CloseInterface@PnpDevice@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PnpDevice::~PnpDevice(HSTRING *this)
{
  volatile signed __int32 *v2; // rdi

  *this = (HSTRING)&PnpDevice::`vftable';
  PnpDevice::CloseInterface((PnpDevice *)this);
  WindowsDeleteString(this[4]);
  this[4] = 0LL;
  WindowsDeleteString(this[3]);
  this[3] = 0LL;
  v2 = (volatile signed __int32 *)this[2];
  if ( v2 )
  {
    this[2] = 0LL;
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      *((_DWORD *)v2 + 2) = 1;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 32LL))(v2);
      *((_DWORD *)v2 + 2) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 24LL))(v2, 1LL);
    }
  }
  *this = (HSTRING)&RefCountedObject::`vftable';
}

/*
 * XREFs of ??1ConsumerControlGenericDevice@@EEAA@XZ @ 0x180078DBC
 * Callers:
 *     ??_GConsumerControlGenericDevice@@EEAAPEAXI@Z @ 0x180078D70 (--_GConsumerControlGenericDevice@@EEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ConsumerControlGenericDevice::~ConsumerControlGenericDevice(HSTRING *this)
{
  volatile signed __int32 *v2; // rdi

  *this = (HSTRING)&ConsumerControlGenericDevice::`vftable';
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

/*
 * XREFs of ??1ConsumerControlNexusDevice@@EEAA@XZ @ 0x18007715C
 * Callers:
 *     ??_EConsumerControlNexusDevice@@EEAAPEAXI@Z @ 0x180077110 (--_EConsumerControlNexusDevice@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?CloseInterface@PnpDevice@@QEAAXXZ @ 0x180073290 (-CloseInterface@PnpDevice@@QEAAXXZ.c)
 *     ?NotifyDeviceRemoval@ConsumerControlNexusDevice@@AEAAJXZ @ 0x180078518 (-NotifyDeviceRemoval@ConsumerControlNexusDevice@@AEAAJXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18012C1D0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_V@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C2AC (--_V@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ConsumerControlNexusDevice::~ConsumerControlNexusDevice(ConsumerControlNexusDevice *this)
{
  ConsumerControlNexusDevice ***v2; // rbx
  ConsumerControlNexusDevice **v3; // rax
  ConsumerControlNexusDevice *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 **v7; // rsi
  __int64 *v8; // rax
  __int64 v9; // rcx
  ConsumerControlNexusDevice ***v10; // rax
  ConsumerControlNexusDevice *v11; // rcx
  char *v12; // rcx
  char *v13; // rbx
  volatile signed __int32 *v14; // rbx

  *(_QWORD *)this = &ConsumerControlNexusDevice::`vftable';
  if ( *((_BYTE *)this + 136) )
    ConsumerControlNexusDevice::NotifyDeviceRemoval(this);
  PnpDevice::CloseInterface(*((PnpDevice **)this + 2));
  while ( *((_QWORD *)this + 11) )
    SleepEx(0x64u, 1);
  v2 = (ConsumerControlNexusDevice ***)((char *)this + 48);
  v3 = (ConsumerControlNexusDevice **)*((_QWORD *)this + 6);
  v4 = *v3;
  if ( v3[1] != (ConsumerControlNexusDevice *)((char *)this + 48) )
LABEL_10:
    __fastfail(3u);
  while ( 1 )
  {
    if ( *((ConsumerControlNexusDevice ***)v4 + 1) != v3 )
      goto LABEL_10;
    *v2 = (ConsumerControlNexusDevice **)v4;
    *((_QWORD *)v4 + 1) = v2;
    if ( v3 == (ConsumerControlNexusDevice **)v2 )
      break;
    operator delete(v3, (const struct std::nothrow_t *)0x58);
    --*((_QWORD *)this + 8);
    v3 = *v2;
    v4 = **v2;
    if ( (*v2)[1] != (ConsumerControlNexusDevice *)v2 )
      goto LABEL_10;
  }
  v5 = *((_QWORD *)this + 15);
  if ( v5 )
  {
    *((_QWORD *)this + 15) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 14);
  if ( v6 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = (__int64 **)((char *)this + 72);
  while ( 1 )
  {
    v8 = *v7;
    v9 = **v7;
    if ( (__int64 **)(*v7)[1] != v7 || *(__int64 **)(v9 + 8) != v8 )
      goto LABEL_10;
    *v7 = (__int64 *)v9;
    *(_QWORD *)(v9 + 8) = v7;
    if ( v8 == (__int64 *)v7 )
      break;
    operator delete(v8, (const struct std::nothrow_t *)0x58);
    --*((_QWORD *)this + 11);
  }
  while ( 1 )
  {
    v10 = (ConsumerControlNexusDevice ***)*v2;
    v11 = **v2;
    if ( (*v2)[1] != (ConsumerControlNexusDevice *)v2 || *((ConsumerControlNexusDevice ****)v11 + 1) != v10 )
      goto LABEL_10;
    *v2 = (ConsumerControlNexusDevice **)v11;
    *((_QWORD *)v11 + 1) = v2;
    if ( v10 == v2 )
      break;
    operator delete(v10, (const struct std::nothrow_t *)0x58);
    --*((_QWORD *)this + 8);
  }
  v12 = (char *)*((_QWORD *)this + 4);
  if ( v12 )
  {
    v13 = v12 - 8;
    `eh vector destructor iterator'(
      v12,
      0x48uLL,
      *((_QWORD *)v12 - 1),
      (void (*)(void *))MPCClickerProcessor::Uninitialize3DComponents);
    operator delete[](v13, (const struct std::nothrow_t *)(72LL * *(_QWORD *)v13 + 8));
  }
  WindowsDeleteString(*((HSTRING *)this + 3));
  *((_QWORD *)this + 3) = 0LL;
  v14 = (volatile signed __int32 *)*((_QWORD *)this + 2);
  if ( v14 )
  {
    *((_QWORD *)this + 2) = 0LL;
    if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
    {
      *((_DWORD *)v14 + 2) = 1;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 32LL))(v14);
      *((_DWORD *)v14 + 2) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v14 + 24LL))(v14, 1LL);
    }
  }
  *(_QWORD *)this = &RefCountedObject::`vftable';
}

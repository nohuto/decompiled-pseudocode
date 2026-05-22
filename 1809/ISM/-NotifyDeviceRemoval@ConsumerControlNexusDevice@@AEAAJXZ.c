/*
 * XREFs of ?NotifyDeviceRemoval@ConsumerControlNexusDevice@@AEAAJXZ @ 0x180078518
 * Callers:
 *     ??1ConsumerControlNexusDevice@@EEAA@XZ @ 0x18007715C (--1ConsumerControlNexusDevice@@EEAA@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::NotifyDeviceRemoval(ConsumerControlNexusDevice *this)
{
  __int64 *v2; // rdi
  unsigned int v3; // ebx
  __int64 v5; // rcx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (__int64 *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    *v2 = 0LL;
    v2[1] = 0LL;
    *v2 = 0LL;
  }
  else
  {
    v2 = 0LL;
  }
  if ( !v2 )
  {
    v3 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)0x8007000ELL);
    return v3;
  }
  v5 = *v2;
  v6 = *((_QWORD *)this + 14);
  if ( *v2 != v6 )
  {
    if ( v6 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*((_QWORD *)this + 14));
      v5 = *v2;
    }
    *v2 = v6;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v2[1] = *((_QWORD *)this + 16);
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), __int64 *, __int64))(**((_QWORD **)this + 15)
                                                                                             + 128LL))(
         *((_QWORD *)this + 15),
         ConsumerControlNexusDevice::NotifyDeviceRemovalCallback,
         v2,
         4LL);
  v3 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BD,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)(unsigned int)v7);
    v8 = *v2;
    if ( *v2 )
    {
      *v2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    operator delete(v2, (const struct std::nothrow_t *)0x10);
    return v3;
  }
  *((_QWORD *)this + 16) = 0LL;
  return 0LL;
}

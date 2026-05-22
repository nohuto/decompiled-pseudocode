/*
 * XREFs of ?FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180016964
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x180016B10 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x1800AC648 (-FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEnt.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x180017000 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180029430 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C548 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::WindowsSafeIsEqualString @ 0x1800ACD3C (_anonymous_namespace_--WindowsSafeIsEqualString.c)
 */

__int64 __fastcall PnpDeviceWatcher::FindDeviceListEntryByInstanceId(
        PnpDeviceWatcher *this,
        HSTRING a2,
        char a3,
        struct PnpDeviceWatcher::DeviceListEntry **a4)
{
  char *v7; // rdi
  char *i; // rbx
  int v9; // ebx
  RefCountedObject *v10; // rbx
  __int128 v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rax
  char v14; // bp
  bool v15; // r14
  bool v16; // si
  void *v18; // rax
  RefCountedObject *v19; // rdx
  char **v20; // rcx
  RefCountedObject *v21[3]; // [rsp+20h] [rbp-78h] BYREF
  __int128 v22; // [rsp+38h] [rbp-60h]
  __int128 v23; // [rsp+48h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v21[2] = (RefCountedObject *)-2LL;
  v7 = (char *)this + 56;
  for ( i = (char *)*((_QWORD *)this + 7); i != v7; i = *(char **)i )
  {
    if ( (unsigned __int8)anonymous_namespace_::WindowsSafeIsEqualString(*(_QWORD *)(*((_QWORD *)i + 2) + 24LL), a2) )
    {
      *a4 = (struct PnpDeviceWatcher::DeviceListEntry *)i;
      return 0LL;
    }
  }
  *a4 = 0LL;
  if ( !a3 )
    return 1LL;
  v21[0] = 0LL;
  v9 = PnpDevice::MakeAndInitialize(a2, v21);
  if ( v9 < 0 )
  {
    if ( v21[0] )
      RefCountedObject::Release(v21[0]);
    return (unsigned int)v9;
  }
  v10 = v21[0];
  v11 = *((_OWORD *)v21[0] + 3);
  v22 = v11;
  v12 = v11 - 0x11D074D3745A17A0LL;
  if ( (_QWORD)v11 == 0x11D074D3745A17A0LL )
    v12 = *((_QWORD *)&v22 + 1) + 0x25A8F0365FFF014ALL;
  if ( !v12 )
    goto LABEL_20;
  v23 = v11;
  v13 = v11 - 0x4647CD8BE0CBF06CLL;
  if ( (_QWORD)v11 == 0x4647CD8BE0CBF06CLL )
    v13 = *((_QWORD *)&v23 + 1) - 0x74F9F0433B268ABBLL;
  if ( v13 )
    v14 = 0;
  else
LABEL_20:
    v14 = 1;
  v15 = *((_WORD *)v21[0] + 56) == 89 && *((_WORD *)v21[0] + 57) == 1;
  v16 = 0;
  if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
    __fastfail(7u);
  if ( ((1LL << gdwDeviceFamily) & 0x1820) != 0 )
    v16 = *((_WORD *)v10 + 56) == 12 && *((_WORD *)v10 + 57) == 1;
  if ( !v14 || !v15 && !v16 )
  {
    v21[0] = 0LL;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v10 + 2, 0xFFFFFFFF) == 1 )
    {
      *((_DWORD *)v10 + 2) = 1;
      (*(void (__fastcall **)(RefCountedObject *))(*(_QWORD *)v10 + 32LL))(v10);
      *((_DWORD *)v10 + 2) = 0;
      (*(void (__fastcall **)(RefCountedObject *, __int64))(*(_QWORD *)v10 + 24LL))(v10, 1LL);
    }
    return 1LL;
  }
  v18 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v18 )
  {
    *(_QWORD *)v18 = 0LL;
    *((_QWORD *)v18 + 1) = 0LL;
    *((_QWORD *)v18 + 3) = 0LL;
    *((_QWORD *)v18 + 2) = 0LL;
    v19 = (RefCountedObject *)*((_QWORD *)v18 + 2);
    *((_QWORD *)v18 + 2) = v10;
    *((_BYTE *)v18 + 24) = 0;
    v20 = (char **)*((_QWORD *)v7 + 1);
    if ( *v20 != v7 )
      __fastfail(3u);
    *(_QWORD *)v18 = v7;
    *((_QWORD *)v18 + 1) = v20;
    *v20 = (char *)v18;
    *((_QWORD *)v7 + 1) = v18;
    ++*((_QWORD *)v7 + 2);
    *a4 = (struct PnpDeviceWatcher::DeviceListEntry *)v18;
    if ( v19 )
      RefCountedObject::Release(v19);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x181,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
      (const char *)0x8007000ELL);
    RefCountedObject::Release(v10);
    return 2147942414LL;
  }
}

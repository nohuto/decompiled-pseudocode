/*
 * XREFs of ?FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180071C64
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18007165C (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180071F94 (-FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEnt.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x1800736A8 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PnpDeviceWatcher::FindDeviceListEntryByInstanceId(
        PnpDeviceWatcher *this,
        HSTRING a2,
        char a3,
        struct PnpDeviceWatcher::DeviceListEntry **a4)
{
  char *v7; // r15
  char *i; // rbx
  HSTRING v9; // rcx
  bool v10; // zf
  __int64 v12; // rdx
  int v13; // edi
  __int64 v14; // r8
  __int64 v15; // r9
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rdi
  __int128 v18; // xmm0
  void *v19; // rax
  void *v20; // rbx
  volatile signed __int32 *v21; // r14
  char **v22; // rax
  struct PnpDevice *v23; // [rsp+28h] [rbp-58h] BYREF
  INT32 result; // [rsp+30h] [rbp-50h] BYREF
  void *v25; // [rsp+38h] [rbp-48h]
  __int64 v26; // [rsp+40h] [rbp-40h]
  void *v27; // [rsp+48h] [rbp-38h]
  __int128 v28; // [rsp+50h] [rbp-30h]
  __int128 v29; // [rsp+60h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v26 = -2LL;
  v7 = (char *)this + 56;
  for ( i = (char *)*((_QWORD *)this + 7); i != v7; i = *(char **)i )
  {
    v9 = *(HSTRING *)(*((_QWORD *)i + 2) + 24LL);
    if ( v9 )
    {
      if ( !a2 || WindowsCompareStringOrdinal(v9, a2, &result) < 0 )
        continue;
      v10 = result == 0;
    }
    else
    {
      v10 = a2 == 0LL;
    }
    if ( v10 )
    {
      *a4 = (struct PnpDeviceWatcher::DeviceListEntry *)i;
      return 0LL;
    }
  }
  *a4 = 0LL;
  if ( !a3 )
    return 1LL;
  v23 = 0LL;
  v13 = PnpDevice::MakeAndInitialize(a2, &v23);
  if ( v13 < 0 )
  {
    v16 = (volatile signed __int32 *)v23;
    if ( v23 )
    {
      v23 = 0LL;
      if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
      {
        *((_DWORD *)v16 + 2) = 1;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 32LL))(v16);
        *((_DWORD *)v16 + 2) = 0;
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v16 + 24LL))(v16, 1LL);
      }
    }
    return (unsigned int)v13;
  }
  v17 = (volatile signed __int32 *)v23;
  v18 = *((_OWORD *)v23 + 3);
  v28 = v18;
  LOBYTE(v14) = v18 == __PAIR128__(0xDA570FC9A000FEB6uLL, 0x11D074D3745A17A0LL)
             || (v29 = v18, v18 == __PAIR128__(0x74F9F0433B268ABBLL, 0x4647CD8BE0CBF06CLL));
  if ( *((_WORD *)v23 + 56) != 89 || (LOBYTE(v15) = 1, *((_WORD *)v23 + 57) != 1) )
    LOBYTE(v15) = 0;
  LOBYTE(v12) = 0;
  if ( ((1LL << gdwDeviceFamily) & 0x1820) != 0 )
  {
    if ( *((_WORD *)v23 + 56) != 12 || (LOBYTE(v12) = 1, *((_WORD *)v23 + 57) != 1) )
      LOBYTE(v12) = 0;
  }
  if ( !(_BYTE)v14 || !(_BYTE)v15 && !(_BYTE)v12 )
  {
    v23 = 0LL;
    if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      *((_DWORD *)v17 + 2) = 1;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, __int64))(*(_QWORD *)v17 + 32LL))(
        v17,
        v12,
        v14,
        v15);
      *((_DWORD *)v17 + 2) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v17 + 24LL))(v17, 1LL);
    }
    return 1LL;
  }
  v19 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v20 = v19;
  if ( v19 )
  {
    memset_0(v19, 0, 0x20uLL);
    *((_QWORD *)v20 + 2) = 0LL;
  }
  else
  {
    v20 = 0LL;
  }
  v27 = v20;
  v25 = v20;
  if ( v20 )
  {
    v21 = (volatile signed __int32 *)*((_QWORD *)v20 + 2);
    *((_QWORD *)v20 + 2) = v17;
    *((_BYTE *)v20 + 24) = 0;
    v22 = (char **)*((_QWORD *)v7 + 1);
    if ( *v22 != v7 )
      __fastfail(3u);
    *(_QWORD *)v20 = v7;
    *((_QWORD *)v20 + 1) = v22;
    *v22 = (char *)v20;
    *((_QWORD *)v7 + 1) = v20;
    ++*((_QWORD *)v7 + 2);
    v25 = 0LL;
    *a4 = (struct PnpDeviceWatcher::DeviceListEntry *)v20;
    if ( v21 )
    {
      v23 = 0LL;
      if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
      {
        *((_DWORD *)v21 + 2) = 1;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 32LL))(v21);
        *((_DWORD *)v21 + 2) = 0;
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v21 + 24LL))(v21, 1LL);
      }
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x179,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
    (const char *)0x8007000ELL);
  v23 = 0LL;
  if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
  {
    *((_DWORD *)v17 + 2) = 1;
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 32LL))(v17);
    *((_DWORD *)v17 + 2) = 0;
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v17 + 24LL))(v17, 1LL);
  }
  return 2147942414LL;
}

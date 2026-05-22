/*
 * XREFs of ?OnDeviceUpdate@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z @ 0x180092A10
 * Callers:
 *     ?OnDeviceUpdate@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z @ 0x180038330 (-OnDeviceUpdate@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputStateManager::OnDeviceUpdate(InputStateManager *this, struct DeviceInfo *a2)
{
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v5; // rax
  unsigned int v6; // edi
  __int64 v7; // r9
  __int64 v8; // rdx
  int (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rdi
  int v12; // eax
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  int (__fastcall ***v16)(_QWORD, _QWORD, _QWORD); // [rsp+60h] [rbp+18h]

  v4 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  v5 = *((_QWORD *)this + 9);
  if ( v5 == *((_QWORD *)this + 10) )
  {
LABEL_4:
    v6 = -2147467259;
    v7 = 2147500037LL;
    v8 = 335LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)v7);
    goto LABEL_6;
  }
  while ( *(_DWORD *)v5 != *(_DWORD *)a2 )
  {
    v5 += 16LL;
    if ( v5 == *((_QWORD *)this + 10) )
      goto LABEL_4;
  }
  v10 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v5 + 8);
  if ( v10 )
  {
    ((void (__fastcall *)(_QWORD))(*v10)[1])(*(_QWORD *)(v5 + 8));
    v4 = v10;
    v16 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v10;
  }
  v11 = **v4;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v15);
  if ( v11(v4, &GUID_3cc27501_dfa8_48b9_9841_43a516320b1d, &v15) >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, struct DeviceInfo *))(*(_QWORD *)v15 + 24LL))(v15, a2);
    v6 = v12;
    if ( v12 < 0 )
    {
      v7 = (unsigned int)v12;
      v8 = 325LL;
      goto LABEL_5;
    }
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *))(**((_QWORD **)this + 5) + 32LL))(
          *((_QWORD *)this + 5),
          a2);
  v6 = v13;
  if ( v13 < 0 )
  {
    v7 = (unsigned int)v13;
    v8 = 328LL;
    goto LABEL_5;
  }
  v6 = 0;
LABEL_6:
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v15);
  if ( v4 )
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v4)[2])(v4);
  return v6;
}

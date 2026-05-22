/*
 * XREFs of ?OnDeviceUpdate@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800534E0
 * Callers:
 *     ?OnDeviceUpdate@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z @ 0x180054540 (-OnDeviceUpdate@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputStateManager::OnDeviceUpdate(InputStateManager *this, struct DeviceInfo *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // edx
  unsigned int v8; // edi
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // rdi
  int v14; // eax
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF
  __int64 v18; // [rsp+60h] [rbp+18h]

  v4 = 0LL;
  v18 = 0LL;
  v5 = 0LL;
  v17 = 0LL;
  v6 = *((_QWORD *)this + 9);
  if ( v6 == *((_QWORD *)this + 10) )
  {
LABEL_5:
    v8 = -2147467259;
    v9 = 2147500037LL;
    v10 = 330LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)v9);
    goto LABEL_7;
  }
  v7 = *(_DWORD *)a2;
  while ( *(_DWORD *)v6 != v7 )
  {
    v6 += 16LL;
    if ( v6 == *((_QWORD *)this + 10) )
      goto LABEL_5;
  }
  v13 = *(_QWORD *)(v6 + 8);
  if ( v13 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13 + 8LL))(*(_QWORD *)(v6 + 8));
    v4 = v13;
    v18 = v13;
    v5 = v17;
  }
  if ( v5 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v4)(v4, &GUID_3cc27501_dfa8_48b9_9841_43a516320b1d, &v17) >= 0 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64, struct DeviceInfo *))(*(_QWORD *)v17 + 24LL))(v17, a2);
    v8 = v14;
    if ( v14 < 0 )
    {
      v9 = (unsigned int)v14;
      v10 = 320LL;
      goto LABEL_6;
    }
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *))(**((_QWORD **)this + 5) + 32LL))(
          *((_QWORD *)this + 5),
          a2);
  v8 = v15;
  if ( v15 < 0 )
  {
    v9 = (unsigned int)v15;
    v10 = 323LL;
    goto LABEL_6;
  }
  v8 = 0;
LABEL_7:
  v11 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v8;
}

/*
 * XREFs of ?SetApplicationMonitorSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIImmersiveMonitor@@W4__MIDL___MIDL_itf_shpriv_core_0000_0319_0002@@@Z @ 0x180072A30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::SetApplicationMonitorSafe(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 a3,
        int a4)
{
  int v4; // edi
  __int64 v7; // rcx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  int v10; // [rsp+58h] [rbp+10h] BYREF
  int v11; // [rsp+5Ch] [rbp+14h]

  v4 = a4 - 1;
  v9 = 0LL;
  (**a2)(a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v9);
  v10 = *(_DWORD *)(a1 + 712);
  v11 = 0;
  (*(void (__fastcall **)(__int64, __int64, int *, _QWORD))(*(_QWORD *)v9 + 456LL))(
    v9,
    a3,
    &v10,
    3 - (unsigned int)(v4 != 0));
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return 0LL;
}

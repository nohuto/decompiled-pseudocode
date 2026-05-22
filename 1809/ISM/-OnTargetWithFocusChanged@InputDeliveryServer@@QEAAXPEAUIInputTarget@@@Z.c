/*
 * XREFs of ?OnTargetWithFocusChanged@InputDeliveryServer@@QEAAXPEAUIInputTarget@@@Z @ 0x18002A300
 * Callers:
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x18008BBB0 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall InputDeliveryServer::OnTargetWithFocusChanged(InputDeliveryServer *this, struct IInputTarget *a2)
{
  __int64 v4; // rcx
  int v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  struct IInputTarget *v7; // [rsp+50h] [rbp+18h]

  v5 = 0;
  v7 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
  v6 = 0LL;
  if ( a2
    && (**(int (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2)(
         a2,
         &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
         &v6) >= 0 )
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 48LL))(v6, &v5);
  }
  *((_DWORD *)this + 24) = v5;
  v4 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( a2 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 16LL))(a2);
}

/*
 * XREFs of std::_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_::_Do_call @ 0x18004B8C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_::_Do_call(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  int (__fastcall ***v4)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v5; // [rsp+40h] [rbp+10h] BYREF
  int (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp+18h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v1 = *(_QWORD *)(a1 + 8);
  if ( v1
    && (*(int (__fastcall **)(__int64, GUID *, _QWORD))(*(_QWORD *)v1 + 24LL))(
         v1,
         &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
         &v6) >= 0
    && v6 )
  {
    v2 = v5;
    if ( v5 )
    {
      v5 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
    if ( (**v6)(v6, &GUID_1ca5414f_db68_41cf_b04d_27cfcf56d352, &v5) >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 368LL))(v5);
  }
  v3 = v5;
  if ( v5 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v4)[2])(v4);
  }
}

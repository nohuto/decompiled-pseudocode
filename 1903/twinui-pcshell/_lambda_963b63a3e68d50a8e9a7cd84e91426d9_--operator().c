/*
 * XREFs of _lambda_963b63a3e68d50a8e9a7cd84e91426d9_::operator() @ 0x180071EF4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d0e8f4979c3957dc3bbaa4bdaf35eba2___::Run @ 0x180071E80 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d0e8f4979c3957dc3bbaa4bdaf35eba2___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_963b63a3e68d50a8e9a7cd84e91426d9_::operator()(_QWORD *a1)
{
  __int64 v1; // rax
  char v2; // r8
  __int64 v3; // rdx
  bool v4; // al
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1[1];
  v2 = 1;
  v3 = a1[2];
  v6 = v1;
  v7 = v3;
  v4 = (int)v1 > 0 && SHIDWORD(v1) > 0;
  if ( (int)v3 <= 0 || SHIDWORD(v3) <= 0 )
    v2 = 0;
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))(**(_QWORD **)(*a1 + 120LL) + 184LL))(
           *(_QWORD *)(*a1 + 120LL),
           (unsigned __int64)&v6 & -(__int64)v4,
           (unsigned __int64)&v7 & -(__int64)(v2 != 0));
}

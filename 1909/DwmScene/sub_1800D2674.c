/*
 * XREFs of sub_1800D2674 @ 0x1800D2674
 * Callers:
 *     sub_1800D24D0 @ 0x1800D24D0 (sub_1800D24D0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800642C0 @ 0x1800642C0 (sub_1800642C0.c)
 *     sub_1800644BC @ 0x1800644BC (sub_1800644BC.c)
 *     sub_18006CEC8 @ 0x18006CEC8 (sub_18006CEC8.c)
 *     sub_1800CEB18 @ 0x1800CEB18 (sub_1800CEB18.c)
 *     sub_1800CEF44 @ 0x1800CEF44 (sub_1800CEF44.c)
 *     sub_1800D2E34 @ 0x1800D2E34 (sub_1800D2E34.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D2674(__int64 a1, __int64 *a2)
{
  unsigned int *v4; // rax
  int v5; // edx
  int v6; // ecx
  __int64 v7; // r9
  __int64 v8; // r8
  unsigned int v9; // esi
  __int64 v10; // rcx
  int v11; // eax
  __int64 result; // rax
  volatile signed __int32 *v13; // rbx
  signed __int32 v14; // eax
  bool v15; // zf
  __int64 v16; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v17; // [rsp+48h] [rbp-30h] BYREF
  void (__fastcall ****v18)(_QWORD, _QWORD); // [rsp+50h] [rbp-28h] BYREF
  volatile signed __int32 *v19; // [rsp+58h] [rbp-20h]

  sub_1800642C0(a1, a2);
  v18 = 0LL;
  v19 = 0LL;
  (*(void (__fastcall **)(__int64, void (__fastcall *****)(_QWORD, _QWORD), __int64))(*(_QWORD *)a1 + 56LL))(
    a1,
    &v18,
    *a2);
  v4 = *(unsigned int **)(a1 + 112);
  if ( v4 )
    v5 = v4[5];
  else
    v5 = 0;
  if ( v4 )
    v6 = v4[6];
  else
    v6 = 0;
  if ( v4 )
    v7 = v4[4];
  else
    v7 = 0LL;
  if ( v4 )
    v8 = v4[2];
  else
    v8 = 0LL;
  sub_1800CEB18(v18, *(_QWORD *)(a1 + 136), v8, v7, v6, v5);
  v9 = sub_18006CEC8(*a2);
  v17 = v9;
  sub_1800CEF44((__int64 **)(a1 + 120), (__int64)&v16, &v17);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v16 + 40), (__int64 *)&v18);
  v10 = *(_QWORD *)(a1 + 112);
  if ( v10 )
    v11 = *(_DWORD *)(v10 + 24);
  else
    v11 = 0;
  if ( v11 == 2 )
    sub_1800D2E34(a1, *a2);
  result = sub_1800644BC(a1, v9);
  v13 = v19;
  if ( v19 )
  {
    v14 = _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF);
    v15 = v14 == 1;
    result = (unsigned int)(v14 - 1);
    if ( v15 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      result = (unsigned int)_InterlockedDecrement(v13 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  return result;
}

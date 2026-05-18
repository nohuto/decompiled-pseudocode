/*
 * XREFs of sub_18009F5A4 @ 0x18009F5A4
 * Callers:
 *     sub_18009F390 @ 0x18009F390 (sub_18009F390.c)
 *     sub_18009F4FC @ 0x18009F4FC (sub_18009F4FC.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_1800642C0 @ 0x1800642C0 (sub_1800642C0.c)
 *     sub_1800644BC @ 0x1800644BC (sub_1800644BC.c)
 *     sub_18009EF2C @ 0x18009EF2C (sub_18009EF2C.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18009F5A4(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  signed __int32 v6; // eax
  unsigned int v7; // ebx
  __int64 result; // rax
  volatile signed __int32 *v9; // rbx
  signed __int32 v10; // eax
  bool v11; // zf
  __int64 v12; // [rsp+28h] [rbp-40h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-30h] BYREF
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF

  v4 = *a2;
  v14 = 0LL;
  v5 = *(_QWORD *)(v4 + 80);
  if ( v5 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(v5 + 8);
      if ( !v6 )
        break;
      if ( v6 == _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v6 + 1, v6) )
      {
        v14 = *(_OWORD *)(v4 + 72);
        break;
      }
    }
  }
  v7 = *(_DWORD *)(*a2 + 88LL);
  sub_1800642C0(a1, &v14);
  v13 = v7;
  sub_18009EF2C((__int64 **)(a1 + 128), (__int64)&v12, &v13);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v12 + 40), a2);
  result = sub_1800644BC(a1, v7);
  v9 = (volatile signed __int32 *)*((_QWORD *)&v14 + 1);
  if ( *((_QWORD *)&v14 + 1) )
  {
    v10 = _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL), 0xFFFFFFFF);
    v11 = v10 == 1;
    result = (unsigned int)(v10 - 1);
    if ( v11 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      result = (unsigned int)_InterlockedDecrement(v9 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  return result;
}

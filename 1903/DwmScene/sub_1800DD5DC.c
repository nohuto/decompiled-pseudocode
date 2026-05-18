/*
 * XREFs of sub_1800DD5DC @ 0x1800DD5DC
 * Callers:
 *     sub_1800AC720 @ 0x1800AC720 (sub_1800AC720.c)
 *     sub_1800C9428 @ 0x1800C9428 (sub_1800C9428.c)
 *     sub_1800DE4D8 @ 0x1800DE4D8 (sub_1800DE4D8.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180026770 @ 0x180026770 (sub_180026770.c)
 *     sub_18006CD84 @ 0x18006CD84 (sub_18006CD84.c)
 *     sub_1800D0348 @ 0x1800D0348 (sub_1800D0348.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     ceilf @ 0x1801271CE (ceilf.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800DD5DC(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // r14
  _QWORD **v6; // rsi
  _QWORD *v7; // rax
  volatile signed __int32 *v8; // rbx
  signed int v9; // ebx
  float v10; // xmm0_4
  unsigned int v11; // r8d
  volatile signed __int32 *v12; // rax
  _QWORD *result; // rax
  _QWORD *v14; // [rsp+30h] [rbp-58h] BYREF
  volatile signed __int32 *v15; // [rsp+38h] [rbp-50h]

  v3 = a3;
  v14 = a2;
  v6 = (_QWORD **)(a1 + 16 * (a3 + 11LL));
  if ( !*v6 )
  {
    v7 = (_QWORD *)sub_18006CD84(*(_QWORD *)(a1 + 32));
    sub_180026770(v7, &v14, 1u);
    std::shared_ptr<__ExceptionPtr>::operator=(v6, (__int64 *)&v14);
    v8 = v15;
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      }
    }
    v9 = (int)ceilf((float)*(int *)(a1 + 8) / flt_1801F8038[v3]);
    v10 = ceilf((float)*(int *)(a1 + 12) / flt_1801F8038[v3]);
    if ( v9 < 1 )
      v9 = 1;
    v11 = (int)v10;
    if ( (int)v10 < 1 )
      v11 = 1;
    sub_1800D0348(*v6, v9, v11, 1u, 0, *(_QWORD *)(a1 + 32));
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v12 = (volatile signed __int32 *)v6[1];
  if ( v12 )
    _InterlockedAdd(v12 + 2, 1u);
  result = a2;
  *a2 = *v6;
  a2[1] = v6[1];
  return result;
}

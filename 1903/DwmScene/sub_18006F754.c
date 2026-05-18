/*
 * XREFs of sub_18006F754 @ 0x18006F754
 * Callers:
 *     sub_18007315C @ 0x18007315C (sub_18007315C.c)
 *     sub_1800733A0 @ 0x1800733A0 (sub_1800733A0.c)
 *     ??$_Resetp@V__ExceptionPtr@@@?$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z_1 @ 0x180088D6C (--$_Resetp@V__ExceptionPtr@@@-$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z_1.c)
 *     sub_1800A240C @ 0x1800A240C (sub_1800A240C.c)
 *     sub_1800A2530 @ 0x1800A2530 (sub_1800A2530.c)
 *     sub_1800A74E8 @ 0x1800A74E8 (sub_1800A74E8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18006F754(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rcx

  if ( a2 )
  {
    v2 = a2[1];
    if ( !(v2 ? *(_DWORD *)(v2 + 8) : 0) )
    {
      v4 = *(volatile signed __int32 **)(a1 + 8);
      if ( v4 )
      {
        _InterlockedIncrement(v4 + 2);
        v4 = *(volatile signed __int32 **)(a1 + 8);
        if ( v4 )
          _InterlockedIncrement(v4 + 3);
      }
      *a2 = a2;
      v5 = (volatile signed __int32 *)a2[1];
      a2[1] = v4;
      if ( v5 && _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      }
    }
  }
}

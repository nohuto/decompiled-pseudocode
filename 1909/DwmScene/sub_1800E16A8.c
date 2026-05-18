/*
 * XREFs of sub_1800E16A8 @ 0x1800E16A8
 * Callers:
 *     sub_1800E0FAC @ 0x1800E0FAC (sub_1800E0FAC.c)
 *     sub_1800E10CC @ 0x1800E10CC (sub_1800E10CC.c)
 *     sub_1800E14B0 @ 0x1800E14B0 (sub_1800E14B0.c)
 *     sub_1800E1548 @ 0x1800E1548 (sub_1800E1548.c)
 * Callees:
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800E16A8(__int128 *a1)
{
  __int128 *v1; // r8
  __int64 v2; // rdx
  __int128 v3; // rcx
  signed __int32 v4; // eax
  __int128 v5; // [rsp+28h] [rbp-20h]

  v1 = a1 + 1;
  if ( *((_QWORD *)a1 + 2) )
  {
    v5 = 0LL;
    v2 = *((_QWORD *)a1 + 1);
    if ( v2 )
    {
      while ( 1 )
      {
        v4 = *(_DWORD *)(v2 + 8);
        if ( !v4 )
          break;
        if ( v4 == _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v4 + 1, v4) )
        {
          v3 = *a1;
          *((_QWORD *)&v5 + 1) = *((_QWORD *)&v3 + 1);
          goto LABEL_4;
        }
      }
    }
    v3 = 0LL;
LABEL_4:
    if ( (_QWORD)v3 )
      (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)v3 + 8LL))(v3, v1);
    if ( *((_QWORD *)&v3 + 1)
      && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v3 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v5 + 1))(*((_QWORD *)&v5 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v5 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v5 + 1) + 8LL))(*((_QWORD *)&v5 + 1));
    }
  }
}

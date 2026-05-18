/*
 * XREFs of sub_180085384 @ 0x180085384
 * Callers:
 *     sub_1800852E4 @ 0x1800852E4 (sub_1800852E4.c)
 * Callees:
 *     sub_180078230 @ 0x180078230 (sub_180078230.c)
 *     sub_180082090 @ 0x180082090 (sub_180082090.c)
 *     sub_18008210C @ 0x18008210C (sub_18008210C.c)
 *     sub_1800821B4 @ 0x1800821B4 (sub_1800821B4.c)
 *     sub_180082320 @ 0x180082320 (sub_180082320.c)
 *     sub_1800823B8 @ 0x1800823B8 (sub_1800823B8.c)
 *     sub_180083F00 @ 0x180083F00 (sub_180083F00.c)
 *     sub_1800842E4 @ 0x1800842E4 (sub_1800842E4.c)
 *     sub_180086E38 @ 0x180086E38 (sub_180086E38.c)
 *     sub_180087450 @ 0x180087450 (sub_180087450.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall __noreturn sub_180085384(__int64 a1)
{
  volatile signed __int32 *v2; // rbx
  __int64 v3; // rdx
  signed __int32 v4; // eax

  sub_180087450(a1);
  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 80);
  if ( v3 )
  {
    do
    {
      v4 = *(_DWORD *)(v3 + 8);
      if ( !v4 )
        goto LABEL_7;
    }
    while ( v4 != _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v4 + 1, v4) );
    v2 = *(volatile signed __int32 **)(a1 + 80);
  }
LABEL_7:
  if ( v2 && _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
    if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  sub_180078230();
}

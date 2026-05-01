/*
 * XREFs of HampConnectionDeliverPayload @ 0x180005990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180009BE0 (_guard_dispatch_icall_nop.c)
 */

BOOLEAN __fastcall HampConnectionDeliverPayload(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v5; // rax
  BOOLEAN result; // al
  _QWORD v7[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+30h] [rbp-38h]
  __int64 v9; // [rsp+38h] [rbp-30h]
  __int64 v10; // [rsp+40h] [rbp-28h]
  __int64 v11; // [rsp+48h] [rbp-20h]
  __int64 v12; // [rsp+50h] [rbp-18h]
  __int64 v13; // [rsp+58h] [rbp-10h]

  if ( a3 )
  {
    v5 = a3;
    a3[1] = a2[7];
  }
  else
  {
    v7[1] = a2[7];
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v7[0] = a2[6];
    v5 = v7;
    LODWORD(v8) = 3;
  }
  result = (*(__int64 (__fastcall **)(_QWORD *))(a1 + 80))(v5);
  if ( !a3 )
  {
    a2[6] = -1LL;
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
  }
  return result;
}

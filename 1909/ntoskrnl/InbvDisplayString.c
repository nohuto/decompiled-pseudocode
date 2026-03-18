/*
 * XREFs of InbvDisplayString @ 0x14018C640
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

char __fastcall InbvDisplayString(__int64 a1)
{
  __int64 (*v2)(void); // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  if ( !byte_140467F64 )
    return 0;
  if ( qword_140467F70 )
    qword_140467F70(&v3);
  if ( qword_140467F68 && (v2 = *(__int64 (**)(void))(qword_140467F68 + 40)) != 0LL )
    return v2();
  else
    return 0;
}

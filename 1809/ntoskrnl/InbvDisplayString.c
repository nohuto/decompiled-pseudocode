/*
 * XREFs of InbvDisplayString @ 0x14017E0D0
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

char __fastcall InbvDisplayString(__int64 a1)
{
  __int64 (*v2)(void); // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  if ( !byte_14043D7B4 )
    return 0;
  if ( qword_14043D7C0 )
    qword_14043D7C0(&v3);
  if ( qword_14043D7B8 && (v2 = *(__int64 (**)(void))(qword_14043D7B8 + 40)) != 0LL )
    return v2();
  else
    return 0;
}

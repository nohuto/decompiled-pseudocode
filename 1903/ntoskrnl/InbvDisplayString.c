/*
 * XREFs of InbvDisplayString @ 0x14018BCB0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

char __fastcall InbvDisplayString(__int64 a1)
{
  __int64 (*v2)(void); // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  if ( !byte_140468224 )
    return 0;
  if ( qword_140468230 )
    qword_140468230(&v3);
  if ( qword_140468228 && (v2 = *(__int64 (**)(void))(qword_140468228 + 40)) != 0LL )
    return v2();
  else
    return 0;
}

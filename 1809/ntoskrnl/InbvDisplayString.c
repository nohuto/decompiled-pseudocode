/*
 * XREFs of InbvDisplayString @ 0x14017DF70
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

char __fastcall InbvDisplayString(__int64 a1)
{
  __int64 (*v2)(void); // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  if ( !byte_14043C6F4 )
    return 0;
  if ( qword_14043C700 )
    qword_14043C700(&v3);
  if ( qword_14043C6F8 && (v2 = *(__int64 (**)(void))(qword_14043C6F8 + 40)) != 0LL )
    return v2();
  else
    return 0;
}

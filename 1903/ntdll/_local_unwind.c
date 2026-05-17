/*
 * XREFs of _local_unwind @ 0x18008D570
 * Callers:
 *     sub_18005287C @ 0x18005287C (sub_18005287C.c)
 *     LdrAddDllDirectory @ 0x18008C200 (LdrAddDllDirectory.c)
 * Callees:
 *     RtlUnwind @ 0x18001AD60 (RtlUnwind.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  RtlUnwind(a1, a2, 0LL, 0LL);
}

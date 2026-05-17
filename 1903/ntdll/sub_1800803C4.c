/*
 * XREFs of sub_1800803C4 @ 0x1800803C4
 * Callers:
 *     sub_18002F4F0 @ 0x18002F4F0 (sub_18002F4F0.c)
 *     sub_180088B88 @ 0x180088B88 (sub_180088B88.c)
 *     sub_180088FFC @ 0x180088FFC (sub_180088FFC.c)
 * Callees:
 *     sub_18002F2D4 @ 0x18002F2D4 (sub_18002F2D4.c)
 */

struct _PEB *__fastcall sub_1800803C4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _PEB *result; // rax
  struct _PEB_LDR_DATA *Ldr; // rcx

  if ( a1 == qword_180166470 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
    return (struct _PEB *)sub_18002F2D4((const void **)&qword_180166470, (__int64)&qword_180166480);
  result = NtCurrentPeb();
  Ldr = result->Ldr;
  if ( !Ldr->ShutdownInProgress )
    return (struct _PEB *)sub_18010EFC8(Ldr, a2, a3, a4);
  return result;
}

/*
 * XREFs of sub_1800803C4 @ 0x1800803C4
 * Callers:
 *     sub_18002F4F0 @ 0x18002F4F0 (sub_18002F4F0.c)
 *     sub_180088B88 @ 0x180088B88 (sub_180088B88.c)
 *     sub_180088FFC @ 0x180088FFC (sub_180088FFC.c)
 * Callees:
 *     sub_18002F2D4 @ 0x18002F2D4 (sub_18002F2D4.c)
 */

void __fastcall sub_1800803C4(PVOID a1, __int64 a2, __int64 a3)
{
  PPEB_LDR_DATA Ldr; // rcx

  if ( a1 != qword_180166470 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    Ldr = NtCurrentPeb()->Ldr;
    if ( !Ldr->ShutdownInProgress )
      sub_18010EFC8(Ldr, a2, a3);
  }
  else
  {
    sub_18002F2D4((const void **)&qword_180166470, &stru_180166480);
  }
}

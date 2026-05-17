/*
 * XREFs of ??0RTLP_FLS_CALLBACK_ENTRY@@QEAA@XZ @ 0x18009C1C8
 * Callers:
 *     ?SlotAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAKPEAU1@@Z @ 0x180068F70 (-SlotAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAKPEAU1@@Z.c)
 * Callees:
 *     <none>
 */

RTLP_FLS_CALLBACK_ENTRY *__fastcall RTLP_FLS_CALLBACK_ENTRY::RTLP_FLS_CALLBACK_ENTRY(RTLP_FLS_CALLBACK_ENTRY *this)
{
  RTLP_FLS_CALLBACK_ENTRY *result; // rax

  *(_QWORD *)this = 0LL;
  result = this;
  *((_QWORD *)this + 1) = 0LL;
  return result;
}

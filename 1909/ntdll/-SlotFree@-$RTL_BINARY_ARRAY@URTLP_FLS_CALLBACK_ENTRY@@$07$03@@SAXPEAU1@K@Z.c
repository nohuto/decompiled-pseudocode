/*
 * XREFs of ?SlotFree@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z @ 0x180074C4C
 * Callers:
 *     ?RtlpFlsAlloc@@YAJPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_THREAD_CONTEXT@@P6AXPEAX@ZPEAK@Z @ 0x180068E24 (-RtlpFlsAlloc@@YAJPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_THREAD_CONTEXT@@P6AXPEAX@ZPEAK@Z.c)
 *     ?RtlpFlsFree@@YAJPEAU_RTLP_FLS_CONTEXT@@K@Z @ 0x180074A90 (-RtlpFlsFree@@YAJPEAU_RTLP_FLS_CONTEXT@@K@Z.c)
 * Callees:
 *     ?IsEmpty@RTLP_FLS_CALLBACK_ENTRY@@SA_NPEAU1@@Z @ 0x18009C2B4 (-IsEmpty@RTLP_FLS_CALLBACK_ENTRY@@SA_NPEAU1@@Z.c)
 */

bool __fastcall RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::SlotFree(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r9d
  _DWORD *v3; // r10
  bool result; // al

  _BitScanReverse(&v2, a2);
  v3 = *(_DWORD **)(a1 + 8LL * (v2 - 4));
  --*v3;
  result = RTLP_FLS_CALLBACK_ENTRY::IsEmpty((struct RTLP_FLS_CALLBACK_ENTRY *)&v3[4
                                                                                * (a2 ^ (unsigned __int64)(unsigned int)(1 << v2))
                                                                                + 2]);
  if ( !result )
    NT_ASSERT("T::IsEmpty(&Chunk->Slots[SlotIndex])");
  return result;
}

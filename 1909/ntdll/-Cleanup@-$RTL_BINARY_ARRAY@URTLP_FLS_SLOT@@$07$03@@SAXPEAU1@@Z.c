/*
 * XREFs of ?Cleanup@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAXPEAU1@@Z @ 0x18009C268
 * Callers:
 *     ?RtlpFlsDataCleanup@@YAXPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_DATA@@K@Z @ 0x18006B674 (-RtlpFlsDataCleanup@@YAXPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_DATA@@K@Z.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

LOGICAL __fastcall RTL_BINARY_ARRAY<RTLP_FLS_SLOT,8,4>::Cleanup(PVOID *a1)
{
  __int64 v2; // rdi
  LOGICAL result; // eax

  v2 = 8LL;
  do
  {
    if ( *a1 )
      result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *a1);
    ++a1;
    --v2;
  }
  while ( v2 );
  return result;
}

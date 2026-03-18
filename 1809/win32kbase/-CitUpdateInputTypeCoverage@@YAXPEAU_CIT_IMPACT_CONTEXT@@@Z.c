/*
 * XREFs of ?CitUpdateInputTypeCoverage@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0079394
 * Callers:
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0077D70 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitUpdateInputTypeCoverage(struct _CIT_IMPACT_CONTEXT *a1)
{
  if ( *((_WORD *)a1 + 133) != *((_WORD *)a1 + 125) && (unsigned int)dword_1C01C7714 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C01C7708);
  if ( *((_WORD *)a1 + 134) != *((_WORD *)a1 + 126) && (unsigned int)dword_1C01C772C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C01C7720);
  if ( *((_WORD *)a1 + 135) != *((_WORD *)a1 + 127) && (unsigned int)dword_1C01C8044 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C01C8038);
  if ( *((_WORD *)a1 + 136) != *((_WORD *)a1 + 128) && (unsigned int)dword_1C01C805C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C01C8050);
  if ( *((_WORD *)a1 + 137) != *((_WORD *)a1 + 129) && (unsigned int)dword_1C01C8014 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C01C8008);
  if ( *((_WORD *)a1 + 138) != *((_WORD *)a1 + 130) && (unsigned int)dword_1C01C802C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C01C8020);
  *(_OWORD *)((char *)a1 + 264) = *(_OWORD *)((char *)a1 + 248);
}

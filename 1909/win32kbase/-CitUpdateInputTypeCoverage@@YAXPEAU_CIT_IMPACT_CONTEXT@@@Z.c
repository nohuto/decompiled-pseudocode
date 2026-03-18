/*
 * XREFs of ?CitUpdateInputTypeCoverage@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0082C74
 * Callers:
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0082100 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitUpdateInputTypeCoverage(struct _CIT_IMPACT_CONTEXT *a1)
{
  __int16 v2; // ax

  if ( *((_WORD *)a1 + 134) != *((_WORD *)a1 + 125) && (unsigned int)dword_1C020C154 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C020C148);
  if ( *((_WORD *)a1 + 135) != *((_WORD *)a1 + 126) && (unsigned int)dword_1C020C13C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C020C130);
  if ( *((_WORD *)a1 + 136) != *((_WORD *)a1 + 127) && (unsigned int)dword_1C020CD84 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C020CD78);
  if ( *((_WORD *)a1 + 137) != *((_WORD *)a1 + 128) && (unsigned int)dword_1C020CD54 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C020CD48);
  if ( *((_WORD *)a1 + 138) != *((_WORD *)a1 + 129) && (unsigned int)dword_1C020CD6C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C020CD60);
  if ( *((_WORD *)a1 + 139) != *((_WORD *)a1 + 130) && (unsigned int)dword_1C020CD24 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C020CD18);
  if ( *((_WORD *)a1 + 140) != *((_WORD *)a1 + 131) && (unsigned int)dword_1C020CD3C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C020CD30);
  v2 = *((_WORD *)a1 + 132);
  *(_OWORD *)((char *)a1 + 266) = *(_OWORD *)((char *)a1 + 248);
  *((_WORD *)a1 + 141) = v2;
}

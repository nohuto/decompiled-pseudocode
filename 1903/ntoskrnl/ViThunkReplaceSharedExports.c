/*
 * XREFs of ViThunkReplaceSharedExports @ 0x140976C08
 * Callers:
 *     ViThunkReplaceAllSharedExports @ 0x140976878 (ViThunkReplaceAllSharedExports.c)
 * Callees:
 *     MmReplaceImportEntry @ 0x1402C3DDC (MmReplaceImportEntry.c)
 *     VfIsRuleClassEnabled @ 0x140964180 (VfIsRuleClassEnabled.c)
 */

void __fastcall ViThunkReplaceSharedExports(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 i; // rsi
  ULONG_PTR v4; // rdi
  int v5; // eax
  ULONG_PTR v6; // rdx

  if ( a1 && a2 )
  {
    v2 = a1 + 8;
    for ( i = a2; i; --i )
    {
      v4 = *(_QWORD *)(v2 - 8);
      if ( v4 )
      {
        if ( !VfIsRuleClassEnabled(0x23u)
          || (VfRuleClasses[0] & 0xFFAFFFFF) != 0
          || (dword_140509E14 & 2) != 0
          || (dword_140509E14 & 4) != 0 )
        {
          goto LABEL_15;
        }
        if ( !XdvEnabled )
          goto LABEL_17;
        if ( !VfDifAPIThunkContextHead )
          goto LABEL_17;
        v5 = *(_DWORD *)(v2 + 16);
        if ( (v5 & 1) == 0 )
          goto LABEL_17;
        if ( (v5 & 4) != 0 )
        {
LABEL_15:
          v6 = *(_QWORD *)v2;
LABEL_16:
          MmReplaceImportEntry(v4, v6);
          goto LABEL_17;
        }
        v6 = **(_QWORD **)(v2 + 8);
        if ( v6 )
          goto LABEL_16;
      }
LABEL_17:
      v2 += 32LL;
    }
  }
}

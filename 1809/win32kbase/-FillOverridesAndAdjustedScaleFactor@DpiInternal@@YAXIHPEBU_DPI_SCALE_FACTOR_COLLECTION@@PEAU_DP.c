/*
 * XREFs of ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x1C009D7B4
 * Callers:
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C00A552C (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiInternal::FillOverridesAndAdjustedScaleFactor(
        DpiInternal *this,
        __int64 a2,
        __int64 a3,
        const struct _DPI_SCALE_FACTOR_COLLECTION *a4)
{
  int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v8; // edx

  v5 = (int)this;
  if ( !*((_DWORD *)a4 + 3) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !*((_DWORD *)a4 + 8) || !*((_DWORD *)a4 + 9) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( v5 )
  {
    *((_DWORD *)a4 + 21) = 1234569;
    v8 = (100 * v5 + 48) / 0x60u;
  }
  else
  {
    v8 = *((_DWORD *)a4 + 3);
  }
  *((_DWORD *)a4 + 2) = v8;
}

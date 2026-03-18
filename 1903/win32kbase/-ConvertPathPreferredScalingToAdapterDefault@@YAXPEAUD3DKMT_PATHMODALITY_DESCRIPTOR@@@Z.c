/*
 * XREFs of ?ConvertPathPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C01298B4
 * Callers:
 *     ?ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z @ 0x1C012BE88 (-ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z.c)
 *     ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C012C9A4 (-SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ConvertPathPreferredScalingToAdapterDefault(
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  v3 = *(_QWORD *)a1;
  if ( (*(_QWORD *)a1 & 0x40000000000LL) == 0 )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
    WdLogEvent5_WdAssertion(v5);
    v3 = *(_QWORD *)a1;
  }
  if ( (v3 & 0x10000) == 0 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((_DWORD *)a1 + 35) == 253 )
  {
    if ( (*(_QWORD *)a1 & 0x100000000000LL) == 0 )
    {
      v7 = WdLogNewEntry5_WdAssertion(0x100000000000LL, a2, a3);
      WdLogEvent5_WdAssertion(v7);
    }
    ((void (__fastcall *)(char *, char *))qword_1C0215148)((char *)a1 + 16, (char *)a1 + 140);
  }
  *(_QWORD *)a1 |= 0x40000000000uLL;
  *((_DWORD *)a1 + 34) = *((_DWORD *)a1 + 35);
}

/*
 * XREFs of ?CreateCompObjectDiagnosticsRootProxy@@YAJPEAVBamoPeer@DiagnosticCallbacks_AutoBamos@@PEAPEAVBamoCompObjectDiagnosticsRootProxy@@@Z @ 0x1801724A8
 * Callers:
 *     ?CreateCompObjectDiagnosticsRootProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@DiagnosticCallbacks_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x180155134 (-CreateCompObjectDiagnosticsRootProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBa.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

__int64 __fastcall CreateCompObjectDiagnosticsRootProxy(
        struct DiagnosticCallbacks_AutoBamos::BamoPeer *a1,
        struct BamoCompObjectDiagnosticsRootProxy **a2)
{
  unsigned int v2; // edi
  _DWORD *v4; // rax
  __int64 v5; // rcx
  _DWORD *v6; // rbx

  v2 = 0;
  v4 = operator new(0x30uLL);
  v6 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x30uLL);
    v6[6] = 0;
    *((_QWORD *)v6 + 4) = 0LL;
    *((_QWORD *)v6 + 2) = &BamoImpl::BamoCompObjectDiagnosticsRootProxyImpl::`vftable';
    v6[10] = 0;
    *((_WORD *)v6 + 22) = 0;
    *(_QWORD *)v6 = &CompObjectDiagnosticsRootProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
    *((_QWORD *)v6 + 1) = &CompObjectDiagnosticsRootProxy::`vftable'{for `ICompObjectDiagnosticsRootProxy'};
  }
  else
  {
    v6 = 0LL;
  }
  *a2 = (struct BamoCompObjectDiagnosticsRootProxy *)v6;
  if ( !v6 )
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x1Au);
  }
  return v2;
}

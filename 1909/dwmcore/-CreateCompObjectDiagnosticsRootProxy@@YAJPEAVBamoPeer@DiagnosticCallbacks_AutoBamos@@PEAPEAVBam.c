/*
 * XREFs of ?CreateCompObjectDiagnosticsRootProxy@@YAJPEAVBamoPeer@DiagnosticCallbacks_AutoBamos@@PEAPEAVBamoCompObjectDiagnosticsRootProxy@@@Z @ 0x1801984B8
 * Callers:
 *     ?CreateCompObjectDiagnosticsRootProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@DiagnosticCallbacks_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x180188E64 (-CreateCompObjectDiagnosticsRootProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBa.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CreateCompObjectDiagnosticsRootProxy(
        struct DiagnosticCallbacks_AutoBamos::BamoPeer *a1,
        struct BamoCompObjectDiagnosticsRootProxy **a2)
{
  unsigned int v2; // ebx
  _QWORD *v4; // rax
  const unsigned int *v5; // rcx

  v2 = 0;
  v4 = operator new(0x30uLL);
  if ( v4 )
  {
    v4[3] = 0LL;
    v4[4] = 0LL;
    v4[5] = 0LL;
    *((_DWORD *)v4 + 6) = 0;
    v4[4] = 0LL;
    *((_DWORD *)v4 + 10) = 0;
    v4[2] = &BamoImpl::BamoCompObjectDiagnosticsRootProxyImpl::`vftable';
    *((_WORD *)v4 + 22) = 0;
    *v4 = &CompObjectDiagnosticsRootProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
    v5 = &CompObjectDiagnosticsRootProxy::`vftable'{for `ICompObjectDiagnosticsRootProxy'};
    v4[1] = &CompObjectDiagnosticsRootProxy::`vftable'{for `ICompObjectDiagnosticsRootProxy'};
  }
  *a2 = (struct BamoCompObjectDiagnosticsRootProxy *)v4;
  if ( !v4 )
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v5, 0LL, 0, 0x8007000E, 0x1Au, 0LL);
  }
  return v2;
}

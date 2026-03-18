/*
 * XREFs of ?CreateCompObjectDiagnosticsRootProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@DiagnosticCallbacks_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x180188E64
 * Callers:
 *     ?Materialize_BamoCompObjectDiagnosticsRootProxy@BamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x1801890E0 (-Materialize_BamoCompObjectDiagnosticsRootProxy@BamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoI.c)
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800E3760 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180153A88 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180187DB0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateCompObjectDiagnosticsRootProxy@@YAJPEAVBamoPeer@DiagnosticCallbacks_AutoBamos@@PEAPEAVBamoCompObjectDiagnosticsRootProxy@@@Z @ 0x1801984B8 (-CreateCompObjectDiagnosticsRootProxy@@YAJPEAVBamoPeer@DiagnosticCallbacks_AutoBamos@@PEAPEAVBam.c)
 */

void __fastcall BamoImpl::CreateCompObjectDiagnosticsRootProxy(
        BamoImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct DiagnosticCallbacks_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  struct DiagnosticCallbacks_AutoBamos::BamoPeer *v5; // rcx
  int v6; // eax
  const char *v7; // r9
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v8; // rbx
  struct BamoCompObjectDiagnosticsRootProxy *v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v11; // [rsp+38h] [rbp+10h] BYREF
  struct BamoCompObjectDiagnosticsRootProxy *v12; // [rsp+40h] [rbp+18h] BYREF

  v11 = a2;
  *(_QWORD *)a3 = 0LL;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v11,
    this);
  v6 = CreateCompObjectDiagnosticsRootProxy(v5, &v12);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xCF8,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\diagnosticcallbacks\\objfre\\amd64\\diagnosticcallbacks.bamo.h",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v8 = v11;
  if ( v11 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v11 + 96));
    *((_DWORD *)v8 + 34) = GetCurrentThreadId();
  }
  v9 = v12;
  *(_QWORD *)a3 = v12;
  if ( !v9 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xCFD,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\diagnosticcallbacks\\objfre\\amd64\\diagnosticcallbacks.bamo.h",
      v7);
    __debugbreak();
  }
}

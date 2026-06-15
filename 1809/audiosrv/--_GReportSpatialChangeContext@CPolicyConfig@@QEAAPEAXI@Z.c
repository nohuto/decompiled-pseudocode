/*
 * XREFs of ??_GReportSpatialChangeContext@CPolicyConfig@@QEAAPEAXI@Z @ 0x1800CEF6C
 * Callers:
 *     ?ReportSpatialLicenseChanged@CPolicyConfig@@UEAAJPEBG@Z @ 0x1800D3A50 (-ReportSpatialLicenseChanged@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ?ReportSpatialLicenseChangedCallback@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z @ 0x1800D3B80 (-ReportSpatialLicenseChangedCallback@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CPolicyConfig::ReportSpatialChangeContext *__fastcall CPolicyConfig::ReportSpatialChangeContext::`scalar deleting destructor'(
        CPolicyConfig::ReportSpatialChangeContext *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
    CoTaskMemFree(v2);
  operator delete(this, (const struct std::nothrow_t *)0x10);
  return this;
}

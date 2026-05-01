/*
 * XREFs of ??_GCIAMGlobals@@QEAAPEAXI@Z @ 0x1800EC568
 * Callers:
 *     ??1CApplicationManager@@MEAA@XZ @ 0x1800EB4B4 (--1CApplicationManager@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CReportWindowVisibilityChange@@QEAA@XZ @ 0x1800EB978 (--1CReportWindowVisibilityChange@@QEAA@XZ.c)
 */

CIAMGlobals *__fastcall CIAMGlobals::`scalar deleting destructor'(CIAMGlobals *this)
{
  ATOM v2; // cx

  v2 = *((_WORD *)this + 55);
  if ( v2 )
    GlobalDeleteAtom(v2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 20);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 19);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 18);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 14);
  CReportWindowVisibilityChange::~CReportWindowVisibilityChange((CIAMGlobals *)((char *)this + 8));
  operator delete(this, (const struct std::nothrow_t *)0xB0);
  return this;
}

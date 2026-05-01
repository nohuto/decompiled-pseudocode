/*
 * XREFs of ??_GDDAScreenCapture@@QEAAPEAXI@Z @ 0x1801DD304
 * Callers:
 *     _std::shared_ptr_DDAScreenCapture_::_Setp_DDAScreenCapture__::_1_::catch$1 @ 0x1801DD1F3 (_std--shared_ptr_DDAScreenCapture_--_Setp_DDAScreenCapture__--_1_--catch$1.c)
 *     ?_Destroy@?$_Ref_count@VDDAScreenCapture@@@std@@EEAAXXZ @ 0x1801DDFD0 (-_Destroy@-$_Ref_count@VDDAScreenCapture@@@std@@EEAAXXZ.c)
 *     ??1?$unique_ptr@VDDAScreenCapture@@U?$default_delete@VDDAScreenCapture@@@std@@@std@@QEAA@XZ @ 0x1801E4184 (--1-$unique_ptr@VDDAScreenCapture@@U-$default_delete@VDDAScreenCapture@@@std@@@std@@QEAA@XZ.c)
 *     ?CreateInstance@DDAScreenCapture@@SAJPEAPEAV1@PEAUHMONITOR__@@@Z @ 0x1801E41A0 (-CreateInstance@DDAScreenCapture@@SAJPEAPEAV1@PEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

DDAScreenCapture *__fastcall DDAScreenCapture::`scalar deleting destructor'(DDAScreenCapture *this)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this);
  operator delete(this, (const struct std::nothrow_t *)0x88);
  return this;
}

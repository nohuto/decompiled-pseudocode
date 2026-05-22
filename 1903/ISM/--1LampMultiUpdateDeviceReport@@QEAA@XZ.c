/*
 * XREFs of ??1LampMultiUpdateDeviceReport@@QEAA@XZ @ 0x1800B66F4
 * Callers:
 *     ??0HidLampMultiUpdateReportBuilder@@AEAA@XZ @ 0x1800B661C (--0HidLampMultiUpdateReportBuilder@@AEAA@XZ.c)
 *     ??1HidLampMultiUpdateReportBuilder@@UEAA@XZ @ 0x1800B66A4 (--1HidLampMultiUpdateReportBuilder@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall LampMultiUpdateDeviceReport::~LampMultiUpdateDeviceReport(
        LampMultiUpdateDeviceReport *this,
        const struct std::nothrow_t *a2)
{
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  v3 = (void *)*((_QWORD *)this + 5);
  if ( v3 )
    operator delete(v3, a2);
  v4 = (void *)*((_QWORD *)this + 4);
  if ( v4 )
    operator delete(v4, a2);
  v5 = (void *)*((_QWORD *)this + 3);
  if ( v5 )
    operator delete(v5, a2);
  v6 = (void *)*((_QWORD *)this + 2);
  if ( v6 )
    operator delete(v6, a2);
  v7 = (void *)*((_QWORD *)this + 1);
  if ( v7 )
    operator delete(v7, a2);
}

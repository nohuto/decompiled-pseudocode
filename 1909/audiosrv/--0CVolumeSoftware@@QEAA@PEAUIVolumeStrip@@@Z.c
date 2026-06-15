/*
 * XREFs of ??0CVolumeSoftware@@QEAA@PEAUIVolumeStrip@@@Z @ 0x1800C8780
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18005C198 (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180027F50 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??0CVolumeControlBase@@QEAA@PEAUIVolumeStrip@@@Z @ 0x18005C920 (--0CVolumeControlBase@@QEAA@PEAUIVolumeStrip@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
CVolumeSoftware *__fastcall CVolumeSoftware::CVolumeSoftware(CVolumeSoftware *this, struct IVolumeStrip *a2)
{
  CVolumeControlBase::CVolumeControlBase(this, a2);
  *(_QWORD *)this = &CVolumeSoftware::`vftable';
  *((_QWORD *)this + 31) = 0LL;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 256));
  *((_DWORD *)this + 74) = 1;
  *((_BYTE *)this + 300) = 0;
  *((_QWORD *)this + 38) = 0LL;
  return this;
}

/*
 * XREFs of ??1CFormatConverter@@UEAA@XZ @ 0x180214FD0
 * Callers:
 *     ??_ECFormatConverter@@UEAAPEAXI@Z @ 0x1802150B0 (--_ECFormatConverter@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180016D7C (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CScanPipeline@@UEAA@XZ @ 0x18021502C (--1CScanPipeline@@UEAA@XZ.c)
 */

void __fastcall CFormatConverter::~CFormatConverter(CFormatConverter *this)
{
  *(_QWORD *)this = &CFormatConverter::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CFormatConverter::`vftable'{for `IBitmapSource'};
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 8);
  WPF::ProcessHeapImpl::Free(*((void **)this + 97));
  CScanPipeline::~CScanPipeline((CFormatConverter *)((char *)this + 112));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}

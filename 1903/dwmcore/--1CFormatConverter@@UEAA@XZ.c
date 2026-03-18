/*
 * XREFs of ??1CFormatConverter@@UEAA@XZ @ 0x180223E7C
 * Callers:
 *     ??_ECFormatConverter@@UEAAPEAXI@Z @ 0x180223F60 (--_ECFormatConverter@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180026628 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ??1CScanPipeline@@UEAA@XZ @ 0x180223ED8 (--1CScanPipeline@@UEAA@XZ.c)
 */

void __fastcall CFormatConverter::~CFormatConverter(CFormatConverter *this)
{
  *(_QWORD *)this = &CFormatConverter::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CFormatConverter::`vftable'{for `IBitmapSource'};
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 8);
  operator delete(*((void **)this + 97));
  CScanPipeline::~CScanPipeline((CFormatConverter *)((char *)this + 112));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}

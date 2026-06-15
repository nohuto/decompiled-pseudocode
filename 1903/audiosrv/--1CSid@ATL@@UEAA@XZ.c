/*
 * XREFs of ??1CSid@ATL@@UEAA@XZ @ 0x18002D730
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x18002C020 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     _CAudioDGProcess::GetADGProcessSD_::_1_::dtor$3 @ 0x180070C5E (_CAudioDGProcess--GetADGProcessSD_--_1_--dtor$3.c)
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$3 @ 0x180070D61 (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$3.c)
 *     _ATL::CDacl::Copy_::_1_::dtor$0 @ 0x180070F60 (_ATL--CDacl--Copy_--_1_--dtor$0.c)
 *     ??1CAce@CAcl@ATL@@UEAA@XZ @ 0x1800DD02C (--1CAce@CAcl@ATL@@UEAA@XZ.c)
 *     ??_GCSid@ATL@@UEAAPEAXI@Z @ 0x1800DD570 (--_GCSid@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18002DBA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CSid::~CSid(ATL::CSid *this)
{
  *(_QWORD *)this = &ATL::CSid::`vftable';
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 14) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 13) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 12) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 11) - 24LL));
}

/*
 * XREFs of ??1CSid@ATL@@UEAA@XZ @ 0x1800305C0
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x18002EEB0 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     _CAudioDGProcess::GetADGProcessSD_::_1_::dtor$3 @ 0x18007115E (_CAudioDGProcess--GetADGProcessSD_--_1_--dtor$3.c)
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$3 @ 0x180071261 (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$3.c)
 *     _ATL::CDacl::Copy_::_1_::dtor$0 @ 0x180071460 (_ATL--CDacl--Copy_--_1_--dtor$0.c)
 *     ??1CAce@CAcl@ATL@@UEAA@XZ @ 0x1800DCB8C (--1CAce@CAcl@ATL@@UEAA@XZ.c)
 *     ??_GCSid@ATL@@UEAAPEAXI@Z @ 0x1800DD0D0 (--_GCSid@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180030A30 (-Release@CStringData@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CSid::~CSid(ATL::CSid *this)
{
  *(_QWORD *)this = &ATL::CSid::`vftable';
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 14) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 13) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 12) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 11) - 24LL));
}

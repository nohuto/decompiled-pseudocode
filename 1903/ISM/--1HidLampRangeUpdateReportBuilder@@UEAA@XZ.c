/*
 * XREFs of ??1HidLampRangeUpdateReportBuilder@@UEAA@XZ @ 0x1800B63C0
 * Callers:
 *     ??_GHidLampRangeUpdateReportBuilder@@UEAAPEAXI@Z @ 0x1800B6410 (--_GHidLampRangeUpdateReportBuilder@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x1800298B0 (-Release@RefCountedObject@@UEAAKXZ.c)
 */

void __fastcall HidLampRangeUpdateReportBuilder::~HidLampRangeUpdateReportBuilder(
        HidLampRangeUpdateReportBuilder *this)
{
  RefCountedObject *v2; // rcx

  *(_QWORD *)this = &HidLampRangeUpdateReportBuilder::`vftable';
  v2 = (RefCountedObject *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    *((_QWORD *)this + 5) = 0LL;
    RefCountedObject::Release(v2);
  }
  *(_QWORD *)this = &RefCountedObject::`vftable';
}

/*
 * XREFs of ??1HidLampRangeUpdateReportBuilder@@UEAA@XZ @ 0x18007DCAC
 * Callers:
 *     ??_GHidLampRangeUpdateReportBuilder@@UEAAPEAXI@Z @ 0x18007DC60 (--_GHidLampRangeUpdateReportBuilder@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HidLampRangeUpdateReportBuilder::~HidLampRangeUpdateReportBuilder(
        HidLampRangeUpdateReportBuilder *this)
{
  volatile signed __int32 *v2; // rbx

  *(_QWORD *)this = &HidLampRangeUpdateReportBuilder::`vftable';
  v2 = (volatile signed __int32 *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    *((_QWORD *)this + 5) = 0LL;
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      *((_DWORD *)v2 + 2) = 1;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 32LL))(v2);
      *((_DWORD *)v2 + 2) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 24LL))(v2, 1LL);
    }
  }
  *(_QWORD *)this = &RefCountedObject::`vftable';
}

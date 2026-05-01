/*
 * XREFs of _MonitorFrame::Initialize_::_1_::dtor$16 @ 0x1802CA4E1
 * Callers:
 *     <none>
 * Callees:
 *     ??1_Ref_count_base@std@@UEAA@XZ @ 0x18001D190 (--1_Ref_count_base@std@@UEAA@XZ.c)
 */

void __fastcall MonitorFrame::Initialize_::_1_::dtor_16(__int64 a1, __int64 a2)
{
  std::_Ref_count_base::~_Ref_count_base(*(std::_Ref_count_base **)(a2 + 176));
}

/*
 * XREFs of _MonitorFrame::DestroyInternal_::_1_::dtor$2 @ 0x1802C8790
 * Callers:
 *     <none>
 * Callees:
 *     ??1_Ref_count_base@std@@UEAA@XZ @ 0x18001D190 (--1_Ref_count_base@std@@UEAA@XZ.c)
 */

void __fastcall MonitorFrame::DestroyInternal_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  std::_Ref_count_base::~_Ref_count_base(*(std::_Ref_count_base **)(a2 + 120));
}

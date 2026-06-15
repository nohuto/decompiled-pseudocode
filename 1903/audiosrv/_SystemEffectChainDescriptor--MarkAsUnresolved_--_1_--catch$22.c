/*
 * XREFs of _SystemEffectChainDescriptor::MarkAsUnresolved_::_1_::catch$22 @ 0x1800736A9
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall SystemEffectChainDescriptor::MarkAsUnresolved_::_1_::catch_22(__int64 a1, __int64 a2)
{
  wil::details::in1diag3::Return_Hr(
    *(wil::details::in1diag3 **)(a2 + 56),
    (void *)0x79,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL);
  return &loc_1800BAF61;
}

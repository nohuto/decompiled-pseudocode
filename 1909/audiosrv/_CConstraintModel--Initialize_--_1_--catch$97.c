/*
 * XREFs of _CConstraintModel::Initialize_::_1_::catch$97 @ 0x18007453C
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800CA178 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CConstraintModel::Initialize_::_1_::catch_97(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 2152),
                           (void *)0x106,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\constraintmodel\\lib\\constraintmodel.cpp",
                           a4);
  return &loc_1800618DB;
}

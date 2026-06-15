/*
 * XREFs of _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::catch$85 @ 0x180070240
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800CF53C (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::catch_85(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 360),
    (void *)0x59,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
    a4);
  return &loc_180021F98;
}

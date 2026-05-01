/*
 * XREFs of ??1_Internal_task_options@details@Concurrency@@QEAA@XZ @ 0x1801E4058
 * Callers:
 *     _Concurrency::details::_ThenImplOptions::_CreateOptions_::_1_::dtor$5 @ 0x18030DAC2 (_Concurrency--details--_ThenImplOptions--_CreateOptions_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::_Internal_task_options::~_Internal_task_options(
        Concurrency::details::_Internal_task_options *this)
{
  std::vector<void *>::_Tidy((__int64)this + 16);
}

/*
 * XREFs of ?dtor$0@?0??VirtualProcessorActiveNotification@UMSThreadScheduler@details@Concurrency@@MEAAX_NJ@Z@4HA_3 @ 0x180132F43
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall `Concurrency::details::UMSThreadScheduler::VirtualProcessorActiveNotification'::`1'::dtor$0(
        __int64 a1,
        __int64 a2)
{
  std::string::_Tidy_deallocate(*(__int64 **)(a2 + 136));
}

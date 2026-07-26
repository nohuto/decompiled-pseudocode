/*
 * XREFs of ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C00FC4EC
 * Callers:
 *     ?ndisInitializeWatchdogSubsystem@@YAXXZ @ 0x1C0144078 (-ndisInitializeWatchdogSubsystem@@YAXXZ.c)
 *     DriverEntry @ 0x1C0144AD0 (DriverEntry.c)
 *     ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x1C01461C4 (-ndisMpHookNmrInitializeClient@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall KPushLockManualConstruct::Initialize(KPushLockManualConstruct *this)
{
  *(_QWORD *)this = 0LL;
}

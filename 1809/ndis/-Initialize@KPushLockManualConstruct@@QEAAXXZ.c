/*
 * XREFs of ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C00B4378
 * Callers:
 *     DriverEntry @ 0x1C0127870 (DriverEntry.c)
 *     ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x1C012913C (-ndisMpHookNmrInitializeClient@@YAJXZ.c)
 *     NetPacketPoolInitialize @ 0x1C0129640 (NetPacketPoolInitialize.c)
 * Callees:
 *     <none>
 */

void __fastcall KPushLockManualConstruct::Initialize(KPushLockManualConstruct *this)
{
  *(_QWORD *)this = 0LL;
}

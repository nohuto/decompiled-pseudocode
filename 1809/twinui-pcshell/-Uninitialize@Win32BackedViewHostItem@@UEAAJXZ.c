/*
 * XREFs of ?Uninitialize@Win32BackedViewHostItem@@UEAAJXZ @ 0x1801C0420
 * Callers:
 *     <none>
 * Callees:
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800E75AC (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

__int64 __fastcall Win32BackedViewHostItem::Uninitialize(Win32BackedViewHostItem *this)
{
  SmartCookie::Unregister((Win32BackedViewHostItem *)((char *)this + 184));
  return 0LL;
}

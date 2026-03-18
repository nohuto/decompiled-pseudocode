/*
 * XREFs of ?OnChanged@CDesktopRenderTarget@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800E7B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopRenderTarget::OnChanged(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !a3 || a3 != *(_QWORD *)(a1 + 408) )
    *(_BYTE *)(a1 + 320) = 1;
  return 1LL;
}

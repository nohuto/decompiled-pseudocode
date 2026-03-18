/*
 * XREFs of ?OnChanged@CCursorVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180214200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetDesktopId@CCursorVisual@@AEAAIPEAVCVisual@@@Z @ 0x180214170 (-GetDesktopId@CCursorVisual@@AEAAIPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CCursorVisual::OnChanged(__int64 a1)
{
  __int64 v2; // rcx
  struct CVisual *v3; // rax
  CCursorVisual *v4; // rcx

  v2 = *(_QWORD *)(a1 + 584);
  if ( v2 )
  {
    v3 = (struct CVisual *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 192LL))(v2);
    if ( v3 )
      *(_DWORD *)(a1 + 572) = CCursorVisual::GetDesktopId(v4, v3);
  }
  return 1LL;
}

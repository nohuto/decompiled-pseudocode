/*
 * XREFs of CheckClipboardAccess @ 0x1C00D9EE8
 * Callers:
 *     xxxCloseClipboard @ 0x1C00D9B50 (xxxCloseClipboard.c)
 *     _OpenClipboard @ 0x1C00D9C70 (_OpenClipboard.c)
 *     NtUserGetClipboardSequenceNumber @ 0x1C00D9D90 (NtUserGetClipboardSequenceNumber.c)
 *     NtUserIsClipboardFormatAvailable @ 0x1C00D9DE0 (NtUserIsClipboardFormatAvailable.c)
 *     _SetClipboardData @ 0x1C00DB1B4 (_SetClipboardData.c)
 *     NtUserGetClipboardOwner @ 0x1C00DC9C0 (NtUserGetClipboardOwner.c)
 *     NtUserGetClipboardData @ 0x1C00DCA10 (NtUserGetClipboardData.c)
 *     xxxSetClipboardViewer @ 0x1C00DE71C (xxxSetClipboardViewer.c)
 *     xxxEmptyClipboard @ 0x1C00DE988 (xxxEmptyClipboard.c)
 *     xxxDisownClipboard @ 0x1C00E021C (xxxDisownClipboard.c)
 *     NtUserRemoveClipboardFormatListener @ 0x1C00EE200 (NtUserRemoveClipboardFormatListener.c)
 *     xxxChangeClipboardChain @ 0x1C0130244 (xxxChangeClipboardChain.c)
 *     NtUserAddClipboardFormatListener @ 0x1C0131EF0 (NtUserAddClipboardFormatListener.c)
 *     NtUserCountClipboardFormats @ 0x1C0150A80 (NtUserCountClipboardFormats.c)
 *     _EnumClipboardFormats @ 0x1C01562B0 (_EnumClipboardFormats.c)
 *     NtUserGetOpenClipboardWindow @ 0x1C0156590 (NtUserGetOpenClipboardWindow.c)
 *     _GetPriorityClipboardFormat @ 0x1C01F7E6C (_GetPriorityClipboardFormat.c)
 *     NtUserGetClipboardViewer @ 0x1C0214410 (NtUserGetClipboardViewer.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C0217360 (NtUserGetUpdatedClipboardFormats.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ReferenceWindowStation @ 0x1C00D9F40 (ReferenceWindowStation.c)
 */

__int64 __fastcall CheckClipboardAccess(__int64 a1, __int64 a2)
{
  __int64 ThreadWin32Thread; // rax
  NTSTATUS v3; // eax
  ULONG v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v3 = ReferenceWindowStation(KeGetCurrentThread(), 0LL, 4LL, &v9, (*(_DWORD *)(ThreadWin32Thread + 488) >> 3) & 1);
  if ( v3 >= 0 )
    return v9;
  v5 = RtlNtStatusToDosError(v3);
  UserSetLastError(v5, v6, v7, v8);
  return 0LL;
}

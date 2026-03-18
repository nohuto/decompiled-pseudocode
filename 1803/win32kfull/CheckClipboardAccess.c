/*
 * XREFs of CheckClipboardAccess @ 0x1C00B69B0
 * Callers:
 *     NtUserAddClipboardFormatListener @ 0x1C00B5640 (NtUserAddClipboardFormatListener.c)
 *     xxxDisownClipboard @ 0x1C00B5724 (xxxDisownClipboard.c)
 *     xxxSetClipboardViewer @ 0x1C00B58F0 (xxxSetClipboardViewer.c)
 *     xxxEmptyClipboard @ 0x1C00B5A04 (xxxEmptyClipboard.c)
 *     NtUserGetClipboardData @ 0x1C00B5C90 (NtUserGetClipboardData.c)
 *     _SetClipboardData @ 0x1C00B6038 (_SetClipboardData.c)
 *     xxxCloseClipboard @ 0x1C00B6410 (xxxCloseClipboard.c)
 *     _OpenClipboard @ 0x1C00B6508 (_OpenClipboard.c)
 *     NtUserGetClipboardSequenceNumber @ 0x1C00B6880 (NtUserGetClipboardSequenceNumber.c)
 *     NtUserIsClipboardFormatAvailable @ 0x1C00B68C0 (NtUserIsClipboardFormatAvailable.c)
 *     NtUserRemoveClipboardFormatListener @ 0x1C00B6DD0 (NtUserRemoveClipboardFormatListener.c)
 *     NtUserCountClipboardFormats @ 0x1C012FA90 (NtUserCountClipboardFormats.c)
 *     NtUserGetClipboardOwner @ 0x1C0133CA0 (NtUserGetClipboardOwner.c)
 *     _EnumClipboardFormats @ 0x1C0135410 (_EnumClipboardFormats.c)
 *     NtUserGetOpenClipboardWindow @ 0x1C0135510 (NtUserGetOpenClipboardWindow.c)
 *     xxxChangeClipboardChain @ 0x1C0135630 (xxxChangeClipboardChain.c)
 *     _GetPriorityClipboardFormat @ 0x1C01D3584 (_GetPriorityClipboardFormat.c)
 *     NtUserGetClipboardViewer @ 0x1C01EDF60 (NtUserGetClipboardViewer.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C01F00B0 (NtUserGetUpdatedClipboardFormats.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ReferenceWindowStation @ 0x1C00B6A10 (ReferenceWindowStation.c)
 */

__int64 __fastcall CheckClipboardAccess(__int64 a1, __int64 a2)
{
  __int64 ThreadWin32Thread; // rax
  NTSTATUS v3; // eax
  ULONG v5; // eax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v3 = ReferenceWindowStation(KeGetCurrentThread(), 0LL, 4LL, &v7, (*(_DWORD *)(ThreadWin32Thread + 480) >> 3) & 1);
  if ( v3 >= 0 )
    return v7;
  v5 = RtlNtStatusToDosError(v3);
  UserSetLastError(v5, v6);
  return 0LL;
}

/*
 * XREFs of CheckClipboardAccess @ 0x1C00591AC
 * Callers:
 *     xxxCloseClipboard @ 0x1C0058D90 (xxxCloseClipboard.c)
 *     _OpenClipboard @ 0x1C0058EC0 (_OpenClipboard.c)
 *     NtUserGetClipboardSequenceNumber @ 0x1C0058FE0 (NtUserGetClipboardSequenceNumber.c)
 *     NtUserCountClipboardFormats @ 0x1C0059030 (NtUserCountClipboardFormats.c)
 *     _SetClipboardData @ 0x1C0059E20 (_SetClipboardData.c)
 *     NtUserRemoveClipboardFormatListener @ 0x1C007C870 (NtUserRemoveClipboardFormatListener.c)
 *     xxxDisownClipboard @ 0x1C00FF454 (xxxDisownClipboard.c)
 *     xxxEmptyClipboard @ 0x1C00FF5E0 (xxxEmptyClipboard.c)
 *     NtUserGetClipboardData @ 0x1C00FF9B0 (NtUserGetClipboardData.c)
 *     xxxSetClipboardViewer @ 0x1C0100960 (xxxSetClipboardViewer.c)
 *     NtUserGetClipboardOwner @ 0x1C0112A00 (NtUserGetClipboardOwner.c)
 *     xxxChangeClipboardChain @ 0x1C01130F0 (xxxChangeClipboardChain.c)
 *     NtUserGetOpenClipboardWindow @ 0x1C0117530 (NtUserGetOpenClipboardWindow.c)
 *     NtUserAddClipboardFormatListener @ 0x1C0117B30 (NtUserAddClipboardFormatListener.c)
 *     _EnumClipboardFormats @ 0x1C015DF00 (_EnumClipboardFormats.c)
 *     _GetPriorityClipboardFormat @ 0x1C020DF58 (_GetPriorityClipboardFormat.c)
 *     NtUserGetClipboardViewer @ 0x1C022BB70 (NtUserGetClipboardViewer.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C022EBF0 (NtUserGetUpdatedClipboardFormats.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ReferenceWindowStation @ 0x1C0059200 (ReferenceWindowStation.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 CheckClipboardAccess()
{
  __int64 ThreadWin32Thread; // rax
  NTSTATUS v1; // eax
  ULONG v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v1 = ReferenceWindowStation(KeGetCurrentThread(), 0LL, 4LL, &v7, (*(_DWORD *)(ThreadWin32Thread + 480) >> 3) & 1);
  if ( v1 >= 0 )
    return v7;
  v3 = RtlNtStatusToDosError(v1);
  UserSetLastError(v3, v4, v5, v6);
  return 0LL;
}

/*
 * XREFs of CheckClipboardAccess @ 0x1C00B7CBC
 * Callers:
 *     xxxSetClipboardViewer @ 0x1C00116B0 (xxxSetClipboardViewer.c)
 *     xxxCloseClipboard @ 0x1C00B78A0 (xxxCloseClipboard.c)
 *     _OpenClipboard @ 0x1C00B79D0 (_OpenClipboard.c)
 *     NtUserGetClipboardSequenceNumber @ 0x1C00B7AF0 (NtUserGetClipboardSequenceNumber.c)
 *     NtUserCountClipboardFormats @ 0x1C00B7B40 (NtUserCountClipboardFormats.c)
 *     _SetClipboardData @ 0x1C00B8930 (_SetClipboardData.c)
 *     NtUserRemoveClipboardFormatListener @ 0x1C00DCB80 (NtUserRemoveClipboardFormatListener.c)
 *     xxxDisownClipboard @ 0x1C0125564 (xxxDisownClipboard.c)
 *     xxxEmptyClipboard @ 0x1C01256F0 (xxxEmptyClipboard.c)
 *     NtUserGetClipboardData @ 0x1C0125AC0 (NtUserGetClipboardData.c)
 *     NtUserGetClipboardOwner @ 0x1C0138A00 (NtUserGetClipboardOwner.c)
 *     xxxChangeClipboardChain @ 0x1C01390F0 (xxxChangeClipboardChain.c)
 *     NtUserGetOpenClipboardWindow @ 0x1C013D5F0 (NtUserGetOpenClipboardWindow.c)
 *     NtUserAddClipboardFormatListener @ 0x1C013DC10 (NtUserAddClipboardFormatListener.c)
 *     _EnumClipboardFormats @ 0x1C015CF50 (_EnumClipboardFormats.c)
 *     _GetPriorityClipboardFormat @ 0x1C020E208 (_GetPriorityClipboardFormat.c)
 *     NtUserGetClipboardViewer @ 0x1C022C190 (NtUserGetClipboardViewer.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C022F210 (NtUserGetUpdatedClipboardFormats.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ReferenceWindowStation @ 0x1C00B7D10 (ReferenceWindowStation.c)
 */

__int64 __fastcall CheckClipboardAccess(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 ThreadWin32Thread; // rax
  NTSTATUS v5; // eax
  ULONG v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v5 = ReferenceWindowStation(KeGetCurrentThread(), 0LL, 4LL, &v11, (*(_DWORD *)(ThreadWin32Thread + 480) >> 3) & 1);
  if ( v5 >= 0 )
    return v11;
  v7 = RtlNtStatusToDosError(v5);
  UserSetLastError(v7, v8, v9, v10);
  return 0LL;
}

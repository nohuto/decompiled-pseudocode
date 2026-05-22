/*
 * XREFs of ?UpdateClientOwner@DWMCursor@@UEAAJXZ @ 0x180144D00
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateClientOwner@Cursor@InputTraceLogging@@SAXUCursorId@@@Z @ 0x180144C5C (-UpdateClientOwner@Cursor@InputTraceLogging@@SAXUCursorId@@@Z.c)
 */

__int64 __fastcall DWMCursor::UpdateClientOwner(DWMCursor *this)
{
  __int64 v1; // rax
  __int128 v2; // xmm0
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v1 = (unsigned int)(dword_1801E18F4 + 1);
  *((_QWORD *)this + 6) = v1;
  v2 = *(_OWORD *)((char *)this + 40);
  dword_1801E18F4 = v1;
  v4 = v2;
  InputTraceLogging::Cursor::UpdateClientOwner((__int64)&v4);
  return 0LL;
}

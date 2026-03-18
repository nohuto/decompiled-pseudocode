/*
 * XREFs of xxxHandleWindowPosChanged @ 0x1C0133EFC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxSendSizeMessage @ 0x1C0091C40 (xxxSendSizeMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 */

__int64 __fastcall xxxHandleWindowPosChanged(__int64 *BugCheckParameter2, __int64 a2)
{
  int v2; // eax
  __int64 result; // rax
  __int64 v6; // rax
  __int64 DesktopWindow; // rax
  __int64 v8; // rdx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rax
  int v12; // [rsp+68h] [rbp+10h]
  int v13; // [rsp+6Ch] [rbp+14h]

  v2 = *(_DWORD *)(a2 + 32);
  if ( (v2 & 0x1000) == 0 )
  {
    v6 = BugCheckParameter2[5];
    v12 = *(_DWORD *)(v6 + 104);
    v13 = *(_DWORD *)(v6 + 108);
    DesktopWindow = GetDesktopWindow((__int64)BugCheckParameter2);
    if ( v8 != DesktopWindow )
    {
      v11 = *(_QWORD *)(v8 + 40);
      v13 = v10 - *(_DWORD *)(v11 + 108);
      v12 = v9 - *(_DWORD *)(v11 + 104);
    }
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout(
      BugCheckParameter2,
      3u,
      0LL,
      (struct _LARGE_STRING *)((unsigned __int16)v12 | ((unsigned __int16)v13 << 16)),
      0,
      0,
      0LL,
      1u,
      0);
    v2 = *(_DWORD *)(a2 + 32);
  }
  result = (unsigned __int16)v2 & 0x8800;
  if ( (_DWORD)result != 2048 )
    return xxxSendSizeMessage((ULONG_PTR)BugCheckParameter2);
  return result;
}

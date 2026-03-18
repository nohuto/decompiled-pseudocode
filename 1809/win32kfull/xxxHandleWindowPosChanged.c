/*
 * XREFs of xxxHandleWindowPosChanged @ 0x1C0126564
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     xxxSendSizeMessage @ 0x1C00BC968 (xxxSendSizeMessage.c)
 */

__int64 __fastcall xxxHandleWindowPosChanged(__int64 *BugCheckParameter2, __int64 a2)
{
  int v2; // eax
  __int64 DesktopWindow; // rax
  int v6; // r8d
  __int64 v7; // r9
  int v8; // r10d
  __int64 result; // rax
  char v10; // cl
  unsigned int v11; // edx
  __int64 v12; // rax

  v2 = *(_DWORD *)(a2 + 32);
  if ( (v2 & 0x1000) == 0 )
  {
    DesktopWindow = GetDesktopWindow((__int64)BugCheckParameter2);
    if ( v7 != DesktopWindow )
    {
      v12 = *(_QWORD *)(v7 + 40);
      v6 -= *(_DWORD *)(v12 + 108);
      v8 -= *(_DWORD *)(v12 + 104);
    }
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout(
      BugCheckParameter2,
      3u,
      0LL,
      (unsigned __int16)v8 | (unsigned __int64)(v6 << 16),
      0,
      0,
      0LL,
      1,
      0);
    v2 = *(_DWORD *)(a2 + 32);
  }
  result = (unsigned __int16)v2 & 0x8800;
  if ( (_DWORD)result != 2048 )
  {
    v10 = *(_BYTE *)(BugCheckParameter2[5] + 31);
    if ( (v10 & 0x20) != 0 )
    {
      v11 = 1;
    }
    else if ( (v10 & 1) != 0 )
    {
      v11 = 2;
    }
    else
    {
      v11 = 0;
    }
    return xxxSendSizeMessage(BugCheckParameter2, v11);
  }
  return result;
}

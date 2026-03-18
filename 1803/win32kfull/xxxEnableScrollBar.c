/*
 * XREFs of xxxEnableScrollBar @ 0x1C00D9948
 * Callers:
 *     NtUserEnableScrollBar @ 0x1C00D9880 (NtUserEnableScrollBar.c)
 *     xxxSBWndProc @ 0x1C0201660 (xxxSBWndProc.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     xxxEnableWindow @ 0x1C005F4F0 (xxxEnableWindow.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00D997C (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01A2874 (safe_cast_fnid_to_PSBWND.c)
 */

__int64 __fastcall xxxEnableScrollBar(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  HWND v6; // r9
  __int64 v7; // r10
  int v8; // eax
  int v9; // ecx
  int v10; // r8d
  unsigned int v11; // eax
  unsigned int v12; // eax
  char v13; // dl

  if ( (_DWORD)a2 != 2 )
    return xxxEnableWndSBArrows((struct tagWND *)BugCheckParameter2, a2, a3);
  v5 = safe_cast_fnid_to_PSBWND(BugCheckParameter2, a2, a3, (unsigned int)a3);
  v7 = v5;
  if ( !v5 )
    return 0LL;
  v8 = *(_DWORD *)(v5 + 12);
  v9 = v8 & 3;
  if ( v9 == (_DWORD)v6 )
    return 0LL;
  if ( (_DWORD)v6 == 3 )
  {
    v10 = 1;
LABEL_7:
    v11 = (unsigned int)v6 | v8;
    goto LABEL_8;
  }
  if ( (_DWORD)v6 )
  {
    if ( ((unsigned int)v6 | v9) != 3 )
    {
LABEL_21:
      _InterlockedIncrement(&glSendMessage);
      return xxxSendTransformableMessageTimeout((__int64 *)BugCheckParameter2, 0xE4u, v6, 0LL, 0, 0, 0LL, 1, 1);
    }
    v10 = 1;
  }
  else
  {
    v10 = 2;
    if ( v9 != 3 )
      v10 = 0;
  }
  if ( !v10 )
    goto LABEL_21;
  if ( (_DWORD)v6 )
    goto LABEL_7;
  v11 = v8 & 0xFFFFFFFC;
LABEL_8:
  *(_DWORD *)(v7 + 12) = v11;
  v12 = xxxEnableWindow((struct tagWND *)BugCheckParameter2, v10 == 2);
  v13 = *(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 31LL);
  if ( !v12 )
    return v13 & 8;
  LOBYTE(v12) = ~v13;
  return (v12 >> 3) & 1;
}

/*
 * XREFs of xxxEnableScrollBar @ 0x1C0078B70
 * Callers:
 *     NtUserEnableScrollBar @ 0x1C0078A90 (NtUserEnableScrollBar.c)
 *     xxxSBWndProc @ 0x1C022A0D0 (xxxSBWndProc.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C0078BA4 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     xxxEnableWindow @ 0x1C00CEC80 (xxxEnableWindow.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01C424C (safe_cast_fnid_to_PSBWND.c)
 */

__int64 __fastcall xxxEnableScrollBar(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // r9
  __int64 v7; // r10
  int v8; // ecx
  int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // eax
  char v12; // dl
  int v13; // eax

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
    goto LABEL_6;
  if ( (_DWORD)v6 )
  {
    if ( ((unsigned int)v6 | v9) != 3 )
    {
LABEL_19:
      _InterlockedIncrement(&glSendMessage);
      return xxxSendTransformableMessageTimeout((__int64 *)BugCheckParameter2, 0xE4u, v6, 0LL, 0, 0, 0LL, 1, 1);
    }
    v13 = 1;
  }
  else
  {
    v13 = 2;
    if ( v9 != 3 )
      v13 = 0;
  }
  if ( !v13 )
    goto LABEL_19;
  if ( (_DWORD)v6 )
  {
LABEL_6:
    v10 = v6 | v8;
    goto LABEL_7;
  }
  v10 = v8 & 0xFFFFFFFC;
LABEL_7:
  *(_DWORD *)(v7 + 12) = v10;
  v11 = xxxEnableWindow((struct tagWND *)BugCheckParameter2);
  v12 = *(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 31LL);
  if ( !v11 )
    return v12 & 8;
  LOBYTE(v11) = ~v12;
  return (v11 >> 3) & 1;
}

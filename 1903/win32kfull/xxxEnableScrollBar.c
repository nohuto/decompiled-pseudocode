/*
 * XREFs of xxxEnableScrollBar @ 0x1C0027E30
 * Callers:
 *     NtUserEnableScrollBar @ 0x1C0027D30 (NtUserEnableScrollBar.c)
 *     xxxSBWndProc @ 0x1C0242BA0 (xxxSBWndProc.c)
 * Callees:
 *     xxxEnableWindow @ 0x1C0016740 (xxxEnableWindow.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C0027E64 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01D7560 (safe_cast_fnid_to_PSBWND.c)
 */

__int64 __fastcall xxxEnableScrollBar(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // r8
  int v7; // r9d
  __int64 v8; // r10
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // eax
  char v14; // dl

  if ( (_DWORD)a2 != 2 )
    return xxxEnableWndSBArrows((struct tagWND *)BugCheckParameter2, a2, a3);
  v5 = safe_cast_fnid_to_PSBWND(BugCheckParameter2, a2, a3, (unsigned int)a3);
  v8 = v5;
  if ( !v5 )
    return 0LL;
  v9 = *(_DWORD *)(v5 + 12);
  v10 = v9 & 3;
  if ( v10 == v7 )
    return 0LL;
  if ( v7 == 3 )
  {
    v11 = 1;
LABEL_7:
    v12 = v7 | v9;
    goto LABEL_8;
  }
  if ( v7 )
  {
    if ( (v7 | v10) != 3 )
    {
LABEL_20:
      _InterlockedIncrement(&glSendMessage);
      return xxxSendTransformableMessageTimeout(BugCheckParameter2, 0, 0, 0LL, 1, 1);
    }
    v11 = 1;
  }
  else
  {
    v11 = 2;
    if ( v10 != 3 )
      v11 = 0;
  }
  if ( !v11 )
    goto LABEL_20;
  if ( v7 )
    goto LABEL_7;
  v12 = v9 & 0xFFFFFFFC;
LABEL_8:
  *(_DWORD *)(v8 + 12) = v12;
  v13 = xxxEnableWindow((struct tagWND *)BugCheckParameter2, v11 == 2, v6);
  v14 = *(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 31LL);
  if ( !v13 )
    return v14 & 8;
  LOBYTE(v13) = ~v14;
  return (v13 >> 3) & 1;
}

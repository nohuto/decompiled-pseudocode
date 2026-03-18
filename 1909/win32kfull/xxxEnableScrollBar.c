/*
 * XREFs of xxxEnableScrollBar @ 0x1C002E2A0
 * Callers:
 *     NtUserEnableScrollBar @ 0x1C002E1A0 (NtUserEnableScrollBar.c)
 *     xxxSBWndProc @ 0x1C0242580 (xxxSBWndProc.c)
 * Callees:
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C002E2D4 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     xxxEnableWindow @ 0x1C012FAB0 (xxxEnableWindow.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01D73E0 (safe_cast_fnid_to_PSBWND.c)
 */

__int64 __fastcall xxxEnableScrollBar(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  int v6; // r9d
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
  if ( v9 == v6 )
    return 0LL;
  if ( v6 == 3 )
    goto LABEL_6;
  if ( v6 )
  {
    if ( (v6 | v9) != 3 )
    {
LABEL_19:
      _InterlockedIncrement(&glSendMessage);
      return xxxSendTransformableMessageTimeout(BugCheckParameter2, 0, 0, 0LL, 1, 1);
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
  if ( v6 )
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

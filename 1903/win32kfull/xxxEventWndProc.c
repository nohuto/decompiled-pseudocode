/*
 * XREFs of xxxEventWndProc @ 0x1C00B4BC0
 * Callers:
 *     <none>
 * Callees:
 *     xxxDefWindowProc @ 0x1C00B3E60 (xxxDefWindowProc.c)
 *     HMValidateHandleNoRip @ 0x1C00B4C50 (HMValidateHandleNoRip.c)
 *     xxxChangeMonitorFlags @ 0x1C01329A8 (xxxChangeMonitorFlags.c)
 *     ClientEventCallback @ 0x1C0214EF4 (ClientEventCallback.c)
 */

__int64 __fastcall xxxEventWndProc(struct tagWND *a1, __int64 a2, HWND a3, unsigned __int64 a4)
{
  _QWORD *v5; // rcx
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int16 v11; // dx

  v5 = (_QWORD *)*((_QWORD *)a1 + 35);
  v8 = a2;
  if ( v5 )
  {
    LOBYTE(a2) = 9;
    v9 = HMValidateHandleNoRip(*v5, a2, a3);
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
    return xxxDefWindowProc(a1, v8, a3, a4);
  if ( v8 == 2 )
  {
    xxxChangeMonitorFlags(v9, 0LL);
    return 0LL;
  }
  if ( v8 != 60 )
    return xxxDefWindowProc(a1, v8, a3, a4);
  v11 = *(_WORD *)(a4 + 4);
  if ( (*(_DWORD *)(v9 + 40) & *(_DWORD *)a4) != 0 )
  {
    if ( v11 )
      goto LABEL_12;
  }
  else if ( !v11 )
  {
LABEL_12:
    ClientEventCallback(*(_QWORD *)(v9 + 56), a4);
  }
  return 0LL;
}

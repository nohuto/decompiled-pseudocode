/*
 * XREFs of ?GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00E0250
 * Callers:
 *     ImeSetTopmost @ 0x1C0036530 (ImeSetTopmost.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 */

struct tagWND *__fastcall GetLastTopMostWindowNoIME(struct tagWND *a1)
{
  __int64 DesktopWindow; // rax
  _QWORD *v3; // r9
  _QWORD *v4; // rdx
  _QWORD *v5; // r10
  int v6; // edi
  struct tagWND *v7; // r8
  __int64 v8; // r11

  DesktopWindow = GetDesktopWindow((__int64)a1);
  v3 = 0LL;
  if ( !DesktopWindow )
    return 0LL;
  v4 = *(_QWORD **)(DesktopWindow + 112);
  if ( !v4 )
    return 0LL;
  do
  {
    v5 = v4;
    if ( (*(_BYTE *)(v4[5] + 24LL) & 8) == 0 )
      break;
    v6 = 0;
    v7 = (struct tagWND *)v4;
    v8 = *(_QWORD *)(v4[17] + 8LL);
    if ( (*(_BYTE *)(v8 + 10) & 1) != 0 || *(_WORD *)v8 == *(_WORD *)(gpsi + 898LL) )
    {
      while ( a1 != v7 )
      {
        v7 = (struct tagWND *)*((_QWORD *)v7 + 15);
        if ( !v7 )
          goto LABEL_6;
      }
      v6 = 1;
    }
LABEL_6:
    v4 = (_QWORD *)v4[11];
    if ( v6 )
      v5 = v3;
    v3 = v5;
  }
  while ( v4 );
  return (struct tagWND *)v3;
}

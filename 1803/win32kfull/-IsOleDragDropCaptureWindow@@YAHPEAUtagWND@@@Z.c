/*
 * XREFs of ?IsOleDragDropCaptureWindow@@YAHPEAUtagWND@@@Z @ 0x1C0139F80
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     GetMessageWindow @ 0x1C00F1F74 (GetMessageWindow.c)
 *     strcmp_0 @ 0x1C013D357 (strcmp_0.c)
 */

__int64 __fastcall IsOleDragDropCaptureWindow(struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 MessageWindow; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  const char *v5; // rcx

  v1 = 0;
  if ( a1 )
  {
    MessageWindow = GetMessageWindow((__int64)a1);
    if ( *(_QWORD *)(v3 + 80) == MessageWindow )
    {
      v4 = *(_QWORD *)(v3 + 112);
      if ( v4 )
      {
        v5 = *(const char **)(v4 + 104);
        if ( v5 )
          LOBYTE(v1) = strcmp_0(v5, "CLIPBRDWNDCLASS") == 0;
      }
    }
  }
  return v1;
}

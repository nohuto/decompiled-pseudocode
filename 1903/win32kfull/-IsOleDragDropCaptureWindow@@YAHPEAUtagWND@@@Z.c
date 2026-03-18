/*
 * XREFs of ?IsOleDragDropCaptureWindow@@YAHPEAUtagWND@@@Z @ 0x1C0124C60
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     strcmp_0 @ 0x1C01664B1 (strcmp_0.c)
 */

__int64 __fastcall IsOleDragDropCaptureWindow(struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v5; // rax
  const char *v6; // rcx

  v1 = 0;
  if ( a1 )
  {
    v2 = *((_QWORD *)a1 + 3);
    v3 = 0LL;
    if ( v2 )
      v3 = *(_QWORD *)(v2 + 104);
    if ( *((_QWORD *)a1 + 13) == v3 )
    {
      v5 = *((_QWORD *)a1 + 17);
      if ( v5 )
      {
        v6 = *(const char **)(v5 + 104);
        if ( v6 )
          LOBYTE(v1) = strcmp_0(v6, "CLIPBRDWNDCLASS") == 0;
      }
    }
  }
  return v1;
}

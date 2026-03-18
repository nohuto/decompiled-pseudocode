/*
 * XREFs of LockCaptureWindow @ 0x1C001E3A4
 * Callers:
 *     zzzAttachToQueue @ 0x1C0012DFC (zzzAttachToQueue.c)
 *     xxxCapture @ 0x1C001E090 (xxxCapture.c)
 * Callees:
 *     ?SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z @ 0x1C001E46C (-SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z.c)
 *     UpdateRawMouseMode @ 0x1C001E6F8 (UpdateRawMouseMode.c)
 */

__int64 __fastcall LockCaptureWindow(struct tagQ *a1, struct tagWND *a2)
{
  __int64 v3; // xmm1_8
  bool v5; // zf
  __int64 v6; // xmm1_8
  __int64 v7; // rbx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v3 = *((_QWORD *)a1 + 2);
  v5 = *((_QWORD *)a1 + 14) == 0LL;
  v9 = *(_OWORD *)a1;
  v10 = v3;
  v6 = *((_QWORD *)&gpsiLock + 2);
  v9 = gpsiLock;
  v10 = v6;
  if ( !v5 )
    --*(_DWORD *)(gpsi + 6992LL);
  if ( a2 )
    ++*(_DWORD *)(gpsi + 6992LL);
  *(_QWORD *)&v9 = (char *)a1 + 112;
  *((_QWORD *)&v9 + 1) = a2;
  v7 = HMAssignmentLock(&v9);
  UpdateRawMouseMode(a1);
  InputTraceLogging::Mouse::SetCapture(a1, a2, 0);
  return v7;
}

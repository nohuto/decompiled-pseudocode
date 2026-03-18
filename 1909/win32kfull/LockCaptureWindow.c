/*
 * XREFs of LockCaptureWindow @ 0x1C001E234
 * Callers:
 *     xxxCapture @ 0x1C001DF20 (xxxCapture.c)
 *     zzzAttachToQueue @ 0x1C01362F0 (zzzAttachToQueue.c)
 * Callees:
 *     ?SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z @ 0x1C001E2FC (-SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z.c)
 *     UpdateRawMouseMode @ 0x1C001E588 (UpdateRawMouseMode.c)
 */

__int64 __fastcall LockCaptureWindow(struct tagQ *a1, struct tagWND *a2)
{
  __int64 v3; // xmm1_8
  bool v5; // zf
  __int64 v6; // xmm1_8
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  v3 = *((_QWORD *)a1 + 2);
  v5 = *((_QWORD *)a1 + 14) == 0LL;
  v11 = *(_OWORD *)a1;
  v12 = v3;
  v6 = *((_QWORD *)&gpsiLock + 2);
  v11 = gpsiLock;
  v12 = v6;
  if ( !v5 )
    --*(_DWORD *)(gpsi + 6992LL);
  if ( a2 )
    ++*(_DWORD *)(gpsi + 6992LL);
  *(_QWORD *)&v11 = (char *)a1 + 112;
  *((_QWORD *)&v11 + 1) = a2;
  v7 = HMAssignmentLock(&v11);
  UpdateRawMouseMode(a1, v8, v9);
  InputTraceLogging::Mouse::SetCapture(a1, a2, 0);
  return v7;
}

/*
 * XREFs of DllMain @ 0x180005830
 * Callers:
 *     ?dllmain_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x180039530 (-dllmain_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z.c)
 * Callees:
 *     sub_1800036E4 @ 0x1800036E4 (sub_1800036E4.c)
 *     memset @ 0x18003A7D8 (memset.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  ULONG64 *v4; // rdi
  const GUID **v5; // rsi
  const GUID *v6; // r8
  _QWORD *v7; // rdi
  TRACEHANDLE v8; // rcx
  struct _TRACE_GUID_REGISTRATION TraceGuidReg; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v11[144]; // [rsp+50h] [rbp-98h] BYREF

  if ( fdwReason == 1 )
  {
    qword_18004FEC8 = 1LL;
    qword_18004FEC0 = 0LL;
    v4 = (ULONG64 *)&qword_18004FEB0;
    qword_18004FEB0 = 0LL;
    qword_18004FED8 = (__int64)&unk_1800426F0;
    v5 = (const GUID **)&qword_18004FED8;
    off_18004F000 = &qword_18004FEB0;
    do
    {
      v6 = *v5;
      TraceGuidReg.Guid = v6;
      ++v5;
      TraceGuidReg.RegHandle = 0LL;
      v4[4] = (ULONG64)v6;
      RegisterTraceGuidsW((WMIDPREQUEST)RequestAddress, v4, v6, 1u, &TraceGuidReg, 0LL, 0LL, v4 + 1);
      v4 = (ULONG64 *)*v4;
    }
    while ( v4 );
    DisableThreadLibraryCalls(hinstDLL);
    if ( qword_18004FD00 && (char *)qword_18004FD00 != (char *)sub_180005590 )
    {
      memset(v11, 0, sizeof(v11));
      sub_1800036E4((__int64)v11);
    }
    qword_18004FD00 = (__int64 (__fastcall *)(_QWORD, _QWORD))sub_180005590;
  }
  else if ( !fdwReason && !lpvReserved )
  {
    v7 = off_18004F000;
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000 )
    {
      while ( v7 )
      {
        v8 = v7[1];
        if ( v8 )
        {
          UnregisterTraceGuids(v8);
          v7[1] = 0LL;
        }
        v7 = (_QWORD *)*v7;
      }
      off_18004F000 = &off_18004F000;
    }
  }
  return 1;
}

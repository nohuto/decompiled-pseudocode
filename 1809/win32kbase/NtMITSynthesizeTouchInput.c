/*
 * XREFs of NtMITSynthesizeTouchInput @ 0x1C00EDC10
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0030308 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0030404 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0031610 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A8AD4 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     SynthesizeMitTouchInput @ 0x1C0156248 (SynthesizeMitTouchInput.c)
 */

__int64 __fastcall NtMITSynthesizeTouchInput(char *Src)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  CInputThread *v4; // rcx
  int v5; // ebx
  __int64 v6; // rcx
  _BYTE v8[24]; // [rsp+20h] [rbp-BA8h] BYREF
  LPCWSTR *v9[2]; // [rsp+38h] [rbp-B90h] BYREF
  _BYTE Srca[1464]; // [rsp+48h] [rbp-B80h] BYREF
  _BYTE v11[1456]; // [rsp+600h] [rbp-5C8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v9, L"MITSynthesizeTouchInput", 0LL);
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v8, v2, v3);
  v5 = 0;
  if ( CInputThread::IsInputThread(v4) )
  {
    if ( Src + 1456 < Src || (unsigned __int64)(Src + 1456) > MmUserProbeAddress )
      Src = (char *)MmUserProbeAddress;
    memmove(Srca, Src, 0x5B0uLL);
    memmove(v11, Srca, 0x5B0uLL);
    if ( (unsigned __int8)SynthesizeMitTouchInput(v11) )
    {
      v5 = 1;
      goto LABEL_10;
    }
    v6 = 5023LL;
  }
  else
  {
    v6 = 5LL;
  }
  UserSetLastError(v6);
LABEL_10:
  UserSessionSwitchLeaveCrit();
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v9);
  return v5;
}

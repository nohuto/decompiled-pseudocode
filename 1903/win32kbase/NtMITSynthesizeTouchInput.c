/*
 * XREFs of NtMITSynthesizeTouchInput @ 0x1C0115A40
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0025E70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00327D0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0032B10 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0034500 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 *     SynthesizeMitTouchInput @ 0x1C018E91C (SynthesizeMitTouchInput.c)
 */

__int64 __fastcall NtMITSynthesizeTouchInput(char *Src)
{
  CInputThread *v2; // rcx
  __int64 v3; // rdx
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx
  LPCWSTR *v8[2]; // [rsp+30h] [rbp-B88h] BYREF
  _BYTE Srca[1456]; // [rsp+40h] [rbp-B78h] BYREF
  _BYTE v10[1456]; // [rsp+5F0h] [rbp-5C8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v8, L"MITSynthesizeTouchInput", 0LL);
  EnterCrit(0, 1);
  memset(v10, 0, sizeof(v10));
  v4 = 0;
  if ( CInputThread::IsInputThread(v2) )
  {
    if ( Src + 1456 < Src || (unsigned __int64)(Src + 1456) > MmUserProbeAddress )
      Src = (char *)MmUserProbeAddress;
    memmove(Srca, Src, 0x5B0uLL);
    memmove(v10, Srca, 0x5B0uLL);
    if ( (unsigned __int8)SynthesizeMitTouchInput(v10) )
    {
      v4 = 1;
      goto LABEL_10;
    }
    v5 = 5023LL;
  }
  else
  {
    v5 = 5LL;
  }
  UserSetLastError(v5, v3);
LABEL_10:
  UserSessionSwitchLeaveCrit(v6, v3);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v8);
  return v4;
}

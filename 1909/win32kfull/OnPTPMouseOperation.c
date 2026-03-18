/*
 * XREFs of OnPTPMouseOperation @ 0x1C0202E10
 * Callers:
 *     <none>
 * Callees:
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C001B4E0 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C001E4A0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C001E4CC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?ConvertPTPMouseEventToMouseInputData@@YAXPEBUtagPTPMOUSEEVENT@@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C02025E4 (-ConvertPTPMouseEventToMouseInputData@@YAXPEBUtagPTPMOUSEEVENT@@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ?UnqueuePTPMouseEvent@@YA_NPEAUtagPTPMOUSEEVENT@@0PEA_N@Z @ 0x1C02029A0 (-UnqueuePTPMouseEvent@@YA_NPEAUtagPTPMOUSEEVENT@@0PEA_N@Z.c)
 */

void OnPTPMouseOperation()
{
  int v0; // edi
  __int64 v1; // r10
  bool v2; // [rsp+30h] [rbp-49h] BYREF
  LPCWSTR *v3; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v4[5]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v5[5]; // [rsp+68h] [rbp-11h] BYREF
  _MOUSE_INPUT_DATA v6; // [rsp+90h] [rbp+17h] BYREF
  struct _MOUSE_INPUT_DATA v7; // [rsp+A8h] [rbp+2Fh] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v3, L"PTPMouseOperation", 0LL);
  memset(&v6, 0, sizeof(v6));
  memset(&v7, 0, sizeof(v7));
  memset(v4, 0, sizeof(v4));
  memset(v5, 0, sizeof(v5));
  while ( UnqueuePTPMouseEvent((struct tagPTPMOUSEEVENT *)v4, (struct tagPTPMOUSEEVENT *)v5, &v2) )
  {
    ConvertPTPMouseEventToMouseInputData((const struct tagPTPMOUSEEVENT *)v4, &v6);
    v0 = 8 * ((v4[2] & 1) == 0) + 1888;
    InputTraceLogging::Mouse::InjectInput();
    if ( v2 && v4[0] == v5[0] )
    {
      ConvertPTPMouseEventToMouseInputData((const struct tagPTPMOUSEEVENT *)v5, &v7);
      SynthesizeMouseInputWithNextPreview(v1, &v6, v4[4], v4[3], v0, &v7);
    }
    else
    {
      SynthesizeMouseInput(v4[0], &v6, v4[4], v4[3], v0);
    }
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v3);
}

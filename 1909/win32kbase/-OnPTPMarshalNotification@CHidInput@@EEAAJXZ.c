/*
 * XREFs of ?OnPTPMarshalNotification@CHidInput@@EEAAJXZ @ 0x1C017CE90
 * Callers:
 *     <none>
 * Callees:
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C0110990 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     SynthesizeMouseInputForPTP @ 0x1C01827D0 (SynthesizeMouseInputForPTP.c)
 */

__int64 __fastcall CHidInput::OnPTPMarshalNotification(CHidInput *this)
{
  InputTraceLogging::Mouse::InjectInput();
  SynthesizeMouseInputForPTP(
    *((_QWORD *)this + 154),
    (_DWORD)this + 1240,
    *((_QWORD *)this + 158),
    *((_QWORD *)this + 159),
    *((_QWORD *)this + 159),
    *((_DWORD *)this + 320));
  return 0LL;
}

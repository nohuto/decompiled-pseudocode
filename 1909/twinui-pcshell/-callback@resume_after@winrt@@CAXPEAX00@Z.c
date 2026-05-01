/*
 * XREFs of ?callback@resume_after@winrt@@CAXPEAX00@Z @ 0x1800C49D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall winrt::resume_after::callback(
        PTP_CALLBACK_INSTANCE Instance,
        void (__fastcall **Context)(_QWORD, _QWORD, PTP_TIMER),
        PTP_TIMER Timer)
{
  (*Context)(Context, Context, Timer);
}

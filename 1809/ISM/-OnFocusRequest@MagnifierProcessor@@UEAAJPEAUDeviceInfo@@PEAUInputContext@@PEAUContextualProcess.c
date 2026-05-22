/*
 * XREFs of ?OnFocusRequest@MagnifierProcessor@@UEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800CEC90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MagnifierProcessor::OnFocusRequest(
        MagnifierProcessor *this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)a4 + 1);
  if ( v4 )
  {
    *((_QWORD *)a4 + 1) = 0LL;
    (*(void (__fastcall **)(__int64, struct DeviceInfo *, struct InputContext *))(*(_QWORD *)v4 + 16LL))(v4, a2, a3);
  }
  *(_DWORD *)a4 = 0;
  return 0LL;
}

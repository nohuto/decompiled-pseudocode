/*
 * XREFs of ForceResetMouseButtonsDownState @ 0x1C008FCB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 ForceResetMouseButtonsDownState()
{
  __int64 result; // rax
  __int64 v1; // rbx

  result = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C01C3018 + 8LL))(qword_1C01C3018);
  v1 = result;
  if ( result )
  {
    result = WPP_RECORDER_SF_(
               *(_QWORD *)(result + 8),
               4u,
               0xAu,
               0x10u,
               (__int64)&WPP_c4e458f8521336340531e679a09eecc3_Traceguids);
    *(_DWORD *)(v1 + 2544) = 0;
  }
  return result;
}

/*
 * XREFs of ForceResetMouseButtonsDownState @ 0x1C012DF10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 ForceResetMouseButtonsDownState()
{
  __int64 result; // rax
  __int64 v1; // rbx

  result = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C019A5A8 + 8LL))(qword_1C019A5A8);
  v1 = result;
  if ( result )
  {
    result = WPP_RECORDER_SF_(
               *(_QWORD *)(result + 8),
               4u,
               0xAu,
               0x10u,
               (__int64)&WPP_dfaecf715a78372e81b0b16700b1f5cf_Traceguids);
    *(_DWORD *)(v1 + 2544) = 0;
  }
  return result;
}

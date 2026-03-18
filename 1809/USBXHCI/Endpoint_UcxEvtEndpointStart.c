/*
 * XREFs of Endpoint_UcxEvtEndpointStart @ 0x1C0019520
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointStart(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  unsigned int i; // esi

  result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a2,
             off_1C004F180);
  v3 = result;
  if ( !*(_BYTE *)(result + 37) )
    return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 1232))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             *(_QWORD *)(*(_QWORD *)(result + 88) + 72LL));
  v4 = *(_QWORD *)(result + 136);
  for ( i = 1; i <= *(_DWORD *)(v4 + 8); ++i )
    result = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 1232))(
               WPP_MAIN_CB.Dpc.ProcessorHistory,
               *(_QWORD *)(*(_QWORD *)(104LL * (i - 1) + *(_QWORD *)(v3 + 136) + 48) + 72LL));
  return result;
}

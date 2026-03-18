/*
 * XREFs of SecureDmaEnabler_WdfEvtCommonBufferPageCleanupCallback @ 0x1C0062FF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     SecureDmaEnabler_Unmap @ 0x1C00413C8 (SecureDmaEnabler_Unmap.c)
 */

_QWORD *__fastcall SecureDmaEnabler_WdfEvtCommonBufferPageCleanupCallback(__int64 a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                       WPP_MAIN_CB.Dpc.ProcessorHistory,
                       a1,
                       off_1C004F428);
  if ( *((_DWORD *)result + 24) )
    return SecureDmaEnabler_Unmap(result[3], result + 11);
  return result;
}

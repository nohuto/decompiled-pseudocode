/*
 * XREFs of ??$As@UIActivationListenerInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000DD28
 * Callers:
 *     ?SetActiveWindowId@ActivationListenerWindowIdAdapter@@SAX_K@Z @ 0x18000C020 (-SetActiveWindowId@ActivationListenerWindowIdAdapter@@SAX_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::As<IActivationListenerInputObjectProxy>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rsi

  v2 = *a1;
  v4 = *a2;
  v5 = **v2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return v5(v2, &GUID_a1cdc933_ea3a_72de_bea8_f0397564bae3, a2);
}

/*
 * XREFs of ??$As@UIDWMSupportedInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDWMSupportedInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C1978
 * Callers:
 *     ?GetSupportedInputTargetForProcessId@DWMInputRouter@@IEAAPEAUIDWMSupportedInputTarget@@K@Z @ 0x1800C37F4 (-GetSupportedInputTargetForProcessId@DWMInputRouter@@IEAAPEAUIDWMSupportedInputTarget@@K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IInputTarget>::As<IDWMSupportedInputTarget>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v2 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(a2);
  return v4(v2, &GUID_93d6f9bd_cc36_424f_ac6f_03108f7cf72f, a2);
}

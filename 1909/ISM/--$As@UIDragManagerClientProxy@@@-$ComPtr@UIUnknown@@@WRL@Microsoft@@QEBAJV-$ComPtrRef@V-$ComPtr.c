/*
 * XREFs of ??$As@UIDragManagerClientProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDragManagerClientProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180066724
 * Callers:
 *     ??$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@XZ @ 0x1800691DC (--$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA-AV-.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::As<IDragManagerClientProxy>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v2 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(a2);
  return v4(v2, &GUID_66875bc6_4ddf_2885_daf4_a4f8f4476e3d, a2);
}

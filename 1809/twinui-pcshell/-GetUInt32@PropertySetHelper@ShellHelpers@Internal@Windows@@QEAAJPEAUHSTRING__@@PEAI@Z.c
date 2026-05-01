/*
 * XREFs of ?GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z @ 0x1800DD45C
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180023A10 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        __int64 a2,
        unsigned int *a3)
{
  return Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this,
           a2,
           (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a3,
           a3);
}

/*
 * XREFs of ?Release@UniqueExtendedExecutionSession@@UEAAKXZ @ 0x18007CFF0
 * Callers:
 *     ?Release@UniqueExtendedExecutionSession@@W7EAAKXZ @ 0x180081600 (-Release@UniqueExtendedExecutionSession@@W7EAAKXZ.c)
 *     ?Release@UniqueExtendedExecutionSession@@WCI@EAAKXZ @ 0x180081630 (-Release@UniqueExtendedExecutionSession@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall UniqueExtendedExecutionSession::Release(UniqueExtendedExecutionSession *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase>::Release(this);
}

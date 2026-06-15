/*
 * XREFs of ??1?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180046E74
 * Callers:
 *     _CAudioStream::CAudioStream_::_1_::dtor$10 @ 0x18006C1B0 (_CAudioStream--CAudioStream_--_1_--dtor$10.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$11 @ 0x18006C1D0 (_CAudioStream--CAudioStream_--_1_--dtor$11.c)
 *     _CAudioSessionManagerProvider::RuntimeClassInitialize_::_1_::dtor$1 @ 0x18006FF16 (_CAudioSessionManagerProvider--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _CAudioSessionManagerProvider::RuntimeClassInitialize_::_1_::dtor$2 @ 0x18006FF28 (_CAudioSessionManagerProvider--RuntimeClassInitialize_--_1_--dtor$2.c)
 *     _CAudioSessionManagerProvider::RuntimeClassInitialize_::_1_::dtor$3 @ 0x18006FF3A (_CAudioSessionManagerProvider--RuntimeClassInitialize_--_1_--dtor$3.c)
 *     _CAudioSessionManagerProvider::RuntimeClassInitialize_::_1_::dtor$4 @ 0x18006FF4C (_CAudioSessionManagerProvider--RuntimeClassInitialize_--_1_--dtor$4.c)
 *     _CAudioSessionManagerProvider::RuntimeClassInitialize_::_1_::dtor$5 @ 0x18006FF5E (_CAudioSessionManagerProvider--RuntimeClassInitialize_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}

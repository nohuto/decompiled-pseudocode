/*
 * XREFs of ?TrackAPOFailureUnhandled@CSystemAudioDeviceSharedBase@@QEAAXM@Z @ 0x14003293C
 * Callers:
 *     ?AudioDGUnhandledExceptionFilter@@YAJPEAU_EXCEPTION_POINTERS@@@Z @ 0x14002F680 (-AudioDGUnhandledExceptionFilter@@YAJPEAU_EXCEPTION_POINTERS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSystemAudioDeviceSharedBase::TrackAPOFailureUnhandled(CSystemAudioDeviceSharedBase *this, float a2)
{
  _QWORD **v2; // rbx

  v2 = (_QWORD **)*((_QWORD *)this + 41);
  if ( v2 )
    ((void (__fastcall *)(_QWORD **))(*v2)[1])(v2);
  (*(void (__fastcall **)(_QWORD *))(*v2[18] + 128LL))(v2[18]);
  ((void (__fastcall *)(_QWORD **))(*v2)[2])(v2);
}
